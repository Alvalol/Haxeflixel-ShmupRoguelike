#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
namespace flixel{
namespace util{
namespace _FlxColor{

Void FlxColor_Impl__obj::__construct()
{
	return null();
}

//FlxColor_Impl__obj::~FlxColor_Impl__obj() { }

Dynamic FlxColor_Impl__obj::__CreateEmpty() { return  new FlxColor_Impl__obj; }
hx::ObjectPtr< FlxColor_Impl__obj > FlxColor_Impl__obj::__new()
{  hx::ObjectPtr< FlxColor_Impl__obj > _result_ = new FlxColor_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxColor_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxColor_Impl__obj > _result_ = new FlxColor_Impl__obj();
	_result_->__construct();
	return _result_;}

int FlxColor_Impl__obj::TRANSPARENT;

int FlxColor_Impl__obj::WHITE;

int FlxColor_Impl__obj::GRAY;

int FlxColor_Impl__obj::BLACK;

int FlxColor_Impl__obj::GREEN;

int FlxColor_Impl__obj::LIME;

int FlxColor_Impl__obj::YELLOW;

int FlxColor_Impl__obj::ORANGE;

int FlxColor_Impl__obj::RED;

int FlxColor_Impl__obj::PURPLE;

int FlxColor_Impl__obj::BLUE;

int FlxColor_Impl__obj::BROWN;

int FlxColor_Impl__obj::PINK;

int FlxColor_Impl__obj::MAGENTA;

int FlxColor_Impl__obj::CYAN;

::haxe::ds::StringMap FlxColor_Impl__obj::colorLookup;

::EReg FlxColor_Impl__obj::COLOR_REGEX;

int FlxColor_Impl__obj::fromInt( int Value){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","fromInt",0xdc40c740,"flixel.util._FlxColor.FlxColor_Impl_.fromInt","flixel/util/FlxColor.hx",85,0x9335c333)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(86)
	int tmp = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(86)
	int tmp1 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(86)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,fromInt,return )

int FlxColor_Impl__obj::fromRGB( int Red,int Green,int Blue,hx::Null< int >  __o_Alpha){
int Alpha = __o_Alpha.Default(255);
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","fromRGB",0xdc47795e,"flixel.util._FlxColor.FlxColor_Impl_.fromRGB","flixel/util/FlxColor.hx",99,0x9335c333)
	HX_STACK_ARG(Red,"Red")
	HX_STACK_ARG(Green,"Green")
	HX_STACK_ARG(Blue,"Blue")
	HX_STACK_ARG(Alpha,"Alpha")
{
		HX_STACK_LINE(100)
		int tmp = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(100)
		int color = tmp;		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(101)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(101)
		{
			HX_STACK_LINE(101)
			{
				HX_STACK_LINE(101)
				hx::AndEq(color,(int)-16711681);
				HX_STACK_LINE(101)
				bool tmp2 = (Red > (int)255);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(101)
				int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(101)
				if ((tmp2)){
					HX_STACK_LINE(101)
					tmp3 = (int)255;
				}
				else{
					HX_STACK_LINE(101)
					bool tmp4 = (Red < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(101)
					if ((tmp4)){
						HX_STACK_LINE(101)
						tmp3 = (int)0;
					}
					else{
						HX_STACK_LINE(101)
						tmp3 = Red;
					}
				}
				HX_STACK_LINE(101)
				int tmp4 = (int(tmp3) << int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(101)
				hx::OrEq(color,tmp4);
				HX_STACK_LINE(101)
				Red;
			}
			HX_STACK_LINE(101)
			{
				HX_STACK_LINE(101)
				hx::AndEq(color,(int)-65281);
				HX_STACK_LINE(101)
				bool tmp2 = (Green > (int)255);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(101)
				int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(101)
				if ((tmp2)){
					HX_STACK_LINE(101)
					tmp3 = (int)255;
				}
				else{
					HX_STACK_LINE(101)
					bool tmp4 = (Green < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(101)
					if ((tmp4)){
						HX_STACK_LINE(101)
						tmp3 = (int)0;
					}
					else{
						HX_STACK_LINE(101)
						tmp3 = Green;
					}
				}
				HX_STACK_LINE(101)
				int tmp4 = (int(tmp3) << int((int)8));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(101)
				hx::OrEq(color,tmp4);
				HX_STACK_LINE(101)
				Green;
			}
			HX_STACK_LINE(101)
			{
				HX_STACK_LINE(101)
				hx::AndEq(color,(int)-256);
				HX_STACK_LINE(101)
				bool tmp2 = (Blue > (int)255);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(101)
				int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(101)
				if ((tmp2)){
					HX_STACK_LINE(101)
					tmp3 = (int)255;
				}
				else{
					HX_STACK_LINE(101)
					bool tmp4 = (Blue < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(101)
					if ((tmp4)){
						HX_STACK_LINE(101)
						tmp3 = (int)0;
					}
					else{
						HX_STACK_LINE(101)
						tmp3 = Blue;
					}
				}
				HX_STACK_LINE(101)
				hx::OrEq(color,tmp3);
				HX_STACK_LINE(101)
				Blue;
			}
			HX_STACK_LINE(101)
			{
				HX_STACK_LINE(101)
				hx::AndEq(color,(int)16777215);
				HX_STACK_LINE(101)
				bool tmp2 = (Alpha > (int)255);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(101)
				int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(101)
				if ((tmp2)){
					HX_STACK_LINE(101)
					tmp3 = (int)255;
				}
				else{
					HX_STACK_LINE(101)
					bool tmp4 = (Alpha < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(101)
					if ((tmp4)){
						HX_STACK_LINE(101)
						tmp3 = (int)0;
					}
					else{
						HX_STACK_LINE(101)
						tmp3 = Alpha;
					}
				}
				HX_STACK_LINE(101)
				int tmp4 = (int(tmp3) << int((int)24));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(101)
				hx::OrEq(color,tmp4);
				HX_STACK_LINE(101)
				Alpha;
			}
			HX_STACK_LINE(101)
			tmp1 = color;
		}
		HX_STACK_LINE(101)
		int tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(101)
		return tmp2;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxColor_Impl__obj,fromRGB,return )

int FlxColor_Impl__obj::fromRGBFloat( Float Red,Float Green,Float Blue,hx::Null< Float >  __o_Alpha){
Float Alpha = __o_Alpha.Default(1);
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","fromRGBFloat",0x9c52075e,"flixel.util._FlxColor.FlxColor_Impl_.fromRGBFloat","flixel/util/FlxColor.hx",114,0x9335c333)
	HX_STACK_ARG(Red,"Red")
	HX_STACK_ARG(Green,"Green")
	HX_STACK_ARG(Blue,"Blue")
	HX_STACK_ARG(Alpha,"Alpha")
{
		HX_STACK_LINE(115)
		int tmp = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(115)
		int color = tmp;		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(116)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(116)
		{
			HX_STACK_LINE(116)
			{
				HX_STACK_LINE(116)
				{
					HX_STACK_LINE(116)
					Float tmp2 = (Red * (int)255);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(116)
					int tmp3 = ::Math_obj::round(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(116)
					int Value = tmp3;		HX_STACK_VAR(Value,"Value");
					HX_STACK_LINE(116)
					hx::AndEq(color,(int)-16711681);
					HX_STACK_LINE(116)
					bool tmp4 = (Value > (int)255);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(116)
					int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(116)
					if ((tmp4)){
						HX_STACK_LINE(116)
						tmp5 = (int)255;
					}
					else{
						HX_STACK_LINE(116)
						bool tmp6 = (Value < (int)0);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(116)
						if ((tmp6)){
							HX_STACK_LINE(116)
							tmp5 = (int)0;
						}
						else{
							HX_STACK_LINE(116)
							tmp5 = Value;
						}
					}
					HX_STACK_LINE(116)
					int tmp6 = (int(tmp5) << int((int)16));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(116)
					hx::OrEq(color,tmp6);
					HX_STACK_LINE(116)
					Value;
				}
				HX_STACK_LINE(116)
				Red;
			}
			HX_STACK_LINE(116)
			{
				HX_STACK_LINE(116)
				{
					HX_STACK_LINE(116)
					Float tmp2 = (Green * (int)255);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(116)
					int tmp3 = ::Math_obj::round(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(116)
					int Value = tmp3;		HX_STACK_VAR(Value,"Value");
					HX_STACK_LINE(116)
					hx::AndEq(color,(int)-65281);
					HX_STACK_LINE(116)
					bool tmp4 = (Value > (int)255);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(116)
					int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(116)
					if ((tmp4)){
						HX_STACK_LINE(116)
						tmp5 = (int)255;
					}
					else{
						HX_STACK_LINE(116)
						bool tmp6 = (Value < (int)0);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(116)
						if ((tmp6)){
							HX_STACK_LINE(116)
							tmp5 = (int)0;
						}
						else{
							HX_STACK_LINE(116)
							tmp5 = Value;
						}
					}
					HX_STACK_LINE(116)
					int tmp6 = (int(tmp5) << int((int)8));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(116)
					hx::OrEq(color,tmp6);
					HX_STACK_LINE(116)
					Value;
				}
				HX_STACK_LINE(116)
				Green;
			}
			HX_STACK_LINE(116)
			{
				HX_STACK_LINE(116)
				{
					HX_STACK_LINE(116)
					Float tmp2 = (Blue * (int)255);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(116)
					int tmp3 = ::Math_obj::round(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(116)
					int Value = tmp3;		HX_STACK_VAR(Value,"Value");
					HX_STACK_LINE(116)
					hx::AndEq(color,(int)-256);
					HX_STACK_LINE(116)
					bool tmp4 = (Value > (int)255);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(116)
					int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(116)
					if ((tmp4)){
						HX_STACK_LINE(116)
						tmp5 = (int)255;
					}
					else{
						HX_STACK_LINE(116)
						bool tmp6 = (Value < (int)0);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(116)
						if ((tmp6)){
							HX_STACK_LINE(116)
							tmp5 = (int)0;
						}
						else{
							HX_STACK_LINE(116)
							tmp5 = Value;
						}
					}
					HX_STACK_LINE(116)
					hx::OrEq(color,tmp5);
					HX_STACK_LINE(116)
					Value;
				}
				HX_STACK_LINE(116)
				Blue;
			}
			HX_STACK_LINE(116)
			{
				HX_STACK_LINE(116)
				{
					HX_STACK_LINE(116)
					Float tmp2 = (Alpha * (int)255);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(116)
					int tmp3 = ::Math_obj::round(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(116)
					int Value = tmp3;		HX_STACK_VAR(Value,"Value");
					HX_STACK_LINE(116)
					hx::AndEq(color,(int)16777215);
					HX_STACK_LINE(116)
					bool tmp4 = (Value > (int)255);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(116)
					int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(116)
					if ((tmp4)){
						HX_STACK_LINE(116)
						tmp5 = (int)255;
					}
					else{
						HX_STACK_LINE(116)
						bool tmp6 = (Value < (int)0);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(116)
						if ((tmp6)){
							HX_STACK_LINE(116)
							tmp5 = (int)0;
						}
						else{
							HX_STACK_LINE(116)
							tmp5 = Value;
						}
					}
					HX_STACK_LINE(116)
					int tmp6 = (int(tmp5) << int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(116)
					hx::OrEq(color,tmp6);
					HX_STACK_LINE(116)
					Value;
				}
				HX_STACK_LINE(116)
				Alpha;
			}
			HX_STACK_LINE(116)
			tmp1 = color;
		}
		HX_STACK_LINE(116)
		int tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(116)
		return tmp2;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxColor_Impl__obj,fromRGBFloat,return )

int FlxColor_Impl__obj::fromCMYK( Float Cyan,Float Magenta,Float Yellow,Float Black,hx::Null< Float >  __o_Alpha){
Float Alpha = __o_Alpha.Default(1);
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","fromCMYK",0xd85d276b,"flixel.util._FlxColor.FlxColor_Impl_.fromCMYK","flixel/util/FlxColor.hx",130,0x9335c333)
	HX_STACK_ARG(Cyan,"Cyan")
	HX_STACK_ARG(Magenta,"Magenta")
	HX_STACK_ARG(Yellow,"Yellow")
	HX_STACK_ARG(Black,"Black")
	HX_STACK_ARG(Alpha,"Alpha")
{
		HX_STACK_LINE(131)
		int tmp = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(131)
		int color = tmp;		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(132)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(132)
		{
			HX_STACK_LINE(132)
			{
				HX_STACK_LINE(132)
				Float tmp2 = ((int)1 - Cyan);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(132)
				Float tmp3 = ((int)1 - Black);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(132)
				Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(132)
				Float Value = tmp4;		HX_STACK_VAR(Value,"Value");
				HX_STACK_LINE(132)
				{
					HX_STACK_LINE(132)
					Float tmp5 = (Value * (int)255);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(132)
					int tmp6 = ::Math_obj::round(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(132)
					int Value1 = tmp6;		HX_STACK_VAR(Value1,"Value1");
					HX_STACK_LINE(132)
					hx::AndEq(color,(int)-16711681);
					HX_STACK_LINE(132)
					bool tmp7 = (Value1 > (int)255);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(132)
					int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(132)
					if ((tmp7)){
						HX_STACK_LINE(132)
						tmp8 = (int)255;
					}
					else{
						HX_STACK_LINE(132)
						bool tmp9 = (Value1 < (int)0);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(132)
						if ((tmp9)){
							HX_STACK_LINE(132)
							tmp8 = (int)0;
						}
						else{
							HX_STACK_LINE(132)
							tmp8 = Value1;
						}
					}
					HX_STACK_LINE(132)
					int tmp9 = (int(tmp8) << int((int)16));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(132)
					hx::OrEq(color,tmp9);
					HX_STACK_LINE(132)
					Value1;
				}
				HX_STACK_LINE(132)
				Value;
			}
			HX_STACK_LINE(132)
			{
				HX_STACK_LINE(132)
				Float tmp2 = ((int)1 - Magenta);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(132)
				Float tmp3 = ((int)1 - Black);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(132)
				Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(132)
				Float Value = tmp4;		HX_STACK_VAR(Value,"Value");
				HX_STACK_LINE(132)
				{
					HX_STACK_LINE(132)
					Float tmp5 = (Value * (int)255);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(132)
					int tmp6 = ::Math_obj::round(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(132)
					int Value1 = tmp6;		HX_STACK_VAR(Value1,"Value1");
					HX_STACK_LINE(132)
					hx::AndEq(color,(int)-65281);
					HX_STACK_LINE(132)
					bool tmp7 = (Value1 > (int)255);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(132)
					int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(132)
					if ((tmp7)){
						HX_STACK_LINE(132)
						tmp8 = (int)255;
					}
					else{
						HX_STACK_LINE(132)
						bool tmp9 = (Value1 < (int)0);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(132)
						if ((tmp9)){
							HX_STACK_LINE(132)
							tmp8 = (int)0;
						}
						else{
							HX_STACK_LINE(132)
							tmp8 = Value1;
						}
					}
					HX_STACK_LINE(132)
					int tmp9 = (int(tmp8) << int((int)8));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(132)
					hx::OrEq(color,tmp9);
					HX_STACK_LINE(132)
					Value1;
				}
				HX_STACK_LINE(132)
				Value;
			}
			HX_STACK_LINE(132)
			{
				HX_STACK_LINE(132)
				Float tmp2 = ((int)1 - Yellow);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(132)
				Float tmp3 = ((int)1 - Black);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(132)
				Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(132)
				Float Value = tmp4;		HX_STACK_VAR(Value,"Value");
				HX_STACK_LINE(132)
				{
					HX_STACK_LINE(132)
					Float tmp5 = (Value * (int)255);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(132)
					int tmp6 = ::Math_obj::round(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(132)
					int Value1 = tmp6;		HX_STACK_VAR(Value1,"Value1");
					HX_STACK_LINE(132)
					hx::AndEq(color,(int)-256);
					HX_STACK_LINE(132)
					bool tmp7 = (Value1 > (int)255);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(132)
					int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(132)
					if ((tmp7)){
						HX_STACK_LINE(132)
						tmp8 = (int)255;
					}
					else{
						HX_STACK_LINE(132)
						bool tmp9 = (Value1 < (int)0);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(132)
						if ((tmp9)){
							HX_STACK_LINE(132)
							tmp8 = (int)0;
						}
						else{
							HX_STACK_LINE(132)
							tmp8 = Value1;
						}
					}
					HX_STACK_LINE(132)
					hx::OrEq(color,tmp8);
					HX_STACK_LINE(132)
					Value1;
				}
				HX_STACK_LINE(132)
				Value;
			}
			HX_STACK_LINE(132)
			{
				HX_STACK_LINE(132)
				{
					HX_STACK_LINE(132)
					Float tmp2 = (Alpha * (int)255);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(132)
					int tmp3 = ::Math_obj::round(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(132)
					int Value = tmp3;		HX_STACK_VAR(Value,"Value");
					HX_STACK_LINE(132)
					hx::AndEq(color,(int)16777215);
					HX_STACK_LINE(132)
					bool tmp4 = (Value > (int)255);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(132)
					int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(132)
					if ((tmp4)){
						HX_STACK_LINE(132)
						tmp5 = (int)255;
					}
					else{
						HX_STACK_LINE(132)
						bool tmp6 = (Value < (int)0);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(132)
						if ((tmp6)){
							HX_STACK_LINE(132)
							tmp5 = (int)0;
						}
						else{
							HX_STACK_LINE(132)
							tmp5 = Value;
						}
					}
					HX_STACK_LINE(132)
					int tmp6 = (int(tmp5) << int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(132)
					hx::OrEq(color,tmp6);
					HX_STACK_LINE(132)
					Value;
				}
				HX_STACK_LINE(132)
				Alpha;
			}
			HX_STACK_LINE(132)
			tmp1 = color;
		}
		HX_STACK_LINE(132)
		int tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(132)
		return tmp2;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxColor_Impl__obj,fromCMYK,return )

int FlxColor_Impl__obj::fromHSB( Float Hue,Float Saturation,Float Brightness,hx::Null< Float >  __o_Alpha){
Float Alpha = __o_Alpha.Default(1);
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","fromHSB",0xdc3fed48,"flixel.util._FlxColor.FlxColor_Impl_.fromHSB","flixel/util/FlxColor.hx",145,0x9335c333)
	HX_STACK_ARG(Hue,"Hue")
	HX_STACK_ARG(Saturation,"Saturation")
	HX_STACK_ARG(Brightness,"Brightness")
	HX_STACK_ARG(Alpha,"Alpha")
{
		HX_STACK_LINE(146)
		int tmp = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(146)
		int color = tmp;		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(147)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(147)
		{
			HX_STACK_LINE(147)
			Float tmp2 = (Brightness * Saturation);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(147)
			Float chroma = tmp2;		HX_STACK_VAR(chroma,"chroma");
			HX_STACK_LINE(147)
			Float tmp3 = (Brightness - chroma);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(147)
			Float match = tmp3;		HX_STACK_VAR(match,"match");
			HX_STACK_LINE(147)
			{
				HX_STACK_LINE(147)
				Float Hue1 = Hue;		HX_STACK_VAR(Hue1,"Hue1");
				HX_STACK_LINE(147)
				Float Chroma = chroma;		HX_STACK_VAR(Chroma,"Chroma");
				HX_STACK_LINE(147)
				hx::ModEq(Hue1,(int)360);
				HX_STACK_LINE(147)
				Float tmp4 = (Float(Hue1) / Float((int)60));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(147)
				Float hueD = tmp4;		HX_STACK_VAR(hueD,"hueD");
				HX_STACK_LINE(147)
				Float tmp5 = Chroma;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(147)
				Float tmp6 = hx::Mod(hueD,(int)2);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(147)
				Float tmp7 = (tmp6 - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(147)
				Float tmp8 = ::Math_obj::abs(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(147)
				Float tmp9 = ((int)1 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(147)
				Float tmp10 = (tmp5 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(147)
				Float tmp11 = match;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(147)
				Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(147)
				Float mid = tmp12;		HX_STACK_VAR(mid,"mid");
				HX_STACK_LINE(147)
				hx::AddEq(Chroma,match);
				HX_STACK_LINE(147)
				{
					HX_STACK_LINE(147)
					Float tmp13 = hueD;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(147)
					int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(147)
					int _g = tmp14;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(147)
					int tmp15 = _g;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(147)
					switch( (int)(tmp15)){
						case (int)0: {
							HX_STACK_LINE(147)
							int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(147)
							{
								HX_STACK_LINE(147)
								{
									HX_STACK_LINE(147)
									{
										HX_STACK_LINE(147)
										Float tmp17 = (Chroma * (int)255);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(147)
										int tmp18 = ::Math_obj::round(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(147)
										int Value = tmp18;		HX_STACK_VAR(Value,"Value");
										HX_STACK_LINE(147)
										hx::AndEq(color,(int)-16711681);
										HX_STACK_LINE(147)
										bool tmp19 = (Value > (int)255);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(147)
										int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(147)
										if ((tmp19)){
											HX_STACK_LINE(147)
											tmp20 = (int)255;
										}
										else{
											HX_STACK_LINE(147)
											bool tmp21 = (Value < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(147)
											if ((tmp21)){
												HX_STACK_LINE(147)
												tmp20 = (int)0;
											}
											else{
												HX_STACK_LINE(147)
												tmp20 = Value;
											}
										}
										HX_STACK_LINE(147)
										int tmp21 = (int(tmp20) << int((int)16));		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(147)
										hx::OrEq(color,tmp21);
										HX_STACK_LINE(147)
										Value;
									}
									HX_STACK_LINE(147)
									Chroma;
								}
								HX_STACK_LINE(147)
								{
									HX_STACK_LINE(147)
									{
										HX_STACK_LINE(147)
										Float tmp17 = (mid * (int)255);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(147)
										int tmp18 = ::Math_obj::round(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(147)
										int Value = tmp18;		HX_STACK_VAR(Value,"Value");
										HX_STACK_LINE(147)
										hx::AndEq(color,(int)-65281);
										HX_STACK_LINE(147)
										bool tmp19 = (Value > (int)255);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(147)
										int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(147)
										if ((tmp19)){
											HX_STACK_LINE(147)
											tmp20 = (int)255;
										}
										else{
											HX_STACK_LINE(147)
											bool tmp21 = (Value < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(147)
											if ((tmp21)){
												HX_STACK_LINE(147)
												tmp20 = (int)0;
											}
											else{
												HX_STACK_LINE(147)
												tmp20 = Value;
											}
										}
										HX_STACK_LINE(147)
										int tmp21 = (int(tmp20) << int((int)8));		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(147)
										hx::OrEq(color,tmp21);
										HX_STACK_LINE(147)
										Value;
									}
									HX_STACK_LINE(147)
									mid;
								}
								HX_STACK_LINE(147)
								{
									HX_STACK_LINE(147)
									{
										HX_STACK_LINE(147)
										Float tmp17 = (match * (int)255);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(147)
										int tmp18 = ::Math_obj::round(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(147)
										int Value = tmp18;		HX_STACK_VAR(Value,"Value");
										HX_STACK_LINE(147)
										hx::AndEq(color,(int)-256);
										HX_STACK_LINE(147)
										bool tmp19 = (Value > (int)255);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(147)
										int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(147)
										if ((tmp19)){
											HX_STACK_LINE(147)
											tmp20 = (int)255;
										}
										else{
											HX_STACK_LINE(147)
											bool tmp21 = (Value < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(147)
											if ((tmp21)){
												HX_STACK_LINE(147)
												tmp20 = (int)0;
											}
											else{
												HX_STACK_LINE(147)
												tmp20 = Value;
											}
										}
										HX_STACK_LINE(147)
										hx::OrEq(color,tmp20);
										HX_STACK_LINE(147)
										Value;
									}
									HX_STACK_LINE(147)
									match;
								}
								HX_STACK_LINE(147)
								{
									HX_STACK_LINE(147)
									{
										HX_STACK_LINE(147)
										Float tmp17 = (Alpha * (int)255);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(147)
										int tmp18 = ::Math_obj::round(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(147)
										int Value = tmp18;		HX_STACK_VAR(Value,"Value");
										HX_STACK_LINE(147)
										hx::AndEq(color,(int)16777215);
										HX_STACK_LINE(147)
										bool tmp19 = (Value > (int)255);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(147)
										int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(147)
										if ((tmp19)){
											HX_STACK_LINE(147)
											tmp20 = (int)255;
										}
										else{
											HX_STACK_LINE(147)
											bool tmp21 = (Value < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(147)
											if ((tmp21)){
												HX_STACK_LINE(147)
												tmp20 = (int)0;
											}
											else{
												HX_STACK_LINE(147)
												tmp20 = Value;
											}
										}
										HX_STACK_LINE(147)
										int tmp21 = (int(tmp20) << int((int)24));		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(147)
										hx::OrEq(color,tmp21);
										HX_STACK_LINE(147)
										Value;
									}
									HX_STACK_LINE(147)
									Alpha;
								}
								HX_STACK_LINE(147)
								tmp16 = color;
							}
							HX_STACK_LINE(147)
							tmp16;
						}
						;break;
						case (int)1: {
							HX_STACK_LINE(147)
							int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(147)
							{
								HX_STACK_LINE(147)
								{
									HX_STACK_LINE(147)
									{
										HX_STACK_LINE(147)
										Float tmp17 = (mid * (int)255);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(147)
										int tmp18 = ::Math_obj::round(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(147)
										int Value = tmp18;		HX_STACK_VAR(Value,"Value");
										HX_STACK_LINE(147)
										hx::AndEq(color,(int)-16711681);
										HX_STACK_LINE(147)
										bool tmp19 = (Value > (int)255);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(147)
										int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(147)
										if ((tmp19)){
											HX_STACK_LINE(147)
											tmp20 = (int)255;
										}
										else{
											HX_STACK_LINE(147)
											bool tmp21 = (Value < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(147)
											if ((tmp21)){
												HX_STACK_LINE(147)
												tmp20 = (int)0;
											}
											else{
												HX_STACK_LINE(147)
												tmp20 = Value;
											}
										}
										HX_STACK_LINE(147)
										int tmp21 = (int(tmp20) << int((int)16));		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(147)
										hx::OrEq(color,tmp21);
										HX_STACK_LINE(147)
										Value;
									}
									HX_STACK_LINE(147)
									mid;
								}
								HX_STACK_LINE(147)
								{
									HX_STACK_LINE(147)
									{
										HX_STACK_LINE(147)
										Float tmp17 = (Chroma * (int)255);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(147)
										int tmp18 = ::Math_obj::round(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(147)
										int Value = tmp18;		HX_STACK_VAR(Value,"Value");
										HX_STACK_LINE(147)
										hx::AndEq(color,(int)-65281);
										HX_STACK_LINE(147)
										bool tmp19 = (Value > (int)255);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(147)
										int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(147)
										if ((tmp19)){
											HX_STACK_LINE(147)
											tmp20 = (int)255;
										}
										else{
											HX_STACK_LINE(147)
											bool tmp21 = (Value < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(147)
											if ((tmp21)){
												HX_STACK_LINE(147)
												tmp20 = (int)0;
											}
											else{
												HX_STACK_LINE(147)
												tmp20 = Value;
											}
										}
										HX_STACK_LINE(147)
										int tmp21 = (int(tmp20) << int((int)8));		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(147)
										hx::OrEq(color,tmp21);
										HX_STACK_LINE(147)
										Value;
									}
									HX_STACK_LINE(147)
									Chroma;
								}
								HX_STACK_LINE(147)
								{
									HX_STACK_LINE(147)
									{
										HX_STACK_LINE(147)
										Float tmp17 = (match * (int)255);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(147)
										int tmp18 = ::Math_obj::round(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(147)
										int Value = tmp18;		HX_STACK_VAR(Value,"Value");
										HX_STACK_LINE(147)
										hx::AndEq(color,(int)-256);
										HX_STACK_LINE(147)
										bool tmp19 = (Value > (int)255);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(147)
										int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(147)
										if ((tmp19)){
											HX_STACK_LINE(147)
											tmp20 = (int)255;
										}
										else{
											HX_STACK_LINE(147)
											bool tmp21 = (Value < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(147)
											if ((tmp21)){
												HX_STACK_LINE(147)
												tmp20 = (int)0;
											}
											else{
												HX_STACK_LINE(147)
												tmp20 = Value;
											}
										}
										HX_STACK_LINE(147)
										hx::OrEq(color,tmp20);
										HX_STACK_LINE(147)
										Value;
									}
									HX_STACK_LINE(147)
									match;
								}
								HX_STACK_LINE(147)
								{
									HX_STACK_LINE(147)
									{
										HX_STACK_LINE(147)
										Float tmp17 = (Alpha * (int)255);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(147)
										int tmp18 = ::Math_obj::round(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(147)
										int Value = tmp18;		HX_STACK_VAR(Value,"Value");
										HX_STACK_LINE(147)
										hx::AndEq(color,(int)16777215);
										HX_STACK_LINE(147)
										bool tmp19 = (Value > (int)255);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(147)
										int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(147)
										if ((tmp19)){
											HX_STACK_LINE(147)
											tmp20 = (int)255;
										}
										else{
											HX_STACK_LINE(147)
											bool tmp21 = (Value < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(147)
											if ((tmp21)){
												HX_STACK_LINE(147)
												tmp20 = (int)0;
											}
											else{
												HX_STACK_LINE(147)
												tmp20 = Value;
											}
										}
										HX_STACK_LINE(147)
										int tmp21 = (int(tmp20) << int((int)24));		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(147)
										hx::OrEq(color,tmp21);
										HX_STACK_LINE(147)
										Value;
									}
									HX_STACK_LINE(147)
									Alpha;
								}
								HX_STACK_LINE(147)
								tmp16 = color;
							}
							HX_STACK_LINE(147)
							tmp16;
						}
						;break;
						case (int)2: {
							HX_STACK_LINE(147)
							int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(147)
							{
								HX_STACK_LINE(147)
								{
									HX_STACK_LINE(147)
									{
										HX_STACK_LINE(147)
										Float tmp17 = (match * (int)255);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(147)
										int tmp18 = ::Math_obj::round(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(147)
										int Value = tmp18;		HX_STACK_VAR(Value,"Value");
										HX_STACK_LINE(147)
										hx::AndEq(color,(int)-16711681);
										HX_STACK_LINE(147)
										bool tmp19 = (Value > (int)255);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(147)
										int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(147)
										if ((tmp19)){
											HX_STACK_LINE(147)
											tmp20 = (int)255;
										}
										else{
											HX_STACK_LINE(147)
											bool tmp21 = (Value < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(147)
											if ((tmp21)){
												HX_STACK_LINE(147)
												tmp20 = (int)0;
											}
											else{
												HX_STACK_LINE(147)
												tmp20 = Value;
											}
										}
										HX_STACK_LINE(147)
										int tmp21 = (int(tmp20) << int((int)16));		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(147)
										hx::OrEq(color,tmp21);
										HX_STACK_LINE(147)
										Value;
									}
									HX_STACK_LINE(147)
									match;
								}
								HX_STACK_LINE(147)
								{
									HX_STACK_LINE(147)
									{
										HX_STACK_LINE(147)
										Float tmp17 = (Chroma * (int)255);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(147)
										int tmp18 = ::Math_obj::round(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(147)
										int Value = tmp18;		HX_STACK_VAR(Value,"Value");
										HX_STACK_LINE(147)
										hx::AndEq(color,(int)-65281);
										HX_STACK_LINE(147)
										bool tmp19 = (Value > (int)255);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(147)
										int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(147)
										if ((tmp19)){
											HX_STACK_LINE(147)
											tmp20 = (int)255;
										}
										else{
											HX_STACK_LINE(147)
											bool tmp21 = (Value < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(147)
											if ((tmp21)){
												HX_STACK_LINE(147)
												tmp20 = (int)0;
											}
											else{
												HX_STACK_LINE(147)
												tmp20 = Value;
											}
										}
										HX_STACK_LINE(147)
										int tmp21 = (int(tmp20) << int((int)8));		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(147)
										hx::OrEq(color,tmp21);
										HX_STACK_LINE(147)
										Value;
									}
									HX_STACK_LINE(147)
									Chroma;
								}
								HX_STACK_LINE(147)
								{
									HX_STACK_LINE(147)
									{
										HX_STACK_LINE(147)
										Float tmp17 = (mid * (int)255);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(147)
										int tmp18 = ::Math_obj::round(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(147)
										int Value = tmp18;		HX_STACK_VAR(Value,"Value");
										HX_STACK_LINE(147)
										hx::AndEq(color,(int)-256);
										HX_STACK_LINE(147)
										bool tmp19 = (Value > (int)255);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(147)
										int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(147)
										if ((tmp19)){
											HX_STACK_LINE(147)
											tmp20 = (int)255;
										}
										else{
											HX_STACK_LINE(147)
											bool tmp21 = (Value < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(147)
											if ((tmp21)){
												HX_STACK_LINE(147)
												tmp20 = (int)0;
											}
											else{
												HX_STACK_LINE(147)
												tmp20 = Value;
											}
										}
										HX_STACK_LINE(147)
										hx::OrEq(color,tmp20);
										HX_STACK_LINE(147)
										Value;
									}
									HX_STACK_LINE(147)
									mid;
								}
								HX_STACK_LINE(147)
								{
									HX_STACK_LINE(147)
									{
										HX_STACK_LINE(147)
										Float tmp17 = (Alpha * (int)255);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(147)
										int tmp18 = ::Math_obj::round(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(147)
										int Value = tmp18;		HX_STACK_VAR(Value,"Value");
										HX_STACK_LINE(147)
										hx::AndEq(color,(int)16777215);
										HX_STACK_LINE(147)
										bool tmp19 = (Value > (int)255);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(147)
										int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(147)
										if ((tmp19)){
											HX_STACK_LINE(147)
											tmp20 = (int)255;
										}
										else{
											HX_STACK_LINE(147)
											bool tmp21 = (Value < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(147)
											if ((tmp21)){
												HX_STACK_LINE(147)
												tmp20 = (int)0;
											}
											else{
												HX_STACK_LINE(147)
												tmp20 = Value;
											}
										}
										HX_STACK_LINE(147)
										int tmp21 = (int(tmp20) << int((int)24));		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(147)
										hx::OrEq(color,tmp21);
										HX_STACK_LINE(147)
										Value;
									}
									HX_STACK_LINE(147)
									Alpha;
								}
								HX_STACK_LINE(147)
								tmp16 = color;
							}
							HX_STACK_LINE(147)
							tmp16;
						}
						;break;
						case (int)3: {
							HX_STACK_LINE(147)
							int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(147)
							{
								HX_STACK_LINE(147)
								{
									HX_STACK_LINE(147)
									{
										HX_STACK_LINE(147)
										Float tmp17 = (match * (int)255);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(147)
										int tmp18 = ::Math_obj::round(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(147)
										int Value = tmp18;		HX_STACK_VAR(Value,"Value");
										HX_STACK_LINE(147)
										hx::AndEq(color,(int)-16711681);
										HX_STACK_LINE(147)
										bool tmp19 = (Value > (int)255);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(147)
										int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(147)
										if ((tmp19)){
											HX_STACK_LINE(147)
											tmp20 = (int)255;
										}
										else{
											HX_STACK_LINE(147)
											bool tmp21 = (Value < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(147)
											if ((tmp21)){
												HX_STACK_LINE(147)
												tmp20 = (int)0;
											}
											else{
												HX_STACK_LINE(147)
												tmp20 = Value;
											}
										}
										HX_STACK_LINE(147)
										int tmp21 = (int(tmp20) << int((int)16));		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(147)
										hx::OrEq(color,tmp21);
										HX_STACK_LINE(147)
										Value;
									}
									HX_STACK_LINE(147)
									match;
								}
								HX_STACK_LINE(147)
								{
									HX_STACK_LINE(147)
									{
										HX_STACK_LINE(147)
										Float tmp17 = (mid * (int)255);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(147)
										int tmp18 = ::Math_obj::round(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(147)
										int Value = tmp18;		HX_STACK_VAR(Value,"Value");
										HX_STACK_LINE(147)
										hx::AndEq(color,(int)-65281);
										HX_STACK_LINE(147)
										bool tmp19 = (Value > (int)255);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(147)
										int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(147)
										if ((tmp19)){
											HX_STACK_LINE(147)
											tmp20 = (int)255;
										}
										else{
											HX_STACK_LINE(147)
											bool tmp21 = (Value < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(147)
											if ((tmp21)){
												HX_STACK_LINE(147)
												tmp20 = (int)0;
											}
											else{
												HX_STACK_LINE(147)
												tmp20 = Value;
											}
										}
										HX_STACK_LINE(147)
										int tmp21 = (int(tmp20) << int((int)8));		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(147)
										hx::OrEq(color,tmp21);
										HX_STACK_LINE(147)
										Value;
									}
									HX_STACK_LINE(147)
									mid;
								}
								HX_STACK_LINE(147)
								{
									HX_STACK_LINE(147)
									{
										HX_STACK_LINE(147)
										Float tmp17 = (Chroma * (int)255);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(147)
										int tmp18 = ::Math_obj::round(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(147)
										int Value = tmp18;		HX_STACK_VAR(Value,"Value");
										HX_STACK_LINE(147)
										hx::AndEq(color,(int)-256);
										HX_STACK_LINE(147)
										bool tmp19 = (Value > (int)255);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(147)
										int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(147)
										if ((tmp19)){
											HX_STACK_LINE(147)
											tmp20 = (int)255;
										}
										else{
											HX_STACK_LINE(147)
											bool tmp21 = (Value < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(147)
											if ((tmp21)){
												HX_STACK_LINE(147)
												tmp20 = (int)0;
											}
											else{
												HX_STACK_LINE(147)
												tmp20 = Value;
											}
										}
										HX_STACK_LINE(147)
										hx::OrEq(color,tmp20);
										HX_STACK_LINE(147)
										Value;
									}
									HX_STACK_LINE(147)
									Chroma;
								}
								HX_STACK_LINE(147)
								{
									HX_STACK_LINE(147)
									{
										HX_STACK_LINE(147)
										Float tmp17 = (Alpha * (int)255);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(147)
										int tmp18 = ::Math_obj::round(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(147)
										int Value = tmp18;		HX_STACK_VAR(Value,"Value");
										HX_STACK_LINE(147)
										hx::AndEq(color,(int)16777215);
										HX_STACK_LINE(147)
										bool tmp19 = (Value > (int)255);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(147)
										int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(147)
										if ((tmp19)){
											HX_STACK_LINE(147)
											tmp20 = (int)255;
										}
										else{
											HX_STACK_LINE(147)
											bool tmp21 = (Value < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(147)
											if ((tmp21)){
												HX_STACK_LINE(147)
												tmp20 = (int)0;
											}
											else{
												HX_STACK_LINE(147)
												tmp20 = Value;
											}
										}
										HX_STACK_LINE(147)
										int tmp21 = (int(tmp20) << int((int)24));		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(147)
										hx::OrEq(color,tmp21);
										HX_STACK_LINE(147)
										Value;
									}
									HX_STACK_LINE(147)
									Alpha;
								}
								HX_STACK_LINE(147)
								tmp16 = color;
							}
							HX_STACK_LINE(147)
							tmp16;
						}
						;break;
						case (int)4: {
							HX_STACK_LINE(147)
							int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(147)
							{
								HX_STACK_LINE(147)
								{
									HX_STACK_LINE(147)
									{
										HX_STACK_LINE(147)
										Float tmp17 = (mid * (int)255);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(147)
										int tmp18 = ::Math_obj::round(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(147)
										int Value = tmp18;		HX_STACK_VAR(Value,"Value");
										HX_STACK_LINE(147)
										hx::AndEq(color,(int)-16711681);
										HX_STACK_LINE(147)
										bool tmp19 = (Value > (int)255);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(147)
										int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(147)
										if ((tmp19)){
											HX_STACK_LINE(147)
											tmp20 = (int)255;
										}
										else{
											HX_STACK_LINE(147)
											bool tmp21 = (Value < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(147)
											if ((tmp21)){
												HX_STACK_LINE(147)
												tmp20 = (int)0;
											}
											else{
												HX_STACK_LINE(147)
												tmp20 = Value;
											}
										}
										HX_STACK_LINE(147)
										int tmp21 = (int(tmp20) << int((int)16));		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(147)
										hx::OrEq(color,tmp21);
										HX_STACK_LINE(147)
										Value;
									}
									HX_STACK_LINE(147)
									mid;
								}
								HX_STACK_LINE(147)
								{
									HX_STACK_LINE(147)
									{
										HX_STACK_LINE(147)
										Float tmp17 = (match * (int)255);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(147)
										int tmp18 = ::Math_obj::round(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(147)
										int Value = tmp18;		HX_STACK_VAR(Value,"Value");
										HX_STACK_LINE(147)
										hx::AndEq(color,(int)-65281);
										HX_STACK_LINE(147)
										bool tmp19 = (Value > (int)255);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(147)
										int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(147)
										if ((tmp19)){
											HX_STACK_LINE(147)
											tmp20 = (int)255;
										}
										else{
											HX_STACK_LINE(147)
											bool tmp21 = (Value < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(147)
											if ((tmp21)){
												HX_STACK_LINE(147)
												tmp20 = (int)0;
											}
											else{
												HX_STACK_LINE(147)
												tmp20 = Value;
											}
										}
										HX_STACK_LINE(147)
										int tmp21 = (int(tmp20) << int((int)8));		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(147)
										hx::OrEq(color,tmp21);
										HX_STACK_LINE(147)
										Value;
									}
									HX_STACK_LINE(147)
									match;
								}
								HX_STACK_LINE(147)
								{
									HX_STACK_LINE(147)
									{
										HX_STACK_LINE(147)
										Float tmp17 = (Chroma * (int)255);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(147)
										int tmp18 = ::Math_obj::round(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(147)
										int Value = tmp18;		HX_STACK_VAR(Value,"Value");
										HX_STACK_LINE(147)
										hx::AndEq(color,(int)-256);
										HX_STACK_LINE(147)
										bool tmp19 = (Value > (int)255);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(147)
										int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(147)
										if ((tmp19)){
											HX_STACK_LINE(147)
											tmp20 = (int)255;
										}
										else{
											HX_STACK_LINE(147)
											bool tmp21 = (Value < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(147)
											if ((tmp21)){
												HX_STACK_LINE(147)
												tmp20 = (int)0;
											}
											else{
												HX_STACK_LINE(147)
												tmp20 = Value;
											}
										}
										HX_STACK_LINE(147)
										hx::OrEq(color,tmp20);
										HX_STACK_LINE(147)
										Value;
									}
									HX_STACK_LINE(147)
									Chroma;
								}
								HX_STACK_LINE(147)
								{
									HX_STACK_LINE(147)
									{
										HX_STACK_LINE(147)
										Float tmp17 = (Alpha * (int)255);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(147)
										int tmp18 = ::Math_obj::round(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(147)
										int Value = tmp18;		HX_STACK_VAR(Value,"Value");
										HX_STACK_LINE(147)
										hx::AndEq(color,(int)16777215);
										HX_STACK_LINE(147)
										bool tmp19 = (Value > (int)255);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(147)
										int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(147)
										if ((tmp19)){
											HX_STACK_LINE(147)
											tmp20 = (int)255;
										}
										else{
											HX_STACK_LINE(147)
											bool tmp21 = (Value < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(147)
											if ((tmp21)){
												HX_STACK_LINE(147)
												tmp20 = (int)0;
											}
											else{
												HX_STACK_LINE(147)
												tmp20 = Value;
											}
										}
										HX_STACK_LINE(147)
										int tmp21 = (int(tmp20) << int((int)24));		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(147)
										hx::OrEq(color,tmp21);
										HX_STACK_LINE(147)
										Value;
									}
									HX_STACK_LINE(147)
									Alpha;
								}
								HX_STACK_LINE(147)
								tmp16 = color;
							}
							HX_STACK_LINE(147)
							tmp16;
						}
						;break;
						case (int)5: {
							HX_STACK_LINE(147)
							int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(147)
							{
								HX_STACK_LINE(147)
								{
									HX_STACK_LINE(147)
									{
										HX_STACK_LINE(147)
										Float tmp17 = (Chroma * (int)255);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(147)
										int tmp18 = ::Math_obj::round(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(147)
										int Value = tmp18;		HX_STACK_VAR(Value,"Value");
										HX_STACK_LINE(147)
										hx::AndEq(color,(int)-16711681);
										HX_STACK_LINE(147)
										bool tmp19 = (Value > (int)255);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(147)
										int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(147)
										if ((tmp19)){
											HX_STACK_LINE(147)
											tmp20 = (int)255;
										}
										else{
											HX_STACK_LINE(147)
											bool tmp21 = (Value < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(147)
											if ((tmp21)){
												HX_STACK_LINE(147)
												tmp20 = (int)0;
											}
											else{
												HX_STACK_LINE(147)
												tmp20 = Value;
											}
										}
										HX_STACK_LINE(147)
										int tmp21 = (int(tmp20) << int((int)16));		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(147)
										hx::OrEq(color,tmp21);
										HX_STACK_LINE(147)
										Value;
									}
									HX_STACK_LINE(147)
									Chroma;
								}
								HX_STACK_LINE(147)
								{
									HX_STACK_LINE(147)
									{
										HX_STACK_LINE(147)
										Float tmp17 = (match * (int)255);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(147)
										int tmp18 = ::Math_obj::round(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(147)
										int Value = tmp18;		HX_STACK_VAR(Value,"Value");
										HX_STACK_LINE(147)
										hx::AndEq(color,(int)-65281);
										HX_STACK_LINE(147)
										bool tmp19 = (Value > (int)255);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(147)
										int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(147)
										if ((tmp19)){
											HX_STACK_LINE(147)
											tmp20 = (int)255;
										}
										else{
											HX_STACK_LINE(147)
											bool tmp21 = (Value < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(147)
											if ((tmp21)){
												HX_STACK_LINE(147)
												tmp20 = (int)0;
											}
											else{
												HX_STACK_LINE(147)
												tmp20 = Value;
											}
										}
										HX_STACK_LINE(147)
										int tmp21 = (int(tmp20) << int((int)8));		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(147)
										hx::OrEq(color,tmp21);
										HX_STACK_LINE(147)
										Value;
									}
									HX_STACK_LINE(147)
									match;
								}
								HX_STACK_LINE(147)
								{
									HX_STACK_LINE(147)
									{
										HX_STACK_LINE(147)
										Float tmp17 = (mid * (int)255);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(147)
										int tmp18 = ::Math_obj::round(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(147)
										int Value = tmp18;		HX_STACK_VAR(Value,"Value");
										HX_STACK_LINE(147)
										hx::AndEq(color,(int)-256);
										HX_STACK_LINE(147)
										bool tmp19 = (Value > (int)255);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(147)
										int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(147)
										if ((tmp19)){
											HX_STACK_LINE(147)
											tmp20 = (int)255;
										}
										else{
											HX_STACK_LINE(147)
											bool tmp21 = (Value < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(147)
											if ((tmp21)){
												HX_STACK_LINE(147)
												tmp20 = (int)0;
											}
											else{
												HX_STACK_LINE(147)
												tmp20 = Value;
											}
										}
										HX_STACK_LINE(147)
										hx::OrEq(color,tmp20);
										HX_STACK_LINE(147)
										Value;
									}
									HX_STACK_LINE(147)
									mid;
								}
								HX_STACK_LINE(147)
								{
									HX_STACK_LINE(147)
									{
										HX_STACK_LINE(147)
										Float tmp17 = (Alpha * (int)255);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(147)
										int tmp18 = ::Math_obj::round(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(147)
										int Value = tmp18;		HX_STACK_VAR(Value,"Value");
										HX_STACK_LINE(147)
										hx::AndEq(color,(int)16777215);
										HX_STACK_LINE(147)
										bool tmp19 = (Value > (int)255);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(147)
										int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(147)
										if ((tmp19)){
											HX_STACK_LINE(147)
											tmp20 = (int)255;
										}
										else{
											HX_STACK_LINE(147)
											bool tmp21 = (Value < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(147)
											if ((tmp21)){
												HX_STACK_LINE(147)
												tmp20 = (int)0;
											}
											else{
												HX_STACK_LINE(147)
												tmp20 = Value;
											}
										}
										HX_STACK_LINE(147)
										int tmp21 = (int(tmp20) << int((int)24));		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(147)
										hx::OrEq(color,tmp21);
										HX_STACK_LINE(147)
										Value;
									}
									HX_STACK_LINE(147)
									Alpha;
								}
								HX_STACK_LINE(147)
								tmp16 = color;
							}
							HX_STACK_LINE(147)
							tmp16;
						}
						;break;
					}
				}
				HX_STACK_LINE(147)
				tmp1 = color;
			}
		}
		HX_STACK_LINE(147)
		int tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(147)
		return tmp2;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxColor_Impl__obj,fromHSB,return )

int FlxColor_Impl__obj::fromHSL( Float Hue,Float Saturation,Float Lightness,hx::Null< Float >  __o_Alpha){
Float Alpha = __o_Alpha.Default(1);
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","fromHSL",0xdc3fed52,"flixel.util._FlxColor.FlxColor_Impl_.fromHSL","flixel/util/FlxColor.hx",160,0x9335c333)
	HX_STACK_ARG(Hue,"Hue")
	HX_STACK_ARG(Saturation,"Saturation")
	HX_STACK_ARG(Lightness,"Lightness")
	HX_STACK_ARG(Alpha,"Alpha")
{
		HX_STACK_LINE(161)
		int tmp = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(161)
		int color = tmp;		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(162)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(162)
		{
			HX_STACK_LINE(162)
			Float tmp2 = ((int)2 * Lightness);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(162)
			Float tmp3 = (tmp2 - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(162)
			Float tmp4 = ::Math_obj::abs(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(162)
			Float tmp5 = ((int)1 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(162)
			Float tmp6 = Saturation;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(162)
			Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(162)
			Float chroma = tmp7;		HX_STACK_VAR(chroma,"chroma");
			HX_STACK_LINE(162)
			Float tmp8 = Lightness;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(162)
			Float tmp9 = (Float(chroma) / Float((int)2));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(162)
			Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(162)
			Float match = tmp10;		HX_STACK_VAR(match,"match");
			HX_STACK_LINE(162)
			{
				HX_STACK_LINE(162)
				Float Hue1 = Hue;		HX_STACK_VAR(Hue1,"Hue1");
				HX_STACK_LINE(162)
				Float Chroma = chroma;		HX_STACK_VAR(Chroma,"Chroma");
				HX_STACK_LINE(162)
				hx::ModEq(Hue1,(int)360);
				HX_STACK_LINE(162)
				Float tmp11 = (Float(Hue1) / Float((int)60));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(162)
				Float hueD = tmp11;		HX_STACK_VAR(hueD,"hueD");
				HX_STACK_LINE(162)
				Float tmp12 = Chroma;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(162)
				Float tmp13 = hx::Mod(hueD,(int)2);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(162)
				Float tmp14 = (tmp13 - (int)1);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(162)
				Float tmp15 = ::Math_obj::abs(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(162)
				Float tmp16 = ((int)1 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(162)
				Float tmp17 = (tmp12 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(162)
				Float tmp18 = match;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(162)
				Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(162)
				Float mid = tmp19;		HX_STACK_VAR(mid,"mid");
				HX_STACK_LINE(162)
				hx::AddEq(Chroma,match);
				HX_STACK_LINE(162)
				{
					HX_STACK_LINE(162)
					Float tmp20 = hueD;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(162)
					int tmp21 = ::Std_obj::_int(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(162)
					int _g = tmp21;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(162)
					int tmp22 = _g;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(162)
					switch( (int)(tmp22)){
						case (int)0: {
							HX_STACK_LINE(162)
							int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(162)
							{
								HX_STACK_LINE(162)
								{
									HX_STACK_LINE(162)
									{
										HX_STACK_LINE(162)
										Float tmp24 = (Chroma * (int)255);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(162)
										int tmp25 = ::Math_obj::round(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(162)
										int Value = tmp25;		HX_STACK_VAR(Value,"Value");
										HX_STACK_LINE(162)
										hx::AndEq(color,(int)-16711681);
										HX_STACK_LINE(162)
										bool tmp26 = (Value > (int)255);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(162)
										int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(162)
										if ((tmp26)){
											HX_STACK_LINE(162)
											tmp27 = (int)255;
										}
										else{
											HX_STACK_LINE(162)
											bool tmp28 = (Value < (int)0);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(162)
											if ((tmp28)){
												HX_STACK_LINE(162)
												tmp27 = (int)0;
											}
											else{
												HX_STACK_LINE(162)
												tmp27 = Value;
											}
										}
										HX_STACK_LINE(162)
										int tmp28 = (int(tmp27) << int((int)16));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(162)
										hx::OrEq(color,tmp28);
										HX_STACK_LINE(162)
										Value;
									}
									HX_STACK_LINE(162)
									Chroma;
								}
								HX_STACK_LINE(162)
								{
									HX_STACK_LINE(162)
									{
										HX_STACK_LINE(162)
										Float tmp24 = (mid * (int)255);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(162)
										int tmp25 = ::Math_obj::round(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(162)
										int Value = tmp25;		HX_STACK_VAR(Value,"Value");
										HX_STACK_LINE(162)
										hx::AndEq(color,(int)-65281);
										HX_STACK_LINE(162)
										bool tmp26 = (Value > (int)255);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(162)
										int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(162)
										if ((tmp26)){
											HX_STACK_LINE(162)
											tmp27 = (int)255;
										}
										else{
											HX_STACK_LINE(162)
											bool tmp28 = (Value < (int)0);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(162)
											if ((tmp28)){
												HX_STACK_LINE(162)
												tmp27 = (int)0;
											}
											else{
												HX_STACK_LINE(162)
												tmp27 = Value;
											}
										}
										HX_STACK_LINE(162)
										int tmp28 = (int(tmp27) << int((int)8));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(162)
										hx::OrEq(color,tmp28);
										HX_STACK_LINE(162)
										Value;
									}
									HX_STACK_LINE(162)
									mid;
								}
								HX_STACK_LINE(162)
								{
									HX_STACK_LINE(162)
									{
										HX_STACK_LINE(162)
										Float tmp24 = (match * (int)255);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(162)
										int tmp25 = ::Math_obj::round(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(162)
										int Value = tmp25;		HX_STACK_VAR(Value,"Value");
										HX_STACK_LINE(162)
										hx::AndEq(color,(int)-256);
										HX_STACK_LINE(162)
										bool tmp26 = (Value > (int)255);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(162)
										int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(162)
										if ((tmp26)){
											HX_STACK_LINE(162)
											tmp27 = (int)255;
										}
										else{
											HX_STACK_LINE(162)
											bool tmp28 = (Value < (int)0);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(162)
											if ((tmp28)){
												HX_STACK_LINE(162)
												tmp27 = (int)0;
											}
											else{
												HX_STACK_LINE(162)
												tmp27 = Value;
											}
										}
										HX_STACK_LINE(162)
										hx::OrEq(color,tmp27);
										HX_STACK_LINE(162)
										Value;
									}
									HX_STACK_LINE(162)
									match;
								}
								HX_STACK_LINE(162)
								{
									HX_STACK_LINE(162)
									{
										HX_STACK_LINE(162)
										Float tmp24 = (Alpha * (int)255);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(162)
										int tmp25 = ::Math_obj::round(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(162)
										int Value = tmp25;		HX_STACK_VAR(Value,"Value");
										HX_STACK_LINE(162)
										hx::AndEq(color,(int)16777215);
										HX_STACK_LINE(162)
										bool tmp26 = (Value > (int)255);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(162)
										int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(162)
										if ((tmp26)){
											HX_STACK_LINE(162)
											tmp27 = (int)255;
										}
										else{
											HX_STACK_LINE(162)
											bool tmp28 = (Value < (int)0);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(162)
											if ((tmp28)){
												HX_STACK_LINE(162)
												tmp27 = (int)0;
											}
											else{
												HX_STACK_LINE(162)
												tmp27 = Value;
											}
										}
										HX_STACK_LINE(162)
										int tmp28 = (int(tmp27) << int((int)24));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(162)
										hx::OrEq(color,tmp28);
										HX_STACK_LINE(162)
										Value;
									}
									HX_STACK_LINE(162)
									Alpha;
								}
								HX_STACK_LINE(162)
								tmp23 = color;
							}
							HX_STACK_LINE(162)
							tmp23;
						}
						;break;
						case (int)1: {
							HX_STACK_LINE(162)
							int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(162)
							{
								HX_STACK_LINE(162)
								{
									HX_STACK_LINE(162)
									{
										HX_STACK_LINE(162)
										Float tmp24 = (mid * (int)255);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(162)
										int tmp25 = ::Math_obj::round(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(162)
										int Value = tmp25;		HX_STACK_VAR(Value,"Value");
										HX_STACK_LINE(162)
										hx::AndEq(color,(int)-16711681);
										HX_STACK_LINE(162)
										bool tmp26 = (Value > (int)255);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(162)
										int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(162)
										if ((tmp26)){
											HX_STACK_LINE(162)
											tmp27 = (int)255;
										}
										else{
											HX_STACK_LINE(162)
											bool tmp28 = (Value < (int)0);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(162)
											if ((tmp28)){
												HX_STACK_LINE(162)
												tmp27 = (int)0;
											}
											else{
												HX_STACK_LINE(162)
												tmp27 = Value;
											}
										}
										HX_STACK_LINE(162)
										int tmp28 = (int(tmp27) << int((int)16));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(162)
										hx::OrEq(color,tmp28);
										HX_STACK_LINE(162)
										Value;
									}
									HX_STACK_LINE(162)
									mid;
								}
								HX_STACK_LINE(162)
								{
									HX_STACK_LINE(162)
									{
										HX_STACK_LINE(162)
										Float tmp24 = (Chroma * (int)255);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(162)
										int tmp25 = ::Math_obj::round(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(162)
										int Value = tmp25;		HX_STACK_VAR(Value,"Value");
										HX_STACK_LINE(162)
										hx::AndEq(color,(int)-65281);
										HX_STACK_LINE(162)
										bool tmp26 = (Value > (int)255);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(162)
										int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(162)
										if ((tmp26)){
											HX_STACK_LINE(162)
											tmp27 = (int)255;
										}
										else{
											HX_STACK_LINE(162)
											bool tmp28 = (Value < (int)0);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(162)
											if ((tmp28)){
												HX_STACK_LINE(162)
												tmp27 = (int)0;
											}
											else{
												HX_STACK_LINE(162)
												tmp27 = Value;
											}
										}
										HX_STACK_LINE(162)
										int tmp28 = (int(tmp27) << int((int)8));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(162)
										hx::OrEq(color,tmp28);
										HX_STACK_LINE(162)
										Value;
									}
									HX_STACK_LINE(162)
									Chroma;
								}
								HX_STACK_LINE(162)
								{
									HX_STACK_LINE(162)
									{
										HX_STACK_LINE(162)
										Float tmp24 = (match * (int)255);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(162)
										int tmp25 = ::Math_obj::round(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(162)
										int Value = tmp25;		HX_STACK_VAR(Value,"Value");
										HX_STACK_LINE(162)
										hx::AndEq(color,(int)-256);
										HX_STACK_LINE(162)
										bool tmp26 = (Value > (int)255);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(162)
										int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(162)
										if ((tmp26)){
											HX_STACK_LINE(162)
											tmp27 = (int)255;
										}
										else{
											HX_STACK_LINE(162)
											bool tmp28 = (Value < (int)0);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(162)
											if ((tmp28)){
												HX_STACK_LINE(162)
												tmp27 = (int)0;
											}
											else{
												HX_STACK_LINE(162)
												tmp27 = Value;
											}
										}
										HX_STACK_LINE(162)
										hx::OrEq(color,tmp27);
										HX_STACK_LINE(162)
										Value;
									}
									HX_STACK_LINE(162)
									match;
								}
								HX_STACK_LINE(162)
								{
									HX_STACK_LINE(162)
									{
										HX_STACK_LINE(162)
										Float tmp24 = (Alpha * (int)255);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(162)
										int tmp25 = ::Math_obj::round(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(162)
										int Value = tmp25;		HX_STACK_VAR(Value,"Value");
										HX_STACK_LINE(162)
										hx::AndEq(color,(int)16777215);
										HX_STACK_LINE(162)
										bool tmp26 = (Value > (int)255);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(162)
										int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(162)
										if ((tmp26)){
											HX_STACK_LINE(162)
											tmp27 = (int)255;
										}
										else{
											HX_STACK_LINE(162)
											bool tmp28 = (Value < (int)0);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(162)
											if ((tmp28)){
												HX_STACK_LINE(162)
												tmp27 = (int)0;
											}
											else{
												HX_STACK_LINE(162)
												tmp27 = Value;
											}
										}
										HX_STACK_LINE(162)
										int tmp28 = (int(tmp27) << int((int)24));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(162)
										hx::OrEq(color,tmp28);
										HX_STACK_LINE(162)
										Value;
									}
									HX_STACK_LINE(162)
									Alpha;
								}
								HX_STACK_LINE(162)
								tmp23 = color;
							}
							HX_STACK_LINE(162)
							tmp23;
						}
						;break;
						case (int)2: {
							HX_STACK_LINE(162)
							int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(162)
							{
								HX_STACK_LINE(162)
								{
									HX_STACK_LINE(162)
									{
										HX_STACK_LINE(162)
										Float tmp24 = (match * (int)255);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(162)
										int tmp25 = ::Math_obj::round(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(162)
										int Value = tmp25;		HX_STACK_VAR(Value,"Value");
										HX_STACK_LINE(162)
										hx::AndEq(color,(int)-16711681);
										HX_STACK_LINE(162)
										bool tmp26 = (Value > (int)255);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(162)
										int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(162)
										if ((tmp26)){
											HX_STACK_LINE(162)
											tmp27 = (int)255;
										}
										else{
											HX_STACK_LINE(162)
											bool tmp28 = (Value < (int)0);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(162)
											if ((tmp28)){
												HX_STACK_LINE(162)
												tmp27 = (int)0;
											}
											else{
												HX_STACK_LINE(162)
												tmp27 = Value;
											}
										}
										HX_STACK_LINE(162)
										int tmp28 = (int(tmp27) << int((int)16));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(162)
										hx::OrEq(color,tmp28);
										HX_STACK_LINE(162)
										Value;
									}
									HX_STACK_LINE(162)
									match;
								}
								HX_STACK_LINE(162)
								{
									HX_STACK_LINE(162)
									{
										HX_STACK_LINE(162)
										Float tmp24 = (Chroma * (int)255);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(162)
										int tmp25 = ::Math_obj::round(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(162)
										int Value = tmp25;		HX_STACK_VAR(Value,"Value");
										HX_STACK_LINE(162)
										hx::AndEq(color,(int)-65281);
										HX_STACK_LINE(162)
										bool tmp26 = (Value > (int)255);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(162)
										int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(162)
										if ((tmp26)){
											HX_STACK_LINE(162)
											tmp27 = (int)255;
										}
										else{
											HX_STACK_LINE(162)
											bool tmp28 = (Value < (int)0);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(162)
											if ((tmp28)){
												HX_STACK_LINE(162)
												tmp27 = (int)0;
											}
											else{
												HX_STACK_LINE(162)
												tmp27 = Value;
											}
										}
										HX_STACK_LINE(162)
										int tmp28 = (int(tmp27) << int((int)8));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(162)
										hx::OrEq(color,tmp28);
										HX_STACK_LINE(162)
										Value;
									}
									HX_STACK_LINE(162)
									Chroma;
								}
								HX_STACK_LINE(162)
								{
									HX_STACK_LINE(162)
									{
										HX_STACK_LINE(162)
										Float tmp24 = (mid * (int)255);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(162)
										int tmp25 = ::Math_obj::round(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(162)
										int Value = tmp25;		HX_STACK_VAR(Value,"Value");
										HX_STACK_LINE(162)
										hx::AndEq(color,(int)-256);
										HX_STACK_LINE(162)
										bool tmp26 = (Value > (int)255);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(162)
										int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(162)
										if ((tmp26)){
											HX_STACK_LINE(162)
											tmp27 = (int)255;
										}
										else{
											HX_STACK_LINE(162)
											bool tmp28 = (Value < (int)0);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(162)
											if ((tmp28)){
												HX_STACK_LINE(162)
												tmp27 = (int)0;
											}
											else{
												HX_STACK_LINE(162)
												tmp27 = Value;
											}
										}
										HX_STACK_LINE(162)
										hx::OrEq(color,tmp27);
										HX_STACK_LINE(162)
										Value;
									}
									HX_STACK_LINE(162)
									mid;
								}
								HX_STACK_LINE(162)
								{
									HX_STACK_LINE(162)
									{
										HX_STACK_LINE(162)
										Float tmp24 = (Alpha * (int)255);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(162)
										int tmp25 = ::Math_obj::round(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(162)
										int Value = tmp25;		HX_STACK_VAR(Value,"Value");
										HX_STACK_LINE(162)
										hx::AndEq(color,(int)16777215);
										HX_STACK_LINE(162)
										bool tmp26 = (Value > (int)255);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(162)
										int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(162)
										if ((tmp26)){
											HX_STACK_LINE(162)
											tmp27 = (int)255;
										}
										else{
											HX_STACK_LINE(162)
											bool tmp28 = (Value < (int)0);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(162)
											if ((tmp28)){
												HX_STACK_LINE(162)
												tmp27 = (int)0;
											}
											else{
												HX_STACK_LINE(162)
												tmp27 = Value;
											}
										}
										HX_STACK_LINE(162)
										int tmp28 = (int(tmp27) << int((int)24));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(162)
										hx::OrEq(color,tmp28);
										HX_STACK_LINE(162)
										Value;
									}
									HX_STACK_LINE(162)
									Alpha;
								}
								HX_STACK_LINE(162)
								tmp23 = color;
							}
							HX_STACK_LINE(162)
							tmp23;
						}
						;break;
						case (int)3: {
							HX_STACK_LINE(162)
							int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(162)
							{
								HX_STACK_LINE(162)
								{
									HX_STACK_LINE(162)
									{
										HX_STACK_LINE(162)
										Float tmp24 = (match * (int)255);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(162)
										int tmp25 = ::Math_obj::round(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(162)
										int Value = tmp25;		HX_STACK_VAR(Value,"Value");
										HX_STACK_LINE(162)
										hx::AndEq(color,(int)-16711681);
										HX_STACK_LINE(162)
										bool tmp26 = (Value > (int)255);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(162)
										int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(162)
										if ((tmp26)){
											HX_STACK_LINE(162)
											tmp27 = (int)255;
										}
										else{
											HX_STACK_LINE(162)
											bool tmp28 = (Value < (int)0);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(162)
											if ((tmp28)){
												HX_STACK_LINE(162)
												tmp27 = (int)0;
											}
											else{
												HX_STACK_LINE(162)
												tmp27 = Value;
											}
										}
										HX_STACK_LINE(162)
										int tmp28 = (int(tmp27) << int((int)16));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(162)
										hx::OrEq(color,tmp28);
										HX_STACK_LINE(162)
										Value;
									}
									HX_STACK_LINE(162)
									match;
								}
								HX_STACK_LINE(162)
								{
									HX_STACK_LINE(162)
									{
										HX_STACK_LINE(162)
										Float tmp24 = (mid * (int)255);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(162)
										int tmp25 = ::Math_obj::round(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(162)
										int Value = tmp25;		HX_STACK_VAR(Value,"Value");
										HX_STACK_LINE(162)
										hx::AndEq(color,(int)-65281);
										HX_STACK_LINE(162)
										bool tmp26 = (Value > (int)255);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(162)
										int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(162)
										if ((tmp26)){
											HX_STACK_LINE(162)
											tmp27 = (int)255;
										}
										else{
											HX_STACK_LINE(162)
											bool tmp28 = (Value < (int)0);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(162)
											if ((tmp28)){
												HX_STACK_LINE(162)
												tmp27 = (int)0;
											}
											else{
												HX_STACK_LINE(162)
												tmp27 = Value;
											}
										}
										HX_STACK_LINE(162)
										int tmp28 = (int(tmp27) << int((int)8));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(162)
										hx::OrEq(color,tmp28);
										HX_STACK_LINE(162)
										Value;
									}
									HX_STACK_LINE(162)
									mid;
								}
								HX_STACK_LINE(162)
								{
									HX_STACK_LINE(162)
									{
										HX_STACK_LINE(162)
										Float tmp24 = (Chroma * (int)255);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(162)
										int tmp25 = ::Math_obj::round(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(162)
										int Value = tmp25;		HX_STACK_VAR(Value,"Value");
										HX_STACK_LINE(162)
										hx::AndEq(color,(int)-256);
										HX_STACK_LINE(162)
										bool tmp26 = (Value > (int)255);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(162)
										int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(162)
										if ((tmp26)){
											HX_STACK_LINE(162)
											tmp27 = (int)255;
										}
										else{
											HX_STACK_LINE(162)
											bool tmp28 = (Value < (int)0);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(162)
											if ((tmp28)){
												HX_STACK_LINE(162)
												tmp27 = (int)0;
											}
											else{
												HX_STACK_LINE(162)
												tmp27 = Value;
											}
										}
										HX_STACK_LINE(162)
										hx::OrEq(color,tmp27);
										HX_STACK_LINE(162)
										Value;
									}
									HX_STACK_LINE(162)
									Chroma;
								}
								HX_STACK_LINE(162)
								{
									HX_STACK_LINE(162)
									{
										HX_STACK_LINE(162)
										Float tmp24 = (Alpha * (int)255);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(162)
										int tmp25 = ::Math_obj::round(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(162)
										int Value = tmp25;		HX_STACK_VAR(Value,"Value");
										HX_STACK_LINE(162)
										hx::AndEq(color,(int)16777215);
										HX_STACK_LINE(162)
										bool tmp26 = (Value > (int)255);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(162)
										int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(162)
										if ((tmp26)){
											HX_STACK_LINE(162)
											tmp27 = (int)255;
										}
										else{
											HX_STACK_LINE(162)
											bool tmp28 = (Value < (int)0);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(162)
											if ((tmp28)){
												HX_STACK_LINE(162)
												tmp27 = (int)0;
											}
											else{
												HX_STACK_LINE(162)
												tmp27 = Value;
											}
										}
										HX_STACK_LINE(162)
										int tmp28 = (int(tmp27) << int((int)24));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(162)
										hx::OrEq(color,tmp28);
										HX_STACK_LINE(162)
										Value;
									}
									HX_STACK_LINE(162)
									Alpha;
								}
								HX_STACK_LINE(162)
								tmp23 = color;
							}
							HX_STACK_LINE(162)
							tmp23;
						}
						;break;
						case (int)4: {
							HX_STACK_LINE(162)
							int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(162)
							{
								HX_STACK_LINE(162)
								{
									HX_STACK_LINE(162)
									{
										HX_STACK_LINE(162)
										Float tmp24 = (mid * (int)255);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(162)
										int tmp25 = ::Math_obj::round(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(162)
										int Value = tmp25;		HX_STACK_VAR(Value,"Value");
										HX_STACK_LINE(162)
										hx::AndEq(color,(int)-16711681);
										HX_STACK_LINE(162)
										bool tmp26 = (Value > (int)255);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(162)
										int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(162)
										if ((tmp26)){
											HX_STACK_LINE(162)
											tmp27 = (int)255;
										}
										else{
											HX_STACK_LINE(162)
											bool tmp28 = (Value < (int)0);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(162)
											if ((tmp28)){
												HX_STACK_LINE(162)
												tmp27 = (int)0;
											}
											else{
												HX_STACK_LINE(162)
												tmp27 = Value;
											}
										}
										HX_STACK_LINE(162)
										int tmp28 = (int(tmp27) << int((int)16));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(162)
										hx::OrEq(color,tmp28);
										HX_STACK_LINE(162)
										Value;
									}
									HX_STACK_LINE(162)
									mid;
								}
								HX_STACK_LINE(162)
								{
									HX_STACK_LINE(162)
									{
										HX_STACK_LINE(162)
										Float tmp24 = (match * (int)255);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(162)
										int tmp25 = ::Math_obj::round(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(162)
										int Value = tmp25;		HX_STACK_VAR(Value,"Value");
										HX_STACK_LINE(162)
										hx::AndEq(color,(int)-65281);
										HX_STACK_LINE(162)
										bool tmp26 = (Value > (int)255);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(162)
										int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(162)
										if ((tmp26)){
											HX_STACK_LINE(162)
											tmp27 = (int)255;
										}
										else{
											HX_STACK_LINE(162)
											bool tmp28 = (Value < (int)0);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(162)
											if ((tmp28)){
												HX_STACK_LINE(162)
												tmp27 = (int)0;
											}
											else{
												HX_STACK_LINE(162)
												tmp27 = Value;
											}
										}
										HX_STACK_LINE(162)
										int tmp28 = (int(tmp27) << int((int)8));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(162)
										hx::OrEq(color,tmp28);
										HX_STACK_LINE(162)
										Value;
									}
									HX_STACK_LINE(162)
									match;
								}
								HX_STACK_LINE(162)
								{
									HX_STACK_LINE(162)
									{
										HX_STACK_LINE(162)
										Float tmp24 = (Chroma * (int)255);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(162)
										int tmp25 = ::Math_obj::round(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(162)
										int Value = tmp25;		HX_STACK_VAR(Value,"Value");
										HX_STACK_LINE(162)
										hx::AndEq(color,(int)-256);
										HX_STACK_LINE(162)
										bool tmp26 = (Value > (int)255);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(162)
										int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(162)
										if ((tmp26)){
											HX_STACK_LINE(162)
											tmp27 = (int)255;
										}
										else{
											HX_STACK_LINE(162)
											bool tmp28 = (Value < (int)0);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(162)
											if ((tmp28)){
												HX_STACK_LINE(162)
												tmp27 = (int)0;
											}
											else{
												HX_STACK_LINE(162)
												tmp27 = Value;
											}
										}
										HX_STACK_LINE(162)
										hx::OrEq(color,tmp27);
										HX_STACK_LINE(162)
										Value;
									}
									HX_STACK_LINE(162)
									Chroma;
								}
								HX_STACK_LINE(162)
								{
									HX_STACK_LINE(162)
									{
										HX_STACK_LINE(162)
										Float tmp24 = (Alpha * (int)255);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(162)
										int tmp25 = ::Math_obj::round(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(162)
										int Value = tmp25;		HX_STACK_VAR(Value,"Value");
										HX_STACK_LINE(162)
										hx::AndEq(color,(int)16777215);
										HX_STACK_LINE(162)
										bool tmp26 = (Value > (int)255);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(162)
										int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(162)
										if ((tmp26)){
											HX_STACK_LINE(162)
											tmp27 = (int)255;
										}
										else{
											HX_STACK_LINE(162)
											bool tmp28 = (Value < (int)0);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(162)
											if ((tmp28)){
												HX_STACK_LINE(162)
												tmp27 = (int)0;
											}
											else{
												HX_STACK_LINE(162)
												tmp27 = Value;
											}
										}
										HX_STACK_LINE(162)
										int tmp28 = (int(tmp27) << int((int)24));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(162)
										hx::OrEq(color,tmp28);
										HX_STACK_LINE(162)
										Value;
									}
									HX_STACK_LINE(162)
									Alpha;
								}
								HX_STACK_LINE(162)
								tmp23 = color;
							}
							HX_STACK_LINE(162)
							tmp23;
						}
						;break;
						case (int)5: {
							HX_STACK_LINE(162)
							int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(162)
							{
								HX_STACK_LINE(162)
								{
									HX_STACK_LINE(162)
									{
										HX_STACK_LINE(162)
										Float tmp24 = (Chroma * (int)255);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(162)
										int tmp25 = ::Math_obj::round(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(162)
										int Value = tmp25;		HX_STACK_VAR(Value,"Value");
										HX_STACK_LINE(162)
										hx::AndEq(color,(int)-16711681);
										HX_STACK_LINE(162)
										bool tmp26 = (Value > (int)255);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(162)
										int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(162)
										if ((tmp26)){
											HX_STACK_LINE(162)
											tmp27 = (int)255;
										}
										else{
											HX_STACK_LINE(162)
											bool tmp28 = (Value < (int)0);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(162)
											if ((tmp28)){
												HX_STACK_LINE(162)
												tmp27 = (int)0;
											}
											else{
												HX_STACK_LINE(162)
												tmp27 = Value;
											}
										}
										HX_STACK_LINE(162)
										int tmp28 = (int(tmp27) << int((int)16));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(162)
										hx::OrEq(color,tmp28);
										HX_STACK_LINE(162)
										Value;
									}
									HX_STACK_LINE(162)
									Chroma;
								}
								HX_STACK_LINE(162)
								{
									HX_STACK_LINE(162)
									{
										HX_STACK_LINE(162)
										Float tmp24 = (match * (int)255);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(162)
										int tmp25 = ::Math_obj::round(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(162)
										int Value = tmp25;		HX_STACK_VAR(Value,"Value");
										HX_STACK_LINE(162)
										hx::AndEq(color,(int)-65281);
										HX_STACK_LINE(162)
										bool tmp26 = (Value > (int)255);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(162)
										int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(162)
										if ((tmp26)){
											HX_STACK_LINE(162)
											tmp27 = (int)255;
										}
										else{
											HX_STACK_LINE(162)
											bool tmp28 = (Value < (int)0);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(162)
											if ((tmp28)){
												HX_STACK_LINE(162)
												tmp27 = (int)0;
											}
											else{
												HX_STACK_LINE(162)
												tmp27 = Value;
											}
										}
										HX_STACK_LINE(162)
										int tmp28 = (int(tmp27) << int((int)8));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(162)
										hx::OrEq(color,tmp28);
										HX_STACK_LINE(162)
										Value;
									}
									HX_STACK_LINE(162)
									match;
								}
								HX_STACK_LINE(162)
								{
									HX_STACK_LINE(162)
									{
										HX_STACK_LINE(162)
										Float tmp24 = (mid * (int)255);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(162)
										int tmp25 = ::Math_obj::round(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(162)
										int Value = tmp25;		HX_STACK_VAR(Value,"Value");
										HX_STACK_LINE(162)
										hx::AndEq(color,(int)-256);
										HX_STACK_LINE(162)
										bool tmp26 = (Value > (int)255);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(162)
										int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(162)
										if ((tmp26)){
											HX_STACK_LINE(162)
											tmp27 = (int)255;
										}
										else{
											HX_STACK_LINE(162)
											bool tmp28 = (Value < (int)0);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(162)
											if ((tmp28)){
												HX_STACK_LINE(162)
												tmp27 = (int)0;
											}
											else{
												HX_STACK_LINE(162)
												tmp27 = Value;
											}
										}
										HX_STACK_LINE(162)
										hx::OrEq(color,tmp27);
										HX_STACK_LINE(162)
										Value;
									}
									HX_STACK_LINE(162)
									mid;
								}
								HX_STACK_LINE(162)
								{
									HX_STACK_LINE(162)
									{
										HX_STACK_LINE(162)
										Float tmp24 = (Alpha * (int)255);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(162)
										int tmp25 = ::Math_obj::round(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(162)
										int Value = tmp25;		HX_STACK_VAR(Value,"Value");
										HX_STACK_LINE(162)
										hx::AndEq(color,(int)16777215);
										HX_STACK_LINE(162)
										bool tmp26 = (Value > (int)255);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(162)
										int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(162)
										if ((tmp26)){
											HX_STACK_LINE(162)
											tmp27 = (int)255;
										}
										else{
											HX_STACK_LINE(162)
											bool tmp28 = (Value < (int)0);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(162)
											if ((tmp28)){
												HX_STACK_LINE(162)
												tmp27 = (int)0;
											}
											else{
												HX_STACK_LINE(162)
												tmp27 = Value;
											}
										}
										HX_STACK_LINE(162)
										int tmp28 = (int(tmp27) << int((int)24));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(162)
										hx::OrEq(color,tmp28);
										HX_STACK_LINE(162)
										Value;
									}
									HX_STACK_LINE(162)
									Alpha;
								}
								HX_STACK_LINE(162)
								tmp23 = color;
							}
							HX_STACK_LINE(162)
							tmp23;
						}
						;break;
					}
				}
				HX_STACK_LINE(162)
				tmp1 = color;
			}
		}
		HX_STACK_LINE(162)
		int tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(162)
		return tmp2;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxColor_Impl__obj,fromHSL,return )

Dynamic FlxColor_Impl__obj::fromString( ::String str){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","fromString",0x7279f720,"flixel.util._FlxColor.FlxColor_Impl_.fromString","flixel/util/FlxColor.hx",181,0x9335c333)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(182)
	Dynamic result = null();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(183)
	::String tmp = str;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(183)
	::String tmp1 = ::StringTools_obj::trim(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(183)
	str = tmp1;
	HX_STACK_LINE(185)
	::EReg tmp2 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::COLOR_REGEX;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(185)
	::String tmp3 = str;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(185)
	bool tmp4 = tmp2->match(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(185)
	if ((tmp4)){
		HX_STACK_LINE(187)
		::EReg tmp5 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::COLOR_REGEX;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(187)
		::String tmp6 = tmp5->matched((int)2);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(187)
		::String tmp7 = (HX_HCSTRING("0x","\x48","\x2a","\x00","\x00") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(187)
		::String hexColor = tmp7;		HX_STACK_VAR(hexColor,"hexColor");
		HX_STACK_LINE(188)
		::String tmp8 = hexColor;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(188)
		Dynamic tmp9 = ::Std_obj::parseInt(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(188)
		int tmp10 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(188)
		result = tmp10;
		HX_STACK_LINE(189)
		bool tmp11 = (hexColor.length == (int)8);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(189)
		if ((tmp11)){
			HX_STACK_LINE(191)
			{
				HX_STACK_LINE(191)
				Float tmp12 = (int)255;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(191)
				int tmp13 = ::Math_obj::round(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(191)
				int Value = tmp13;		HX_STACK_VAR(Value,"Value");
				HX_STACK_LINE(191)
				hx::AndEq(result,(int)16777215);
				HX_STACK_LINE(191)
				bool tmp14 = (Value > (int)255);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(191)
				int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(191)
				if ((tmp14)){
					HX_STACK_LINE(191)
					tmp15 = (int)255;
				}
				else{
					HX_STACK_LINE(191)
					bool tmp16 = (Value < (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(191)
					if ((tmp16)){
						HX_STACK_LINE(191)
						tmp15 = (int)0;
					}
					else{
						HX_STACK_LINE(191)
						tmp15 = Value;
					}
				}
				HX_STACK_LINE(191)
				int tmp16 = (int(tmp15) << int((int)24));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(191)
				hx::OrEq(result,tmp16);
				HX_STACK_LINE(191)
				Value;
			}
			HX_STACK_LINE(191)
			(int)1;
		}
	}
	else{
		HX_STACK_LINE(196)
		::String tmp5 = str.toUpperCase();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(196)
		str = tmp5;
		HX_STACK_LINE(197)
		::haxe::ds::StringMap tmp6 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::colorLookup;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(197)
		Dynamic tmp7 = tmp6->keys();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(197)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp7);  __it->hasNext(); ){
			::String key = __it->next();
			{
				HX_STACK_LINE(199)
				::String tmp8 = key.toUpperCase();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(199)
				::String tmp9 = str;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(199)
				bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(199)
				if ((tmp10)){
					HX_STACK_LINE(201)
					::haxe::ds::StringMap tmp11 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::colorLookup;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(201)
					::String tmp12 = key;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(201)
					Dynamic tmp13 = tmp11->get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(201)
					Dynamic tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(201)
					int tmp15 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(201)
					result = tmp15;
					HX_STACK_LINE(202)
					break;
				}
			}
;
		}
	}
	HX_STACK_LINE(207)
	Dynamic tmp5 = result;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(207)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,fromString,return )

Array< int > FlxColor_Impl__obj::getHSBColorWheel( hx::Null< int >  __o_Alpha){
int Alpha = __o_Alpha.Default(255);
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","getHSBColorWheel",0xaedeb29e,"flixel.util._FlxColor.FlxColor_Impl_.getHSBColorWheel","flixel/util/FlxColor.hx",218,0x9335c333)
	HX_STACK_ARG(Alpha,"Alpha")
{
		HX_STACK_LINE(218)
		Array< int > _g = Array_obj< int >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(218)
		{
			HX_STACK_LINE(218)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(218)
			while((true)){
				HX_STACK_LINE(218)
				bool tmp = (_g1 < (int)360);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(218)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(218)
				if ((tmp1)){
					HX_STACK_LINE(218)
					break;
				}
				HX_STACK_LINE(218)
				int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(218)
				int c = tmp2;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(218)
				int tmp3 = c;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(218)
				int tmp4 = Alpha;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(218)
				int tmp5 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromHSB(tmp3,((Float)1.0),((Float)1.0),tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(218)
				_g->push(tmp5);
			}
		}
		HX_STACK_LINE(218)
		return _g;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,getHSBColorWheel,return )

int FlxColor_Impl__obj::interpolate( int Color1,int Color2,hx::Null< Float >  __o_Factor){
Float Factor = __o_Factor.Default(((Float)0.5));
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","interpolate",0x463d27dc,"flixel.util._FlxColor.FlxColor_Impl_.interpolate","flixel/util/FlxColor.hx",230,0x9335c333)
	HX_STACK_ARG(Color1,"Color1")
	HX_STACK_ARG(Color2,"Color2")
	HX_STACK_ARG(Factor,"Factor")
{
		HX_STACK_LINE(231)
		int tmp = (int(Color2) >> int((int)16));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(231)
		int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(231)
		int tmp2 = (int(Color1) >> int((int)16));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(231)
		int tmp3 = (int(tmp2) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(231)
		int tmp4 = (tmp1 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(231)
		Float tmp5 = Factor;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(231)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(231)
		int tmp7 = (int(Color1) >> int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(231)
		int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(231)
		Float tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(231)
		int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(231)
		int r = tmp10;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(232)
		int tmp11 = (int(Color2) >> int((int)8));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(232)
		int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(232)
		int tmp13 = (int(Color1) >> int((int)8));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(232)
		int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(232)
		int tmp15 = (tmp12 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(232)
		Float tmp16 = Factor;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(232)
		Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(232)
		int tmp18 = (int(Color1) >> int((int)8));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(232)
		int tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(232)
		Float tmp20 = (tmp17 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(232)
		int tmp21 = ::Std_obj::_int(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(232)
		int g = tmp21;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(233)
		int tmp22 = (int(Color2) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(233)
		int tmp23 = (int(Color1) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(233)
		int tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(233)
		Float tmp25 = Factor;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(233)
		Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(233)
		int tmp27 = (int(Color1) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(233)
		Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(233)
		int tmp29 = ::Std_obj::_int(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(233)
		int b = tmp29;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(234)
		int tmp30 = (int(Color2) >> int((int)24));		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(234)
		int tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(234)
		int tmp32 = (int(Color1) >> int((int)24));		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(234)
		int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(234)
		int tmp34 = (tmp31 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(234)
		Float tmp35 = Factor;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(234)
		Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(234)
		int tmp37 = (int(Color1) >> int((int)24));		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(234)
		int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(234)
		Float tmp39 = (tmp36 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(234)
		int tmp40 = ::Std_obj::_int(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(234)
		int a = tmp40;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(236)
		int tmp41;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(236)
		{
			HX_STACK_LINE(236)
			int tmp42 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(236)
			int color = tmp42;		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(236)
			int tmp43;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(236)
			{
				HX_STACK_LINE(236)
				{
					HX_STACK_LINE(236)
					hx::AndEq(color,(int)-16711681);
					HX_STACK_LINE(236)
					bool tmp44 = (r > (int)255);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(236)
					int tmp45;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(236)
					if ((tmp44)){
						HX_STACK_LINE(236)
						tmp45 = (int)255;
					}
					else{
						HX_STACK_LINE(236)
						bool tmp46 = (r < (int)0);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(236)
						if ((tmp46)){
							HX_STACK_LINE(236)
							tmp45 = (int)0;
						}
						else{
							HX_STACK_LINE(236)
							tmp45 = r;
						}
					}
					HX_STACK_LINE(236)
					int tmp46 = (int(tmp45) << int((int)16));		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(236)
					hx::OrEq(color,tmp46);
					HX_STACK_LINE(236)
					r;
				}
				HX_STACK_LINE(236)
				{
					HX_STACK_LINE(236)
					hx::AndEq(color,(int)-65281);
					HX_STACK_LINE(236)
					bool tmp44 = (g > (int)255);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(236)
					int tmp45;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(236)
					if ((tmp44)){
						HX_STACK_LINE(236)
						tmp45 = (int)255;
					}
					else{
						HX_STACK_LINE(236)
						bool tmp46 = (g < (int)0);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(236)
						if ((tmp46)){
							HX_STACK_LINE(236)
							tmp45 = (int)0;
						}
						else{
							HX_STACK_LINE(236)
							tmp45 = g;
						}
					}
					HX_STACK_LINE(236)
					int tmp46 = (int(tmp45) << int((int)8));		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(236)
					hx::OrEq(color,tmp46);
					HX_STACK_LINE(236)
					g;
				}
				HX_STACK_LINE(236)
				{
					HX_STACK_LINE(236)
					hx::AndEq(color,(int)-256);
					HX_STACK_LINE(236)
					bool tmp44 = (b > (int)255);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(236)
					int tmp45;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(236)
					if ((tmp44)){
						HX_STACK_LINE(236)
						tmp45 = (int)255;
					}
					else{
						HX_STACK_LINE(236)
						bool tmp46 = (b < (int)0);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(236)
						if ((tmp46)){
							HX_STACK_LINE(236)
							tmp45 = (int)0;
						}
						else{
							HX_STACK_LINE(236)
							tmp45 = b;
						}
					}
					HX_STACK_LINE(236)
					hx::OrEq(color,tmp45);
					HX_STACK_LINE(236)
					b;
				}
				HX_STACK_LINE(236)
				{
					HX_STACK_LINE(236)
					hx::AndEq(color,(int)16777215);
					HX_STACK_LINE(236)
					bool tmp44 = (a > (int)255);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(236)
					int tmp45;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(236)
					if ((tmp44)){
						HX_STACK_LINE(236)
						tmp45 = (int)255;
					}
					else{
						HX_STACK_LINE(236)
						bool tmp46 = (a < (int)0);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(236)
						if ((tmp46)){
							HX_STACK_LINE(236)
							tmp45 = (int)0;
						}
						else{
							HX_STACK_LINE(236)
							tmp45 = a;
						}
					}
					HX_STACK_LINE(236)
					int tmp46 = (int(tmp45) << int((int)24));		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(236)
					hx::OrEq(color,tmp46);
					HX_STACK_LINE(236)
					a;
				}
				HX_STACK_LINE(236)
				tmp43 = color;
			}
			HX_STACK_LINE(236)
			tmp41 = tmp43;
		}
		HX_STACK_LINE(236)
		return tmp41;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxColor_Impl__obj,interpolate,return )

Array< int > FlxColor_Impl__obj::gradient( int Color1,int Color2,int Steps,Dynamic Ease){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","gradient",0x6325b7f5,"flixel.util._FlxColor.FlxColor_Impl_.gradient","flixel/util/FlxColor.hx",249,0x9335c333)
	HX_STACK_ARG(Color1,"Color1")
	HX_STACK_ARG(Color2,"Color2")
	HX_STACK_ARG(Steps,"Steps")
	HX_STACK_ARG(Ease,"Ease")
	HX_STACK_LINE(250)
	Array< int > output = Array_obj< int >::__new();		HX_STACK_VAR(output,"output");
	HX_STACK_LINE(252)
	bool tmp = (Ease == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(252)
	if ((tmp)){

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_1)
		int __ArgCount() const { return 1; }
		Float run(Float t){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","flixel/util/FlxColor.hx",255,0x9335c333)
			HX_STACK_ARG(t,"t")
			{
				HX_STACK_LINE(256)
				Float tmp1 = t;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(256)
				return tmp1;
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(254)
		Ease =  Dynamic(new _Function_2_1());
	}
	HX_STACK_LINE(260)
	{
		HX_STACK_LINE(260)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(260)
		while((true)){
			HX_STACK_LINE(260)
			bool tmp1 = (_g < Steps);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(260)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(260)
			if ((tmp2)){
				HX_STACK_LINE(260)
				break;
			}
			HX_STACK_LINE(260)
			int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(260)
			int step = tmp3;		HX_STACK_VAR(step,"step");
			HX_STACK_LINE(262)
			int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(262)
			{
				HX_STACK_LINE(262)
				int tmp5 = step;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(262)
				int tmp6 = (Steps - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(262)
				Float tmp7 = (Float(tmp5) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(262)
				Float tmp8 = Ease(tmp7).Cast< Float >();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(262)
				Float Factor = tmp8;		HX_STACK_VAR(Factor,"Factor");
				HX_STACK_LINE(262)
				int tmp9 = (int(Color2) >> int((int)16));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(262)
				int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(262)
				int tmp11 = (int(Color1) >> int((int)16));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(262)
				int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(262)
				int tmp13 = (tmp10 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(262)
				Float tmp14 = Factor;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(262)
				Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(262)
				int tmp16 = (int(Color1) >> int((int)16));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(262)
				int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(262)
				Float tmp18 = (tmp15 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(262)
				int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(262)
				int r = tmp19;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(262)
				int tmp20 = (int(Color2) >> int((int)8));		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(262)
				int tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(262)
				int tmp22 = (int(Color1) >> int((int)8));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(262)
				int tmp23 = (int(tmp22) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(262)
				int tmp24 = (tmp21 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(262)
				Float tmp25 = Factor;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(262)
				Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(262)
				int tmp27 = (int(Color1) >> int((int)8));		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(262)
				int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(262)
				Float tmp29 = (tmp26 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(262)
				int tmp30 = ::Std_obj::_int(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(262)
				int g = tmp30;		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(262)
				int tmp31 = (int(Color2) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(262)
				int tmp32 = (int(Color1) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(262)
				int tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(262)
				Float tmp34 = Factor;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(262)
				Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(262)
				int tmp36 = (int(Color1) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(262)
				Float tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(262)
				int tmp38 = ::Std_obj::_int(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(262)
				int b = tmp38;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(262)
				int tmp39 = (int(Color2) >> int((int)24));		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(262)
				int tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(262)
				int tmp41 = (int(Color1) >> int((int)24));		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(262)
				int tmp42 = (int(tmp41) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(262)
				int tmp43 = (tmp40 - tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(262)
				Float tmp44 = Factor;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(262)
				Float tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(262)
				int tmp46 = (int(Color1) >> int((int)24));		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(262)
				int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(262)
				Float tmp48 = (tmp45 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(262)
				int tmp49 = ::Std_obj::_int(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(262)
				int a = tmp49;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(262)
				{
					HX_STACK_LINE(262)
					int tmp50 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(262)
					int color = tmp50;		HX_STACK_VAR(color,"color");
					HX_STACK_LINE(262)
					int tmp51;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(262)
					{
						HX_STACK_LINE(262)
						{
							HX_STACK_LINE(262)
							hx::AndEq(color,(int)-16711681);
							HX_STACK_LINE(262)
							bool tmp52 = (r > (int)255);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(262)
							int tmp53;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(262)
							if ((tmp52)){
								HX_STACK_LINE(262)
								tmp53 = (int)255;
							}
							else{
								HX_STACK_LINE(262)
								bool tmp54 = (r < (int)0);		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(262)
								if ((tmp54)){
									HX_STACK_LINE(262)
									tmp53 = (int)0;
								}
								else{
									HX_STACK_LINE(262)
									tmp53 = r;
								}
							}
							HX_STACK_LINE(262)
							int tmp54 = (int(tmp53) << int((int)16));		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(262)
							hx::OrEq(color,tmp54);
							HX_STACK_LINE(262)
							r;
						}
						HX_STACK_LINE(262)
						{
							HX_STACK_LINE(262)
							hx::AndEq(color,(int)-65281);
							HX_STACK_LINE(262)
							bool tmp52 = (g > (int)255);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(262)
							int tmp53;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(262)
							if ((tmp52)){
								HX_STACK_LINE(262)
								tmp53 = (int)255;
							}
							else{
								HX_STACK_LINE(262)
								bool tmp54 = (g < (int)0);		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(262)
								if ((tmp54)){
									HX_STACK_LINE(262)
									tmp53 = (int)0;
								}
								else{
									HX_STACK_LINE(262)
									tmp53 = g;
								}
							}
							HX_STACK_LINE(262)
							int tmp54 = (int(tmp53) << int((int)8));		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(262)
							hx::OrEq(color,tmp54);
							HX_STACK_LINE(262)
							g;
						}
						HX_STACK_LINE(262)
						{
							HX_STACK_LINE(262)
							hx::AndEq(color,(int)-256);
							HX_STACK_LINE(262)
							bool tmp52 = (b > (int)255);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(262)
							int tmp53;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(262)
							if ((tmp52)){
								HX_STACK_LINE(262)
								tmp53 = (int)255;
							}
							else{
								HX_STACK_LINE(262)
								bool tmp54 = (b < (int)0);		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(262)
								if ((tmp54)){
									HX_STACK_LINE(262)
									tmp53 = (int)0;
								}
								else{
									HX_STACK_LINE(262)
									tmp53 = b;
								}
							}
							HX_STACK_LINE(262)
							hx::OrEq(color,tmp53);
							HX_STACK_LINE(262)
							b;
						}
						HX_STACK_LINE(262)
						{
							HX_STACK_LINE(262)
							hx::AndEq(color,(int)16777215);
							HX_STACK_LINE(262)
							bool tmp52 = (a > (int)255);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(262)
							int tmp53;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(262)
							if ((tmp52)){
								HX_STACK_LINE(262)
								tmp53 = (int)255;
							}
							else{
								HX_STACK_LINE(262)
								bool tmp54 = (a < (int)0);		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(262)
								if ((tmp54)){
									HX_STACK_LINE(262)
									tmp53 = (int)0;
								}
								else{
									HX_STACK_LINE(262)
									tmp53 = a;
								}
							}
							HX_STACK_LINE(262)
							int tmp54 = (int(tmp53) << int((int)24));		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(262)
							hx::OrEq(color,tmp54);
							HX_STACK_LINE(262)
							a;
						}
						HX_STACK_LINE(262)
						tmp51 = color;
					}
					HX_STACK_LINE(262)
					tmp4 = tmp51;
				}
			}
			HX_STACK_LINE(262)
			output[step] = tmp4;
		}
	}
	HX_STACK_LINE(265)
	return output;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxColor_Impl__obj,gradient,return )

int FlxColor_Impl__obj::multiply( int lhs,int rhs){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","multiply",0xd3736029,"flixel.util._FlxColor.FlxColor_Impl_.multiply","flixel/util/FlxColor.hx",273,0x9335c333)
	HX_STACK_ARG(lhs,"lhs")
	HX_STACK_ARG(rhs,"rhs")
	HX_STACK_LINE(274)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(274)
	{
		HX_STACK_LINE(274)
		int tmp1 = (int(lhs) >> int((int)16));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(274)
		int tmp2 = (int(tmp1) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(274)
		Float tmp3 = (Float(tmp2) / Float((int)255));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(274)
		int tmp4 = (int(rhs) >> int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(274)
		int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(274)
		Float tmp6 = (Float(tmp5) / Float((int)255));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(274)
		Float tmp7 = (tmp3 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(274)
		Float Red = tmp7;		HX_STACK_VAR(Red,"Red");
		HX_STACK_LINE(274)
		int tmp8 = (int(lhs) >> int((int)8));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(274)
		int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(274)
		Float tmp10 = (Float(tmp9) / Float((int)255));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(274)
		int tmp11 = (int(rhs) >> int((int)8));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(274)
		int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(274)
		Float tmp13 = (Float(tmp12) / Float((int)255));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(274)
		Float tmp14 = (tmp10 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(274)
		Float Green = tmp14;		HX_STACK_VAR(Green,"Green");
		HX_STACK_LINE(274)
		int tmp15 = (int(lhs) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(274)
		Float tmp16 = (Float(tmp15) / Float((int)255));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(274)
		int tmp17 = (int(rhs) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(274)
		Float tmp18 = (Float(tmp17) / Float((int)255));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(274)
		Float tmp19 = (tmp16 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(274)
		Float Blue = tmp19;		HX_STACK_VAR(Blue,"Blue");
		HX_STACK_LINE(274)
		Float Alpha = (int)1;		HX_STACK_VAR(Alpha,"Alpha");
		HX_STACK_LINE(274)
		int tmp20 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(274)
		int color = tmp20;		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(274)
		int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(274)
		{
			HX_STACK_LINE(274)
			{
				HX_STACK_LINE(274)
				{
					HX_STACK_LINE(274)
					Float tmp22 = (Red * (int)255);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(274)
					int tmp23 = ::Math_obj::round(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(274)
					int Value = tmp23;		HX_STACK_VAR(Value,"Value");
					HX_STACK_LINE(274)
					hx::AndEq(color,(int)-16711681);
					HX_STACK_LINE(274)
					bool tmp24 = (Value > (int)255);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(274)
					int tmp25;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(274)
					if ((tmp24)){
						HX_STACK_LINE(274)
						tmp25 = (int)255;
					}
					else{
						HX_STACK_LINE(274)
						bool tmp26 = (Value < (int)0);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(274)
						if ((tmp26)){
							HX_STACK_LINE(274)
							tmp25 = (int)0;
						}
						else{
							HX_STACK_LINE(274)
							tmp25 = Value;
						}
					}
					HX_STACK_LINE(274)
					int tmp26 = (int(tmp25) << int((int)16));		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(274)
					hx::OrEq(color,tmp26);
					HX_STACK_LINE(274)
					Value;
				}
				HX_STACK_LINE(274)
				Red;
			}
			HX_STACK_LINE(274)
			{
				HX_STACK_LINE(274)
				{
					HX_STACK_LINE(274)
					Float tmp22 = (Green * (int)255);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(274)
					int tmp23 = ::Math_obj::round(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(274)
					int Value = tmp23;		HX_STACK_VAR(Value,"Value");
					HX_STACK_LINE(274)
					hx::AndEq(color,(int)-65281);
					HX_STACK_LINE(274)
					bool tmp24 = (Value > (int)255);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(274)
					int tmp25;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(274)
					if ((tmp24)){
						HX_STACK_LINE(274)
						tmp25 = (int)255;
					}
					else{
						HX_STACK_LINE(274)
						bool tmp26 = (Value < (int)0);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(274)
						if ((tmp26)){
							HX_STACK_LINE(274)
							tmp25 = (int)0;
						}
						else{
							HX_STACK_LINE(274)
							tmp25 = Value;
						}
					}
					HX_STACK_LINE(274)
					int tmp26 = (int(tmp25) << int((int)8));		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(274)
					hx::OrEq(color,tmp26);
					HX_STACK_LINE(274)
					Value;
				}
				HX_STACK_LINE(274)
				Green;
			}
			HX_STACK_LINE(274)
			{
				HX_STACK_LINE(274)
				{
					HX_STACK_LINE(274)
					Float tmp22 = (Blue * (int)255);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(274)
					int tmp23 = ::Math_obj::round(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(274)
					int Value = tmp23;		HX_STACK_VAR(Value,"Value");
					HX_STACK_LINE(274)
					hx::AndEq(color,(int)-256);
					HX_STACK_LINE(274)
					bool tmp24 = (Value > (int)255);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(274)
					int tmp25;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(274)
					if ((tmp24)){
						HX_STACK_LINE(274)
						tmp25 = (int)255;
					}
					else{
						HX_STACK_LINE(274)
						bool tmp26 = (Value < (int)0);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(274)
						if ((tmp26)){
							HX_STACK_LINE(274)
							tmp25 = (int)0;
						}
						else{
							HX_STACK_LINE(274)
							tmp25 = Value;
						}
					}
					HX_STACK_LINE(274)
					hx::OrEq(color,tmp25);
					HX_STACK_LINE(274)
					Value;
				}
				HX_STACK_LINE(274)
				Blue;
			}
			HX_STACK_LINE(274)
			{
				HX_STACK_LINE(274)
				{
					HX_STACK_LINE(274)
					Float tmp22 = (Alpha * (int)255);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(274)
					int tmp23 = ::Math_obj::round(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(274)
					int Value = tmp23;		HX_STACK_VAR(Value,"Value");
					HX_STACK_LINE(274)
					hx::AndEq(color,(int)16777215);
					HX_STACK_LINE(274)
					bool tmp24 = (Value > (int)255);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(274)
					int tmp25;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(274)
					if ((tmp24)){
						HX_STACK_LINE(274)
						tmp25 = (int)255;
					}
					else{
						HX_STACK_LINE(274)
						bool tmp26 = (Value < (int)0);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(274)
						if ((tmp26)){
							HX_STACK_LINE(274)
							tmp25 = (int)0;
						}
						else{
							HX_STACK_LINE(274)
							tmp25 = Value;
						}
					}
					HX_STACK_LINE(274)
					int tmp26 = (int(tmp25) << int((int)24));		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(274)
					hx::OrEq(color,tmp26);
					HX_STACK_LINE(274)
					Value;
				}
				HX_STACK_LINE(274)
				Alpha;
			}
			HX_STACK_LINE(274)
			tmp21 = color;
		}
		HX_STACK_LINE(274)
		tmp = tmp21;
	}
	HX_STACK_LINE(274)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,multiply,return )

int FlxColor_Impl__obj::add( int lhs,int rhs){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","add",0x199e323c,"flixel.util._FlxColor.FlxColor_Impl_.add","flixel/util/FlxColor.hx",282,0x9335c333)
	HX_STACK_ARG(lhs,"lhs")
	HX_STACK_ARG(rhs,"rhs")
	HX_STACK_LINE(283)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(283)
	{
		HX_STACK_LINE(283)
		int tmp1 = (int(lhs) >> int((int)16));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(283)
		int tmp2 = (int(tmp1) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(283)
		int tmp3 = (int(rhs) >> int((int)16));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(283)
		int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(283)
		int tmp5 = (tmp2 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(283)
		int Red = tmp5;		HX_STACK_VAR(Red,"Red");
		HX_STACK_LINE(283)
		int tmp6 = (int(lhs) >> int((int)8));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(283)
		int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(283)
		int tmp8 = (int(rhs) >> int((int)8));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(283)
		int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(283)
		int tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(283)
		int Green = tmp10;		HX_STACK_VAR(Green,"Green");
		HX_STACK_LINE(283)
		int tmp11 = (int(lhs) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(283)
		int tmp12 = (int(rhs) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(283)
		int tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(283)
		int Blue = tmp13;		HX_STACK_VAR(Blue,"Blue");
		HX_STACK_LINE(283)
		int Alpha = (int)255;		HX_STACK_VAR(Alpha,"Alpha");
		HX_STACK_LINE(283)
		int tmp14 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(283)
		int color = tmp14;		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(283)
		int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(283)
		{
			HX_STACK_LINE(283)
			{
				HX_STACK_LINE(283)
				hx::AndEq(color,(int)-16711681);
				HX_STACK_LINE(283)
				bool tmp16 = (Red > (int)255);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(283)
				int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(283)
				if ((tmp16)){
					HX_STACK_LINE(283)
					tmp17 = (int)255;
				}
				else{
					HX_STACK_LINE(283)
					bool tmp18 = (Red < (int)0);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(283)
					if ((tmp18)){
						HX_STACK_LINE(283)
						tmp17 = (int)0;
					}
					else{
						HX_STACK_LINE(283)
						tmp17 = Red;
					}
				}
				HX_STACK_LINE(283)
				int tmp18 = (int(tmp17) << int((int)16));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(283)
				hx::OrEq(color,tmp18);
				HX_STACK_LINE(283)
				Red;
			}
			HX_STACK_LINE(283)
			{
				HX_STACK_LINE(283)
				hx::AndEq(color,(int)-65281);
				HX_STACK_LINE(283)
				bool tmp16 = (Green > (int)255);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(283)
				int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(283)
				if ((tmp16)){
					HX_STACK_LINE(283)
					tmp17 = (int)255;
				}
				else{
					HX_STACK_LINE(283)
					bool tmp18 = (Green < (int)0);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(283)
					if ((tmp18)){
						HX_STACK_LINE(283)
						tmp17 = (int)0;
					}
					else{
						HX_STACK_LINE(283)
						tmp17 = Green;
					}
				}
				HX_STACK_LINE(283)
				int tmp18 = (int(tmp17) << int((int)8));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(283)
				hx::OrEq(color,tmp18);
				HX_STACK_LINE(283)
				Green;
			}
			HX_STACK_LINE(283)
			{
				HX_STACK_LINE(283)
				hx::AndEq(color,(int)-256);
				HX_STACK_LINE(283)
				bool tmp16 = (Blue > (int)255);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(283)
				int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(283)
				if ((tmp16)){
					HX_STACK_LINE(283)
					tmp17 = (int)255;
				}
				else{
					HX_STACK_LINE(283)
					bool tmp18 = (Blue < (int)0);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(283)
					if ((tmp18)){
						HX_STACK_LINE(283)
						tmp17 = (int)0;
					}
					else{
						HX_STACK_LINE(283)
						tmp17 = Blue;
					}
				}
				HX_STACK_LINE(283)
				hx::OrEq(color,tmp17);
				HX_STACK_LINE(283)
				Blue;
			}
			HX_STACK_LINE(283)
			{
				HX_STACK_LINE(283)
				hx::AndEq(color,(int)16777215);
				HX_STACK_LINE(283)
				bool tmp16 = (Alpha > (int)255);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(283)
				int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(283)
				if ((tmp16)){
					HX_STACK_LINE(283)
					tmp17 = (int)255;
				}
				else{
					HX_STACK_LINE(283)
					bool tmp18 = (Alpha < (int)0);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(283)
					if ((tmp18)){
						HX_STACK_LINE(283)
						tmp17 = (int)0;
					}
					else{
						HX_STACK_LINE(283)
						tmp17 = Alpha;
					}
				}
				HX_STACK_LINE(283)
				int tmp18 = (int(tmp17) << int((int)24));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(283)
				hx::OrEq(color,tmp18);
				HX_STACK_LINE(283)
				Alpha;
			}
			HX_STACK_LINE(283)
			tmp15 = color;
		}
		HX_STACK_LINE(283)
		tmp = tmp15;
	}
	HX_STACK_LINE(283)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,add,return )

int FlxColor_Impl__obj::subtract( int lhs,int rhs){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","subtract",0x30f7f319,"flixel.util._FlxColor.FlxColor_Impl_.subtract","flixel/util/FlxColor.hx",291,0x9335c333)
	HX_STACK_ARG(lhs,"lhs")
	HX_STACK_ARG(rhs,"rhs")
	HX_STACK_LINE(292)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(292)
	{
		HX_STACK_LINE(292)
		int tmp1 = (int(lhs) >> int((int)16));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(292)
		int tmp2 = (int(tmp1) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(292)
		int tmp3 = (int(rhs) >> int((int)16));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(292)
		int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(292)
		int tmp5 = (tmp2 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(292)
		int Red = tmp5;		HX_STACK_VAR(Red,"Red");
		HX_STACK_LINE(292)
		int tmp6 = (int(lhs) >> int((int)8));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(292)
		int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(292)
		int tmp8 = (int(rhs) >> int((int)8));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(292)
		int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(292)
		int tmp10 = (tmp7 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(292)
		int Green = tmp10;		HX_STACK_VAR(Green,"Green");
		HX_STACK_LINE(292)
		int tmp11 = (int(lhs) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(292)
		int tmp12 = (int(rhs) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(292)
		int tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(292)
		int Blue = tmp13;		HX_STACK_VAR(Blue,"Blue");
		HX_STACK_LINE(292)
		int Alpha = (int)255;		HX_STACK_VAR(Alpha,"Alpha");
		HX_STACK_LINE(292)
		int tmp14 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(292)
		int color = tmp14;		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(292)
		int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(292)
		{
			HX_STACK_LINE(292)
			{
				HX_STACK_LINE(292)
				hx::AndEq(color,(int)-16711681);
				HX_STACK_LINE(292)
				bool tmp16 = (Red > (int)255);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(292)
				int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(292)
				if ((tmp16)){
					HX_STACK_LINE(292)
					tmp17 = (int)255;
				}
				else{
					HX_STACK_LINE(292)
					bool tmp18 = (Red < (int)0);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(292)
					if ((tmp18)){
						HX_STACK_LINE(292)
						tmp17 = (int)0;
					}
					else{
						HX_STACK_LINE(292)
						tmp17 = Red;
					}
				}
				HX_STACK_LINE(292)
				int tmp18 = (int(tmp17) << int((int)16));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(292)
				hx::OrEq(color,tmp18);
				HX_STACK_LINE(292)
				Red;
			}
			HX_STACK_LINE(292)
			{
				HX_STACK_LINE(292)
				hx::AndEq(color,(int)-65281);
				HX_STACK_LINE(292)
				bool tmp16 = (Green > (int)255);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(292)
				int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(292)
				if ((tmp16)){
					HX_STACK_LINE(292)
					tmp17 = (int)255;
				}
				else{
					HX_STACK_LINE(292)
					bool tmp18 = (Green < (int)0);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(292)
					if ((tmp18)){
						HX_STACK_LINE(292)
						tmp17 = (int)0;
					}
					else{
						HX_STACK_LINE(292)
						tmp17 = Green;
					}
				}
				HX_STACK_LINE(292)
				int tmp18 = (int(tmp17) << int((int)8));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(292)
				hx::OrEq(color,tmp18);
				HX_STACK_LINE(292)
				Green;
			}
			HX_STACK_LINE(292)
			{
				HX_STACK_LINE(292)
				hx::AndEq(color,(int)-256);
				HX_STACK_LINE(292)
				bool tmp16 = (Blue > (int)255);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(292)
				int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(292)
				if ((tmp16)){
					HX_STACK_LINE(292)
					tmp17 = (int)255;
				}
				else{
					HX_STACK_LINE(292)
					bool tmp18 = (Blue < (int)0);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(292)
					if ((tmp18)){
						HX_STACK_LINE(292)
						tmp17 = (int)0;
					}
					else{
						HX_STACK_LINE(292)
						tmp17 = Blue;
					}
				}
				HX_STACK_LINE(292)
				hx::OrEq(color,tmp17);
				HX_STACK_LINE(292)
				Blue;
			}
			HX_STACK_LINE(292)
			{
				HX_STACK_LINE(292)
				hx::AndEq(color,(int)16777215);
				HX_STACK_LINE(292)
				bool tmp16 = (Alpha > (int)255);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(292)
				int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(292)
				if ((tmp16)){
					HX_STACK_LINE(292)
					tmp17 = (int)255;
				}
				else{
					HX_STACK_LINE(292)
					bool tmp18 = (Alpha < (int)0);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(292)
					if ((tmp18)){
						HX_STACK_LINE(292)
						tmp17 = (int)0;
					}
					else{
						HX_STACK_LINE(292)
						tmp17 = Alpha;
					}
				}
				HX_STACK_LINE(292)
				int tmp18 = (int(tmp17) << int((int)24));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(292)
				hx::OrEq(color,tmp18);
				HX_STACK_LINE(292)
				Alpha;
			}
			HX_STACK_LINE(292)
			tmp15 = color;
		}
		HX_STACK_LINE(292)
		tmp = tmp15;
	}
	HX_STACK_LINE(292)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,subtract,return )

int FlxColor_Impl__obj::getComplementHarmony( int this1){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","getComplementHarmony",0xe82411cf,"flixel.util._FlxColor.FlxColor_Impl_.getComplementHarmony","flixel/util/FlxColor.hx",302,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(303)
	int tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(303)
	Float tmp1 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::get_hue(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(303)
	int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(303)
	int tmp3 = (tmp2 + (int)180);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(303)
	int tmp4 = ::flixel::math::FlxMath_obj::wrap(tmp3,(int)0,(int)350);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(303)
	int tmp5 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(303)
	int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(303)
	Float tmp7 = (Float(tmp6) / Float((int)255));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(303)
	int tmp8 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(303)
	int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(303)
	Float tmp10 = (Float(tmp9) / Float((int)255));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(303)
	int tmp11 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(303)
	Float tmp12 = (Float(tmp11) / Float((int)255));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(303)
	Float tmp13 = ::Math_obj::max(tmp10,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(303)
	Float tmp14 = ::Math_obj::max(tmp7,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(303)
	int tmp15 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(303)
	int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(303)
	Float tmp17 = (Float(tmp16) / Float((int)255));		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(303)
	int tmp18 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(303)
	int tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(303)
	Float tmp20 = (Float(tmp19) / Float((int)255));		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(303)
	int tmp21 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(303)
	Float tmp22 = (Float(tmp21) / Float((int)255));		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(303)
	Float tmp23 = ::Math_obj::max(tmp20,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(303)
	Float tmp24 = ::Math_obj::max(tmp17,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(303)
	int tmp25 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(303)
	int tmp26 = (int(tmp25) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(303)
	Float tmp27 = (Float(tmp26) / Float((int)255));		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(303)
	int tmp28 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(303)
	int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(303)
	Float tmp30 = (Float(tmp29) / Float((int)255));		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(303)
	int tmp31 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(303)
	Float tmp32 = (Float(tmp31) / Float((int)255));		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(303)
	Float tmp33 = ::Math_obj::min(tmp30,tmp32);		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(303)
	Float tmp34 = ::Math_obj::min(tmp27,tmp33);		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(303)
	Float tmp35 = (tmp24 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(303)
	int tmp36 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(303)
	int tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(303)
	Float tmp38 = (Float(tmp37) / Float((int)255));		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(303)
	int tmp39 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(303)
	int tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(303)
	Float tmp41 = (Float(tmp40) / Float((int)255));		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(303)
	int tmp42 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(303)
	Float tmp43 = (Float(tmp42) / Float((int)255));		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(303)
	Float tmp44 = ::Math_obj::max(tmp41,tmp43);		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(303)
	Float tmp45 = ::Math_obj::max(tmp38,tmp44);		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(303)
	Float tmp46 = (Float(tmp35) / Float(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(303)
	int tmp47 = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(303)
	int tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(303)
	Float tmp49 = (Float(tmp48) / Float((int)255));		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(303)
	int tmp50 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromHSB(tmp4,tmp14,tmp46,tmp49);		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(303)
	return tmp50;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,getComplementHarmony,return )

Dynamic FlxColor_Impl__obj::getAnalogousHarmony( int this1,hx::Null< int >  __o_Threshold){
int Threshold = __o_Threshold.Default(30);
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","getAnalogousHarmony",0x6a6ddffa,"flixel.util._FlxColor.FlxColor_Impl_.getAnalogousHarmony","flixel/util/FlxColor.hx",314,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(Threshold,"Threshold")
{
		HX_STACK_LINE(315)
		int tmp = this1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(315)
		Float tmp1 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::get_hue(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(315)
		int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(315)
		int tmp3 = Threshold;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(315)
		int tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(315)
		int tmp5 = ::flixel::math::FlxMath_obj::wrap(tmp4,(int)0,(int)350);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(315)
		int tmp6 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(315)
		int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(315)
		Float tmp8 = (Float(tmp7) / Float((int)255));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(315)
		int tmp9 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(315)
		int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(315)
		Float tmp11 = (Float(tmp10) / Float((int)255));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(315)
		int tmp12 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(315)
		Float tmp13 = (Float(tmp12) / Float((int)255));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(315)
		Float tmp14 = ::Math_obj::max(tmp11,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(315)
		Float tmp15 = ::Math_obj::max(tmp8,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(315)
		int tmp16 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(315)
		int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(315)
		Float tmp18 = (Float(tmp17) / Float((int)255));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(315)
		int tmp19 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(315)
		int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(315)
		Float tmp21 = (Float(tmp20) / Float((int)255));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(315)
		int tmp22 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(315)
		Float tmp23 = (Float(tmp22) / Float((int)255));		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(315)
		Float tmp24 = ::Math_obj::min(tmp21,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(315)
		Float tmp25 = ::Math_obj::min(tmp18,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(315)
		Float tmp26 = (tmp15 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(315)
		int tmp27 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(315)
		int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(315)
		Float tmp29 = (Float(tmp28) / Float((int)255));		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(315)
		int tmp30 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(315)
		int tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(315)
		Float tmp32 = (Float(tmp31) / Float((int)255));		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(315)
		int tmp33 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(315)
		Float tmp34 = (Float(tmp33) / Float((int)255));		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(315)
		Float tmp35 = ::Math_obj::max(tmp32,tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(315)
		Float tmp36 = ::Math_obj::max(tmp29,tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(315)
		Float tmp37 = (Float(tmp26) / Float(tmp36));		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(315)
		int tmp38 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(315)
		int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(315)
		Float tmp40 = (Float(tmp39) / Float((int)255));		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(315)
		int tmp41 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(315)
		int tmp42 = (int(tmp41) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(315)
		Float tmp43 = (Float(tmp42) / Float((int)255));		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(315)
		int tmp44 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(315)
		Float tmp45 = (Float(tmp44) / Float((int)255));		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(315)
		Float tmp46 = ::Math_obj::max(tmp43,tmp45);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(315)
		Float tmp47 = ::Math_obj::max(tmp40,tmp46);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(315)
		int tmp48 = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(315)
		int tmp49 = (int(tmp48) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(315)
		Float tmp50 = (Float(tmp49) / Float((int)255));		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(315)
		int tmp51 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromHSB(tmp5,tmp37,tmp47,tmp50);		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(315)
		int warmer = tmp51;		HX_STACK_VAR(warmer,"warmer");
		HX_STACK_LINE(316)
		int tmp52 = this1;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(316)
		Float tmp53 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::get_hue(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(316)
		int tmp54 = ::Std_obj::_int(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(316)
		int tmp55 = Threshold;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(316)
		int tmp56 = (tmp54 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(316)
		int tmp57 = ::flixel::math::FlxMath_obj::wrap(tmp56,(int)0,(int)350);		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(316)
		int tmp58 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(316)
		int tmp59 = (int(tmp58) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(316)
		Float tmp60 = (Float(tmp59) / Float((int)255));		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(316)
		int tmp61 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(316)
		int tmp62 = (int(tmp61) & int((int)255));		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(316)
		Float tmp63 = (Float(tmp62) / Float((int)255));		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(316)
		int tmp64 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(316)
		Float tmp65 = (Float(tmp64) / Float((int)255));		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(316)
		Float tmp66 = ::Math_obj::max(tmp63,tmp65);		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(316)
		Float tmp67 = ::Math_obj::max(tmp60,tmp66);		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(316)
		int tmp68 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(316)
		int tmp69 = (int(tmp68) & int((int)255));		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(316)
		Float tmp70 = (Float(tmp69) / Float((int)255));		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(316)
		int tmp71 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(316)
		int tmp72 = (int(tmp71) & int((int)255));		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(316)
		Float tmp73 = (Float(tmp72) / Float((int)255));		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(316)
		int tmp74 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(316)
		Float tmp75 = (Float(tmp74) / Float((int)255));		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(316)
		Float tmp76 = ::Math_obj::min(tmp73,tmp75);		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(316)
		Float tmp77 = ::Math_obj::min(tmp70,tmp76);		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(316)
		Float tmp78 = (tmp67 - tmp77);		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(316)
		int tmp79 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(316)
		int tmp80 = (int(tmp79) & int((int)255));		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(316)
		Float tmp81 = (Float(tmp80) / Float((int)255));		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(316)
		int tmp82 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(316)
		int tmp83 = (int(tmp82) & int((int)255));		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(316)
		Float tmp84 = (Float(tmp83) / Float((int)255));		HX_STACK_VAR(tmp84,"tmp84");
		HX_STACK_LINE(316)
		int tmp85 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp85,"tmp85");
		HX_STACK_LINE(316)
		Float tmp86 = (Float(tmp85) / Float((int)255));		HX_STACK_VAR(tmp86,"tmp86");
		HX_STACK_LINE(316)
		Float tmp87 = ::Math_obj::max(tmp84,tmp86);		HX_STACK_VAR(tmp87,"tmp87");
		HX_STACK_LINE(316)
		Float tmp88 = ::Math_obj::max(tmp81,tmp87);		HX_STACK_VAR(tmp88,"tmp88");
		HX_STACK_LINE(316)
		Float tmp89 = (Float(tmp78) / Float(tmp88));		HX_STACK_VAR(tmp89,"tmp89");
		HX_STACK_LINE(316)
		int tmp90 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp90,"tmp90");
		HX_STACK_LINE(316)
		int tmp91 = (int(tmp90) & int((int)255));		HX_STACK_VAR(tmp91,"tmp91");
		HX_STACK_LINE(316)
		Float tmp92 = (Float(tmp91) / Float((int)255));		HX_STACK_VAR(tmp92,"tmp92");
		HX_STACK_LINE(316)
		int tmp93 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp93,"tmp93");
		HX_STACK_LINE(316)
		int tmp94 = (int(tmp93) & int((int)255));		HX_STACK_VAR(tmp94,"tmp94");
		HX_STACK_LINE(316)
		Float tmp95 = (Float(tmp94) / Float((int)255));		HX_STACK_VAR(tmp95,"tmp95");
		HX_STACK_LINE(316)
		int tmp96 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp96,"tmp96");
		HX_STACK_LINE(316)
		Float tmp97 = (Float(tmp96) / Float((int)255));		HX_STACK_VAR(tmp97,"tmp97");
		HX_STACK_LINE(316)
		Float tmp98 = ::Math_obj::max(tmp95,tmp97);		HX_STACK_VAR(tmp98,"tmp98");
		HX_STACK_LINE(316)
		Float tmp99 = ::Math_obj::max(tmp92,tmp98);		HX_STACK_VAR(tmp99,"tmp99");
		HX_STACK_LINE(316)
		int tmp100 = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp100,"tmp100");
		HX_STACK_LINE(316)
		int tmp101 = (int(tmp100) & int((int)255));		HX_STACK_VAR(tmp101,"tmp101");
		HX_STACK_LINE(316)
		Float tmp102 = (Float(tmp101) / Float((int)255));		HX_STACK_VAR(tmp102,"tmp102");
		HX_STACK_LINE(316)
		int tmp103 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromHSB(tmp57,tmp89,tmp99,tmp102);		HX_STACK_VAR(tmp103,"tmp103");
		HX_STACK_LINE(316)
		int colder = tmp103;		HX_STACK_VAR(colder,"colder");
		struct _Function_1_1{
			inline static Dynamic Block( int &warmer,int &colder,int &this1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxColor.hx",318,0x9335c333)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("original","\x51","\x34","\xe8","\xe0") , this1,false);
					__result->Add(HX_HCSTRING("warmer","\xf2","\x95","\x03","\xba") , warmer,false);
					__result->Add(HX_HCSTRING("colder","\x91","\x61","\x7e","\xc6") , colder,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(318)
		Dynamic tmp104 = _Function_1_1::Block(warmer,colder,this1);		HX_STACK_VAR(tmp104,"tmp104");
		HX_STACK_LINE(318)
		return tmp104;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,getAnalogousHarmony,return )

Dynamic FlxColor_Impl__obj::getSplitComplementHarmony( int this1,hx::Null< int >  __o_Threshold){
int Threshold = __o_Threshold.Default(30);
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","getSplitComplementHarmony",0x65102b17,"flixel.util._FlxColor.FlxColor_Impl_.getSplitComplementHarmony","flixel/util/FlxColor.hx",329,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(Threshold,"Threshold")
{
		HX_STACK_LINE(330)
		int tmp = this1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(330)
		Float tmp1 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::get_hue(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(330)
		int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(330)
		int tmp3 = (tmp2 + (int)180);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(330)
		int tmp4 = ::flixel::math::FlxMath_obj::wrap(tmp3,(int)0,(int)350);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(330)
		int oppositeHue = tmp4;		HX_STACK_VAR(oppositeHue,"oppositeHue");
		HX_STACK_LINE(331)
		int tmp5 = (oppositeHue - Threshold);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(331)
		int tmp6 = ::flixel::math::FlxMath_obj::wrap(tmp5,(int)0,(int)350);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(331)
		int tmp7 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(331)
		int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(331)
		Float tmp9 = (Float(tmp8) / Float((int)255));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(331)
		int tmp10 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(331)
		int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(331)
		Float tmp12 = (Float(tmp11) / Float((int)255));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(331)
		int tmp13 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(331)
		Float tmp14 = (Float(tmp13) / Float((int)255));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(331)
		Float tmp15 = ::Math_obj::max(tmp12,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(331)
		Float tmp16 = ::Math_obj::max(tmp9,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(331)
		int tmp17 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(331)
		int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(331)
		Float tmp19 = (Float(tmp18) / Float((int)255));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(331)
		int tmp20 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(331)
		int tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(331)
		Float tmp22 = (Float(tmp21) / Float((int)255));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(331)
		int tmp23 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(331)
		Float tmp24 = (Float(tmp23) / Float((int)255));		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(331)
		Float tmp25 = ::Math_obj::min(tmp22,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(331)
		Float tmp26 = ::Math_obj::min(tmp19,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(331)
		Float tmp27 = (tmp16 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(331)
		int tmp28 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(331)
		int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(331)
		Float tmp30 = (Float(tmp29) / Float((int)255));		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(331)
		int tmp31 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(331)
		int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(331)
		Float tmp33 = (Float(tmp32) / Float((int)255));		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(331)
		int tmp34 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(331)
		Float tmp35 = (Float(tmp34) / Float((int)255));		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(331)
		Float tmp36 = ::Math_obj::max(tmp33,tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(331)
		Float tmp37 = ::Math_obj::max(tmp30,tmp36);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(331)
		Float tmp38 = (Float(tmp27) / Float(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(331)
		int tmp39 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(331)
		int tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(331)
		Float tmp41 = (Float(tmp40) / Float((int)255));		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(331)
		int tmp42 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(331)
		int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(331)
		Float tmp44 = (Float(tmp43) / Float((int)255));		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(331)
		int tmp45 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(331)
		Float tmp46 = (Float(tmp45) / Float((int)255));		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(331)
		Float tmp47 = ::Math_obj::max(tmp44,tmp46);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(331)
		Float tmp48 = ::Math_obj::max(tmp41,tmp47);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(331)
		int tmp49 = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(331)
		int tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(331)
		Float tmp51 = (Float(tmp50) / Float((int)255));		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(331)
		int tmp52 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromHSB(tmp6,tmp38,tmp48,tmp51);		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(331)
		int warmer = tmp52;		HX_STACK_VAR(warmer,"warmer");
		HX_STACK_LINE(332)
		int tmp53 = (oppositeHue + Threshold);		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(332)
		int tmp54 = ::flixel::math::FlxMath_obj::wrap(tmp53,(int)0,(int)350);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(332)
		int tmp55 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(332)
		int tmp56 = (int(tmp55) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(332)
		Float tmp57 = (Float(tmp56) / Float((int)255));		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(332)
		int tmp58 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(332)
		int tmp59 = (int(tmp58) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(332)
		Float tmp60 = (Float(tmp59) / Float((int)255));		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(332)
		int tmp61 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(332)
		Float tmp62 = (Float(tmp61) / Float((int)255));		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(332)
		Float tmp63 = ::Math_obj::max(tmp60,tmp62);		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(332)
		Float tmp64 = ::Math_obj::max(tmp57,tmp63);		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(332)
		int tmp65 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(332)
		int tmp66 = (int(tmp65) & int((int)255));		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(332)
		Float tmp67 = (Float(tmp66) / Float((int)255));		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(332)
		int tmp68 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(332)
		int tmp69 = (int(tmp68) & int((int)255));		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(332)
		Float tmp70 = (Float(tmp69) / Float((int)255));		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(332)
		int tmp71 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(332)
		Float tmp72 = (Float(tmp71) / Float((int)255));		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(332)
		Float tmp73 = ::Math_obj::min(tmp70,tmp72);		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(332)
		Float tmp74 = ::Math_obj::min(tmp67,tmp73);		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(332)
		Float tmp75 = (tmp64 - tmp74);		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(332)
		int tmp76 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(332)
		int tmp77 = (int(tmp76) & int((int)255));		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(332)
		Float tmp78 = (Float(tmp77) / Float((int)255));		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(332)
		int tmp79 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(332)
		int tmp80 = (int(tmp79) & int((int)255));		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(332)
		Float tmp81 = (Float(tmp80) / Float((int)255));		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(332)
		int tmp82 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(332)
		Float tmp83 = (Float(tmp82) / Float((int)255));		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(332)
		Float tmp84 = ::Math_obj::max(tmp81,tmp83);		HX_STACK_VAR(tmp84,"tmp84");
		HX_STACK_LINE(332)
		Float tmp85 = ::Math_obj::max(tmp78,tmp84);		HX_STACK_VAR(tmp85,"tmp85");
		HX_STACK_LINE(332)
		Float tmp86 = (Float(tmp75) / Float(tmp85));		HX_STACK_VAR(tmp86,"tmp86");
		HX_STACK_LINE(332)
		int tmp87 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp87,"tmp87");
		HX_STACK_LINE(332)
		int tmp88 = (int(tmp87) & int((int)255));		HX_STACK_VAR(tmp88,"tmp88");
		HX_STACK_LINE(332)
		Float tmp89 = (Float(tmp88) / Float((int)255));		HX_STACK_VAR(tmp89,"tmp89");
		HX_STACK_LINE(332)
		int tmp90 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp90,"tmp90");
		HX_STACK_LINE(332)
		int tmp91 = (int(tmp90) & int((int)255));		HX_STACK_VAR(tmp91,"tmp91");
		HX_STACK_LINE(332)
		Float tmp92 = (Float(tmp91) / Float((int)255));		HX_STACK_VAR(tmp92,"tmp92");
		HX_STACK_LINE(332)
		int tmp93 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp93,"tmp93");
		HX_STACK_LINE(332)
		Float tmp94 = (Float(tmp93) / Float((int)255));		HX_STACK_VAR(tmp94,"tmp94");
		HX_STACK_LINE(332)
		Float tmp95 = ::Math_obj::max(tmp92,tmp94);		HX_STACK_VAR(tmp95,"tmp95");
		HX_STACK_LINE(332)
		Float tmp96 = ::Math_obj::max(tmp89,tmp95);		HX_STACK_VAR(tmp96,"tmp96");
		HX_STACK_LINE(332)
		int tmp97 = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp97,"tmp97");
		HX_STACK_LINE(332)
		int tmp98 = (int(tmp97) & int((int)255));		HX_STACK_VAR(tmp98,"tmp98");
		HX_STACK_LINE(332)
		Float tmp99 = (Float(tmp98) / Float((int)255));		HX_STACK_VAR(tmp99,"tmp99");
		HX_STACK_LINE(332)
		int tmp100 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromHSB(tmp54,tmp86,tmp96,tmp99);		HX_STACK_VAR(tmp100,"tmp100");
		HX_STACK_LINE(332)
		int colder = tmp100;		HX_STACK_VAR(colder,"colder");
		struct _Function_1_1{
			inline static Dynamic Block( int &warmer,int &colder,int &this1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxColor.hx",334,0x9335c333)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("original","\x51","\x34","\xe8","\xe0") , this1,false);
					__result->Add(HX_HCSTRING("warmer","\xf2","\x95","\x03","\xba") , warmer,false);
					__result->Add(HX_HCSTRING("colder","\x91","\x61","\x7e","\xc6") , colder,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(334)
		Dynamic tmp101 = _Function_1_1::Block(warmer,colder,this1);		HX_STACK_VAR(tmp101,"tmp101");
		HX_STACK_LINE(334)
		return tmp101;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,getSplitComplementHarmony,return )

Dynamic FlxColor_Impl__obj::getTriadicHarmony( int this1){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","getTriadicHarmony",0x8ea1774f,"flixel.util._FlxColor.FlxColor_Impl_.getTriadicHarmony","flixel/util/FlxColor.hx",344,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(345)
	int tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(345)
	Float tmp1 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::get_hue(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(345)
	int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(345)
	int tmp3 = (tmp2 + (int)120);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(345)
	int tmp4 = ::flixel::math::FlxMath_obj::wrap(tmp3,(int)0,(int)359);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(345)
	int tmp5 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(345)
	int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(345)
	Float tmp7 = (Float(tmp6) / Float((int)255));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(345)
	int tmp8 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(345)
	int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(345)
	Float tmp10 = (Float(tmp9) / Float((int)255));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(345)
	int tmp11 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(345)
	Float tmp12 = (Float(tmp11) / Float((int)255));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(345)
	Float tmp13 = ::Math_obj::max(tmp10,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(345)
	Float tmp14 = ::Math_obj::max(tmp7,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(345)
	int tmp15 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(345)
	int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(345)
	Float tmp17 = (Float(tmp16) / Float((int)255));		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(345)
	int tmp18 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(345)
	int tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(345)
	Float tmp20 = (Float(tmp19) / Float((int)255));		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(345)
	int tmp21 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(345)
	Float tmp22 = (Float(tmp21) / Float((int)255));		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(345)
	Float tmp23 = ::Math_obj::min(tmp20,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(345)
	Float tmp24 = ::Math_obj::min(tmp17,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(345)
	Float tmp25 = (tmp14 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(345)
	int tmp26 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(345)
	int tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(345)
	Float tmp28 = (Float(tmp27) / Float((int)255));		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(345)
	int tmp29 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(345)
	int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(345)
	Float tmp31 = (Float(tmp30) / Float((int)255));		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(345)
	int tmp32 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(345)
	Float tmp33 = (Float(tmp32) / Float((int)255));		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(345)
	Float tmp34 = ::Math_obj::max(tmp31,tmp33);		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(345)
	Float tmp35 = ::Math_obj::max(tmp28,tmp34);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(345)
	Float tmp36 = (Float(tmp25) / Float(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(345)
	int tmp37 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(345)
	int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(345)
	Float tmp39 = (Float(tmp38) / Float((int)255));		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(345)
	int tmp40 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(345)
	int tmp41 = (int(tmp40) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(345)
	Float tmp42 = (Float(tmp41) / Float((int)255));		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(345)
	int tmp43 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(345)
	Float tmp44 = (Float(tmp43) / Float((int)255));		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(345)
	Float tmp45 = ::Math_obj::max(tmp42,tmp44);		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(345)
	Float tmp46 = ::Math_obj::max(tmp39,tmp45);		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(345)
	int tmp47 = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(345)
	int tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(345)
	Float tmp49 = (Float(tmp48) / Float((int)255));		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(345)
	int tmp50 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromHSB(tmp4,tmp36,tmp46,tmp49);		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(345)
	int triadic1 = tmp50;		HX_STACK_VAR(triadic1,"triadic1");
	HX_STACK_LINE(346)
	int tmp51 = triadic1;		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(346)
	Float tmp52 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::get_hue(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(346)
	int tmp53 = ::Std_obj::_int(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(346)
	int tmp54 = (tmp53 + (int)120);		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(346)
	int tmp55 = ::flixel::math::FlxMath_obj::wrap(tmp54,(int)0,(int)359);		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(346)
	int tmp56 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp56,"tmp56");
	HX_STACK_LINE(346)
	int tmp57 = (int(tmp56) & int((int)255));		HX_STACK_VAR(tmp57,"tmp57");
	HX_STACK_LINE(346)
	Float tmp58 = (Float(tmp57) / Float((int)255));		HX_STACK_VAR(tmp58,"tmp58");
	HX_STACK_LINE(346)
	int tmp59 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp59,"tmp59");
	HX_STACK_LINE(346)
	int tmp60 = (int(tmp59) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
	HX_STACK_LINE(346)
	Float tmp61 = (Float(tmp60) / Float((int)255));		HX_STACK_VAR(tmp61,"tmp61");
	HX_STACK_LINE(346)
	int tmp62 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp62,"tmp62");
	HX_STACK_LINE(346)
	Float tmp63 = (Float(tmp62) / Float((int)255));		HX_STACK_VAR(tmp63,"tmp63");
	HX_STACK_LINE(346)
	Float tmp64 = ::Math_obj::max(tmp61,tmp63);		HX_STACK_VAR(tmp64,"tmp64");
	HX_STACK_LINE(346)
	Float tmp65 = ::Math_obj::max(tmp58,tmp64);		HX_STACK_VAR(tmp65,"tmp65");
	HX_STACK_LINE(346)
	int tmp66 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp66,"tmp66");
	HX_STACK_LINE(346)
	int tmp67 = (int(tmp66) & int((int)255));		HX_STACK_VAR(tmp67,"tmp67");
	HX_STACK_LINE(346)
	Float tmp68 = (Float(tmp67) / Float((int)255));		HX_STACK_VAR(tmp68,"tmp68");
	HX_STACK_LINE(346)
	int tmp69 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp69,"tmp69");
	HX_STACK_LINE(346)
	int tmp70 = (int(tmp69) & int((int)255));		HX_STACK_VAR(tmp70,"tmp70");
	HX_STACK_LINE(346)
	Float tmp71 = (Float(tmp70) / Float((int)255));		HX_STACK_VAR(tmp71,"tmp71");
	HX_STACK_LINE(346)
	int tmp72 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp72,"tmp72");
	HX_STACK_LINE(346)
	Float tmp73 = (Float(tmp72) / Float((int)255));		HX_STACK_VAR(tmp73,"tmp73");
	HX_STACK_LINE(346)
	Float tmp74 = ::Math_obj::min(tmp71,tmp73);		HX_STACK_VAR(tmp74,"tmp74");
	HX_STACK_LINE(346)
	Float tmp75 = ::Math_obj::min(tmp68,tmp74);		HX_STACK_VAR(tmp75,"tmp75");
	HX_STACK_LINE(346)
	Float tmp76 = (tmp65 - tmp75);		HX_STACK_VAR(tmp76,"tmp76");
	HX_STACK_LINE(346)
	int tmp77 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp77,"tmp77");
	HX_STACK_LINE(346)
	int tmp78 = (int(tmp77) & int((int)255));		HX_STACK_VAR(tmp78,"tmp78");
	HX_STACK_LINE(346)
	Float tmp79 = (Float(tmp78) / Float((int)255));		HX_STACK_VAR(tmp79,"tmp79");
	HX_STACK_LINE(346)
	int tmp80 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp80,"tmp80");
	HX_STACK_LINE(346)
	int tmp81 = (int(tmp80) & int((int)255));		HX_STACK_VAR(tmp81,"tmp81");
	HX_STACK_LINE(346)
	Float tmp82 = (Float(tmp81) / Float((int)255));		HX_STACK_VAR(tmp82,"tmp82");
	HX_STACK_LINE(346)
	int tmp83 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp83,"tmp83");
	HX_STACK_LINE(346)
	Float tmp84 = (Float(tmp83) / Float((int)255));		HX_STACK_VAR(tmp84,"tmp84");
	HX_STACK_LINE(346)
	Float tmp85 = ::Math_obj::max(tmp82,tmp84);		HX_STACK_VAR(tmp85,"tmp85");
	HX_STACK_LINE(346)
	Float tmp86 = ::Math_obj::max(tmp79,tmp85);		HX_STACK_VAR(tmp86,"tmp86");
	HX_STACK_LINE(346)
	Float tmp87 = (Float(tmp76) / Float(tmp86));		HX_STACK_VAR(tmp87,"tmp87");
	HX_STACK_LINE(346)
	int tmp88 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp88,"tmp88");
	HX_STACK_LINE(346)
	int tmp89 = (int(tmp88) & int((int)255));		HX_STACK_VAR(tmp89,"tmp89");
	HX_STACK_LINE(346)
	Float tmp90 = (Float(tmp89) / Float((int)255));		HX_STACK_VAR(tmp90,"tmp90");
	HX_STACK_LINE(346)
	int tmp91 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp91,"tmp91");
	HX_STACK_LINE(346)
	int tmp92 = (int(tmp91) & int((int)255));		HX_STACK_VAR(tmp92,"tmp92");
	HX_STACK_LINE(346)
	Float tmp93 = (Float(tmp92) / Float((int)255));		HX_STACK_VAR(tmp93,"tmp93");
	HX_STACK_LINE(346)
	int tmp94 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp94,"tmp94");
	HX_STACK_LINE(346)
	Float tmp95 = (Float(tmp94) / Float((int)255));		HX_STACK_VAR(tmp95,"tmp95");
	HX_STACK_LINE(346)
	Float tmp96 = ::Math_obj::max(tmp93,tmp95);		HX_STACK_VAR(tmp96,"tmp96");
	HX_STACK_LINE(346)
	Float tmp97 = ::Math_obj::max(tmp90,tmp96);		HX_STACK_VAR(tmp97,"tmp97");
	HX_STACK_LINE(346)
	int tmp98 = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp98,"tmp98");
	HX_STACK_LINE(346)
	int tmp99 = (int(tmp98) & int((int)255));		HX_STACK_VAR(tmp99,"tmp99");
	HX_STACK_LINE(346)
	Float tmp100 = (Float(tmp99) / Float((int)255));		HX_STACK_VAR(tmp100,"tmp100");
	HX_STACK_LINE(346)
	int tmp101 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromHSB(tmp55,tmp87,tmp97,tmp100);		HX_STACK_VAR(tmp101,"tmp101");
	HX_STACK_LINE(346)
	int triadic2 = tmp101;		HX_STACK_VAR(triadic2,"triadic2");
	struct _Function_1_1{
		inline static Dynamic Block( int &triadic2,int &triadic1,int &this1){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxColor.hx",348,0x9335c333)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("color1","\x6e","\xc5","\x86","\xc6") , this1,false);
				__result->Add(HX_HCSTRING("color2","\x6f","\xc5","\x86","\xc6") , triadic1,false);
				__result->Add(HX_HCSTRING("color3","\x70","\xc5","\x86","\xc6") , triadic2,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(348)
	Dynamic tmp102 = _Function_1_1::Block(triadic2,triadic1,this1);		HX_STACK_VAR(tmp102,"tmp102");
	HX_STACK_LINE(348)
	return tmp102;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,getTriadicHarmony,return )

int FlxColor_Impl__obj::to24Bit( int this1){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","to24Bit",0xaa37506b,"flixel.util._FlxColor.FlxColor_Impl_.to24Bit","flixel/util/FlxColor.hx",357,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(358)
	int tmp = (int(this1) & int((int)16777215));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(358)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,to24Bit,return )

::String FlxColor_Impl__obj::toHexString( int this1,hx::Null< bool >  __o_Alpha,hx::Null< bool >  __o_Prefix){
bool Alpha = __o_Alpha.Default(true);
bool Prefix = __o_Prefix.Default(true);
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","toHexString",0x94bdbc2c,"flixel.util._FlxColor.FlxColor_Impl_.toHexString","flixel/util/FlxColor.hx",369,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(Alpha,"Alpha")
	HX_STACK_ARG(Prefix,"Prefix")
{
		HX_STACK_LINE(370)
		bool tmp = Prefix;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(370)
		::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(370)
		if ((tmp)){
			HX_STACK_LINE(370)
			tmp1 = HX_HCSTRING("0x","\x48","\x2a","\x00","\x00");
		}
		else{
			HX_STACK_LINE(370)
			tmp1 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
		}
		HX_STACK_LINE(370)
		bool tmp2 = Alpha;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(370)
		::String tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(370)
		if ((tmp2)){
			HX_STACK_LINE(370)
			int tmp4 = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(370)
			int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(370)
			tmp3 = ::StringTools_obj::hex(tmp5,(int)2);
		}
		else{
			HX_STACK_LINE(370)
			tmp3 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
		}
		HX_STACK_LINE(370)
		::String tmp4 = (tmp1 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(371)
		int tmp5 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(371)
		int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(371)
		::String tmp7 = ::StringTools_obj::hex(tmp6,(int)2);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(370)
		::String tmp8 = (tmp4 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(371)
		int tmp9 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(371)
		int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(371)
		::String tmp11 = ::StringTools_obj::hex(tmp10,(int)2);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(370)
		::String tmp12 = (tmp8 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(371)
		int tmp13 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(371)
		::String tmp14 = ::StringTools_obj::hex(tmp13,(int)2);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(370)
		::String tmp15 = (tmp12 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(370)
		return tmp15;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxColor_Impl__obj,toHexString,return )

::String FlxColor_Impl__obj::toWebString( int this1){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","toWebString",0x5e0aaea5,"flixel.util._FlxColor.FlxColor_Impl_.toWebString","flixel/util/FlxColor.hx",380,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(381)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(381)
	tmp = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(381)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(381)
	tmp1 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(381)
	::String tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(381)
	int tmp3 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(381)
	int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(381)
	::String tmp5 = ::StringTools_obj::hex(tmp4,(int)2);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(381)
	::String tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(381)
	int tmp7 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(381)
	int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(381)
	::String tmp9 = ::StringTools_obj::hex(tmp8,(int)2);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(381)
	::String tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(381)
	int tmp11 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(381)
	::String tmp12 = ::StringTools_obj::hex(tmp11,(int)2);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(381)
	::String tmp13 = (tmp10 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(381)
	::String tmp14 = (HX_HCSTRING("#","\x23","\x00","\x00","\x00") + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(381)
	return tmp14;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,toWebString,return )

::String FlxColor_Impl__obj::getColorInfo( int this1){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","getColorInfo",0x327dc480,"flixel.util._FlxColor.FlxColor_Impl_.getColorInfo","flixel/util/FlxColor.hx",390,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(391)
	::String result = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(394)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(394)
	{
		HX_STACK_LINE(394)
		bool Alpha = true;		HX_STACK_VAR(Alpha,"Alpha");
		HX_STACK_LINE(394)
		bool Prefix = true;		HX_STACK_VAR(Prefix,"Prefix");
		HX_STACK_LINE(394)
		bool tmp1 = Prefix;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(394)
		::String tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(394)
		if ((tmp1)){
			HX_STACK_LINE(394)
			tmp2 = HX_HCSTRING("0x","\x48","\x2a","\x00","\x00");
		}
		else{
			HX_STACK_LINE(394)
			tmp2 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
		}
		HX_STACK_LINE(394)
		bool tmp3 = Alpha;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(394)
		::String tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(394)
		if ((tmp3)){
			HX_STACK_LINE(394)
			int tmp5 = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(394)
			int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(394)
			tmp4 = ::StringTools_obj::hex(tmp6,(int)2);
		}
		else{
			HX_STACK_LINE(394)
			tmp4 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
		}
		HX_STACK_LINE(394)
		::String tmp5 = (tmp2 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(394)
		int tmp6 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(394)
		int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(394)
		::String tmp8 = ::StringTools_obj::hex(tmp7,(int)2);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(394)
		::String tmp9 = (tmp5 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(394)
		int tmp10 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(394)
		int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(394)
		::String tmp12 = ::StringTools_obj::hex(tmp11,(int)2);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(394)
		::String tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(394)
		int tmp14 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(394)
		::String tmp15 = ::StringTools_obj::hex(tmp14,(int)2);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(394)
		tmp = (tmp13 + tmp15);
	}
	HX_STACK_LINE(394)
	::String tmp1 = (tmp + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(394)
	::String result1 = tmp1;		HX_STACK_VAR(result1,"result1");
	HX_STACK_LINE(396)
	int tmp2 = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(396)
	int tmp3 = (int(tmp2) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(396)
	::String tmp4 = (HX_HCSTRING("Alpha: ","\x64","\x15","\x67","\x7f") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(396)
	::String tmp5 = (tmp4 + HX_HCSTRING(" Red: ","\xf7","\xbd","\x55","\x45"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(396)
	int tmp6 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(396)
	int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(396)
	::String tmp8 = (tmp5 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(396)
	::String tmp9 = (tmp8 + HX_HCSTRING(" Green: ","\xe9","\x23","\x00","\xae"));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(396)
	int tmp10 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(396)
	int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(396)
	::String tmp12 = (tmp9 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(396)
	::String tmp13 = (tmp12 + HX_HCSTRING(" Blue: ","\x00","\x1c","\x26","\x13"));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(396)
	int tmp14 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(396)
	::String tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(396)
	::String tmp16 = (tmp15 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(396)
	hx::AddEq(result1,tmp16);
	HX_STACK_LINE(398)
	int tmp17 = this1;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(398)
	Float tmp18 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::get_hue(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(398)
	Float tmp19 = ::flixel::math::FlxMath_obj::roundDecimal(tmp18,(int)2);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(398)
	::String tmp20 = (HX_HCSTRING("Hue: ","\x3e","\x91","\x7c","\xc2") + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(398)
	::String tmp21 = (tmp20 + HX_HCSTRING(" Saturation: ","\x38","\x1b","\xbe","\xc1"));		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(398)
	int tmp22 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(398)
	int tmp23 = (int(tmp22) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(398)
	Float tmp24 = (Float(tmp23) / Float((int)255));		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(398)
	int tmp25 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(398)
	int tmp26 = (int(tmp25) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(398)
	Float tmp27 = (Float(tmp26) / Float((int)255));		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(398)
	int tmp28 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(398)
	Float tmp29 = (Float(tmp28) / Float((int)255));		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(398)
	Float tmp30 = ::Math_obj::max(tmp27,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(398)
	Float tmp31 = ::Math_obj::max(tmp24,tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(398)
	int tmp32 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(398)
	int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(398)
	Float tmp34 = (Float(tmp33) / Float((int)255));		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(398)
	int tmp35 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(398)
	int tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(398)
	Float tmp37 = (Float(tmp36) / Float((int)255));		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(398)
	int tmp38 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(398)
	Float tmp39 = (Float(tmp38) / Float((int)255));		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(398)
	Float tmp40 = ::Math_obj::min(tmp37,tmp39);		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(398)
	Float tmp41 = ::Math_obj::min(tmp34,tmp40);		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(398)
	Float tmp42 = (tmp31 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(398)
	int tmp43 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(398)
	int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(398)
	Float tmp45 = (Float(tmp44) / Float((int)255));		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(398)
	int tmp46 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(398)
	int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(398)
	Float tmp48 = (Float(tmp47) / Float((int)255));		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(398)
	int tmp49 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(398)
	Float tmp50 = (Float(tmp49) / Float((int)255));		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(398)
	Float tmp51 = ::Math_obj::max(tmp48,tmp50);		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(398)
	Float tmp52 = ::Math_obj::max(tmp45,tmp51);		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(398)
	Float tmp53 = (Float(tmp42) / Float(tmp52));		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(398)
	Float tmp54 = ::flixel::math::FlxMath_obj::roundDecimal(tmp53,(int)2);		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(398)
	::String tmp55 = (tmp21 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(398)
	::String tmp56 = (tmp55 + HX_HCSTRING(" Brightness: ","\xf7","\x92","\x6f","\x4f"));		HX_STACK_VAR(tmp56,"tmp56");
	HX_STACK_LINE(399)
	int tmp57 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp57,"tmp57");
	HX_STACK_LINE(399)
	int tmp58 = (int(tmp57) & int((int)255));		HX_STACK_VAR(tmp58,"tmp58");
	HX_STACK_LINE(399)
	Float tmp59 = (Float(tmp58) / Float((int)255));		HX_STACK_VAR(tmp59,"tmp59");
	HX_STACK_LINE(399)
	int tmp60 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp60,"tmp60");
	HX_STACK_LINE(399)
	int tmp61 = (int(tmp60) & int((int)255));		HX_STACK_VAR(tmp61,"tmp61");
	HX_STACK_LINE(399)
	Float tmp62 = (Float(tmp61) / Float((int)255));		HX_STACK_VAR(tmp62,"tmp62");
	HX_STACK_LINE(399)
	int tmp63 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp63,"tmp63");
	HX_STACK_LINE(399)
	Float tmp64 = (Float(tmp63) / Float((int)255));		HX_STACK_VAR(tmp64,"tmp64");
	HX_STACK_LINE(399)
	Float tmp65 = ::Math_obj::max(tmp62,tmp64);		HX_STACK_VAR(tmp65,"tmp65");
	HX_STACK_LINE(399)
	Float tmp66 = ::Math_obj::max(tmp59,tmp65);		HX_STACK_VAR(tmp66,"tmp66");
	HX_STACK_LINE(399)
	Float tmp67 = ::flixel::math::FlxMath_obj::roundDecimal(tmp66,(int)2);		HX_STACK_VAR(tmp67,"tmp67");
	HX_STACK_LINE(398)
	::String tmp68 = (tmp56 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
	HX_STACK_LINE(398)
	::String tmp69 = (tmp68 + HX_HCSTRING(" Lightness: ","\x13","\x68","\xef","\xba"));		HX_STACK_VAR(tmp69,"tmp69");
	HX_STACK_LINE(399)
	int tmp70 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp70,"tmp70");
	HX_STACK_LINE(399)
	int tmp71 = (int(tmp70) & int((int)255));		HX_STACK_VAR(tmp71,"tmp71");
	HX_STACK_LINE(399)
	Float tmp72 = (Float(tmp71) / Float((int)255));		HX_STACK_VAR(tmp72,"tmp72");
	HX_STACK_LINE(399)
	int tmp73 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp73,"tmp73");
	HX_STACK_LINE(399)
	int tmp74 = (int(tmp73) & int((int)255));		HX_STACK_VAR(tmp74,"tmp74");
	HX_STACK_LINE(399)
	Float tmp75 = (Float(tmp74) / Float((int)255));		HX_STACK_VAR(tmp75,"tmp75");
	HX_STACK_LINE(399)
	int tmp76 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp76,"tmp76");
	HX_STACK_LINE(399)
	Float tmp77 = (Float(tmp76) / Float((int)255));		HX_STACK_VAR(tmp77,"tmp77");
	HX_STACK_LINE(399)
	Float tmp78 = ::Math_obj::max(tmp75,tmp77);		HX_STACK_VAR(tmp78,"tmp78");
	HX_STACK_LINE(399)
	Float tmp79 = ::Math_obj::max(tmp72,tmp78);		HX_STACK_VAR(tmp79,"tmp79");
	HX_STACK_LINE(399)
	int tmp80 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp80,"tmp80");
	HX_STACK_LINE(399)
	int tmp81 = (int(tmp80) & int((int)255));		HX_STACK_VAR(tmp81,"tmp81");
	HX_STACK_LINE(399)
	Float tmp82 = (Float(tmp81) / Float((int)255));		HX_STACK_VAR(tmp82,"tmp82");
	HX_STACK_LINE(399)
	int tmp83 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp83,"tmp83");
	HX_STACK_LINE(399)
	int tmp84 = (int(tmp83) & int((int)255));		HX_STACK_VAR(tmp84,"tmp84");
	HX_STACK_LINE(399)
	Float tmp85 = (Float(tmp84) / Float((int)255));		HX_STACK_VAR(tmp85,"tmp85");
	HX_STACK_LINE(399)
	int tmp86 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp86,"tmp86");
	HX_STACK_LINE(399)
	Float tmp87 = (Float(tmp86) / Float((int)255));		HX_STACK_VAR(tmp87,"tmp87");
	HX_STACK_LINE(399)
	Float tmp88 = ::Math_obj::min(tmp85,tmp87);		HX_STACK_VAR(tmp88,"tmp88");
	HX_STACK_LINE(399)
	Float tmp89 = ::Math_obj::min(tmp82,tmp88);		HX_STACK_VAR(tmp89,"tmp89");
	HX_STACK_LINE(399)
	Float tmp90 = (tmp79 + tmp89);		HX_STACK_VAR(tmp90,"tmp90");
	HX_STACK_LINE(399)
	Float tmp91 = (Float(tmp90) / Float((int)2));		HX_STACK_VAR(tmp91,"tmp91");
	HX_STACK_LINE(399)
	Float tmp92 = ::flixel::math::FlxMath_obj::roundDecimal(tmp91,(int)2);		HX_STACK_VAR(tmp92,"tmp92");
	HX_STACK_LINE(398)
	::String tmp93 = (tmp69 + tmp92);		HX_STACK_VAR(tmp93,"tmp93");
	HX_STACK_LINE(398)
	hx::AddEq(result1,tmp93);
	HX_STACK_LINE(401)
	::String tmp94 = result1;		HX_STACK_VAR(tmp94,"tmp94");
	HX_STACK_LINE(401)
	return tmp94;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,getColorInfo,return )

int FlxColor_Impl__obj::getDarkened( int this1,hx::Null< Float >  __o_Factor){
Float Factor = __o_Factor.Default(((Float)0.2));
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","getDarkened",0xd9fa3a4f,"flixel.util._FlxColor.FlxColor_Impl_.getDarkened","flixel/util/FlxColor.hx",411,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(Factor,"Factor")
{
		HX_STACK_LINE(412)
		Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(412)
		{
			HX_STACK_LINE(412)
			bool tmp1 = true;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(412)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(412)
			if ((tmp1)){
				HX_STACK_LINE(412)
				tmp2 = (Factor < (int)0);
			}
			else{
				HX_STACK_LINE(412)
				tmp2 = false;
			}
			HX_STACK_LINE(412)
			Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(412)
			if ((tmp2)){
				HX_STACK_LINE(412)
				tmp3 = (int)0;
			}
			else{
				HX_STACK_LINE(412)
				tmp3 = Factor;
			}
			HX_STACK_LINE(412)
			Float lowerBound = tmp3;		HX_STACK_VAR(lowerBound,"lowerBound");
			HX_STACK_LINE(412)
			bool tmp4 = true;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(412)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(412)
			if ((tmp4)){
				HX_STACK_LINE(412)
				tmp5 = (lowerBound > (int)1);
			}
			else{
				HX_STACK_LINE(412)
				tmp5 = false;
			}
			HX_STACK_LINE(412)
			if ((tmp5)){
				HX_STACK_LINE(412)
				tmp = (int)1;
			}
			else{
				HX_STACK_LINE(412)
				tmp = lowerBound;
			}
		}
		HX_STACK_LINE(412)
		Factor = ((Float)(tmp));
		HX_STACK_LINE(413)
		int output = this1;		HX_STACK_VAR(output,"output");
		HX_STACK_LINE(414)
		{
			HX_STACK_LINE(414)
			int tmp1 = (int(output) >> int((int)16));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(414)
			int tmp2 = (int(tmp1) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(414)
			Float tmp3 = (Float(tmp2) / Float((int)255));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(414)
			int tmp4 = (int(output) >> int((int)8));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(414)
			int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(414)
			Float tmp6 = (Float(tmp5) / Float((int)255));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(414)
			int tmp7 = (int(output) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(414)
			Float tmp8 = (Float(tmp7) / Float((int)255));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(414)
			Float tmp9 = ::Math_obj::max(tmp6,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(414)
			Float tmp10 = ::Math_obj::max(tmp3,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(414)
			int tmp11 = (int(output) >> int((int)16));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(414)
			int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(414)
			Float tmp13 = (Float(tmp12) / Float((int)255));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(414)
			int tmp14 = (int(output) >> int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(414)
			int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(414)
			Float tmp16 = (Float(tmp15) / Float((int)255));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(414)
			int tmp17 = (int(output) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(414)
			Float tmp18 = (Float(tmp17) / Float((int)255));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(414)
			Float tmp19 = ::Math_obj::min(tmp16,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(414)
			Float tmp20 = ::Math_obj::min(tmp13,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(414)
			Float tmp21 = (tmp10 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(414)
			Float tmp22 = (Float(tmp21) / Float((int)2));		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(414)
			Float tmp23 = ((int)1 - Factor);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(414)
			Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(414)
			Float Value = tmp24;		HX_STACK_VAR(Value,"Value");
			HX_STACK_LINE(414)
			{
				HX_STACK_LINE(414)
				int tmp25 = output;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(414)
				Float tmp26 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::get_hue(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(414)
				Float Hue = tmp26;		HX_STACK_VAR(Hue,"Hue");
				HX_STACK_LINE(414)
				int tmp27 = (int(output) >> int((int)16));		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(414)
				int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(414)
				Float tmp29 = (Float(tmp28) / Float((int)255));		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(414)
				int tmp30 = (int(output) >> int((int)8));		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(414)
				int tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(414)
				Float tmp32 = (Float(tmp31) / Float((int)255));		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(414)
				int tmp33 = (int(output) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(414)
				Float tmp34 = (Float(tmp33) / Float((int)255));		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(414)
				Float tmp35 = ::Math_obj::max(tmp32,tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(414)
				Float tmp36 = ::Math_obj::max(tmp29,tmp35);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(414)
				int tmp37 = (int(output) >> int((int)16));		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(414)
				int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(414)
				Float tmp39 = (Float(tmp38) / Float((int)255));		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(414)
				int tmp40 = (int(output) >> int((int)8));		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(414)
				int tmp41 = (int(tmp40) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(414)
				Float tmp42 = (Float(tmp41) / Float((int)255));		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(414)
				int tmp43 = (int(output) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(414)
				Float tmp44 = (Float(tmp43) / Float((int)255));		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(414)
				Float tmp45 = ::Math_obj::min(tmp42,tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(414)
				Float tmp46 = ::Math_obj::min(tmp39,tmp45);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(414)
				Float tmp47 = (tmp36 - tmp46);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(414)
				int tmp48 = (int(output) >> int((int)16));		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(414)
				int tmp49 = (int(tmp48) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(414)
				Float tmp50 = (Float(tmp49) / Float((int)255));		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(414)
				int tmp51 = (int(output) >> int((int)8));		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(414)
				int tmp52 = (int(tmp51) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(414)
				Float tmp53 = (Float(tmp52) / Float((int)255));		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(414)
				int tmp54 = (int(output) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(414)
				Float tmp55 = (Float(tmp54) / Float((int)255));		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(414)
				Float tmp56 = ::Math_obj::max(tmp53,tmp55);		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(414)
				Float tmp57 = ::Math_obj::max(tmp50,tmp56);		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(414)
				Float tmp58 = (Float(tmp47) / Float(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(414)
				Float Saturation = tmp58;		HX_STACK_VAR(Saturation,"Saturation");
				HX_STACK_LINE(414)
				int tmp59 = (int(output) >> int((int)24));		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(414)
				int tmp60 = (int(tmp59) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(414)
				Float tmp61 = (Float(tmp60) / Float((int)255));		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(414)
				Float Alpha = tmp61;		HX_STACK_VAR(Alpha,"Alpha");
				HX_STACK_LINE(414)
				Float tmp62 = ((int)2 * Value);		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(414)
				Float tmp63 = (tmp62 - (int)1);		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(414)
				Float tmp64 = ::Math_obj::abs(tmp63);		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(414)
				Float tmp65 = ((int)1 - tmp64);		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(414)
				Float tmp66 = Saturation;		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(414)
				Float tmp67 = (tmp65 * tmp66);		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(414)
				Float chroma = tmp67;		HX_STACK_VAR(chroma,"chroma");
				HX_STACK_LINE(414)
				Float tmp68 = Value;		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(414)
				Float tmp69 = (Float(chroma) / Float((int)2));		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(414)
				Float tmp70 = (tmp68 - tmp69);		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(414)
				Float match = tmp70;		HX_STACK_VAR(match,"match");
				HX_STACK_LINE(414)
				{
					HX_STACK_LINE(414)
					Float Hue1 = Hue;		HX_STACK_VAR(Hue1,"Hue1");
					HX_STACK_LINE(414)
					Float Chroma = chroma;		HX_STACK_VAR(Chroma,"Chroma");
					HX_STACK_LINE(414)
					hx::ModEq(Hue1,(int)360);
					HX_STACK_LINE(414)
					Float tmp71 = (Float(Hue1) / Float((int)60));		HX_STACK_VAR(tmp71,"tmp71");
					HX_STACK_LINE(414)
					Float hueD = tmp71;		HX_STACK_VAR(hueD,"hueD");
					HX_STACK_LINE(414)
					Float tmp72 = Chroma;		HX_STACK_VAR(tmp72,"tmp72");
					HX_STACK_LINE(414)
					Float tmp73 = hx::Mod(hueD,(int)2);		HX_STACK_VAR(tmp73,"tmp73");
					HX_STACK_LINE(414)
					Float tmp74 = (tmp73 - (int)1);		HX_STACK_VAR(tmp74,"tmp74");
					HX_STACK_LINE(414)
					Float tmp75 = ::Math_obj::abs(tmp74);		HX_STACK_VAR(tmp75,"tmp75");
					HX_STACK_LINE(414)
					Float tmp76 = ((int)1 - tmp75);		HX_STACK_VAR(tmp76,"tmp76");
					HX_STACK_LINE(414)
					Float tmp77 = (tmp72 * tmp76);		HX_STACK_VAR(tmp77,"tmp77");
					HX_STACK_LINE(414)
					Float tmp78 = match;		HX_STACK_VAR(tmp78,"tmp78");
					HX_STACK_LINE(414)
					Float tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
					HX_STACK_LINE(414)
					Float mid = tmp79;		HX_STACK_VAR(mid,"mid");
					HX_STACK_LINE(414)
					hx::AddEq(Chroma,match);
					HX_STACK_LINE(414)
					{
						HX_STACK_LINE(414)
						Float tmp80 = hueD;		HX_STACK_VAR(tmp80,"tmp80");
						HX_STACK_LINE(414)
						int tmp81 = ::Std_obj::_int(tmp80);		HX_STACK_VAR(tmp81,"tmp81");
						HX_STACK_LINE(414)
						int _g = tmp81;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(414)
						int tmp82 = _g;		HX_STACK_VAR(tmp82,"tmp82");
						HX_STACK_LINE(414)
						switch( (int)(tmp82)){
							case (int)0: {
								HX_STACK_LINE(414)
								int tmp83;		HX_STACK_VAR(tmp83,"tmp83");
								HX_STACK_LINE(414)
								{
									HX_STACK_LINE(414)
									{
										HX_STACK_LINE(414)
										{
											HX_STACK_LINE(414)
											Float tmp84 = (Chroma * (int)255);		HX_STACK_VAR(tmp84,"tmp84");
											HX_STACK_LINE(414)
											int tmp85 = ::Math_obj::round(tmp84);		HX_STACK_VAR(tmp85,"tmp85");
											HX_STACK_LINE(414)
											int Value1 = tmp85;		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(414)
											hx::AndEq(output,(int)-16711681);
											HX_STACK_LINE(414)
											bool tmp86 = (Value1 > (int)255);		HX_STACK_VAR(tmp86,"tmp86");
											HX_STACK_LINE(414)
											int tmp87;		HX_STACK_VAR(tmp87,"tmp87");
											HX_STACK_LINE(414)
											if ((tmp86)){
												HX_STACK_LINE(414)
												tmp87 = (int)255;
											}
											else{
												HX_STACK_LINE(414)
												bool tmp88 = (Value1 < (int)0);		HX_STACK_VAR(tmp88,"tmp88");
												HX_STACK_LINE(414)
												if ((tmp88)){
													HX_STACK_LINE(414)
													tmp87 = (int)0;
												}
												else{
													HX_STACK_LINE(414)
													tmp87 = Value1;
												}
											}
											HX_STACK_LINE(414)
											int tmp88 = (int(tmp87) << int((int)16));		HX_STACK_VAR(tmp88,"tmp88");
											HX_STACK_LINE(414)
											hx::OrEq(output,tmp88);
											HX_STACK_LINE(414)
											Value1;
										}
										HX_STACK_LINE(414)
										Chroma;
									}
									HX_STACK_LINE(414)
									{
										HX_STACK_LINE(414)
										{
											HX_STACK_LINE(414)
											Float tmp84 = (mid * (int)255);		HX_STACK_VAR(tmp84,"tmp84");
											HX_STACK_LINE(414)
											int tmp85 = ::Math_obj::round(tmp84);		HX_STACK_VAR(tmp85,"tmp85");
											HX_STACK_LINE(414)
											int Value1 = tmp85;		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(414)
											hx::AndEq(output,(int)-65281);
											HX_STACK_LINE(414)
											bool tmp86 = (Value1 > (int)255);		HX_STACK_VAR(tmp86,"tmp86");
											HX_STACK_LINE(414)
											int tmp87;		HX_STACK_VAR(tmp87,"tmp87");
											HX_STACK_LINE(414)
											if ((tmp86)){
												HX_STACK_LINE(414)
												tmp87 = (int)255;
											}
											else{
												HX_STACK_LINE(414)
												bool tmp88 = (Value1 < (int)0);		HX_STACK_VAR(tmp88,"tmp88");
												HX_STACK_LINE(414)
												if ((tmp88)){
													HX_STACK_LINE(414)
													tmp87 = (int)0;
												}
												else{
													HX_STACK_LINE(414)
													tmp87 = Value1;
												}
											}
											HX_STACK_LINE(414)
											int tmp88 = (int(tmp87) << int((int)8));		HX_STACK_VAR(tmp88,"tmp88");
											HX_STACK_LINE(414)
											hx::OrEq(output,tmp88);
											HX_STACK_LINE(414)
											Value1;
										}
										HX_STACK_LINE(414)
										mid;
									}
									HX_STACK_LINE(414)
									{
										HX_STACK_LINE(414)
										{
											HX_STACK_LINE(414)
											Float tmp84 = (match * (int)255);		HX_STACK_VAR(tmp84,"tmp84");
											HX_STACK_LINE(414)
											int tmp85 = ::Math_obj::round(tmp84);		HX_STACK_VAR(tmp85,"tmp85");
											HX_STACK_LINE(414)
											int Value1 = tmp85;		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(414)
											hx::AndEq(output,(int)-256);
											HX_STACK_LINE(414)
											bool tmp86 = (Value1 > (int)255);		HX_STACK_VAR(tmp86,"tmp86");
											HX_STACK_LINE(414)
											int tmp87;		HX_STACK_VAR(tmp87,"tmp87");
											HX_STACK_LINE(414)
											if ((tmp86)){
												HX_STACK_LINE(414)
												tmp87 = (int)255;
											}
											else{
												HX_STACK_LINE(414)
												bool tmp88 = (Value1 < (int)0);		HX_STACK_VAR(tmp88,"tmp88");
												HX_STACK_LINE(414)
												if ((tmp88)){
													HX_STACK_LINE(414)
													tmp87 = (int)0;
												}
												else{
													HX_STACK_LINE(414)
													tmp87 = Value1;
												}
											}
											HX_STACK_LINE(414)
											hx::OrEq(output,tmp87);
											HX_STACK_LINE(414)
											Value1;
										}
										HX_STACK_LINE(414)
										match;
									}
									HX_STACK_LINE(414)
									{
										HX_STACK_LINE(414)
										{
											HX_STACK_LINE(414)
											Float tmp84 = (Alpha * (int)255);		HX_STACK_VAR(tmp84,"tmp84");
											HX_STACK_LINE(414)
											int tmp85 = ::Math_obj::round(tmp84);		HX_STACK_VAR(tmp85,"tmp85");
											HX_STACK_LINE(414)
											int Value1 = tmp85;		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(414)
											hx::AndEq(output,(int)16777215);
											HX_STACK_LINE(414)
											bool tmp86 = (Value1 > (int)255);		HX_STACK_VAR(tmp86,"tmp86");
											HX_STACK_LINE(414)
											int tmp87;		HX_STACK_VAR(tmp87,"tmp87");
											HX_STACK_LINE(414)
											if ((tmp86)){
												HX_STACK_LINE(414)
												tmp87 = (int)255;
											}
											else{
												HX_STACK_LINE(414)
												bool tmp88 = (Value1 < (int)0);		HX_STACK_VAR(tmp88,"tmp88");
												HX_STACK_LINE(414)
												if ((tmp88)){
													HX_STACK_LINE(414)
													tmp87 = (int)0;
												}
												else{
													HX_STACK_LINE(414)
													tmp87 = Value1;
												}
											}
											HX_STACK_LINE(414)
											int tmp88 = (int(tmp87) << int((int)24));		HX_STACK_VAR(tmp88,"tmp88");
											HX_STACK_LINE(414)
											hx::OrEq(output,tmp88);
											HX_STACK_LINE(414)
											Value1;
										}
										HX_STACK_LINE(414)
										Alpha;
									}
									HX_STACK_LINE(414)
									tmp83 = output;
								}
								HX_STACK_LINE(414)
								tmp83;
							}
							;break;
							case (int)1: {
								HX_STACK_LINE(414)
								int tmp83;		HX_STACK_VAR(tmp83,"tmp83");
								HX_STACK_LINE(414)
								{
									HX_STACK_LINE(414)
									{
										HX_STACK_LINE(414)
										{
											HX_STACK_LINE(414)
											Float tmp84 = (mid * (int)255);		HX_STACK_VAR(tmp84,"tmp84");
											HX_STACK_LINE(414)
											int tmp85 = ::Math_obj::round(tmp84);		HX_STACK_VAR(tmp85,"tmp85");
											HX_STACK_LINE(414)
											int Value1 = tmp85;		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(414)
											hx::AndEq(output,(int)-16711681);
											HX_STACK_LINE(414)
											bool tmp86 = (Value1 > (int)255);		HX_STACK_VAR(tmp86,"tmp86");
											HX_STACK_LINE(414)
											int tmp87;		HX_STACK_VAR(tmp87,"tmp87");
											HX_STACK_LINE(414)
											if ((tmp86)){
												HX_STACK_LINE(414)
												tmp87 = (int)255;
											}
											else{
												HX_STACK_LINE(414)
												bool tmp88 = (Value1 < (int)0);		HX_STACK_VAR(tmp88,"tmp88");
												HX_STACK_LINE(414)
												if ((tmp88)){
													HX_STACK_LINE(414)
													tmp87 = (int)0;
												}
												else{
													HX_STACK_LINE(414)
													tmp87 = Value1;
												}
											}
											HX_STACK_LINE(414)
											int tmp88 = (int(tmp87) << int((int)16));		HX_STACK_VAR(tmp88,"tmp88");
											HX_STACK_LINE(414)
											hx::OrEq(output,tmp88);
											HX_STACK_LINE(414)
											Value1;
										}
										HX_STACK_LINE(414)
										mid;
									}
									HX_STACK_LINE(414)
									{
										HX_STACK_LINE(414)
										{
											HX_STACK_LINE(414)
											Float tmp84 = (Chroma * (int)255);		HX_STACK_VAR(tmp84,"tmp84");
											HX_STACK_LINE(414)
											int tmp85 = ::Math_obj::round(tmp84);		HX_STACK_VAR(tmp85,"tmp85");
											HX_STACK_LINE(414)
											int Value1 = tmp85;		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(414)
											hx::AndEq(output,(int)-65281);
											HX_STACK_LINE(414)
											bool tmp86 = (Value1 > (int)255);		HX_STACK_VAR(tmp86,"tmp86");
											HX_STACK_LINE(414)
											int tmp87;		HX_STACK_VAR(tmp87,"tmp87");
											HX_STACK_LINE(414)
											if ((tmp86)){
												HX_STACK_LINE(414)
												tmp87 = (int)255;
											}
											else{
												HX_STACK_LINE(414)
												bool tmp88 = (Value1 < (int)0);		HX_STACK_VAR(tmp88,"tmp88");
												HX_STACK_LINE(414)
												if ((tmp88)){
													HX_STACK_LINE(414)
													tmp87 = (int)0;
												}
												else{
													HX_STACK_LINE(414)
													tmp87 = Value1;
												}
											}
											HX_STACK_LINE(414)
											int tmp88 = (int(tmp87) << int((int)8));		HX_STACK_VAR(tmp88,"tmp88");
											HX_STACK_LINE(414)
											hx::OrEq(output,tmp88);
											HX_STACK_LINE(414)
											Value1;
										}
										HX_STACK_LINE(414)
										Chroma;
									}
									HX_STACK_LINE(414)
									{
										HX_STACK_LINE(414)
										{
											HX_STACK_LINE(414)
											Float tmp84 = (match * (int)255);		HX_STACK_VAR(tmp84,"tmp84");
											HX_STACK_LINE(414)
											int tmp85 = ::Math_obj::round(tmp84);		HX_STACK_VAR(tmp85,"tmp85");
											HX_STACK_LINE(414)
											int Value1 = tmp85;		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(414)
											hx::AndEq(output,(int)-256);
											HX_STACK_LINE(414)
											bool tmp86 = (Value1 > (int)255);		HX_STACK_VAR(tmp86,"tmp86");
											HX_STACK_LINE(414)
											int tmp87;		HX_STACK_VAR(tmp87,"tmp87");
											HX_STACK_LINE(414)
											if ((tmp86)){
												HX_STACK_LINE(414)
												tmp87 = (int)255;
											}
											else{
												HX_STACK_LINE(414)
												bool tmp88 = (Value1 < (int)0);		HX_STACK_VAR(tmp88,"tmp88");
												HX_STACK_LINE(414)
												if ((tmp88)){
													HX_STACK_LINE(414)
													tmp87 = (int)0;
												}
												else{
													HX_STACK_LINE(414)
													tmp87 = Value1;
												}
											}
											HX_STACK_LINE(414)
											hx::OrEq(output,tmp87);
											HX_STACK_LINE(414)
											Value1;
										}
										HX_STACK_LINE(414)
										match;
									}
									HX_STACK_LINE(414)
									{
										HX_STACK_LINE(414)
										{
											HX_STACK_LINE(414)
											Float tmp84 = (Alpha * (int)255);		HX_STACK_VAR(tmp84,"tmp84");
											HX_STACK_LINE(414)
											int tmp85 = ::Math_obj::round(tmp84);		HX_STACK_VAR(tmp85,"tmp85");
											HX_STACK_LINE(414)
											int Value1 = tmp85;		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(414)
											hx::AndEq(output,(int)16777215);
											HX_STACK_LINE(414)
											bool tmp86 = (Value1 > (int)255);		HX_STACK_VAR(tmp86,"tmp86");
											HX_STACK_LINE(414)
											int tmp87;		HX_STACK_VAR(tmp87,"tmp87");
											HX_STACK_LINE(414)
											if ((tmp86)){
												HX_STACK_LINE(414)
												tmp87 = (int)255;
											}
											else{
												HX_STACK_LINE(414)
												bool tmp88 = (Value1 < (int)0);		HX_STACK_VAR(tmp88,"tmp88");
												HX_STACK_LINE(414)
												if ((tmp88)){
													HX_STACK_LINE(414)
													tmp87 = (int)0;
												}
												else{
													HX_STACK_LINE(414)
													tmp87 = Value1;
												}
											}
											HX_STACK_LINE(414)
											int tmp88 = (int(tmp87) << int((int)24));		HX_STACK_VAR(tmp88,"tmp88");
											HX_STACK_LINE(414)
											hx::OrEq(output,tmp88);
											HX_STACK_LINE(414)
											Value1;
										}
										HX_STACK_LINE(414)
										Alpha;
									}
									HX_STACK_LINE(414)
									tmp83 = output;
								}
								HX_STACK_LINE(414)
								tmp83;
							}
							;break;
							case (int)2: {
								HX_STACK_LINE(414)
								int tmp83;		HX_STACK_VAR(tmp83,"tmp83");
								HX_STACK_LINE(414)
								{
									HX_STACK_LINE(414)
									{
										HX_STACK_LINE(414)
										{
											HX_STACK_LINE(414)
											Float tmp84 = (match * (int)255);		HX_STACK_VAR(tmp84,"tmp84");
											HX_STACK_LINE(414)
											int tmp85 = ::Math_obj::round(tmp84);		HX_STACK_VAR(tmp85,"tmp85");
											HX_STACK_LINE(414)
											int Value1 = tmp85;		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(414)
											hx::AndEq(output,(int)-16711681);
											HX_STACK_LINE(414)
											bool tmp86 = (Value1 > (int)255);		HX_STACK_VAR(tmp86,"tmp86");
											HX_STACK_LINE(414)
											int tmp87;		HX_STACK_VAR(tmp87,"tmp87");
											HX_STACK_LINE(414)
											if ((tmp86)){
												HX_STACK_LINE(414)
												tmp87 = (int)255;
											}
											else{
												HX_STACK_LINE(414)
												bool tmp88 = (Value1 < (int)0);		HX_STACK_VAR(tmp88,"tmp88");
												HX_STACK_LINE(414)
												if ((tmp88)){
													HX_STACK_LINE(414)
													tmp87 = (int)0;
												}
												else{
													HX_STACK_LINE(414)
													tmp87 = Value1;
												}
											}
											HX_STACK_LINE(414)
											int tmp88 = (int(tmp87) << int((int)16));		HX_STACK_VAR(tmp88,"tmp88");
											HX_STACK_LINE(414)
											hx::OrEq(output,tmp88);
											HX_STACK_LINE(414)
											Value1;
										}
										HX_STACK_LINE(414)
										match;
									}
									HX_STACK_LINE(414)
									{
										HX_STACK_LINE(414)
										{
											HX_STACK_LINE(414)
											Float tmp84 = (Chroma * (int)255);		HX_STACK_VAR(tmp84,"tmp84");
											HX_STACK_LINE(414)
											int tmp85 = ::Math_obj::round(tmp84);		HX_STACK_VAR(tmp85,"tmp85");
											HX_STACK_LINE(414)
											int Value1 = tmp85;		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(414)
											hx::AndEq(output,(int)-65281);
											HX_STACK_LINE(414)
											bool tmp86 = (Value1 > (int)255);		HX_STACK_VAR(tmp86,"tmp86");
											HX_STACK_LINE(414)
											int tmp87;		HX_STACK_VAR(tmp87,"tmp87");
											HX_STACK_LINE(414)
											if ((tmp86)){
												HX_STACK_LINE(414)
												tmp87 = (int)255;
											}
											else{
												HX_STACK_LINE(414)
												bool tmp88 = (Value1 < (int)0);		HX_STACK_VAR(tmp88,"tmp88");
												HX_STACK_LINE(414)
												if ((tmp88)){
													HX_STACK_LINE(414)
													tmp87 = (int)0;
												}
												else{
													HX_STACK_LINE(414)
													tmp87 = Value1;
												}
											}
											HX_STACK_LINE(414)
											int tmp88 = (int(tmp87) << int((int)8));		HX_STACK_VAR(tmp88,"tmp88");
											HX_STACK_LINE(414)
											hx::OrEq(output,tmp88);
											HX_STACK_LINE(414)
											Value1;
										}
										HX_STACK_LINE(414)
										Chroma;
									}
									HX_STACK_LINE(414)
									{
										HX_STACK_LINE(414)
										{
											HX_STACK_LINE(414)
											Float tmp84 = (mid * (int)255);		HX_STACK_VAR(tmp84,"tmp84");
											HX_STACK_LINE(414)
											int tmp85 = ::Math_obj::round(tmp84);		HX_STACK_VAR(tmp85,"tmp85");
											HX_STACK_LINE(414)
											int Value1 = tmp85;		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(414)
											hx::AndEq(output,(int)-256);
											HX_STACK_LINE(414)
											bool tmp86 = (Value1 > (int)255);		HX_STACK_VAR(tmp86,"tmp86");
											HX_STACK_LINE(414)
											int tmp87;		HX_STACK_VAR(tmp87,"tmp87");
											HX_STACK_LINE(414)
											if ((tmp86)){
												HX_STACK_LINE(414)
												tmp87 = (int)255;
											}
											else{
												HX_STACK_LINE(414)
												bool tmp88 = (Value1 < (int)0);		HX_STACK_VAR(tmp88,"tmp88");
												HX_STACK_LINE(414)
												if ((tmp88)){
													HX_STACK_LINE(414)
													tmp87 = (int)0;
												}
												else{
													HX_STACK_LINE(414)
													tmp87 = Value1;
												}
											}
											HX_STACK_LINE(414)
											hx::OrEq(output,tmp87);
											HX_STACK_LINE(414)
											Value1;
										}
										HX_STACK_LINE(414)
										mid;
									}
									HX_STACK_LINE(414)
									{
										HX_STACK_LINE(414)
										{
											HX_STACK_LINE(414)
											Float tmp84 = (Alpha * (int)255);		HX_STACK_VAR(tmp84,"tmp84");
											HX_STACK_LINE(414)
											int tmp85 = ::Math_obj::round(tmp84);		HX_STACK_VAR(tmp85,"tmp85");
											HX_STACK_LINE(414)
											int Value1 = tmp85;		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(414)
											hx::AndEq(output,(int)16777215);
											HX_STACK_LINE(414)
											bool tmp86 = (Value1 > (int)255);		HX_STACK_VAR(tmp86,"tmp86");
											HX_STACK_LINE(414)
											int tmp87;		HX_STACK_VAR(tmp87,"tmp87");
											HX_STACK_LINE(414)
											if ((tmp86)){
												HX_STACK_LINE(414)
												tmp87 = (int)255;
											}
											else{
												HX_STACK_LINE(414)
												bool tmp88 = (Value1 < (int)0);		HX_STACK_VAR(tmp88,"tmp88");
												HX_STACK_LINE(414)
												if ((tmp88)){
													HX_STACK_LINE(414)
													tmp87 = (int)0;
												}
												else{
													HX_STACK_LINE(414)
													tmp87 = Value1;
												}
											}
											HX_STACK_LINE(414)
											int tmp88 = (int(tmp87) << int((int)24));		HX_STACK_VAR(tmp88,"tmp88");
											HX_STACK_LINE(414)
											hx::OrEq(output,tmp88);
											HX_STACK_LINE(414)
											Value1;
										}
										HX_STACK_LINE(414)
										Alpha;
									}
									HX_STACK_LINE(414)
									tmp83 = output;
								}
								HX_STACK_LINE(414)
								tmp83;
							}
							;break;
							case (int)3: {
								HX_STACK_LINE(414)
								int tmp83;		HX_STACK_VAR(tmp83,"tmp83");
								HX_STACK_LINE(414)
								{
									HX_STACK_LINE(414)
									{
										HX_STACK_LINE(414)
										{
											HX_STACK_LINE(414)
											Float tmp84 = (match * (int)255);		HX_STACK_VAR(tmp84,"tmp84");
											HX_STACK_LINE(414)
											int tmp85 = ::Math_obj::round(tmp84);		HX_STACK_VAR(tmp85,"tmp85");
											HX_STACK_LINE(414)
											int Value1 = tmp85;		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(414)
											hx::AndEq(output,(int)-16711681);
											HX_STACK_LINE(414)
											bool tmp86 = (Value1 > (int)255);		HX_STACK_VAR(tmp86,"tmp86");
											HX_STACK_LINE(414)
											int tmp87;		HX_STACK_VAR(tmp87,"tmp87");
											HX_STACK_LINE(414)
											if ((tmp86)){
												HX_STACK_LINE(414)
												tmp87 = (int)255;
											}
											else{
												HX_STACK_LINE(414)
												bool tmp88 = (Value1 < (int)0);		HX_STACK_VAR(tmp88,"tmp88");
												HX_STACK_LINE(414)
												if ((tmp88)){
													HX_STACK_LINE(414)
													tmp87 = (int)0;
												}
												else{
													HX_STACK_LINE(414)
													tmp87 = Value1;
												}
											}
											HX_STACK_LINE(414)
											int tmp88 = (int(tmp87) << int((int)16));		HX_STACK_VAR(tmp88,"tmp88");
											HX_STACK_LINE(414)
											hx::OrEq(output,tmp88);
											HX_STACK_LINE(414)
											Value1;
										}
										HX_STACK_LINE(414)
										match;
									}
									HX_STACK_LINE(414)
									{
										HX_STACK_LINE(414)
										{
											HX_STACK_LINE(414)
											Float tmp84 = (mid * (int)255);		HX_STACK_VAR(tmp84,"tmp84");
											HX_STACK_LINE(414)
											int tmp85 = ::Math_obj::round(tmp84);		HX_STACK_VAR(tmp85,"tmp85");
											HX_STACK_LINE(414)
											int Value1 = tmp85;		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(414)
											hx::AndEq(output,(int)-65281);
											HX_STACK_LINE(414)
											bool tmp86 = (Value1 > (int)255);		HX_STACK_VAR(tmp86,"tmp86");
											HX_STACK_LINE(414)
											int tmp87;		HX_STACK_VAR(tmp87,"tmp87");
											HX_STACK_LINE(414)
											if ((tmp86)){
												HX_STACK_LINE(414)
												tmp87 = (int)255;
											}
											else{
												HX_STACK_LINE(414)
												bool tmp88 = (Value1 < (int)0);		HX_STACK_VAR(tmp88,"tmp88");
												HX_STACK_LINE(414)
												if ((tmp88)){
													HX_STACK_LINE(414)
													tmp87 = (int)0;
												}
												else{
													HX_STACK_LINE(414)
													tmp87 = Value1;
												}
											}
											HX_STACK_LINE(414)
											int tmp88 = (int(tmp87) << int((int)8));		HX_STACK_VAR(tmp88,"tmp88");
											HX_STACK_LINE(414)
											hx::OrEq(output,tmp88);
											HX_STACK_LINE(414)
											Value1;
										}
										HX_STACK_LINE(414)
										mid;
									}
									HX_STACK_LINE(414)
									{
										HX_STACK_LINE(414)
										{
											HX_STACK_LINE(414)
											Float tmp84 = (Chroma * (int)255);		HX_STACK_VAR(tmp84,"tmp84");
											HX_STACK_LINE(414)
											int tmp85 = ::Math_obj::round(tmp84);		HX_STACK_VAR(tmp85,"tmp85");
											HX_STACK_LINE(414)
											int Value1 = tmp85;		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(414)
											hx::AndEq(output,(int)-256);
											HX_STACK_LINE(414)
											bool tmp86 = (Value1 > (int)255);		HX_STACK_VAR(tmp86,"tmp86");
											HX_STACK_LINE(414)
											int tmp87;		HX_STACK_VAR(tmp87,"tmp87");
											HX_STACK_LINE(414)
											if ((tmp86)){
												HX_STACK_LINE(414)
												tmp87 = (int)255;
											}
											else{
												HX_STACK_LINE(414)
												bool tmp88 = (Value1 < (int)0);		HX_STACK_VAR(tmp88,"tmp88");
												HX_STACK_LINE(414)
												if ((tmp88)){
													HX_STACK_LINE(414)
													tmp87 = (int)0;
												}
												else{
													HX_STACK_LINE(414)
													tmp87 = Value1;
												}
											}
											HX_STACK_LINE(414)
											hx::OrEq(output,tmp87);
											HX_STACK_LINE(414)
											Value1;
										}
										HX_STACK_LINE(414)
										Chroma;
									}
									HX_STACK_LINE(414)
									{
										HX_STACK_LINE(414)
										{
											HX_STACK_LINE(414)
											Float tmp84 = (Alpha * (int)255);		HX_STACK_VAR(tmp84,"tmp84");
											HX_STACK_LINE(414)
											int tmp85 = ::Math_obj::round(tmp84);		HX_STACK_VAR(tmp85,"tmp85");
											HX_STACK_LINE(414)
											int Value1 = tmp85;		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(414)
											hx::AndEq(output,(int)16777215);
											HX_STACK_LINE(414)
											bool tmp86 = (Value1 > (int)255);		HX_STACK_VAR(tmp86,"tmp86");
											HX_STACK_LINE(414)
											int tmp87;		HX_STACK_VAR(tmp87,"tmp87");
											HX_STACK_LINE(414)
											if ((tmp86)){
												HX_STACK_LINE(414)
												tmp87 = (int)255;
											}
											else{
												HX_STACK_LINE(414)
												bool tmp88 = (Value1 < (int)0);		HX_STACK_VAR(tmp88,"tmp88");
												HX_STACK_LINE(414)
												if ((tmp88)){
													HX_STACK_LINE(414)
													tmp87 = (int)0;
												}
												else{
													HX_STACK_LINE(414)
													tmp87 = Value1;
												}
											}
											HX_STACK_LINE(414)
											int tmp88 = (int(tmp87) << int((int)24));		HX_STACK_VAR(tmp88,"tmp88");
											HX_STACK_LINE(414)
											hx::OrEq(output,tmp88);
											HX_STACK_LINE(414)
											Value1;
										}
										HX_STACK_LINE(414)
										Alpha;
									}
									HX_STACK_LINE(414)
									tmp83 = output;
								}
								HX_STACK_LINE(414)
								tmp83;
							}
							;break;
							case (int)4: {
								HX_STACK_LINE(414)
								int tmp83;		HX_STACK_VAR(tmp83,"tmp83");
								HX_STACK_LINE(414)
								{
									HX_STACK_LINE(414)
									{
										HX_STACK_LINE(414)
										{
											HX_STACK_LINE(414)
											Float tmp84 = (mid * (int)255);		HX_STACK_VAR(tmp84,"tmp84");
											HX_STACK_LINE(414)
											int tmp85 = ::Math_obj::round(tmp84);		HX_STACK_VAR(tmp85,"tmp85");
											HX_STACK_LINE(414)
											int Value1 = tmp85;		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(414)
											hx::AndEq(output,(int)-16711681);
											HX_STACK_LINE(414)
											bool tmp86 = (Value1 > (int)255);		HX_STACK_VAR(tmp86,"tmp86");
											HX_STACK_LINE(414)
											int tmp87;		HX_STACK_VAR(tmp87,"tmp87");
											HX_STACK_LINE(414)
											if ((tmp86)){
												HX_STACK_LINE(414)
												tmp87 = (int)255;
											}
											else{
												HX_STACK_LINE(414)
												bool tmp88 = (Value1 < (int)0);		HX_STACK_VAR(tmp88,"tmp88");
												HX_STACK_LINE(414)
												if ((tmp88)){
													HX_STACK_LINE(414)
													tmp87 = (int)0;
												}
												else{
													HX_STACK_LINE(414)
													tmp87 = Value1;
												}
											}
											HX_STACK_LINE(414)
											int tmp88 = (int(tmp87) << int((int)16));		HX_STACK_VAR(tmp88,"tmp88");
											HX_STACK_LINE(414)
											hx::OrEq(output,tmp88);
											HX_STACK_LINE(414)
											Value1;
										}
										HX_STACK_LINE(414)
										mid;
									}
									HX_STACK_LINE(414)
									{
										HX_STACK_LINE(414)
										{
											HX_STACK_LINE(414)
											Float tmp84 = (match * (int)255);		HX_STACK_VAR(tmp84,"tmp84");
											HX_STACK_LINE(414)
											int tmp85 = ::Math_obj::round(tmp84);		HX_STACK_VAR(tmp85,"tmp85");
											HX_STACK_LINE(414)
											int Value1 = tmp85;		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(414)
											hx::AndEq(output,(int)-65281);
											HX_STACK_LINE(414)
											bool tmp86 = (Value1 > (int)255);		HX_STACK_VAR(tmp86,"tmp86");
											HX_STACK_LINE(414)
											int tmp87;		HX_STACK_VAR(tmp87,"tmp87");
											HX_STACK_LINE(414)
											if ((tmp86)){
												HX_STACK_LINE(414)
												tmp87 = (int)255;
											}
											else{
												HX_STACK_LINE(414)
												bool tmp88 = (Value1 < (int)0);		HX_STACK_VAR(tmp88,"tmp88");
												HX_STACK_LINE(414)
												if ((tmp88)){
													HX_STACK_LINE(414)
													tmp87 = (int)0;
												}
												else{
													HX_STACK_LINE(414)
													tmp87 = Value1;
												}
											}
											HX_STACK_LINE(414)
											int tmp88 = (int(tmp87) << int((int)8));		HX_STACK_VAR(tmp88,"tmp88");
											HX_STACK_LINE(414)
											hx::OrEq(output,tmp88);
											HX_STACK_LINE(414)
											Value1;
										}
										HX_STACK_LINE(414)
										match;
									}
									HX_STACK_LINE(414)
									{
										HX_STACK_LINE(414)
										{
											HX_STACK_LINE(414)
											Float tmp84 = (Chroma * (int)255);		HX_STACK_VAR(tmp84,"tmp84");
											HX_STACK_LINE(414)
											int tmp85 = ::Math_obj::round(tmp84);		HX_STACK_VAR(tmp85,"tmp85");
											HX_STACK_LINE(414)
											int Value1 = tmp85;		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(414)
											hx::AndEq(output,(int)-256);
											HX_STACK_LINE(414)
											bool tmp86 = (Value1 > (int)255);		HX_STACK_VAR(tmp86,"tmp86");
											HX_STACK_LINE(414)
											int tmp87;		HX_STACK_VAR(tmp87,"tmp87");
											HX_STACK_LINE(414)
											if ((tmp86)){
												HX_STACK_LINE(414)
												tmp87 = (int)255;
											}
											else{
												HX_STACK_LINE(414)
												bool tmp88 = (Value1 < (int)0);		HX_STACK_VAR(tmp88,"tmp88");
												HX_STACK_LINE(414)
												if ((tmp88)){
													HX_STACK_LINE(414)
													tmp87 = (int)0;
												}
												else{
													HX_STACK_LINE(414)
													tmp87 = Value1;
												}
											}
											HX_STACK_LINE(414)
											hx::OrEq(output,tmp87);
											HX_STACK_LINE(414)
											Value1;
										}
										HX_STACK_LINE(414)
										Chroma;
									}
									HX_STACK_LINE(414)
									{
										HX_STACK_LINE(414)
										{
											HX_STACK_LINE(414)
											Float tmp84 = (Alpha * (int)255);		HX_STACK_VAR(tmp84,"tmp84");
											HX_STACK_LINE(414)
											int tmp85 = ::Math_obj::round(tmp84);		HX_STACK_VAR(tmp85,"tmp85");
											HX_STACK_LINE(414)
											int Value1 = tmp85;		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(414)
											hx::AndEq(output,(int)16777215);
											HX_STACK_LINE(414)
											bool tmp86 = (Value1 > (int)255);		HX_STACK_VAR(tmp86,"tmp86");
											HX_STACK_LINE(414)
											int tmp87;		HX_STACK_VAR(tmp87,"tmp87");
											HX_STACK_LINE(414)
											if ((tmp86)){
												HX_STACK_LINE(414)
												tmp87 = (int)255;
											}
											else{
												HX_STACK_LINE(414)
												bool tmp88 = (Value1 < (int)0);		HX_STACK_VAR(tmp88,"tmp88");
												HX_STACK_LINE(414)
												if ((tmp88)){
													HX_STACK_LINE(414)
													tmp87 = (int)0;
												}
												else{
													HX_STACK_LINE(414)
													tmp87 = Value1;
												}
											}
											HX_STACK_LINE(414)
											int tmp88 = (int(tmp87) << int((int)24));		HX_STACK_VAR(tmp88,"tmp88");
											HX_STACK_LINE(414)
											hx::OrEq(output,tmp88);
											HX_STACK_LINE(414)
											Value1;
										}
										HX_STACK_LINE(414)
										Alpha;
									}
									HX_STACK_LINE(414)
									tmp83 = output;
								}
								HX_STACK_LINE(414)
								tmp83;
							}
							;break;
							case (int)5: {
								HX_STACK_LINE(414)
								int tmp83;		HX_STACK_VAR(tmp83,"tmp83");
								HX_STACK_LINE(414)
								{
									HX_STACK_LINE(414)
									{
										HX_STACK_LINE(414)
										{
											HX_STACK_LINE(414)
											Float tmp84 = (Chroma * (int)255);		HX_STACK_VAR(tmp84,"tmp84");
											HX_STACK_LINE(414)
											int tmp85 = ::Math_obj::round(tmp84);		HX_STACK_VAR(tmp85,"tmp85");
											HX_STACK_LINE(414)
											int Value1 = tmp85;		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(414)
											hx::AndEq(output,(int)-16711681);
											HX_STACK_LINE(414)
											bool tmp86 = (Value1 > (int)255);		HX_STACK_VAR(tmp86,"tmp86");
											HX_STACK_LINE(414)
											int tmp87;		HX_STACK_VAR(tmp87,"tmp87");
											HX_STACK_LINE(414)
											if ((tmp86)){
												HX_STACK_LINE(414)
												tmp87 = (int)255;
											}
											else{
												HX_STACK_LINE(414)
												bool tmp88 = (Value1 < (int)0);		HX_STACK_VAR(tmp88,"tmp88");
												HX_STACK_LINE(414)
												if ((tmp88)){
													HX_STACK_LINE(414)
													tmp87 = (int)0;
												}
												else{
													HX_STACK_LINE(414)
													tmp87 = Value1;
												}
											}
											HX_STACK_LINE(414)
											int tmp88 = (int(tmp87) << int((int)16));		HX_STACK_VAR(tmp88,"tmp88");
											HX_STACK_LINE(414)
											hx::OrEq(output,tmp88);
											HX_STACK_LINE(414)
											Value1;
										}
										HX_STACK_LINE(414)
										Chroma;
									}
									HX_STACK_LINE(414)
									{
										HX_STACK_LINE(414)
										{
											HX_STACK_LINE(414)
											Float tmp84 = (match * (int)255);		HX_STACK_VAR(tmp84,"tmp84");
											HX_STACK_LINE(414)
											int tmp85 = ::Math_obj::round(tmp84);		HX_STACK_VAR(tmp85,"tmp85");
											HX_STACK_LINE(414)
											int Value1 = tmp85;		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(414)
											hx::AndEq(output,(int)-65281);
											HX_STACK_LINE(414)
											bool tmp86 = (Value1 > (int)255);		HX_STACK_VAR(tmp86,"tmp86");
											HX_STACK_LINE(414)
											int tmp87;		HX_STACK_VAR(tmp87,"tmp87");
											HX_STACK_LINE(414)
											if ((tmp86)){
												HX_STACK_LINE(414)
												tmp87 = (int)255;
											}
											else{
												HX_STACK_LINE(414)
												bool tmp88 = (Value1 < (int)0);		HX_STACK_VAR(tmp88,"tmp88");
												HX_STACK_LINE(414)
												if ((tmp88)){
													HX_STACK_LINE(414)
													tmp87 = (int)0;
												}
												else{
													HX_STACK_LINE(414)
													tmp87 = Value1;
												}
											}
											HX_STACK_LINE(414)
											int tmp88 = (int(tmp87) << int((int)8));		HX_STACK_VAR(tmp88,"tmp88");
											HX_STACK_LINE(414)
											hx::OrEq(output,tmp88);
											HX_STACK_LINE(414)
											Value1;
										}
										HX_STACK_LINE(414)
										match;
									}
									HX_STACK_LINE(414)
									{
										HX_STACK_LINE(414)
										{
											HX_STACK_LINE(414)
											Float tmp84 = (mid * (int)255);		HX_STACK_VAR(tmp84,"tmp84");
											HX_STACK_LINE(414)
											int tmp85 = ::Math_obj::round(tmp84);		HX_STACK_VAR(tmp85,"tmp85");
											HX_STACK_LINE(414)
											int Value1 = tmp85;		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(414)
											hx::AndEq(output,(int)-256);
											HX_STACK_LINE(414)
											bool tmp86 = (Value1 > (int)255);		HX_STACK_VAR(tmp86,"tmp86");
											HX_STACK_LINE(414)
											int tmp87;		HX_STACK_VAR(tmp87,"tmp87");
											HX_STACK_LINE(414)
											if ((tmp86)){
												HX_STACK_LINE(414)
												tmp87 = (int)255;
											}
											else{
												HX_STACK_LINE(414)
												bool tmp88 = (Value1 < (int)0);		HX_STACK_VAR(tmp88,"tmp88");
												HX_STACK_LINE(414)
												if ((tmp88)){
													HX_STACK_LINE(414)
													tmp87 = (int)0;
												}
												else{
													HX_STACK_LINE(414)
													tmp87 = Value1;
												}
											}
											HX_STACK_LINE(414)
											hx::OrEq(output,tmp87);
											HX_STACK_LINE(414)
											Value1;
										}
										HX_STACK_LINE(414)
										mid;
									}
									HX_STACK_LINE(414)
									{
										HX_STACK_LINE(414)
										{
											HX_STACK_LINE(414)
											Float tmp84 = (Alpha * (int)255);		HX_STACK_VAR(tmp84,"tmp84");
											HX_STACK_LINE(414)
											int tmp85 = ::Math_obj::round(tmp84);		HX_STACK_VAR(tmp85,"tmp85");
											HX_STACK_LINE(414)
											int Value1 = tmp85;		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(414)
											hx::AndEq(output,(int)16777215);
											HX_STACK_LINE(414)
											bool tmp86 = (Value1 > (int)255);		HX_STACK_VAR(tmp86,"tmp86");
											HX_STACK_LINE(414)
											int tmp87;		HX_STACK_VAR(tmp87,"tmp87");
											HX_STACK_LINE(414)
											if ((tmp86)){
												HX_STACK_LINE(414)
												tmp87 = (int)255;
											}
											else{
												HX_STACK_LINE(414)
												bool tmp88 = (Value1 < (int)0);		HX_STACK_VAR(tmp88,"tmp88");
												HX_STACK_LINE(414)
												if ((tmp88)){
													HX_STACK_LINE(414)
													tmp87 = (int)0;
												}
												else{
													HX_STACK_LINE(414)
													tmp87 = Value1;
												}
											}
											HX_STACK_LINE(414)
											int tmp88 = (int(tmp87) << int((int)24));		HX_STACK_VAR(tmp88,"tmp88");
											HX_STACK_LINE(414)
											hx::OrEq(output,tmp88);
											HX_STACK_LINE(414)
											Value1;
										}
										HX_STACK_LINE(414)
										Alpha;
									}
									HX_STACK_LINE(414)
									tmp83 = output;
								}
								HX_STACK_LINE(414)
								tmp83;
							}
							;break;
						}
					}
					HX_STACK_LINE(414)
					output;
				}
			}
			HX_STACK_LINE(414)
			Value;
		}
		HX_STACK_LINE(415)
		int tmp1 = output;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(415)
		return tmp1;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,getDarkened,return )

int FlxColor_Impl__obj::getLightened( int this1,hx::Null< Float >  __o_Factor){
Float Factor = __o_Factor.Default(((Float)0.2));
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","getLightened",0xe2b011ed,"flixel.util._FlxColor.FlxColor_Impl_.getLightened","flixel/util/FlxColor.hx",425,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(Factor,"Factor")
{
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
				tmp2 = (Factor < (int)0);
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
				tmp3 = (int)0;
			}
			else{
				HX_STACK_LINE(426)
				tmp3 = Factor;
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
				tmp5 = (lowerBound > (int)1);
			}
			else{
				HX_STACK_LINE(426)
				tmp5 = false;
			}
			HX_STACK_LINE(426)
			if ((tmp5)){
				HX_STACK_LINE(426)
				tmp = (int)1;
			}
			else{
				HX_STACK_LINE(426)
				tmp = lowerBound;
			}
		}
		HX_STACK_LINE(426)
		Factor = ((Float)(tmp));
		HX_STACK_LINE(427)
		int output = this1;		HX_STACK_VAR(output,"output");
		HX_STACK_LINE(428)
		{
			HX_STACK_LINE(428)
			int tmp1 = (int(output) >> int((int)16));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(428)
			int tmp2 = (int(tmp1) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(428)
			Float tmp3 = (Float(tmp2) / Float((int)255));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(428)
			int tmp4 = (int(output) >> int((int)8));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(428)
			int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(428)
			Float tmp6 = (Float(tmp5) / Float((int)255));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(428)
			int tmp7 = (int(output) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(428)
			Float tmp8 = (Float(tmp7) / Float((int)255));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(428)
			Float tmp9 = ::Math_obj::max(tmp6,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(428)
			Float tmp10 = ::Math_obj::max(tmp3,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(428)
			int tmp11 = (int(output) >> int((int)16));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(428)
			int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(428)
			Float tmp13 = (Float(tmp12) / Float((int)255));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(428)
			int tmp14 = (int(output) >> int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(428)
			int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(428)
			Float tmp16 = (Float(tmp15) / Float((int)255));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(428)
			int tmp17 = (int(output) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(428)
			Float tmp18 = (Float(tmp17) / Float((int)255));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(428)
			Float tmp19 = ::Math_obj::min(tmp16,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(428)
			Float tmp20 = ::Math_obj::min(tmp13,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(428)
			Float tmp21 = (tmp10 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(428)
			Float tmp22 = (Float(tmp21) / Float((int)2));		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(428)
			int tmp23 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(428)
			int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(428)
			Float tmp25 = (Float(tmp24) / Float((int)255));		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(428)
			int tmp26 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(428)
			int tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(428)
			Float tmp28 = (Float(tmp27) / Float((int)255));		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(428)
			int tmp29 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(428)
			Float tmp30 = (Float(tmp29) / Float((int)255));		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(428)
			Float tmp31 = ::Math_obj::max(tmp28,tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(428)
			Float tmp32 = ::Math_obj::max(tmp25,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(428)
			int tmp33 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(428)
			int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(428)
			Float tmp35 = (Float(tmp34) / Float((int)255));		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(428)
			int tmp36 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(428)
			int tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(428)
			Float tmp38 = (Float(tmp37) / Float((int)255));		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(428)
			int tmp39 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(428)
			Float tmp40 = (Float(tmp39) / Float((int)255));		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(428)
			Float tmp41 = ::Math_obj::min(tmp38,tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(428)
			Float tmp42 = ::Math_obj::min(tmp35,tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(428)
			Float tmp43 = (tmp32 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(428)
			Float tmp44 = (Float(tmp43) / Float((int)2));		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(428)
			Float tmp45 = ((int)1 - tmp44);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(428)
			Float tmp46 = Factor;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(428)
			Float tmp47 = (tmp45 * tmp46);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(428)
			Float tmp48 = (tmp22 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(428)
			Float Value = tmp48;		HX_STACK_VAR(Value,"Value");
			HX_STACK_LINE(428)
			{
				HX_STACK_LINE(428)
				int tmp49 = output;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(428)
				Float tmp50 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::get_hue(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(428)
				Float Hue = tmp50;		HX_STACK_VAR(Hue,"Hue");
				HX_STACK_LINE(428)
				int tmp51 = (int(output) >> int((int)16));		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(428)
				int tmp52 = (int(tmp51) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(428)
				Float tmp53 = (Float(tmp52) / Float((int)255));		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(428)
				int tmp54 = (int(output) >> int((int)8));		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(428)
				int tmp55 = (int(tmp54) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(428)
				Float tmp56 = (Float(tmp55) / Float((int)255));		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(428)
				int tmp57 = (int(output) & int((int)255));		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(428)
				Float tmp58 = (Float(tmp57) / Float((int)255));		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(428)
				Float tmp59 = ::Math_obj::max(tmp56,tmp58);		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(428)
				Float tmp60 = ::Math_obj::max(tmp53,tmp59);		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(428)
				int tmp61 = (int(output) >> int((int)16));		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(428)
				int tmp62 = (int(tmp61) & int((int)255));		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(428)
				Float tmp63 = (Float(tmp62) / Float((int)255));		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(428)
				int tmp64 = (int(output) >> int((int)8));		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(428)
				int tmp65 = (int(tmp64) & int((int)255));		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(428)
				Float tmp66 = (Float(tmp65) / Float((int)255));		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(428)
				int tmp67 = (int(output) & int((int)255));		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(428)
				Float tmp68 = (Float(tmp67) / Float((int)255));		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(428)
				Float tmp69 = ::Math_obj::min(tmp66,tmp68);		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(428)
				Float tmp70 = ::Math_obj::min(tmp63,tmp69);		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(428)
				Float tmp71 = (tmp60 - tmp70);		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(428)
				int tmp72 = (int(output) >> int((int)16));		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(428)
				int tmp73 = (int(tmp72) & int((int)255));		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(428)
				Float tmp74 = (Float(tmp73) / Float((int)255));		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(428)
				int tmp75 = (int(output) >> int((int)8));		HX_STACK_VAR(tmp75,"tmp75");
				HX_STACK_LINE(428)
				int tmp76 = (int(tmp75) & int((int)255));		HX_STACK_VAR(tmp76,"tmp76");
				HX_STACK_LINE(428)
				Float tmp77 = (Float(tmp76) / Float((int)255));		HX_STACK_VAR(tmp77,"tmp77");
				HX_STACK_LINE(428)
				int tmp78 = (int(output) & int((int)255));		HX_STACK_VAR(tmp78,"tmp78");
				HX_STACK_LINE(428)
				Float tmp79 = (Float(tmp78) / Float((int)255));		HX_STACK_VAR(tmp79,"tmp79");
				HX_STACK_LINE(428)
				Float tmp80 = ::Math_obj::max(tmp77,tmp79);		HX_STACK_VAR(tmp80,"tmp80");
				HX_STACK_LINE(428)
				Float tmp81 = ::Math_obj::max(tmp74,tmp80);		HX_STACK_VAR(tmp81,"tmp81");
				HX_STACK_LINE(428)
				Float tmp82 = (Float(tmp71) / Float(tmp81));		HX_STACK_VAR(tmp82,"tmp82");
				HX_STACK_LINE(428)
				Float Saturation = tmp82;		HX_STACK_VAR(Saturation,"Saturation");
				HX_STACK_LINE(428)
				int tmp83 = (int(output) >> int((int)24));		HX_STACK_VAR(tmp83,"tmp83");
				HX_STACK_LINE(428)
				int tmp84 = (int(tmp83) & int((int)255));		HX_STACK_VAR(tmp84,"tmp84");
				HX_STACK_LINE(428)
				Float tmp85 = (Float(tmp84) / Float((int)255));		HX_STACK_VAR(tmp85,"tmp85");
				HX_STACK_LINE(428)
				Float Alpha = tmp85;		HX_STACK_VAR(Alpha,"Alpha");
				HX_STACK_LINE(428)
				Float tmp86 = ((int)2 * Value);		HX_STACK_VAR(tmp86,"tmp86");
				HX_STACK_LINE(428)
				Float tmp87 = (tmp86 - (int)1);		HX_STACK_VAR(tmp87,"tmp87");
				HX_STACK_LINE(428)
				Float tmp88 = ::Math_obj::abs(tmp87);		HX_STACK_VAR(tmp88,"tmp88");
				HX_STACK_LINE(428)
				Float tmp89 = ((int)1 - tmp88);		HX_STACK_VAR(tmp89,"tmp89");
				HX_STACK_LINE(428)
				Float tmp90 = Saturation;		HX_STACK_VAR(tmp90,"tmp90");
				HX_STACK_LINE(428)
				Float tmp91 = (tmp89 * tmp90);		HX_STACK_VAR(tmp91,"tmp91");
				HX_STACK_LINE(428)
				Float chroma = tmp91;		HX_STACK_VAR(chroma,"chroma");
				HX_STACK_LINE(428)
				Float tmp92 = Value;		HX_STACK_VAR(tmp92,"tmp92");
				HX_STACK_LINE(428)
				Float tmp93 = (Float(chroma) / Float((int)2));		HX_STACK_VAR(tmp93,"tmp93");
				HX_STACK_LINE(428)
				Float tmp94 = (tmp92 - tmp93);		HX_STACK_VAR(tmp94,"tmp94");
				HX_STACK_LINE(428)
				Float match = tmp94;		HX_STACK_VAR(match,"match");
				HX_STACK_LINE(428)
				{
					HX_STACK_LINE(428)
					Float Hue1 = Hue;		HX_STACK_VAR(Hue1,"Hue1");
					HX_STACK_LINE(428)
					Float Chroma = chroma;		HX_STACK_VAR(Chroma,"Chroma");
					HX_STACK_LINE(428)
					hx::ModEq(Hue1,(int)360);
					HX_STACK_LINE(428)
					Float tmp95 = (Float(Hue1) / Float((int)60));		HX_STACK_VAR(tmp95,"tmp95");
					HX_STACK_LINE(428)
					Float hueD = tmp95;		HX_STACK_VAR(hueD,"hueD");
					HX_STACK_LINE(428)
					Float tmp96 = Chroma;		HX_STACK_VAR(tmp96,"tmp96");
					HX_STACK_LINE(428)
					Float tmp97 = hx::Mod(hueD,(int)2);		HX_STACK_VAR(tmp97,"tmp97");
					HX_STACK_LINE(428)
					Float tmp98 = (tmp97 - (int)1);		HX_STACK_VAR(tmp98,"tmp98");
					HX_STACK_LINE(428)
					Float tmp99 = ::Math_obj::abs(tmp98);		HX_STACK_VAR(tmp99,"tmp99");
					HX_STACK_LINE(428)
					Float tmp100 = ((int)1 - tmp99);		HX_STACK_VAR(tmp100,"tmp100");
					HX_STACK_LINE(428)
					Float tmp101 = (tmp96 * tmp100);		HX_STACK_VAR(tmp101,"tmp101");
					HX_STACK_LINE(428)
					Float tmp102 = match;		HX_STACK_VAR(tmp102,"tmp102");
					HX_STACK_LINE(428)
					Float tmp103 = (tmp101 + tmp102);		HX_STACK_VAR(tmp103,"tmp103");
					HX_STACK_LINE(428)
					Float mid = tmp103;		HX_STACK_VAR(mid,"mid");
					HX_STACK_LINE(428)
					hx::AddEq(Chroma,match);
					HX_STACK_LINE(428)
					{
						HX_STACK_LINE(428)
						Float tmp104 = hueD;		HX_STACK_VAR(tmp104,"tmp104");
						HX_STACK_LINE(428)
						int tmp105 = ::Std_obj::_int(tmp104);		HX_STACK_VAR(tmp105,"tmp105");
						HX_STACK_LINE(428)
						int _g = tmp105;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(428)
						int tmp106 = _g;		HX_STACK_VAR(tmp106,"tmp106");
						HX_STACK_LINE(428)
						switch( (int)(tmp106)){
							case (int)0: {
								HX_STACK_LINE(428)
								int tmp107;		HX_STACK_VAR(tmp107,"tmp107");
								HX_STACK_LINE(428)
								{
									HX_STACK_LINE(428)
									{
										HX_STACK_LINE(428)
										{
											HX_STACK_LINE(428)
											Float tmp108 = (Chroma * (int)255);		HX_STACK_VAR(tmp108,"tmp108");
											HX_STACK_LINE(428)
											int tmp109 = ::Math_obj::round(tmp108);		HX_STACK_VAR(tmp109,"tmp109");
											HX_STACK_LINE(428)
											int Value1 = tmp109;		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(428)
											hx::AndEq(output,(int)-16711681);
											HX_STACK_LINE(428)
											bool tmp110 = (Value1 > (int)255);		HX_STACK_VAR(tmp110,"tmp110");
											HX_STACK_LINE(428)
											int tmp111;		HX_STACK_VAR(tmp111,"tmp111");
											HX_STACK_LINE(428)
											if ((tmp110)){
												HX_STACK_LINE(428)
												tmp111 = (int)255;
											}
											else{
												HX_STACK_LINE(428)
												bool tmp112 = (Value1 < (int)0);		HX_STACK_VAR(tmp112,"tmp112");
												HX_STACK_LINE(428)
												if ((tmp112)){
													HX_STACK_LINE(428)
													tmp111 = (int)0;
												}
												else{
													HX_STACK_LINE(428)
													tmp111 = Value1;
												}
											}
											HX_STACK_LINE(428)
											int tmp112 = (int(tmp111) << int((int)16));		HX_STACK_VAR(tmp112,"tmp112");
											HX_STACK_LINE(428)
											hx::OrEq(output,tmp112);
											HX_STACK_LINE(428)
											Value1;
										}
										HX_STACK_LINE(428)
										Chroma;
									}
									HX_STACK_LINE(428)
									{
										HX_STACK_LINE(428)
										{
											HX_STACK_LINE(428)
											Float tmp108 = (mid * (int)255);		HX_STACK_VAR(tmp108,"tmp108");
											HX_STACK_LINE(428)
											int tmp109 = ::Math_obj::round(tmp108);		HX_STACK_VAR(tmp109,"tmp109");
											HX_STACK_LINE(428)
											int Value1 = tmp109;		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(428)
											hx::AndEq(output,(int)-65281);
											HX_STACK_LINE(428)
											bool tmp110 = (Value1 > (int)255);		HX_STACK_VAR(tmp110,"tmp110");
											HX_STACK_LINE(428)
											int tmp111;		HX_STACK_VAR(tmp111,"tmp111");
											HX_STACK_LINE(428)
											if ((tmp110)){
												HX_STACK_LINE(428)
												tmp111 = (int)255;
											}
											else{
												HX_STACK_LINE(428)
												bool tmp112 = (Value1 < (int)0);		HX_STACK_VAR(tmp112,"tmp112");
												HX_STACK_LINE(428)
												if ((tmp112)){
													HX_STACK_LINE(428)
													tmp111 = (int)0;
												}
												else{
													HX_STACK_LINE(428)
													tmp111 = Value1;
												}
											}
											HX_STACK_LINE(428)
											int tmp112 = (int(tmp111) << int((int)8));		HX_STACK_VAR(tmp112,"tmp112");
											HX_STACK_LINE(428)
											hx::OrEq(output,tmp112);
											HX_STACK_LINE(428)
											Value1;
										}
										HX_STACK_LINE(428)
										mid;
									}
									HX_STACK_LINE(428)
									{
										HX_STACK_LINE(428)
										{
											HX_STACK_LINE(428)
											Float tmp108 = (match * (int)255);		HX_STACK_VAR(tmp108,"tmp108");
											HX_STACK_LINE(428)
											int tmp109 = ::Math_obj::round(tmp108);		HX_STACK_VAR(tmp109,"tmp109");
											HX_STACK_LINE(428)
											int Value1 = tmp109;		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(428)
											hx::AndEq(output,(int)-256);
											HX_STACK_LINE(428)
											bool tmp110 = (Value1 > (int)255);		HX_STACK_VAR(tmp110,"tmp110");
											HX_STACK_LINE(428)
											int tmp111;		HX_STACK_VAR(tmp111,"tmp111");
											HX_STACK_LINE(428)
											if ((tmp110)){
												HX_STACK_LINE(428)
												tmp111 = (int)255;
											}
											else{
												HX_STACK_LINE(428)
												bool tmp112 = (Value1 < (int)0);		HX_STACK_VAR(tmp112,"tmp112");
												HX_STACK_LINE(428)
												if ((tmp112)){
													HX_STACK_LINE(428)
													tmp111 = (int)0;
												}
												else{
													HX_STACK_LINE(428)
													tmp111 = Value1;
												}
											}
											HX_STACK_LINE(428)
											hx::OrEq(output,tmp111);
											HX_STACK_LINE(428)
											Value1;
										}
										HX_STACK_LINE(428)
										match;
									}
									HX_STACK_LINE(428)
									{
										HX_STACK_LINE(428)
										{
											HX_STACK_LINE(428)
											Float tmp108 = (Alpha * (int)255);		HX_STACK_VAR(tmp108,"tmp108");
											HX_STACK_LINE(428)
											int tmp109 = ::Math_obj::round(tmp108);		HX_STACK_VAR(tmp109,"tmp109");
											HX_STACK_LINE(428)
											int Value1 = tmp109;		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(428)
											hx::AndEq(output,(int)16777215);
											HX_STACK_LINE(428)
											bool tmp110 = (Value1 > (int)255);		HX_STACK_VAR(tmp110,"tmp110");
											HX_STACK_LINE(428)
											int tmp111;		HX_STACK_VAR(tmp111,"tmp111");
											HX_STACK_LINE(428)
											if ((tmp110)){
												HX_STACK_LINE(428)
												tmp111 = (int)255;
											}
											else{
												HX_STACK_LINE(428)
												bool tmp112 = (Value1 < (int)0);		HX_STACK_VAR(tmp112,"tmp112");
												HX_STACK_LINE(428)
												if ((tmp112)){
													HX_STACK_LINE(428)
													tmp111 = (int)0;
												}
												else{
													HX_STACK_LINE(428)
													tmp111 = Value1;
												}
											}
											HX_STACK_LINE(428)
											int tmp112 = (int(tmp111) << int((int)24));		HX_STACK_VAR(tmp112,"tmp112");
											HX_STACK_LINE(428)
											hx::OrEq(output,tmp112);
											HX_STACK_LINE(428)
											Value1;
										}
										HX_STACK_LINE(428)
										Alpha;
									}
									HX_STACK_LINE(428)
									tmp107 = output;
								}
								HX_STACK_LINE(428)
								tmp107;
							}
							;break;
							case (int)1: {
								HX_STACK_LINE(428)
								int tmp107;		HX_STACK_VAR(tmp107,"tmp107");
								HX_STACK_LINE(428)
								{
									HX_STACK_LINE(428)
									{
										HX_STACK_LINE(428)
										{
											HX_STACK_LINE(428)
											Float tmp108 = (mid * (int)255);		HX_STACK_VAR(tmp108,"tmp108");
											HX_STACK_LINE(428)
											int tmp109 = ::Math_obj::round(tmp108);		HX_STACK_VAR(tmp109,"tmp109");
											HX_STACK_LINE(428)
											int Value1 = tmp109;		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(428)
											hx::AndEq(output,(int)-16711681);
											HX_STACK_LINE(428)
											bool tmp110 = (Value1 > (int)255);		HX_STACK_VAR(tmp110,"tmp110");
											HX_STACK_LINE(428)
											int tmp111;		HX_STACK_VAR(tmp111,"tmp111");
											HX_STACK_LINE(428)
											if ((tmp110)){
												HX_STACK_LINE(428)
												tmp111 = (int)255;
											}
											else{
												HX_STACK_LINE(428)
												bool tmp112 = (Value1 < (int)0);		HX_STACK_VAR(tmp112,"tmp112");
												HX_STACK_LINE(428)
												if ((tmp112)){
													HX_STACK_LINE(428)
													tmp111 = (int)0;
												}
												else{
													HX_STACK_LINE(428)
													tmp111 = Value1;
												}
											}
											HX_STACK_LINE(428)
											int tmp112 = (int(tmp111) << int((int)16));		HX_STACK_VAR(tmp112,"tmp112");
											HX_STACK_LINE(428)
											hx::OrEq(output,tmp112);
											HX_STACK_LINE(428)
											Value1;
										}
										HX_STACK_LINE(428)
										mid;
									}
									HX_STACK_LINE(428)
									{
										HX_STACK_LINE(428)
										{
											HX_STACK_LINE(428)
											Float tmp108 = (Chroma * (int)255);		HX_STACK_VAR(tmp108,"tmp108");
											HX_STACK_LINE(428)
											int tmp109 = ::Math_obj::round(tmp108);		HX_STACK_VAR(tmp109,"tmp109");
											HX_STACK_LINE(428)
											int Value1 = tmp109;		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(428)
											hx::AndEq(output,(int)-65281);
											HX_STACK_LINE(428)
											bool tmp110 = (Value1 > (int)255);		HX_STACK_VAR(tmp110,"tmp110");
											HX_STACK_LINE(428)
											int tmp111;		HX_STACK_VAR(tmp111,"tmp111");
											HX_STACK_LINE(428)
											if ((tmp110)){
												HX_STACK_LINE(428)
												tmp111 = (int)255;
											}
											else{
												HX_STACK_LINE(428)
												bool tmp112 = (Value1 < (int)0);		HX_STACK_VAR(tmp112,"tmp112");
												HX_STACK_LINE(428)
												if ((tmp112)){
													HX_STACK_LINE(428)
													tmp111 = (int)0;
												}
												else{
													HX_STACK_LINE(428)
													tmp111 = Value1;
												}
											}
											HX_STACK_LINE(428)
											int tmp112 = (int(tmp111) << int((int)8));		HX_STACK_VAR(tmp112,"tmp112");
											HX_STACK_LINE(428)
											hx::OrEq(output,tmp112);
											HX_STACK_LINE(428)
											Value1;
										}
										HX_STACK_LINE(428)
										Chroma;
									}
									HX_STACK_LINE(428)
									{
										HX_STACK_LINE(428)
										{
											HX_STACK_LINE(428)
											Float tmp108 = (match * (int)255);		HX_STACK_VAR(tmp108,"tmp108");
											HX_STACK_LINE(428)
											int tmp109 = ::Math_obj::round(tmp108);		HX_STACK_VAR(tmp109,"tmp109");
											HX_STACK_LINE(428)
											int Value1 = tmp109;		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(428)
											hx::AndEq(output,(int)-256);
											HX_STACK_LINE(428)
											bool tmp110 = (Value1 > (int)255);		HX_STACK_VAR(tmp110,"tmp110");
											HX_STACK_LINE(428)
											int tmp111;		HX_STACK_VAR(tmp111,"tmp111");
											HX_STACK_LINE(428)
											if ((tmp110)){
												HX_STACK_LINE(428)
												tmp111 = (int)255;
											}
											else{
												HX_STACK_LINE(428)
												bool tmp112 = (Value1 < (int)0);		HX_STACK_VAR(tmp112,"tmp112");
												HX_STACK_LINE(428)
												if ((tmp112)){
													HX_STACK_LINE(428)
													tmp111 = (int)0;
												}
												else{
													HX_STACK_LINE(428)
													tmp111 = Value1;
												}
											}
											HX_STACK_LINE(428)
											hx::OrEq(output,tmp111);
											HX_STACK_LINE(428)
											Value1;
										}
										HX_STACK_LINE(428)
										match;
									}
									HX_STACK_LINE(428)
									{
										HX_STACK_LINE(428)
										{
											HX_STACK_LINE(428)
											Float tmp108 = (Alpha * (int)255);		HX_STACK_VAR(tmp108,"tmp108");
											HX_STACK_LINE(428)
											int tmp109 = ::Math_obj::round(tmp108);		HX_STACK_VAR(tmp109,"tmp109");
											HX_STACK_LINE(428)
											int Value1 = tmp109;		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(428)
											hx::AndEq(output,(int)16777215);
											HX_STACK_LINE(428)
											bool tmp110 = (Value1 > (int)255);		HX_STACK_VAR(tmp110,"tmp110");
											HX_STACK_LINE(428)
											int tmp111;		HX_STACK_VAR(tmp111,"tmp111");
											HX_STACK_LINE(428)
											if ((tmp110)){
												HX_STACK_LINE(428)
												tmp111 = (int)255;
											}
											else{
												HX_STACK_LINE(428)
												bool tmp112 = (Value1 < (int)0);		HX_STACK_VAR(tmp112,"tmp112");
												HX_STACK_LINE(428)
												if ((tmp112)){
													HX_STACK_LINE(428)
													tmp111 = (int)0;
												}
												else{
													HX_STACK_LINE(428)
													tmp111 = Value1;
												}
											}
											HX_STACK_LINE(428)
											int tmp112 = (int(tmp111) << int((int)24));		HX_STACK_VAR(tmp112,"tmp112");
											HX_STACK_LINE(428)
											hx::OrEq(output,tmp112);
											HX_STACK_LINE(428)
											Value1;
										}
										HX_STACK_LINE(428)
										Alpha;
									}
									HX_STACK_LINE(428)
									tmp107 = output;
								}
								HX_STACK_LINE(428)
								tmp107;
							}
							;break;
							case (int)2: {
								HX_STACK_LINE(428)
								int tmp107;		HX_STACK_VAR(tmp107,"tmp107");
								HX_STACK_LINE(428)
								{
									HX_STACK_LINE(428)
									{
										HX_STACK_LINE(428)
										{
											HX_STACK_LINE(428)
											Float tmp108 = (match * (int)255);		HX_STACK_VAR(tmp108,"tmp108");
											HX_STACK_LINE(428)
											int tmp109 = ::Math_obj::round(tmp108);		HX_STACK_VAR(tmp109,"tmp109");
											HX_STACK_LINE(428)
											int Value1 = tmp109;		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(428)
											hx::AndEq(output,(int)-16711681);
											HX_STACK_LINE(428)
											bool tmp110 = (Value1 > (int)255);		HX_STACK_VAR(tmp110,"tmp110");
											HX_STACK_LINE(428)
											int tmp111;		HX_STACK_VAR(tmp111,"tmp111");
											HX_STACK_LINE(428)
											if ((tmp110)){
												HX_STACK_LINE(428)
												tmp111 = (int)255;
											}
											else{
												HX_STACK_LINE(428)
												bool tmp112 = (Value1 < (int)0);		HX_STACK_VAR(tmp112,"tmp112");
												HX_STACK_LINE(428)
												if ((tmp112)){
													HX_STACK_LINE(428)
													tmp111 = (int)0;
												}
												else{
													HX_STACK_LINE(428)
													tmp111 = Value1;
												}
											}
											HX_STACK_LINE(428)
											int tmp112 = (int(tmp111) << int((int)16));		HX_STACK_VAR(tmp112,"tmp112");
											HX_STACK_LINE(428)
											hx::OrEq(output,tmp112);
											HX_STACK_LINE(428)
											Value1;
										}
										HX_STACK_LINE(428)
										match;
									}
									HX_STACK_LINE(428)
									{
										HX_STACK_LINE(428)
										{
											HX_STACK_LINE(428)
											Float tmp108 = (Chroma * (int)255);		HX_STACK_VAR(tmp108,"tmp108");
											HX_STACK_LINE(428)
											int tmp109 = ::Math_obj::round(tmp108);		HX_STACK_VAR(tmp109,"tmp109");
											HX_STACK_LINE(428)
											int Value1 = tmp109;		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(428)
											hx::AndEq(output,(int)-65281);
											HX_STACK_LINE(428)
											bool tmp110 = (Value1 > (int)255);		HX_STACK_VAR(tmp110,"tmp110");
											HX_STACK_LINE(428)
											int tmp111;		HX_STACK_VAR(tmp111,"tmp111");
											HX_STACK_LINE(428)
											if ((tmp110)){
												HX_STACK_LINE(428)
												tmp111 = (int)255;
											}
											else{
												HX_STACK_LINE(428)
												bool tmp112 = (Value1 < (int)0);		HX_STACK_VAR(tmp112,"tmp112");
												HX_STACK_LINE(428)
												if ((tmp112)){
													HX_STACK_LINE(428)
													tmp111 = (int)0;
												}
												else{
													HX_STACK_LINE(428)
													tmp111 = Value1;
												}
											}
											HX_STACK_LINE(428)
											int tmp112 = (int(tmp111) << int((int)8));		HX_STACK_VAR(tmp112,"tmp112");
											HX_STACK_LINE(428)
											hx::OrEq(output,tmp112);
											HX_STACK_LINE(428)
											Value1;
										}
										HX_STACK_LINE(428)
										Chroma;
									}
									HX_STACK_LINE(428)
									{
										HX_STACK_LINE(428)
										{
											HX_STACK_LINE(428)
											Float tmp108 = (mid * (int)255);		HX_STACK_VAR(tmp108,"tmp108");
											HX_STACK_LINE(428)
											int tmp109 = ::Math_obj::round(tmp108);		HX_STACK_VAR(tmp109,"tmp109");
											HX_STACK_LINE(428)
											int Value1 = tmp109;		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(428)
											hx::AndEq(output,(int)-256);
											HX_STACK_LINE(428)
											bool tmp110 = (Value1 > (int)255);		HX_STACK_VAR(tmp110,"tmp110");
											HX_STACK_LINE(428)
											int tmp111;		HX_STACK_VAR(tmp111,"tmp111");
											HX_STACK_LINE(428)
											if ((tmp110)){
												HX_STACK_LINE(428)
												tmp111 = (int)255;
											}
											else{
												HX_STACK_LINE(428)
												bool tmp112 = (Value1 < (int)0);		HX_STACK_VAR(tmp112,"tmp112");
												HX_STACK_LINE(428)
												if ((tmp112)){
													HX_STACK_LINE(428)
													tmp111 = (int)0;
												}
												else{
													HX_STACK_LINE(428)
													tmp111 = Value1;
												}
											}
											HX_STACK_LINE(428)
											hx::OrEq(output,tmp111);
											HX_STACK_LINE(428)
											Value1;
										}
										HX_STACK_LINE(428)
										mid;
									}
									HX_STACK_LINE(428)
									{
										HX_STACK_LINE(428)
										{
											HX_STACK_LINE(428)
											Float tmp108 = (Alpha * (int)255);		HX_STACK_VAR(tmp108,"tmp108");
											HX_STACK_LINE(428)
											int tmp109 = ::Math_obj::round(tmp108);		HX_STACK_VAR(tmp109,"tmp109");
											HX_STACK_LINE(428)
											int Value1 = tmp109;		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(428)
											hx::AndEq(output,(int)16777215);
											HX_STACK_LINE(428)
											bool tmp110 = (Value1 > (int)255);		HX_STACK_VAR(tmp110,"tmp110");
											HX_STACK_LINE(428)
											int tmp111;		HX_STACK_VAR(tmp111,"tmp111");
											HX_STACK_LINE(428)
											if ((tmp110)){
												HX_STACK_LINE(428)
												tmp111 = (int)255;
											}
											else{
												HX_STACK_LINE(428)
												bool tmp112 = (Value1 < (int)0);		HX_STACK_VAR(tmp112,"tmp112");
												HX_STACK_LINE(428)
												if ((tmp112)){
													HX_STACK_LINE(428)
													tmp111 = (int)0;
												}
												else{
													HX_STACK_LINE(428)
													tmp111 = Value1;
												}
											}
											HX_STACK_LINE(428)
											int tmp112 = (int(tmp111) << int((int)24));		HX_STACK_VAR(tmp112,"tmp112");
											HX_STACK_LINE(428)
											hx::OrEq(output,tmp112);
											HX_STACK_LINE(428)
											Value1;
										}
										HX_STACK_LINE(428)
										Alpha;
									}
									HX_STACK_LINE(428)
									tmp107 = output;
								}
								HX_STACK_LINE(428)
								tmp107;
							}
							;break;
							case (int)3: {
								HX_STACK_LINE(428)
								int tmp107;		HX_STACK_VAR(tmp107,"tmp107");
								HX_STACK_LINE(428)
								{
									HX_STACK_LINE(428)
									{
										HX_STACK_LINE(428)
										{
											HX_STACK_LINE(428)
											Float tmp108 = (match * (int)255);		HX_STACK_VAR(tmp108,"tmp108");
											HX_STACK_LINE(428)
											int tmp109 = ::Math_obj::round(tmp108);		HX_STACK_VAR(tmp109,"tmp109");
											HX_STACK_LINE(428)
											int Value1 = tmp109;		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(428)
											hx::AndEq(output,(int)-16711681);
											HX_STACK_LINE(428)
											bool tmp110 = (Value1 > (int)255);		HX_STACK_VAR(tmp110,"tmp110");
											HX_STACK_LINE(428)
											int tmp111;		HX_STACK_VAR(tmp111,"tmp111");
											HX_STACK_LINE(428)
											if ((tmp110)){
												HX_STACK_LINE(428)
												tmp111 = (int)255;
											}
											else{
												HX_STACK_LINE(428)
												bool tmp112 = (Value1 < (int)0);		HX_STACK_VAR(tmp112,"tmp112");
												HX_STACK_LINE(428)
												if ((tmp112)){
													HX_STACK_LINE(428)
													tmp111 = (int)0;
												}
												else{
													HX_STACK_LINE(428)
													tmp111 = Value1;
												}
											}
											HX_STACK_LINE(428)
											int tmp112 = (int(tmp111) << int((int)16));		HX_STACK_VAR(tmp112,"tmp112");
											HX_STACK_LINE(428)
											hx::OrEq(output,tmp112);
											HX_STACK_LINE(428)
											Value1;
										}
										HX_STACK_LINE(428)
										match;
									}
									HX_STACK_LINE(428)
									{
										HX_STACK_LINE(428)
										{
											HX_STACK_LINE(428)
											Float tmp108 = (mid * (int)255);		HX_STACK_VAR(tmp108,"tmp108");
											HX_STACK_LINE(428)
											int tmp109 = ::Math_obj::round(tmp108);		HX_STACK_VAR(tmp109,"tmp109");
											HX_STACK_LINE(428)
											int Value1 = tmp109;		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(428)
											hx::AndEq(output,(int)-65281);
											HX_STACK_LINE(428)
											bool tmp110 = (Value1 > (int)255);		HX_STACK_VAR(tmp110,"tmp110");
											HX_STACK_LINE(428)
											int tmp111;		HX_STACK_VAR(tmp111,"tmp111");
											HX_STACK_LINE(428)
											if ((tmp110)){
												HX_STACK_LINE(428)
												tmp111 = (int)255;
											}
											else{
												HX_STACK_LINE(428)
												bool tmp112 = (Value1 < (int)0);		HX_STACK_VAR(tmp112,"tmp112");
												HX_STACK_LINE(428)
												if ((tmp112)){
													HX_STACK_LINE(428)
													tmp111 = (int)0;
												}
												else{
													HX_STACK_LINE(428)
													tmp111 = Value1;
												}
											}
											HX_STACK_LINE(428)
											int tmp112 = (int(tmp111) << int((int)8));		HX_STACK_VAR(tmp112,"tmp112");
											HX_STACK_LINE(428)
											hx::OrEq(output,tmp112);
											HX_STACK_LINE(428)
											Value1;
										}
										HX_STACK_LINE(428)
										mid;
									}
									HX_STACK_LINE(428)
									{
										HX_STACK_LINE(428)
										{
											HX_STACK_LINE(428)
											Float tmp108 = (Chroma * (int)255);		HX_STACK_VAR(tmp108,"tmp108");
											HX_STACK_LINE(428)
											int tmp109 = ::Math_obj::round(tmp108);		HX_STACK_VAR(tmp109,"tmp109");
											HX_STACK_LINE(428)
											int Value1 = tmp109;		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(428)
											hx::AndEq(output,(int)-256);
											HX_STACK_LINE(428)
											bool tmp110 = (Value1 > (int)255);		HX_STACK_VAR(tmp110,"tmp110");
											HX_STACK_LINE(428)
											int tmp111;		HX_STACK_VAR(tmp111,"tmp111");
											HX_STACK_LINE(428)
											if ((tmp110)){
												HX_STACK_LINE(428)
												tmp111 = (int)255;
											}
											else{
												HX_STACK_LINE(428)
												bool tmp112 = (Value1 < (int)0);		HX_STACK_VAR(tmp112,"tmp112");
												HX_STACK_LINE(428)
												if ((tmp112)){
													HX_STACK_LINE(428)
													tmp111 = (int)0;
												}
												else{
													HX_STACK_LINE(428)
													tmp111 = Value1;
												}
											}
											HX_STACK_LINE(428)
											hx::OrEq(output,tmp111);
											HX_STACK_LINE(428)
											Value1;
										}
										HX_STACK_LINE(428)
										Chroma;
									}
									HX_STACK_LINE(428)
									{
										HX_STACK_LINE(428)
										{
											HX_STACK_LINE(428)
											Float tmp108 = (Alpha * (int)255);		HX_STACK_VAR(tmp108,"tmp108");
											HX_STACK_LINE(428)
											int tmp109 = ::Math_obj::round(tmp108);		HX_STACK_VAR(tmp109,"tmp109");
											HX_STACK_LINE(428)
											int Value1 = tmp109;		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(428)
											hx::AndEq(output,(int)16777215);
											HX_STACK_LINE(428)
											bool tmp110 = (Value1 > (int)255);		HX_STACK_VAR(tmp110,"tmp110");
											HX_STACK_LINE(428)
											int tmp111;		HX_STACK_VAR(tmp111,"tmp111");
											HX_STACK_LINE(428)
											if ((tmp110)){
												HX_STACK_LINE(428)
												tmp111 = (int)255;
											}
											else{
												HX_STACK_LINE(428)
												bool tmp112 = (Value1 < (int)0);		HX_STACK_VAR(tmp112,"tmp112");
												HX_STACK_LINE(428)
												if ((tmp112)){
													HX_STACK_LINE(428)
													tmp111 = (int)0;
												}
												else{
													HX_STACK_LINE(428)
													tmp111 = Value1;
												}
											}
											HX_STACK_LINE(428)
											int tmp112 = (int(tmp111) << int((int)24));		HX_STACK_VAR(tmp112,"tmp112");
											HX_STACK_LINE(428)
											hx::OrEq(output,tmp112);
											HX_STACK_LINE(428)
											Value1;
										}
										HX_STACK_LINE(428)
										Alpha;
									}
									HX_STACK_LINE(428)
									tmp107 = output;
								}
								HX_STACK_LINE(428)
								tmp107;
							}
							;break;
							case (int)4: {
								HX_STACK_LINE(428)
								int tmp107;		HX_STACK_VAR(tmp107,"tmp107");
								HX_STACK_LINE(428)
								{
									HX_STACK_LINE(428)
									{
										HX_STACK_LINE(428)
										{
											HX_STACK_LINE(428)
											Float tmp108 = (mid * (int)255);		HX_STACK_VAR(tmp108,"tmp108");
											HX_STACK_LINE(428)
											int tmp109 = ::Math_obj::round(tmp108);		HX_STACK_VAR(tmp109,"tmp109");
											HX_STACK_LINE(428)
											int Value1 = tmp109;		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(428)
											hx::AndEq(output,(int)-16711681);
											HX_STACK_LINE(428)
											bool tmp110 = (Value1 > (int)255);		HX_STACK_VAR(tmp110,"tmp110");
											HX_STACK_LINE(428)
											int tmp111;		HX_STACK_VAR(tmp111,"tmp111");
											HX_STACK_LINE(428)
											if ((tmp110)){
												HX_STACK_LINE(428)
												tmp111 = (int)255;
											}
											else{
												HX_STACK_LINE(428)
												bool tmp112 = (Value1 < (int)0);		HX_STACK_VAR(tmp112,"tmp112");
												HX_STACK_LINE(428)
												if ((tmp112)){
													HX_STACK_LINE(428)
													tmp111 = (int)0;
												}
												else{
													HX_STACK_LINE(428)
													tmp111 = Value1;
												}
											}
											HX_STACK_LINE(428)
											int tmp112 = (int(tmp111) << int((int)16));		HX_STACK_VAR(tmp112,"tmp112");
											HX_STACK_LINE(428)
											hx::OrEq(output,tmp112);
											HX_STACK_LINE(428)
											Value1;
										}
										HX_STACK_LINE(428)
										mid;
									}
									HX_STACK_LINE(428)
									{
										HX_STACK_LINE(428)
										{
											HX_STACK_LINE(428)
											Float tmp108 = (match * (int)255);		HX_STACK_VAR(tmp108,"tmp108");
											HX_STACK_LINE(428)
											int tmp109 = ::Math_obj::round(tmp108);		HX_STACK_VAR(tmp109,"tmp109");
											HX_STACK_LINE(428)
											int Value1 = tmp109;		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(428)
											hx::AndEq(output,(int)-65281);
											HX_STACK_LINE(428)
											bool tmp110 = (Value1 > (int)255);		HX_STACK_VAR(tmp110,"tmp110");
											HX_STACK_LINE(428)
											int tmp111;		HX_STACK_VAR(tmp111,"tmp111");
											HX_STACK_LINE(428)
											if ((tmp110)){
												HX_STACK_LINE(428)
												tmp111 = (int)255;
											}
											else{
												HX_STACK_LINE(428)
												bool tmp112 = (Value1 < (int)0);		HX_STACK_VAR(tmp112,"tmp112");
												HX_STACK_LINE(428)
												if ((tmp112)){
													HX_STACK_LINE(428)
													tmp111 = (int)0;
												}
												else{
													HX_STACK_LINE(428)
													tmp111 = Value1;
												}
											}
											HX_STACK_LINE(428)
											int tmp112 = (int(tmp111) << int((int)8));		HX_STACK_VAR(tmp112,"tmp112");
											HX_STACK_LINE(428)
											hx::OrEq(output,tmp112);
											HX_STACK_LINE(428)
											Value1;
										}
										HX_STACK_LINE(428)
										match;
									}
									HX_STACK_LINE(428)
									{
										HX_STACK_LINE(428)
										{
											HX_STACK_LINE(428)
											Float tmp108 = (Chroma * (int)255);		HX_STACK_VAR(tmp108,"tmp108");
											HX_STACK_LINE(428)
											int tmp109 = ::Math_obj::round(tmp108);		HX_STACK_VAR(tmp109,"tmp109");
											HX_STACK_LINE(428)
											int Value1 = tmp109;		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(428)
											hx::AndEq(output,(int)-256);
											HX_STACK_LINE(428)
											bool tmp110 = (Value1 > (int)255);		HX_STACK_VAR(tmp110,"tmp110");
											HX_STACK_LINE(428)
											int tmp111;		HX_STACK_VAR(tmp111,"tmp111");
											HX_STACK_LINE(428)
											if ((tmp110)){
												HX_STACK_LINE(428)
												tmp111 = (int)255;
											}
											else{
												HX_STACK_LINE(428)
												bool tmp112 = (Value1 < (int)0);		HX_STACK_VAR(tmp112,"tmp112");
												HX_STACK_LINE(428)
												if ((tmp112)){
													HX_STACK_LINE(428)
													tmp111 = (int)0;
												}
												else{
													HX_STACK_LINE(428)
													tmp111 = Value1;
												}
											}
											HX_STACK_LINE(428)
											hx::OrEq(output,tmp111);
											HX_STACK_LINE(428)
											Value1;
										}
										HX_STACK_LINE(428)
										Chroma;
									}
									HX_STACK_LINE(428)
									{
										HX_STACK_LINE(428)
										{
											HX_STACK_LINE(428)
											Float tmp108 = (Alpha * (int)255);		HX_STACK_VAR(tmp108,"tmp108");
											HX_STACK_LINE(428)
											int tmp109 = ::Math_obj::round(tmp108);		HX_STACK_VAR(tmp109,"tmp109");
											HX_STACK_LINE(428)
											int Value1 = tmp109;		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(428)
											hx::AndEq(output,(int)16777215);
											HX_STACK_LINE(428)
											bool tmp110 = (Value1 > (int)255);		HX_STACK_VAR(tmp110,"tmp110");
											HX_STACK_LINE(428)
											int tmp111;		HX_STACK_VAR(tmp111,"tmp111");
											HX_STACK_LINE(428)
											if ((tmp110)){
												HX_STACK_LINE(428)
												tmp111 = (int)255;
											}
											else{
												HX_STACK_LINE(428)
												bool tmp112 = (Value1 < (int)0);		HX_STACK_VAR(tmp112,"tmp112");
												HX_STACK_LINE(428)
												if ((tmp112)){
													HX_STACK_LINE(428)
													tmp111 = (int)0;
												}
												else{
													HX_STACK_LINE(428)
													tmp111 = Value1;
												}
											}
											HX_STACK_LINE(428)
											int tmp112 = (int(tmp111) << int((int)24));		HX_STACK_VAR(tmp112,"tmp112");
											HX_STACK_LINE(428)
											hx::OrEq(output,tmp112);
											HX_STACK_LINE(428)
											Value1;
										}
										HX_STACK_LINE(428)
										Alpha;
									}
									HX_STACK_LINE(428)
									tmp107 = output;
								}
								HX_STACK_LINE(428)
								tmp107;
							}
							;break;
							case (int)5: {
								HX_STACK_LINE(428)
								int tmp107;		HX_STACK_VAR(tmp107,"tmp107");
								HX_STACK_LINE(428)
								{
									HX_STACK_LINE(428)
									{
										HX_STACK_LINE(428)
										{
											HX_STACK_LINE(428)
											Float tmp108 = (Chroma * (int)255);		HX_STACK_VAR(tmp108,"tmp108");
											HX_STACK_LINE(428)
											int tmp109 = ::Math_obj::round(tmp108);		HX_STACK_VAR(tmp109,"tmp109");
											HX_STACK_LINE(428)
											int Value1 = tmp109;		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(428)
											hx::AndEq(output,(int)-16711681);
											HX_STACK_LINE(428)
											bool tmp110 = (Value1 > (int)255);		HX_STACK_VAR(tmp110,"tmp110");
											HX_STACK_LINE(428)
											int tmp111;		HX_STACK_VAR(tmp111,"tmp111");
											HX_STACK_LINE(428)
											if ((tmp110)){
												HX_STACK_LINE(428)
												tmp111 = (int)255;
											}
											else{
												HX_STACK_LINE(428)
												bool tmp112 = (Value1 < (int)0);		HX_STACK_VAR(tmp112,"tmp112");
												HX_STACK_LINE(428)
												if ((tmp112)){
													HX_STACK_LINE(428)
													tmp111 = (int)0;
												}
												else{
													HX_STACK_LINE(428)
													tmp111 = Value1;
												}
											}
											HX_STACK_LINE(428)
											int tmp112 = (int(tmp111) << int((int)16));		HX_STACK_VAR(tmp112,"tmp112");
											HX_STACK_LINE(428)
											hx::OrEq(output,tmp112);
											HX_STACK_LINE(428)
											Value1;
										}
										HX_STACK_LINE(428)
										Chroma;
									}
									HX_STACK_LINE(428)
									{
										HX_STACK_LINE(428)
										{
											HX_STACK_LINE(428)
											Float tmp108 = (match * (int)255);		HX_STACK_VAR(tmp108,"tmp108");
											HX_STACK_LINE(428)
											int tmp109 = ::Math_obj::round(tmp108);		HX_STACK_VAR(tmp109,"tmp109");
											HX_STACK_LINE(428)
											int Value1 = tmp109;		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(428)
											hx::AndEq(output,(int)-65281);
											HX_STACK_LINE(428)
											bool tmp110 = (Value1 > (int)255);		HX_STACK_VAR(tmp110,"tmp110");
											HX_STACK_LINE(428)
											int tmp111;		HX_STACK_VAR(tmp111,"tmp111");
											HX_STACK_LINE(428)
											if ((tmp110)){
												HX_STACK_LINE(428)
												tmp111 = (int)255;
											}
											else{
												HX_STACK_LINE(428)
												bool tmp112 = (Value1 < (int)0);		HX_STACK_VAR(tmp112,"tmp112");
												HX_STACK_LINE(428)
												if ((tmp112)){
													HX_STACK_LINE(428)
													tmp111 = (int)0;
												}
												else{
													HX_STACK_LINE(428)
													tmp111 = Value1;
												}
											}
											HX_STACK_LINE(428)
											int tmp112 = (int(tmp111) << int((int)8));		HX_STACK_VAR(tmp112,"tmp112");
											HX_STACK_LINE(428)
											hx::OrEq(output,tmp112);
											HX_STACK_LINE(428)
											Value1;
										}
										HX_STACK_LINE(428)
										match;
									}
									HX_STACK_LINE(428)
									{
										HX_STACK_LINE(428)
										{
											HX_STACK_LINE(428)
											Float tmp108 = (mid * (int)255);		HX_STACK_VAR(tmp108,"tmp108");
											HX_STACK_LINE(428)
											int tmp109 = ::Math_obj::round(tmp108);		HX_STACK_VAR(tmp109,"tmp109");
											HX_STACK_LINE(428)
											int Value1 = tmp109;		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(428)
											hx::AndEq(output,(int)-256);
											HX_STACK_LINE(428)
											bool tmp110 = (Value1 > (int)255);		HX_STACK_VAR(tmp110,"tmp110");
											HX_STACK_LINE(428)
											int tmp111;		HX_STACK_VAR(tmp111,"tmp111");
											HX_STACK_LINE(428)
											if ((tmp110)){
												HX_STACK_LINE(428)
												tmp111 = (int)255;
											}
											else{
												HX_STACK_LINE(428)
												bool tmp112 = (Value1 < (int)0);		HX_STACK_VAR(tmp112,"tmp112");
												HX_STACK_LINE(428)
												if ((tmp112)){
													HX_STACK_LINE(428)
													tmp111 = (int)0;
												}
												else{
													HX_STACK_LINE(428)
													tmp111 = Value1;
												}
											}
											HX_STACK_LINE(428)
											hx::OrEq(output,tmp111);
											HX_STACK_LINE(428)
											Value1;
										}
										HX_STACK_LINE(428)
										mid;
									}
									HX_STACK_LINE(428)
									{
										HX_STACK_LINE(428)
										{
											HX_STACK_LINE(428)
											Float tmp108 = (Alpha * (int)255);		HX_STACK_VAR(tmp108,"tmp108");
											HX_STACK_LINE(428)
											int tmp109 = ::Math_obj::round(tmp108);		HX_STACK_VAR(tmp109,"tmp109");
											HX_STACK_LINE(428)
											int Value1 = tmp109;		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(428)
											hx::AndEq(output,(int)16777215);
											HX_STACK_LINE(428)
											bool tmp110 = (Value1 > (int)255);		HX_STACK_VAR(tmp110,"tmp110");
											HX_STACK_LINE(428)
											int tmp111;		HX_STACK_VAR(tmp111,"tmp111");
											HX_STACK_LINE(428)
											if ((tmp110)){
												HX_STACK_LINE(428)
												tmp111 = (int)255;
											}
											else{
												HX_STACK_LINE(428)
												bool tmp112 = (Value1 < (int)0);		HX_STACK_VAR(tmp112,"tmp112");
												HX_STACK_LINE(428)
												if ((tmp112)){
													HX_STACK_LINE(428)
													tmp111 = (int)0;
												}
												else{
													HX_STACK_LINE(428)
													tmp111 = Value1;
												}
											}
											HX_STACK_LINE(428)
											int tmp112 = (int(tmp111) << int((int)24));		HX_STACK_VAR(tmp112,"tmp112");
											HX_STACK_LINE(428)
											hx::OrEq(output,tmp112);
											HX_STACK_LINE(428)
											Value1;
										}
										HX_STACK_LINE(428)
										Alpha;
									}
									HX_STACK_LINE(428)
									tmp107 = output;
								}
								HX_STACK_LINE(428)
								tmp107;
							}
							;break;
						}
					}
					HX_STACK_LINE(428)
					output;
				}
			}
			HX_STACK_LINE(428)
			Value;
		}
		HX_STACK_LINE(429)
		int tmp1 = output;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(429)
		return tmp1;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,getLightened,return )

int FlxColor_Impl__obj::getInverted( int this1){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","getInverted",0x422fc6c6,"flixel.util._FlxColor.FlxColor_Impl_.getInverted","flixel/util/FlxColor.hx",438,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(439)
	int tmp = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(439)
	int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(439)
	int oldAlpha = tmp1;		HX_STACK_VAR(oldAlpha,"oldAlpha");
	HX_STACK_LINE(440)
	int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(440)
	{
		HX_STACK_LINE(440)
		int lhs = (int)-1;		HX_STACK_VAR(lhs,"lhs");
		HX_STACK_LINE(440)
		{
			HX_STACK_LINE(440)
			int tmp3 = (int(lhs) >> int((int)16));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(440)
			int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(440)
			int tmp5 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(440)
			int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(440)
			int tmp7 = (tmp4 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(440)
			int Red = tmp7;		HX_STACK_VAR(Red,"Red");
			HX_STACK_LINE(440)
			int tmp8 = (int(lhs) >> int((int)8));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(440)
			int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(440)
			int tmp10 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(440)
			int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(440)
			int tmp12 = (tmp9 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(440)
			int Green = tmp12;		HX_STACK_VAR(Green,"Green");
			HX_STACK_LINE(440)
			int tmp13 = (int(lhs) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(440)
			int tmp14 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(440)
			int tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(440)
			int Blue = tmp15;		HX_STACK_VAR(Blue,"Blue");
			HX_STACK_LINE(440)
			int Alpha = (int)255;		HX_STACK_VAR(Alpha,"Alpha");
			HX_STACK_LINE(440)
			int tmp16 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(440)
			int color = tmp16;		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(440)
			int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(440)
			{
				HX_STACK_LINE(440)
				{
					HX_STACK_LINE(440)
					hx::AndEq(color,(int)-16711681);
					HX_STACK_LINE(440)
					bool tmp18 = (Red > (int)255);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(440)
					int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(440)
					if ((tmp18)){
						HX_STACK_LINE(440)
						tmp19 = (int)255;
					}
					else{
						HX_STACK_LINE(440)
						bool tmp20 = (Red < (int)0);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(440)
						if ((tmp20)){
							HX_STACK_LINE(440)
							tmp19 = (int)0;
						}
						else{
							HX_STACK_LINE(440)
							tmp19 = Red;
						}
					}
					HX_STACK_LINE(440)
					int tmp20 = (int(tmp19) << int((int)16));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(440)
					hx::OrEq(color,tmp20);
					HX_STACK_LINE(440)
					Red;
				}
				HX_STACK_LINE(440)
				{
					HX_STACK_LINE(440)
					hx::AndEq(color,(int)-65281);
					HX_STACK_LINE(440)
					bool tmp18 = (Green > (int)255);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(440)
					int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(440)
					if ((tmp18)){
						HX_STACK_LINE(440)
						tmp19 = (int)255;
					}
					else{
						HX_STACK_LINE(440)
						bool tmp20 = (Green < (int)0);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(440)
						if ((tmp20)){
							HX_STACK_LINE(440)
							tmp19 = (int)0;
						}
						else{
							HX_STACK_LINE(440)
							tmp19 = Green;
						}
					}
					HX_STACK_LINE(440)
					int tmp20 = (int(tmp19) << int((int)8));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(440)
					hx::OrEq(color,tmp20);
					HX_STACK_LINE(440)
					Green;
				}
				HX_STACK_LINE(440)
				{
					HX_STACK_LINE(440)
					hx::AndEq(color,(int)-256);
					HX_STACK_LINE(440)
					bool tmp18 = (Blue > (int)255);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(440)
					int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(440)
					if ((tmp18)){
						HX_STACK_LINE(440)
						tmp19 = (int)255;
					}
					else{
						HX_STACK_LINE(440)
						bool tmp20 = (Blue < (int)0);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(440)
						if ((tmp20)){
							HX_STACK_LINE(440)
							tmp19 = (int)0;
						}
						else{
							HX_STACK_LINE(440)
							tmp19 = Blue;
						}
					}
					HX_STACK_LINE(440)
					hx::OrEq(color,tmp19);
					HX_STACK_LINE(440)
					Blue;
				}
				HX_STACK_LINE(440)
				{
					HX_STACK_LINE(440)
					hx::AndEq(color,(int)16777215);
					HX_STACK_LINE(440)
					bool tmp18 = (Alpha > (int)255);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(440)
					int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(440)
					if ((tmp18)){
						HX_STACK_LINE(440)
						tmp19 = (int)255;
					}
					else{
						HX_STACK_LINE(440)
						bool tmp20 = (Alpha < (int)0);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(440)
						if ((tmp20)){
							HX_STACK_LINE(440)
							tmp19 = (int)0;
						}
						else{
							HX_STACK_LINE(440)
							tmp19 = Alpha;
						}
					}
					HX_STACK_LINE(440)
					int tmp20 = (int(tmp19) << int((int)24));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(440)
					hx::OrEq(color,tmp20);
					HX_STACK_LINE(440)
					Alpha;
				}
				HX_STACK_LINE(440)
				tmp17 = color;
			}
			HX_STACK_LINE(440)
			tmp2 = tmp17;
		}
	}
	HX_STACK_LINE(440)
	int output = tmp2;		HX_STACK_VAR(output,"output");
	HX_STACK_LINE(441)
	{
		HX_STACK_LINE(441)
		hx::AndEq(output,(int)16777215);
		HX_STACK_LINE(441)
		bool tmp3 = (oldAlpha > (int)255);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(441)
		int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(441)
		if ((tmp3)){
			HX_STACK_LINE(441)
			tmp4 = (int)255;
		}
		else{
			HX_STACK_LINE(441)
			bool tmp5 = (oldAlpha < (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(441)
			if ((tmp5)){
				HX_STACK_LINE(441)
				tmp4 = (int)0;
			}
			else{
				HX_STACK_LINE(441)
				tmp4 = oldAlpha;
			}
		}
		HX_STACK_LINE(441)
		int tmp5 = (int(tmp4) << int((int)24));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(441)
		hx::OrEq(output,tmp5);
		HX_STACK_LINE(441)
		oldAlpha;
	}
	HX_STACK_LINE(442)
	int tmp3 = output;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(442)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,getInverted,return )

int FlxColor_Impl__obj::setRGB( int this1,int Red,int Green,int Blue,hx::Null< int >  __o_Alpha){
int Alpha = __o_Alpha.Default(255);
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","setRGB",0x421acf50,"flixel.util._FlxColor.FlxColor_Impl_.setRGB","flixel/util/FlxColor.hx",455,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(Red,"Red")
	HX_STACK_ARG(Green,"Green")
	HX_STACK_ARG(Blue,"Blue")
	HX_STACK_ARG(Alpha,"Alpha")
{
		HX_STACK_LINE(456)
		{
			HX_STACK_LINE(456)
			hx::AndEq(this1,(int)-16711681);
			HX_STACK_LINE(456)
			bool tmp = (Red > (int)255);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(456)
			int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(456)
			if ((tmp)){
				HX_STACK_LINE(456)
				tmp1 = (int)255;
			}
			else{
				HX_STACK_LINE(456)
				bool tmp2 = (Red < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(456)
				if ((tmp2)){
					HX_STACK_LINE(456)
					tmp1 = (int)0;
				}
				else{
					HX_STACK_LINE(456)
					tmp1 = Red;
				}
			}
			HX_STACK_LINE(456)
			int tmp2 = (int(tmp1) << int((int)16));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(456)
			hx::OrEq(this1,tmp2);
			HX_STACK_LINE(456)
			Red;
		}
		HX_STACK_LINE(457)
		{
			HX_STACK_LINE(457)
			hx::AndEq(this1,(int)-65281);
			HX_STACK_LINE(457)
			bool tmp = (Green > (int)255);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(457)
			int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(457)
			if ((tmp)){
				HX_STACK_LINE(457)
				tmp1 = (int)255;
			}
			else{
				HX_STACK_LINE(457)
				bool tmp2 = (Green < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(457)
				if ((tmp2)){
					HX_STACK_LINE(457)
					tmp1 = (int)0;
				}
				else{
					HX_STACK_LINE(457)
					tmp1 = Green;
				}
			}
			HX_STACK_LINE(457)
			int tmp2 = (int(tmp1) << int((int)8));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(457)
			hx::OrEq(this1,tmp2);
			HX_STACK_LINE(457)
			Green;
		}
		HX_STACK_LINE(458)
		{
			HX_STACK_LINE(458)
			hx::AndEq(this1,(int)-256);
			HX_STACK_LINE(458)
			bool tmp = (Blue > (int)255);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(458)
			int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(458)
			if ((tmp)){
				HX_STACK_LINE(458)
				tmp1 = (int)255;
			}
			else{
				HX_STACK_LINE(458)
				bool tmp2 = (Blue < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(458)
				if ((tmp2)){
					HX_STACK_LINE(458)
					tmp1 = (int)0;
				}
				else{
					HX_STACK_LINE(458)
					tmp1 = Blue;
				}
			}
			HX_STACK_LINE(458)
			hx::OrEq(this1,tmp1);
			HX_STACK_LINE(458)
			Blue;
		}
		HX_STACK_LINE(459)
		{
			HX_STACK_LINE(459)
			hx::AndEq(this1,(int)16777215);
			HX_STACK_LINE(459)
			bool tmp = (Alpha > (int)255);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(459)
			int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(459)
			if ((tmp)){
				HX_STACK_LINE(459)
				tmp1 = (int)255;
			}
			else{
				HX_STACK_LINE(459)
				bool tmp2 = (Alpha < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(459)
				if ((tmp2)){
					HX_STACK_LINE(459)
					tmp1 = (int)0;
				}
				else{
					HX_STACK_LINE(459)
					tmp1 = Alpha;
				}
			}
			HX_STACK_LINE(459)
			int tmp2 = (int(tmp1) << int((int)24));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(459)
			hx::OrEq(this1,tmp2);
			HX_STACK_LINE(459)
			Alpha;
		}
		HX_STACK_LINE(460)
		int tmp = this1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(460)
		return tmp;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxColor_Impl__obj,setRGB,return )

int FlxColor_Impl__obj::setRGBFloat( int this1,Float Red,Float Green,Float Blue,hx::Null< Float >  __o_Alpha){
Float Alpha = __o_Alpha.Default(1);
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","setRGBFloat",0x51a7e42c,"flixel.util._FlxColor.FlxColor_Impl_.setRGBFloat","flixel/util/FlxColor.hx",473,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(Red,"Red")
	HX_STACK_ARG(Green,"Green")
	HX_STACK_ARG(Blue,"Blue")
	HX_STACK_ARG(Alpha,"Alpha")
{
		HX_STACK_LINE(474)
		{
			HX_STACK_LINE(474)
			{
				HX_STACK_LINE(474)
				Float tmp = (Red * (int)255);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(474)
				int tmp1 = ::Math_obj::round(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(474)
				int Value = tmp1;		HX_STACK_VAR(Value,"Value");
				HX_STACK_LINE(474)
				hx::AndEq(this1,(int)-16711681);
				HX_STACK_LINE(474)
				bool tmp2 = (Value > (int)255);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(474)
				int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(474)
				if ((tmp2)){
					HX_STACK_LINE(474)
					tmp3 = (int)255;
				}
				else{
					HX_STACK_LINE(474)
					bool tmp4 = (Value < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(474)
					if ((tmp4)){
						HX_STACK_LINE(474)
						tmp3 = (int)0;
					}
					else{
						HX_STACK_LINE(474)
						tmp3 = Value;
					}
				}
				HX_STACK_LINE(474)
				int tmp4 = (int(tmp3) << int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(474)
				hx::OrEq(this1,tmp4);
				HX_STACK_LINE(474)
				Value;
			}
			HX_STACK_LINE(474)
			Red;
		}
		HX_STACK_LINE(475)
		{
			HX_STACK_LINE(475)
			{
				HX_STACK_LINE(475)
				Float tmp = (Green * (int)255);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(475)
				int tmp1 = ::Math_obj::round(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(475)
				int Value = tmp1;		HX_STACK_VAR(Value,"Value");
				HX_STACK_LINE(475)
				hx::AndEq(this1,(int)-65281);
				HX_STACK_LINE(475)
				bool tmp2 = (Value > (int)255);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(475)
				int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(475)
				if ((tmp2)){
					HX_STACK_LINE(475)
					tmp3 = (int)255;
				}
				else{
					HX_STACK_LINE(475)
					bool tmp4 = (Value < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(475)
					if ((tmp4)){
						HX_STACK_LINE(475)
						tmp3 = (int)0;
					}
					else{
						HX_STACK_LINE(475)
						tmp3 = Value;
					}
				}
				HX_STACK_LINE(475)
				int tmp4 = (int(tmp3) << int((int)8));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(475)
				hx::OrEq(this1,tmp4);
				HX_STACK_LINE(475)
				Value;
			}
			HX_STACK_LINE(475)
			Green;
		}
		HX_STACK_LINE(476)
		{
			HX_STACK_LINE(476)
			{
				HX_STACK_LINE(476)
				Float tmp = (Blue * (int)255);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(476)
				int tmp1 = ::Math_obj::round(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(476)
				int Value = tmp1;		HX_STACK_VAR(Value,"Value");
				HX_STACK_LINE(476)
				hx::AndEq(this1,(int)-256);
				HX_STACK_LINE(476)
				bool tmp2 = (Value > (int)255);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(476)
				int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(476)
				if ((tmp2)){
					HX_STACK_LINE(476)
					tmp3 = (int)255;
				}
				else{
					HX_STACK_LINE(476)
					bool tmp4 = (Value < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(476)
					if ((tmp4)){
						HX_STACK_LINE(476)
						tmp3 = (int)0;
					}
					else{
						HX_STACK_LINE(476)
						tmp3 = Value;
					}
				}
				HX_STACK_LINE(476)
				hx::OrEq(this1,tmp3);
				HX_STACK_LINE(476)
				Value;
			}
			HX_STACK_LINE(476)
			Blue;
		}
		HX_STACK_LINE(477)
		{
			HX_STACK_LINE(477)
			{
				HX_STACK_LINE(477)
				Float tmp = (Alpha * (int)255);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(477)
				int tmp1 = ::Math_obj::round(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(477)
				int Value = tmp1;		HX_STACK_VAR(Value,"Value");
				HX_STACK_LINE(477)
				hx::AndEq(this1,(int)16777215);
				HX_STACK_LINE(477)
				bool tmp2 = (Value > (int)255);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(477)
				int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(477)
				if ((tmp2)){
					HX_STACK_LINE(477)
					tmp3 = (int)255;
				}
				else{
					HX_STACK_LINE(477)
					bool tmp4 = (Value < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(477)
					if ((tmp4)){
						HX_STACK_LINE(477)
						tmp3 = (int)0;
					}
					else{
						HX_STACK_LINE(477)
						tmp3 = Value;
					}
				}
				HX_STACK_LINE(477)
				int tmp4 = (int(tmp3) << int((int)24));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(477)
				hx::OrEq(this1,tmp4);
				HX_STACK_LINE(477)
				Value;
			}
			HX_STACK_LINE(477)
			Alpha;
		}
		HX_STACK_LINE(478)
		int tmp = this1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(478)
		return tmp;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxColor_Impl__obj,setRGBFloat,return )

int FlxColor_Impl__obj::setCMYK( int this1,Float Cyan,Float Magenta,Float Yellow,Float Black,hx::Null< Float >  __o_Alpha){
Float Alpha = __o_Alpha.Default(1);
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","setCMYK",0x8b750539,"flixel.util._FlxColor.FlxColor_Impl_.setCMYK","flixel/util/FlxColor.hx",492,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(Cyan,"Cyan")
	HX_STACK_ARG(Magenta,"Magenta")
	HX_STACK_ARG(Yellow,"Yellow")
	HX_STACK_ARG(Black,"Black")
	HX_STACK_ARG(Alpha,"Alpha")
{
		HX_STACK_LINE(493)
		{
			HX_STACK_LINE(493)
			Float tmp = ((int)1 - Cyan);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(493)
			Float tmp1 = ((int)1 - Black);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(493)
			Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(493)
			Float Value = tmp2;		HX_STACK_VAR(Value,"Value");
			HX_STACK_LINE(493)
			{
				HX_STACK_LINE(493)
				Float tmp3 = (Value * (int)255);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(493)
				int tmp4 = ::Math_obj::round(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(493)
				int Value1 = tmp4;		HX_STACK_VAR(Value1,"Value1");
				HX_STACK_LINE(493)
				hx::AndEq(this1,(int)-16711681);
				HX_STACK_LINE(493)
				bool tmp5 = (Value1 > (int)255);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(493)
				int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(493)
				if ((tmp5)){
					HX_STACK_LINE(493)
					tmp6 = (int)255;
				}
				else{
					HX_STACK_LINE(493)
					bool tmp7 = (Value1 < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(493)
					if ((tmp7)){
						HX_STACK_LINE(493)
						tmp6 = (int)0;
					}
					else{
						HX_STACK_LINE(493)
						tmp6 = Value1;
					}
				}
				HX_STACK_LINE(493)
				int tmp7 = (int(tmp6) << int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(493)
				hx::OrEq(this1,tmp7);
				HX_STACK_LINE(493)
				Value1;
			}
			HX_STACK_LINE(493)
			Value;
		}
		HX_STACK_LINE(494)
		{
			HX_STACK_LINE(494)
			Float tmp = ((int)1 - Magenta);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(494)
			Float tmp1 = ((int)1 - Black);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(494)
			Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(494)
			Float Value = tmp2;		HX_STACK_VAR(Value,"Value");
			HX_STACK_LINE(494)
			{
				HX_STACK_LINE(494)
				Float tmp3 = (Value * (int)255);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(494)
				int tmp4 = ::Math_obj::round(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(494)
				int Value1 = tmp4;		HX_STACK_VAR(Value1,"Value1");
				HX_STACK_LINE(494)
				hx::AndEq(this1,(int)-65281);
				HX_STACK_LINE(494)
				bool tmp5 = (Value1 > (int)255);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(494)
				int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(494)
				if ((tmp5)){
					HX_STACK_LINE(494)
					tmp6 = (int)255;
				}
				else{
					HX_STACK_LINE(494)
					bool tmp7 = (Value1 < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(494)
					if ((tmp7)){
						HX_STACK_LINE(494)
						tmp6 = (int)0;
					}
					else{
						HX_STACK_LINE(494)
						tmp6 = Value1;
					}
				}
				HX_STACK_LINE(494)
				int tmp7 = (int(tmp6) << int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(494)
				hx::OrEq(this1,tmp7);
				HX_STACK_LINE(494)
				Value1;
			}
			HX_STACK_LINE(494)
			Value;
		}
		HX_STACK_LINE(495)
		{
			HX_STACK_LINE(495)
			Float tmp = ((int)1 - Yellow);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(495)
			Float tmp1 = ((int)1 - Black);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(495)
			Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(495)
			Float Value = tmp2;		HX_STACK_VAR(Value,"Value");
			HX_STACK_LINE(495)
			{
				HX_STACK_LINE(495)
				Float tmp3 = (Value * (int)255);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(495)
				int tmp4 = ::Math_obj::round(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(495)
				int Value1 = tmp4;		HX_STACK_VAR(Value1,"Value1");
				HX_STACK_LINE(495)
				hx::AndEq(this1,(int)-256);
				HX_STACK_LINE(495)
				bool tmp5 = (Value1 > (int)255);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(495)
				int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(495)
				if ((tmp5)){
					HX_STACK_LINE(495)
					tmp6 = (int)255;
				}
				else{
					HX_STACK_LINE(495)
					bool tmp7 = (Value1 < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(495)
					if ((tmp7)){
						HX_STACK_LINE(495)
						tmp6 = (int)0;
					}
					else{
						HX_STACK_LINE(495)
						tmp6 = Value1;
					}
				}
				HX_STACK_LINE(495)
				hx::OrEq(this1,tmp6);
				HX_STACK_LINE(495)
				Value1;
			}
			HX_STACK_LINE(495)
			Value;
		}
		HX_STACK_LINE(496)
		{
			HX_STACK_LINE(496)
			{
				HX_STACK_LINE(496)
				Float tmp = (Alpha * (int)255);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(496)
				int tmp1 = ::Math_obj::round(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(496)
				int Value = tmp1;		HX_STACK_VAR(Value,"Value");
				HX_STACK_LINE(496)
				hx::AndEq(this1,(int)16777215);
				HX_STACK_LINE(496)
				bool tmp2 = (Value > (int)255);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(496)
				int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(496)
				if ((tmp2)){
					HX_STACK_LINE(496)
					tmp3 = (int)255;
				}
				else{
					HX_STACK_LINE(496)
					bool tmp4 = (Value < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(496)
					if ((tmp4)){
						HX_STACK_LINE(496)
						tmp3 = (int)0;
					}
					else{
						HX_STACK_LINE(496)
						tmp3 = Value;
					}
				}
				HX_STACK_LINE(496)
				int tmp4 = (int(tmp3) << int((int)24));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(496)
				hx::OrEq(this1,tmp4);
				HX_STACK_LINE(496)
				Value;
			}
			HX_STACK_LINE(496)
			Alpha;
		}
		HX_STACK_LINE(497)
		int tmp = this1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(497)
		return tmp;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxColor_Impl__obj,setCMYK,return )

int FlxColor_Impl__obj::setHSB( int this1,Float Hue,Float Saturation,Float Brightness,Float Alpha){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","setHSB",0x4213433a,"flixel.util._FlxColor.FlxColor_Impl_.setHSB","flixel/util/FlxColor.hx",510,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(Hue,"Hue")
	HX_STACK_ARG(Saturation,"Saturation")
	HX_STACK_ARG(Brightness,"Brightness")
	HX_STACK_ARG(Alpha,"Alpha")
	HX_STACK_LINE(511)
	Float tmp = (Brightness * Saturation);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(511)
	Float chroma = tmp;		HX_STACK_VAR(chroma,"chroma");
	HX_STACK_LINE(512)
	Float tmp1 = (Brightness - chroma);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(512)
	Float match = tmp1;		HX_STACK_VAR(match,"match");
	HX_STACK_LINE(513)
	int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(513)
	{
		HX_STACK_LINE(513)
		Float Hue1 = Hue;		HX_STACK_VAR(Hue1,"Hue1");
		HX_STACK_LINE(513)
		Float Chroma = chroma;		HX_STACK_VAR(Chroma,"Chroma");
		HX_STACK_LINE(513)
		hx::ModEq(Hue1,(int)360);
		HX_STACK_LINE(513)
		Float tmp3 = (Float(Hue1) / Float((int)60));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(513)
		Float hueD = tmp3;		HX_STACK_VAR(hueD,"hueD");
		HX_STACK_LINE(513)
		Float tmp4 = Chroma;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(513)
		Float tmp5 = hx::Mod(hueD,(int)2);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(513)
		Float tmp6 = (tmp5 - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(513)
		Float tmp7 = ::Math_obj::abs(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(513)
		Float tmp8 = ((int)1 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(513)
		Float tmp9 = (tmp4 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(513)
		Float tmp10 = match;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(513)
		Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(513)
		Float mid = tmp11;		HX_STACK_VAR(mid,"mid");
		HX_STACK_LINE(513)
		hx::AddEq(Chroma,match);
		HX_STACK_LINE(513)
		{
			HX_STACK_LINE(513)
			Float tmp12 = hueD;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(513)
			int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(513)
			int _g = tmp13;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(513)
			int tmp14 = _g;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(513)
			switch( (int)(tmp14)){
				case (int)0: {
					HX_STACK_LINE(513)
					int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(513)
					{
						HX_STACK_LINE(513)
						{
							HX_STACK_LINE(513)
							{
								HX_STACK_LINE(513)
								Float tmp16 = (Chroma * (int)255);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(513)
								int tmp17 = ::Math_obj::round(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(513)
								int Value = tmp17;		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(513)
								hx::AndEq(this1,(int)-16711681);
								HX_STACK_LINE(513)
								bool tmp18 = (Value > (int)255);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(513)
								int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(513)
								if ((tmp18)){
									HX_STACK_LINE(513)
									tmp19 = (int)255;
								}
								else{
									HX_STACK_LINE(513)
									bool tmp20 = (Value < (int)0);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(513)
									if ((tmp20)){
										HX_STACK_LINE(513)
										tmp19 = (int)0;
									}
									else{
										HX_STACK_LINE(513)
										tmp19 = Value;
									}
								}
								HX_STACK_LINE(513)
								int tmp20 = (int(tmp19) << int((int)16));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(513)
								hx::OrEq(this1,tmp20);
								HX_STACK_LINE(513)
								Value;
							}
							HX_STACK_LINE(513)
							Chroma;
						}
						HX_STACK_LINE(513)
						{
							HX_STACK_LINE(513)
							{
								HX_STACK_LINE(513)
								Float tmp16 = (mid * (int)255);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(513)
								int tmp17 = ::Math_obj::round(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(513)
								int Value = tmp17;		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(513)
								hx::AndEq(this1,(int)-65281);
								HX_STACK_LINE(513)
								bool tmp18 = (Value > (int)255);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(513)
								int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(513)
								if ((tmp18)){
									HX_STACK_LINE(513)
									tmp19 = (int)255;
								}
								else{
									HX_STACK_LINE(513)
									bool tmp20 = (Value < (int)0);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(513)
									if ((tmp20)){
										HX_STACK_LINE(513)
										tmp19 = (int)0;
									}
									else{
										HX_STACK_LINE(513)
										tmp19 = Value;
									}
								}
								HX_STACK_LINE(513)
								int tmp20 = (int(tmp19) << int((int)8));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(513)
								hx::OrEq(this1,tmp20);
								HX_STACK_LINE(513)
								Value;
							}
							HX_STACK_LINE(513)
							mid;
						}
						HX_STACK_LINE(513)
						{
							HX_STACK_LINE(513)
							{
								HX_STACK_LINE(513)
								Float tmp16 = (match * (int)255);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(513)
								int tmp17 = ::Math_obj::round(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(513)
								int Value = tmp17;		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(513)
								hx::AndEq(this1,(int)-256);
								HX_STACK_LINE(513)
								bool tmp18 = (Value > (int)255);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(513)
								int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(513)
								if ((tmp18)){
									HX_STACK_LINE(513)
									tmp19 = (int)255;
								}
								else{
									HX_STACK_LINE(513)
									bool tmp20 = (Value < (int)0);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(513)
									if ((tmp20)){
										HX_STACK_LINE(513)
										tmp19 = (int)0;
									}
									else{
										HX_STACK_LINE(513)
										tmp19 = Value;
									}
								}
								HX_STACK_LINE(513)
								hx::OrEq(this1,tmp19);
								HX_STACK_LINE(513)
								Value;
							}
							HX_STACK_LINE(513)
							match;
						}
						HX_STACK_LINE(513)
						{
							HX_STACK_LINE(513)
							{
								HX_STACK_LINE(513)
								Float tmp16 = (Alpha * (int)255);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(513)
								int tmp17 = ::Math_obj::round(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(513)
								int Value = tmp17;		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(513)
								hx::AndEq(this1,(int)16777215);
								HX_STACK_LINE(513)
								bool tmp18 = (Value > (int)255);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(513)
								int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(513)
								if ((tmp18)){
									HX_STACK_LINE(513)
									tmp19 = (int)255;
								}
								else{
									HX_STACK_LINE(513)
									bool tmp20 = (Value < (int)0);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(513)
									if ((tmp20)){
										HX_STACK_LINE(513)
										tmp19 = (int)0;
									}
									else{
										HX_STACK_LINE(513)
										tmp19 = Value;
									}
								}
								HX_STACK_LINE(513)
								int tmp20 = (int(tmp19) << int((int)24));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(513)
								hx::OrEq(this1,tmp20);
								HX_STACK_LINE(513)
								Value;
							}
							HX_STACK_LINE(513)
							Alpha;
						}
						HX_STACK_LINE(513)
						tmp15 = this1;
					}
					HX_STACK_LINE(513)
					tmp15;
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(513)
					int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(513)
					{
						HX_STACK_LINE(513)
						{
							HX_STACK_LINE(513)
							{
								HX_STACK_LINE(513)
								Float tmp16 = (mid * (int)255);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(513)
								int tmp17 = ::Math_obj::round(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(513)
								int Value = tmp17;		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(513)
								hx::AndEq(this1,(int)-16711681);
								HX_STACK_LINE(513)
								bool tmp18 = (Value > (int)255);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(513)
								int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(513)
								if ((tmp18)){
									HX_STACK_LINE(513)
									tmp19 = (int)255;
								}
								else{
									HX_STACK_LINE(513)
									bool tmp20 = (Value < (int)0);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(513)
									if ((tmp20)){
										HX_STACK_LINE(513)
										tmp19 = (int)0;
									}
									else{
										HX_STACK_LINE(513)
										tmp19 = Value;
									}
								}
								HX_STACK_LINE(513)
								int tmp20 = (int(tmp19) << int((int)16));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(513)
								hx::OrEq(this1,tmp20);
								HX_STACK_LINE(513)
								Value;
							}
							HX_STACK_LINE(513)
							mid;
						}
						HX_STACK_LINE(513)
						{
							HX_STACK_LINE(513)
							{
								HX_STACK_LINE(513)
								Float tmp16 = (Chroma * (int)255);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(513)
								int tmp17 = ::Math_obj::round(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(513)
								int Value = tmp17;		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(513)
								hx::AndEq(this1,(int)-65281);
								HX_STACK_LINE(513)
								bool tmp18 = (Value > (int)255);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(513)
								int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(513)
								if ((tmp18)){
									HX_STACK_LINE(513)
									tmp19 = (int)255;
								}
								else{
									HX_STACK_LINE(513)
									bool tmp20 = (Value < (int)0);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(513)
									if ((tmp20)){
										HX_STACK_LINE(513)
										tmp19 = (int)0;
									}
									else{
										HX_STACK_LINE(513)
										tmp19 = Value;
									}
								}
								HX_STACK_LINE(513)
								int tmp20 = (int(tmp19) << int((int)8));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(513)
								hx::OrEq(this1,tmp20);
								HX_STACK_LINE(513)
								Value;
							}
							HX_STACK_LINE(513)
							Chroma;
						}
						HX_STACK_LINE(513)
						{
							HX_STACK_LINE(513)
							{
								HX_STACK_LINE(513)
								Float tmp16 = (match * (int)255);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(513)
								int tmp17 = ::Math_obj::round(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(513)
								int Value = tmp17;		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(513)
								hx::AndEq(this1,(int)-256);
								HX_STACK_LINE(513)
								bool tmp18 = (Value > (int)255);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(513)
								int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(513)
								if ((tmp18)){
									HX_STACK_LINE(513)
									tmp19 = (int)255;
								}
								else{
									HX_STACK_LINE(513)
									bool tmp20 = (Value < (int)0);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(513)
									if ((tmp20)){
										HX_STACK_LINE(513)
										tmp19 = (int)0;
									}
									else{
										HX_STACK_LINE(513)
										tmp19 = Value;
									}
								}
								HX_STACK_LINE(513)
								hx::OrEq(this1,tmp19);
								HX_STACK_LINE(513)
								Value;
							}
							HX_STACK_LINE(513)
							match;
						}
						HX_STACK_LINE(513)
						{
							HX_STACK_LINE(513)
							{
								HX_STACK_LINE(513)
								Float tmp16 = (Alpha * (int)255);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(513)
								int tmp17 = ::Math_obj::round(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(513)
								int Value = tmp17;		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(513)
								hx::AndEq(this1,(int)16777215);
								HX_STACK_LINE(513)
								bool tmp18 = (Value > (int)255);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(513)
								int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(513)
								if ((tmp18)){
									HX_STACK_LINE(513)
									tmp19 = (int)255;
								}
								else{
									HX_STACK_LINE(513)
									bool tmp20 = (Value < (int)0);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(513)
									if ((tmp20)){
										HX_STACK_LINE(513)
										tmp19 = (int)0;
									}
									else{
										HX_STACK_LINE(513)
										tmp19 = Value;
									}
								}
								HX_STACK_LINE(513)
								int tmp20 = (int(tmp19) << int((int)24));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(513)
								hx::OrEq(this1,tmp20);
								HX_STACK_LINE(513)
								Value;
							}
							HX_STACK_LINE(513)
							Alpha;
						}
						HX_STACK_LINE(513)
						tmp15 = this1;
					}
					HX_STACK_LINE(513)
					tmp15;
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(513)
					int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(513)
					{
						HX_STACK_LINE(513)
						{
							HX_STACK_LINE(513)
							{
								HX_STACK_LINE(513)
								Float tmp16 = (match * (int)255);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(513)
								int tmp17 = ::Math_obj::round(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(513)
								int Value = tmp17;		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(513)
								hx::AndEq(this1,(int)-16711681);
								HX_STACK_LINE(513)
								bool tmp18 = (Value > (int)255);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(513)
								int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(513)
								if ((tmp18)){
									HX_STACK_LINE(513)
									tmp19 = (int)255;
								}
								else{
									HX_STACK_LINE(513)
									bool tmp20 = (Value < (int)0);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(513)
									if ((tmp20)){
										HX_STACK_LINE(513)
										tmp19 = (int)0;
									}
									else{
										HX_STACK_LINE(513)
										tmp19 = Value;
									}
								}
								HX_STACK_LINE(513)
								int tmp20 = (int(tmp19) << int((int)16));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(513)
								hx::OrEq(this1,tmp20);
								HX_STACK_LINE(513)
								Value;
							}
							HX_STACK_LINE(513)
							match;
						}
						HX_STACK_LINE(513)
						{
							HX_STACK_LINE(513)
							{
								HX_STACK_LINE(513)
								Float tmp16 = (Chroma * (int)255);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(513)
								int tmp17 = ::Math_obj::round(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(513)
								int Value = tmp17;		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(513)
								hx::AndEq(this1,(int)-65281);
								HX_STACK_LINE(513)
								bool tmp18 = (Value > (int)255);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(513)
								int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(513)
								if ((tmp18)){
									HX_STACK_LINE(513)
									tmp19 = (int)255;
								}
								else{
									HX_STACK_LINE(513)
									bool tmp20 = (Value < (int)0);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(513)
									if ((tmp20)){
										HX_STACK_LINE(513)
										tmp19 = (int)0;
									}
									else{
										HX_STACK_LINE(513)
										tmp19 = Value;
									}
								}
								HX_STACK_LINE(513)
								int tmp20 = (int(tmp19) << int((int)8));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(513)
								hx::OrEq(this1,tmp20);
								HX_STACK_LINE(513)
								Value;
							}
							HX_STACK_LINE(513)
							Chroma;
						}
						HX_STACK_LINE(513)
						{
							HX_STACK_LINE(513)
							{
								HX_STACK_LINE(513)
								Float tmp16 = (mid * (int)255);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(513)
								int tmp17 = ::Math_obj::round(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(513)
								int Value = tmp17;		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(513)
								hx::AndEq(this1,(int)-256);
								HX_STACK_LINE(513)
								bool tmp18 = (Value > (int)255);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(513)
								int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(513)
								if ((tmp18)){
									HX_STACK_LINE(513)
									tmp19 = (int)255;
								}
								else{
									HX_STACK_LINE(513)
									bool tmp20 = (Value < (int)0);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(513)
									if ((tmp20)){
										HX_STACK_LINE(513)
										tmp19 = (int)0;
									}
									else{
										HX_STACK_LINE(513)
										tmp19 = Value;
									}
								}
								HX_STACK_LINE(513)
								hx::OrEq(this1,tmp19);
								HX_STACK_LINE(513)
								Value;
							}
							HX_STACK_LINE(513)
							mid;
						}
						HX_STACK_LINE(513)
						{
							HX_STACK_LINE(513)
							{
								HX_STACK_LINE(513)
								Float tmp16 = (Alpha * (int)255);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(513)
								int tmp17 = ::Math_obj::round(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(513)
								int Value = tmp17;		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(513)
								hx::AndEq(this1,(int)16777215);
								HX_STACK_LINE(513)
								bool tmp18 = (Value > (int)255);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(513)
								int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(513)
								if ((tmp18)){
									HX_STACK_LINE(513)
									tmp19 = (int)255;
								}
								else{
									HX_STACK_LINE(513)
									bool tmp20 = (Value < (int)0);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(513)
									if ((tmp20)){
										HX_STACK_LINE(513)
										tmp19 = (int)0;
									}
									else{
										HX_STACK_LINE(513)
										tmp19 = Value;
									}
								}
								HX_STACK_LINE(513)
								int tmp20 = (int(tmp19) << int((int)24));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(513)
								hx::OrEq(this1,tmp20);
								HX_STACK_LINE(513)
								Value;
							}
							HX_STACK_LINE(513)
							Alpha;
						}
						HX_STACK_LINE(513)
						tmp15 = this1;
					}
					HX_STACK_LINE(513)
					tmp15;
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(513)
					int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(513)
					{
						HX_STACK_LINE(513)
						{
							HX_STACK_LINE(513)
							{
								HX_STACK_LINE(513)
								Float tmp16 = (match * (int)255);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(513)
								int tmp17 = ::Math_obj::round(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(513)
								int Value = tmp17;		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(513)
								hx::AndEq(this1,(int)-16711681);
								HX_STACK_LINE(513)
								bool tmp18 = (Value > (int)255);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(513)
								int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(513)
								if ((tmp18)){
									HX_STACK_LINE(513)
									tmp19 = (int)255;
								}
								else{
									HX_STACK_LINE(513)
									bool tmp20 = (Value < (int)0);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(513)
									if ((tmp20)){
										HX_STACK_LINE(513)
										tmp19 = (int)0;
									}
									else{
										HX_STACK_LINE(513)
										tmp19 = Value;
									}
								}
								HX_STACK_LINE(513)
								int tmp20 = (int(tmp19) << int((int)16));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(513)
								hx::OrEq(this1,tmp20);
								HX_STACK_LINE(513)
								Value;
							}
							HX_STACK_LINE(513)
							match;
						}
						HX_STACK_LINE(513)
						{
							HX_STACK_LINE(513)
							{
								HX_STACK_LINE(513)
								Float tmp16 = (mid * (int)255);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(513)
								int tmp17 = ::Math_obj::round(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(513)
								int Value = tmp17;		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(513)
								hx::AndEq(this1,(int)-65281);
								HX_STACK_LINE(513)
								bool tmp18 = (Value > (int)255);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(513)
								int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(513)
								if ((tmp18)){
									HX_STACK_LINE(513)
									tmp19 = (int)255;
								}
								else{
									HX_STACK_LINE(513)
									bool tmp20 = (Value < (int)0);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(513)
									if ((tmp20)){
										HX_STACK_LINE(513)
										tmp19 = (int)0;
									}
									else{
										HX_STACK_LINE(513)
										tmp19 = Value;
									}
								}
								HX_STACK_LINE(513)
								int tmp20 = (int(tmp19) << int((int)8));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(513)
								hx::OrEq(this1,tmp20);
								HX_STACK_LINE(513)
								Value;
							}
							HX_STACK_LINE(513)
							mid;
						}
						HX_STACK_LINE(513)
						{
							HX_STACK_LINE(513)
							{
								HX_STACK_LINE(513)
								Float tmp16 = (Chroma * (int)255);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(513)
								int tmp17 = ::Math_obj::round(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(513)
								int Value = tmp17;		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(513)
								hx::AndEq(this1,(int)-256);
								HX_STACK_LINE(513)
								bool tmp18 = (Value > (int)255);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(513)
								int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(513)
								if ((tmp18)){
									HX_STACK_LINE(513)
									tmp19 = (int)255;
								}
								else{
									HX_STACK_LINE(513)
									bool tmp20 = (Value < (int)0);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(513)
									if ((tmp20)){
										HX_STACK_LINE(513)
										tmp19 = (int)0;
									}
									else{
										HX_STACK_LINE(513)
										tmp19 = Value;
									}
								}
								HX_STACK_LINE(513)
								hx::OrEq(this1,tmp19);
								HX_STACK_LINE(513)
								Value;
							}
							HX_STACK_LINE(513)
							Chroma;
						}
						HX_STACK_LINE(513)
						{
							HX_STACK_LINE(513)
							{
								HX_STACK_LINE(513)
								Float tmp16 = (Alpha * (int)255);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(513)
								int tmp17 = ::Math_obj::round(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(513)
								int Value = tmp17;		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(513)
								hx::AndEq(this1,(int)16777215);
								HX_STACK_LINE(513)
								bool tmp18 = (Value > (int)255);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(513)
								int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(513)
								if ((tmp18)){
									HX_STACK_LINE(513)
									tmp19 = (int)255;
								}
								else{
									HX_STACK_LINE(513)
									bool tmp20 = (Value < (int)0);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(513)
									if ((tmp20)){
										HX_STACK_LINE(513)
										tmp19 = (int)0;
									}
									else{
										HX_STACK_LINE(513)
										tmp19 = Value;
									}
								}
								HX_STACK_LINE(513)
								int tmp20 = (int(tmp19) << int((int)24));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(513)
								hx::OrEq(this1,tmp20);
								HX_STACK_LINE(513)
								Value;
							}
							HX_STACK_LINE(513)
							Alpha;
						}
						HX_STACK_LINE(513)
						tmp15 = this1;
					}
					HX_STACK_LINE(513)
					tmp15;
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(513)
					int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(513)
					{
						HX_STACK_LINE(513)
						{
							HX_STACK_LINE(513)
							{
								HX_STACK_LINE(513)
								Float tmp16 = (mid * (int)255);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(513)
								int tmp17 = ::Math_obj::round(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(513)
								int Value = tmp17;		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(513)
								hx::AndEq(this1,(int)-16711681);
								HX_STACK_LINE(513)
								bool tmp18 = (Value > (int)255);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(513)
								int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(513)
								if ((tmp18)){
									HX_STACK_LINE(513)
									tmp19 = (int)255;
								}
								else{
									HX_STACK_LINE(513)
									bool tmp20 = (Value < (int)0);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(513)
									if ((tmp20)){
										HX_STACK_LINE(513)
										tmp19 = (int)0;
									}
									else{
										HX_STACK_LINE(513)
										tmp19 = Value;
									}
								}
								HX_STACK_LINE(513)
								int tmp20 = (int(tmp19) << int((int)16));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(513)
								hx::OrEq(this1,tmp20);
								HX_STACK_LINE(513)
								Value;
							}
							HX_STACK_LINE(513)
							mid;
						}
						HX_STACK_LINE(513)
						{
							HX_STACK_LINE(513)
							{
								HX_STACK_LINE(513)
								Float tmp16 = (match * (int)255);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(513)
								int tmp17 = ::Math_obj::round(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(513)
								int Value = tmp17;		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(513)
								hx::AndEq(this1,(int)-65281);
								HX_STACK_LINE(513)
								bool tmp18 = (Value > (int)255);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(513)
								int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(513)
								if ((tmp18)){
									HX_STACK_LINE(513)
									tmp19 = (int)255;
								}
								else{
									HX_STACK_LINE(513)
									bool tmp20 = (Value < (int)0);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(513)
									if ((tmp20)){
										HX_STACK_LINE(513)
										tmp19 = (int)0;
									}
									else{
										HX_STACK_LINE(513)
										tmp19 = Value;
									}
								}
								HX_STACK_LINE(513)
								int tmp20 = (int(tmp19) << int((int)8));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(513)
								hx::OrEq(this1,tmp20);
								HX_STACK_LINE(513)
								Value;
							}
							HX_STACK_LINE(513)
							match;
						}
						HX_STACK_LINE(513)
						{
							HX_STACK_LINE(513)
							{
								HX_STACK_LINE(513)
								Float tmp16 = (Chroma * (int)255);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(513)
								int tmp17 = ::Math_obj::round(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(513)
								int Value = tmp17;		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(513)
								hx::AndEq(this1,(int)-256);
								HX_STACK_LINE(513)
								bool tmp18 = (Value > (int)255);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(513)
								int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(513)
								if ((tmp18)){
									HX_STACK_LINE(513)
									tmp19 = (int)255;
								}
								else{
									HX_STACK_LINE(513)
									bool tmp20 = (Value < (int)0);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(513)
									if ((tmp20)){
										HX_STACK_LINE(513)
										tmp19 = (int)0;
									}
									else{
										HX_STACK_LINE(513)
										tmp19 = Value;
									}
								}
								HX_STACK_LINE(513)
								hx::OrEq(this1,tmp19);
								HX_STACK_LINE(513)
								Value;
							}
							HX_STACK_LINE(513)
							Chroma;
						}
						HX_STACK_LINE(513)
						{
							HX_STACK_LINE(513)
							{
								HX_STACK_LINE(513)
								Float tmp16 = (Alpha * (int)255);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(513)
								int tmp17 = ::Math_obj::round(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(513)
								int Value = tmp17;		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(513)
								hx::AndEq(this1,(int)16777215);
								HX_STACK_LINE(513)
								bool tmp18 = (Value > (int)255);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(513)
								int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(513)
								if ((tmp18)){
									HX_STACK_LINE(513)
									tmp19 = (int)255;
								}
								else{
									HX_STACK_LINE(513)
									bool tmp20 = (Value < (int)0);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(513)
									if ((tmp20)){
										HX_STACK_LINE(513)
										tmp19 = (int)0;
									}
									else{
										HX_STACK_LINE(513)
										tmp19 = Value;
									}
								}
								HX_STACK_LINE(513)
								int tmp20 = (int(tmp19) << int((int)24));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(513)
								hx::OrEq(this1,tmp20);
								HX_STACK_LINE(513)
								Value;
							}
							HX_STACK_LINE(513)
							Alpha;
						}
						HX_STACK_LINE(513)
						tmp15 = this1;
					}
					HX_STACK_LINE(513)
					tmp15;
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(513)
					int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(513)
					{
						HX_STACK_LINE(513)
						{
							HX_STACK_LINE(513)
							{
								HX_STACK_LINE(513)
								Float tmp16 = (Chroma * (int)255);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(513)
								int tmp17 = ::Math_obj::round(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(513)
								int Value = tmp17;		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(513)
								hx::AndEq(this1,(int)-16711681);
								HX_STACK_LINE(513)
								bool tmp18 = (Value > (int)255);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(513)
								int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(513)
								if ((tmp18)){
									HX_STACK_LINE(513)
									tmp19 = (int)255;
								}
								else{
									HX_STACK_LINE(513)
									bool tmp20 = (Value < (int)0);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(513)
									if ((tmp20)){
										HX_STACK_LINE(513)
										tmp19 = (int)0;
									}
									else{
										HX_STACK_LINE(513)
										tmp19 = Value;
									}
								}
								HX_STACK_LINE(513)
								int tmp20 = (int(tmp19) << int((int)16));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(513)
								hx::OrEq(this1,tmp20);
								HX_STACK_LINE(513)
								Value;
							}
							HX_STACK_LINE(513)
							Chroma;
						}
						HX_STACK_LINE(513)
						{
							HX_STACK_LINE(513)
							{
								HX_STACK_LINE(513)
								Float tmp16 = (match * (int)255);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(513)
								int tmp17 = ::Math_obj::round(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(513)
								int Value = tmp17;		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(513)
								hx::AndEq(this1,(int)-65281);
								HX_STACK_LINE(513)
								bool tmp18 = (Value > (int)255);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(513)
								int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(513)
								if ((tmp18)){
									HX_STACK_LINE(513)
									tmp19 = (int)255;
								}
								else{
									HX_STACK_LINE(513)
									bool tmp20 = (Value < (int)0);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(513)
									if ((tmp20)){
										HX_STACK_LINE(513)
										tmp19 = (int)0;
									}
									else{
										HX_STACK_LINE(513)
										tmp19 = Value;
									}
								}
								HX_STACK_LINE(513)
								int tmp20 = (int(tmp19) << int((int)8));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(513)
								hx::OrEq(this1,tmp20);
								HX_STACK_LINE(513)
								Value;
							}
							HX_STACK_LINE(513)
							match;
						}
						HX_STACK_LINE(513)
						{
							HX_STACK_LINE(513)
							{
								HX_STACK_LINE(513)
								Float tmp16 = (mid * (int)255);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(513)
								int tmp17 = ::Math_obj::round(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(513)
								int Value = tmp17;		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(513)
								hx::AndEq(this1,(int)-256);
								HX_STACK_LINE(513)
								bool tmp18 = (Value > (int)255);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(513)
								int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(513)
								if ((tmp18)){
									HX_STACK_LINE(513)
									tmp19 = (int)255;
								}
								else{
									HX_STACK_LINE(513)
									bool tmp20 = (Value < (int)0);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(513)
									if ((tmp20)){
										HX_STACK_LINE(513)
										tmp19 = (int)0;
									}
									else{
										HX_STACK_LINE(513)
										tmp19 = Value;
									}
								}
								HX_STACK_LINE(513)
								hx::OrEq(this1,tmp19);
								HX_STACK_LINE(513)
								Value;
							}
							HX_STACK_LINE(513)
							mid;
						}
						HX_STACK_LINE(513)
						{
							HX_STACK_LINE(513)
							{
								HX_STACK_LINE(513)
								Float tmp16 = (Alpha * (int)255);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(513)
								int tmp17 = ::Math_obj::round(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(513)
								int Value = tmp17;		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(513)
								hx::AndEq(this1,(int)16777215);
								HX_STACK_LINE(513)
								bool tmp18 = (Value > (int)255);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(513)
								int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(513)
								if ((tmp18)){
									HX_STACK_LINE(513)
									tmp19 = (int)255;
								}
								else{
									HX_STACK_LINE(513)
									bool tmp20 = (Value < (int)0);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(513)
									if ((tmp20)){
										HX_STACK_LINE(513)
										tmp19 = (int)0;
									}
									else{
										HX_STACK_LINE(513)
										tmp19 = Value;
									}
								}
								HX_STACK_LINE(513)
								int tmp20 = (int(tmp19) << int((int)24));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(513)
								hx::OrEq(this1,tmp20);
								HX_STACK_LINE(513)
								Value;
							}
							HX_STACK_LINE(513)
							Alpha;
						}
						HX_STACK_LINE(513)
						tmp15 = this1;
					}
					HX_STACK_LINE(513)
					tmp15;
				}
				;break;
			}
		}
		HX_STACK_LINE(513)
		tmp2 = this1;
	}
	HX_STACK_LINE(513)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxColor_Impl__obj,setHSB,return )

int FlxColor_Impl__obj::setHSL( int this1,Float Hue,Float Saturation,Float Lightness,Float Alpha){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","setHSL",0x42134344,"flixel.util._FlxColor.FlxColor_Impl_.setHSL","flixel/util/FlxColor.hx",526,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(Hue,"Hue")
	HX_STACK_ARG(Saturation,"Saturation")
	HX_STACK_ARG(Lightness,"Lightness")
	HX_STACK_ARG(Alpha,"Alpha")
	HX_STACK_LINE(527)
	Float tmp = ((int)2 * Lightness);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(527)
	Float tmp1 = (tmp - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(527)
	Float tmp2 = ::Math_obj::abs(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(527)
	Float tmp3 = ((int)1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(527)
	Float tmp4 = Saturation;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(527)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(527)
	Float chroma = tmp5;		HX_STACK_VAR(chroma,"chroma");
	HX_STACK_LINE(528)
	Float tmp6 = Lightness;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(528)
	Float tmp7 = (Float(chroma) / Float((int)2));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(528)
	Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(528)
	Float match = tmp8;		HX_STACK_VAR(match,"match");
	HX_STACK_LINE(529)
	int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(529)
	{
		HX_STACK_LINE(529)
		Float Hue1 = Hue;		HX_STACK_VAR(Hue1,"Hue1");
		HX_STACK_LINE(529)
		Float Chroma = chroma;		HX_STACK_VAR(Chroma,"Chroma");
		HX_STACK_LINE(529)
		hx::ModEq(Hue1,(int)360);
		HX_STACK_LINE(529)
		Float tmp10 = (Float(Hue1) / Float((int)60));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(529)
		Float hueD = tmp10;		HX_STACK_VAR(hueD,"hueD");
		HX_STACK_LINE(529)
		Float tmp11 = Chroma;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(529)
		Float tmp12 = hx::Mod(hueD,(int)2);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(529)
		Float tmp13 = (tmp12 - (int)1);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(529)
		Float tmp14 = ::Math_obj::abs(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(529)
		Float tmp15 = ((int)1 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(529)
		Float tmp16 = (tmp11 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(529)
		Float tmp17 = match;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(529)
		Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(529)
		Float mid = tmp18;		HX_STACK_VAR(mid,"mid");
		HX_STACK_LINE(529)
		hx::AddEq(Chroma,match);
		HX_STACK_LINE(529)
		{
			HX_STACK_LINE(529)
			Float tmp19 = hueD;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(529)
			int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(529)
			int _g = tmp20;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(529)
			int tmp21 = _g;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(529)
			switch( (int)(tmp21)){
				case (int)0: {
					HX_STACK_LINE(529)
					int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(529)
					{
						HX_STACK_LINE(529)
						{
							HX_STACK_LINE(529)
							{
								HX_STACK_LINE(529)
								Float tmp23 = (Chroma * (int)255);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(529)
								int tmp24 = ::Math_obj::round(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(529)
								int Value = tmp24;		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(529)
								hx::AndEq(this1,(int)-16711681);
								HX_STACK_LINE(529)
								bool tmp25 = (Value > (int)255);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(529)
								int tmp26;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(529)
								if ((tmp25)){
									HX_STACK_LINE(529)
									tmp26 = (int)255;
								}
								else{
									HX_STACK_LINE(529)
									bool tmp27 = (Value < (int)0);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(529)
									if ((tmp27)){
										HX_STACK_LINE(529)
										tmp26 = (int)0;
									}
									else{
										HX_STACK_LINE(529)
										tmp26 = Value;
									}
								}
								HX_STACK_LINE(529)
								int tmp27 = (int(tmp26) << int((int)16));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(529)
								hx::OrEq(this1,tmp27);
								HX_STACK_LINE(529)
								Value;
							}
							HX_STACK_LINE(529)
							Chroma;
						}
						HX_STACK_LINE(529)
						{
							HX_STACK_LINE(529)
							{
								HX_STACK_LINE(529)
								Float tmp23 = (mid * (int)255);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(529)
								int tmp24 = ::Math_obj::round(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(529)
								int Value = tmp24;		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(529)
								hx::AndEq(this1,(int)-65281);
								HX_STACK_LINE(529)
								bool tmp25 = (Value > (int)255);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(529)
								int tmp26;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(529)
								if ((tmp25)){
									HX_STACK_LINE(529)
									tmp26 = (int)255;
								}
								else{
									HX_STACK_LINE(529)
									bool tmp27 = (Value < (int)0);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(529)
									if ((tmp27)){
										HX_STACK_LINE(529)
										tmp26 = (int)0;
									}
									else{
										HX_STACK_LINE(529)
										tmp26 = Value;
									}
								}
								HX_STACK_LINE(529)
								int tmp27 = (int(tmp26) << int((int)8));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(529)
								hx::OrEq(this1,tmp27);
								HX_STACK_LINE(529)
								Value;
							}
							HX_STACK_LINE(529)
							mid;
						}
						HX_STACK_LINE(529)
						{
							HX_STACK_LINE(529)
							{
								HX_STACK_LINE(529)
								Float tmp23 = (match * (int)255);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(529)
								int tmp24 = ::Math_obj::round(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(529)
								int Value = tmp24;		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(529)
								hx::AndEq(this1,(int)-256);
								HX_STACK_LINE(529)
								bool tmp25 = (Value > (int)255);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(529)
								int tmp26;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(529)
								if ((tmp25)){
									HX_STACK_LINE(529)
									tmp26 = (int)255;
								}
								else{
									HX_STACK_LINE(529)
									bool tmp27 = (Value < (int)0);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(529)
									if ((tmp27)){
										HX_STACK_LINE(529)
										tmp26 = (int)0;
									}
									else{
										HX_STACK_LINE(529)
										tmp26 = Value;
									}
								}
								HX_STACK_LINE(529)
								hx::OrEq(this1,tmp26);
								HX_STACK_LINE(529)
								Value;
							}
							HX_STACK_LINE(529)
							match;
						}
						HX_STACK_LINE(529)
						{
							HX_STACK_LINE(529)
							{
								HX_STACK_LINE(529)
								Float tmp23 = (Alpha * (int)255);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(529)
								int tmp24 = ::Math_obj::round(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(529)
								int Value = tmp24;		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(529)
								hx::AndEq(this1,(int)16777215);
								HX_STACK_LINE(529)
								bool tmp25 = (Value > (int)255);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(529)
								int tmp26;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(529)
								if ((tmp25)){
									HX_STACK_LINE(529)
									tmp26 = (int)255;
								}
								else{
									HX_STACK_LINE(529)
									bool tmp27 = (Value < (int)0);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(529)
									if ((tmp27)){
										HX_STACK_LINE(529)
										tmp26 = (int)0;
									}
									else{
										HX_STACK_LINE(529)
										tmp26 = Value;
									}
								}
								HX_STACK_LINE(529)
								int tmp27 = (int(tmp26) << int((int)24));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(529)
								hx::OrEq(this1,tmp27);
								HX_STACK_LINE(529)
								Value;
							}
							HX_STACK_LINE(529)
							Alpha;
						}
						HX_STACK_LINE(529)
						tmp22 = this1;
					}
					HX_STACK_LINE(529)
					tmp22;
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(529)
					int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(529)
					{
						HX_STACK_LINE(529)
						{
							HX_STACK_LINE(529)
							{
								HX_STACK_LINE(529)
								Float tmp23 = (mid * (int)255);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(529)
								int tmp24 = ::Math_obj::round(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(529)
								int Value = tmp24;		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(529)
								hx::AndEq(this1,(int)-16711681);
								HX_STACK_LINE(529)
								bool tmp25 = (Value > (int)255);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(529)
								int tmp26;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(529)
								if ((tmp25)){
									HX_STACK_LINE(529)
									tmp26 = (int)255;
								}
								else{
									HX_STACK_LINE(529)
									bool tmp27 = (Value < (int)0);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(529)
									if ((tmp27)){
										HX_STACK_LINE(529)
										tmp26 = (int)0;
									}
									else{
										HX_STACK_LINE(529)
										tmp26 = Value;
									}
								}
								HX_STACK_LINE(529)
								int tmp27 = (int(tmp26) << int((int)16));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(529)
								hx::OrEq(this1,tmp27);
								HX_STACK_LINE(529)
								Value;
							}
							HX_STACK_LINE(529)
							mid;
						}
						HX_STACK_LINE(529)
						{
							HX_STACK_LINE(529)
							{
								HX_STACK_LINE(529)
								Float tmp23 = (Chroma * (int)255);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(529)
								int tmp24 = ::Math_obj::round(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(529)
								int Value = tmp24;		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(529)
								hx::AndEq(this1,(int)-65281);
								HX_STACK_LINE(529)
								bool tmp25 = (Value > (int)255);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(529)
								int tmp26;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(529)
								if ((tmp25)){
									HX_STACK_LINE(529)
									tmp26 = (int)255;
								}
								else{
									HX_STACK_LINE(529)
									bool tmp27 = (Value < (int)0);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(529)
									if ((tmp27)){
										HX_STACK_LINE(529)
										tmp26 = (int)0;
									}
									else{
										HX_STACK_LINE(529)
										tmp26 = Value;
									}
								}
								HX_STACK_LINE(529)
								int tmp27 = (int(tmp26) << int((int)8));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(529)
								hx::OrEq(this1,tmp27);
								HX_STACK_LINE(529)
								Value;
							}
							HX_STACK_LINE(529)
							Chroma;
						}
						HX_STACK_LINE(529)
						{
							HX_STACK_LINE(529)
							{
								HX_STACK_LINE(529)
								Float tmp23 = (match * (int)255);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(529)
								int tmp24 = ::Math_obj::round(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(529)
								int Value = tmp24;		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(529)
								hx::AndEq(this1,(int)-256);
								HX_STACK_LINE(529)
								bool tmp25 = (Value > (int)255);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(529)
								int tmp26;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(529)
								if ((tmp25)){
									HX_STACK_LINE(529)
									tmp26 = (int)255;
								}
								else{
									HX_STACK_LINE(529)
									bool tmp27 = (Value < (int)0);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(529)
									if ((tmp27)){
										HX_STACK_LINE(529)
										tmp26 = (int)0;
									}
									else{
										HX_STACK_LINE(529)
										tmp26 = Value;
									}
								}
								HX_STACK_LINE(529)
								hx::OrEq(this1,tmp26);
								HX_STACK_LINE(529)
								Value;
							}
							HX_STACK_LINE(529)
							match;
						}
						HX_STACK_LINE(529)
						{
							HX_STACK_LINE(529)
							{
								HX_STACK_LINE(529)
								Float tmp23 = (Alpha * (int)255);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(529)
								int tmp24 = ::Math_obj::round(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(529)
								int Value = tmp24;		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(529)
								hx::AndEq(this1,(int)16777215);
								HX_STACK_LINE(529)
								bool tmp25 = (Value > (int)255);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(529)
								int tmp26;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(529)
								if ((tmp25)){
									HX_STACK_LINE(529)
									tmp26 = (int)255;
								}
								else{
									HX_STACK_LINE(529)
									bool tmp27 = (Value < (int)0);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(529)
									if ((tmp27)){
										HX_STACK_LINE(529)
										tmp26 = (int)0;
									}
									else{
										HX_STACK_LINE(529)
										tmp26 = Value;
									}
								}
								HX_STACK_LINE(529)
								int tmp27 = (int(tmp26) << int((int)24));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(529)
								hx::OrEq(this1,tmp27);
								HX_STACK_LINE(529)
								Value;
							}
							HX_STACK_LINE(529)
							Alpha;
						}
						HX_STACK_LINE(529)
						tmp22 = this1;
					}
					HX_STACK_LINE(529)
					tmp22;
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(529)
					int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(529)
					{
						HX_STACK_LINE(529)
						{
							HX_STACK_LINE(529)
							{
								HX_STACK_LINE(529)
								Float tmp23 = (match * (int)255);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(529)
								int tmp24 = ::Math_obj::round(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(529)
								int Value = tmp24;		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(529)
								hx::AndEq(this1,(int)-16711681);
								HX_STACK_LINE(529)
								bool tmp25 = (Value > (int)255);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(529)
								int tmp26;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(529)
								if ((tmp25)){
									HX_STACK_LINE(529)
									tmp26 = (int)255;
								}
								else{
									HX_STACK_LINE(529)
									bool tmp27 = (Value < (int)0);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(529)
									if ((tmp27)){
										HX_STACK_LINE(529)
										tmp26 = (int)0;
									}
									else{
										HX_STACK_LINE(529)
										tmp26 = Value;
									}
								}
								HX_STACK_LINE(529)
								int tmp27 = (int(tmp26) << int((int)16));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(529)
								hx::OrEq(this1,tmp27);
								HX_STACK_LINE(529)
								Value;
							}
							HX_STACK_LINE(529)
							match;
						}
						HX_STACK_LINE(529)
						{
							HX_STACK_LINE(529)
							{
								HX_STACK_LINE(529)
								Float tmp23 = (Chroma * (int)255);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(529)
								int tmp24 = ::Math_obj::round(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(529)
								int Value = tmp24;		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(529)
								hx::AndEq(this1,(int)-65281);
								HX_STACK_LINE(529)
								bool tmp25 = (Value > (int)255);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(529)
								int tmp26;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(529)
								if ((tmp25)){
									HX_STACK_LINE(529)
									tmp26 = (int)255;
								}
								else{
									HX_STACK_LINE(529)
									bool tmp27 = (Value < (int)0);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(529)
									if ((tmp27)){
										HX_STACK_LINE(529)
										tmp26 = (int)0;
									}
									else{
										HX_STACK_LINE(529)
										tmp26 = Value;
									}
								}
								HX_STACK_LINE(529)
								int tmp27 = (int(tmp26) << int((int)8));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(529)
								hx::OrEq(this1,tmp27);
								HX_STACK_LINE(529)
								Value;
							}
							HX_STACK_LINE(529)
							Chroma;
						}
						HX_STACK_LINE(529)
						{
							HX_STACK_LINE(529)
							{
								HX_STACK_LINE(529)
								Float tmp23 = (mid * (int)255);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(529)
								int tmp24 = ::Math_obj::round(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(529)
								int Value = tmp24;		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(529)
								hx::AndEq(this1,(int)-256);
								HX_STACK_LINE(529)
								bool tmp25 = (Value > (int)255);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(529)
								int tmp26;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(529)
								if ((tmp25)){
									HX_STACK_LINE(529)
									tmp26 = (int)255;
								}
								else{
									HX_STACK_LINE(529)
									bool tmp27 = (Value < (int)0);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(529)
									if ((tmp27)){
										HX_STACK_LINE(529)
										tmp26 = (int)0;
									}
									else{
										HX_STACK_LINE(529)
										tmp26 = Value;
									}
								}
								HX_STACK_LINE(529)
								hx::OrEq(this1,tmp26);
								HX_STACK_LINE(529)
								Value;
							}
							HX_STACK_LINE(529)
							mid;
						}
						HX_STACK_LINE(529)
						{
							HX_STACK_LINE(529)
							{
								HX_STACK_LINE(529)
								Float tmp23 = (Alpha * (int)255);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(529)
								int tmp24 = ::Math_obj::round(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(529)
								int Value = tmp24;		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(529)
								hx::AndEq(this1,(int)16777215);
								HX_STACK_LINE(529)
								bool tmp25 = (Value > (int)255);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(529)
								int tmp26;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(529)
								if ((tmp25)){
									HX_STACK_LINE(529)
									tmp26 = (int)255;
								}
								else{
									HX_STACK_LINE(529)
									bool tmp27 = (Value < (int)0);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(529)
									if ((tmp27)){
										HX_STACK_LINE(529)
										tmp26 = (int)0;
									}
									else{
										HX_STACK_LINE(529)
										tmp26 = Value;
									}
								}
								HX_STACK_LINE(529)
								int tmp27 = (int(tmp26) << int((int)24));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(529)
								hx::OrEq(this1,tmp27);
								HX_STACK_LINE(529)
								Value;
							}
							HX_STACK_LINE(529)
							Alpha;
						}
						HX_STACK_LINE(529)
						tmp22 = this1;
					}
					HX_STACK_LINE(529)
					tmp22;
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(529)
					int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(529)
					{
						HX_STACK_LINE(529)
						{
							HX_STACK_LINE(529)
							{
								HX_STACK_LINE(529)
								Float tmp23 = (match * (int)255);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(529)
								int tmp24 = ::Math_obj::round(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(529)
								int Value = tmp24;		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(529)
								hx::AndEq(this1,(int)-16711681);
								HX_STACK_LINE(529)
								bool tmp25 = (Value > (int)255);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(529)
								int tmp26;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(529)
								if ((tmp25)){
									HX_STACK_LINE(529)
									tmp26 = (int)255;
								}
								else{
									HX_STACK_LINE(529)
									bool tmp27 = (Value < (int)0);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(529)
									if ((tmp27)){
										HX_STACK_LINE(529)
										tmp26 = (int)0;
									}
									else{
										HX_STACK_LINE(529)
										tmp26 = Value;
									}
								}
								HX_STACK_LINE(529)
								int tmp27 = (int(tmp26) << int((int)16));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(529)
								hx::OrEq(this1,tmp27);
								HX_STACK_LINE(529)
								Value;
							}
							HX_STACK_LINE(529)
							match;
						}
						HX_STACK_LINE(529)
						{
							HX_STACK_LINE(529)
							{
								HX_STACK_LINE(529)
								Float tmp23 = (mid * (int)255);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(529)
								int tmp24 = ::Math_obj::round(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(529)
								int Value = tmp24;		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(529)
								hx::AndEq(this1,(int)-65281);
								HX_STACK_LINE(529)
								bool tmp25 = (Value > (int)255);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(529)
								int tmp26;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(529)
								if ((tmp25)){
									HX_STACK_LINE(529)
									tmp26 = (int)255;
								}
								else{
									HX_STACK_LINE(529)
									bool tmp27 = (Value < (int)0);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(529)
									if ((tmp27)){
										HX_STACK_LINE(529)
										tmp26 = (int)0;
									}
									else{
										HX_STACK_LINE(529)
										tmp26 = Value;
									}
								}
								HX_STACK_LINE(529)
								int tmp27 = (int(tmp26) << int((int)8));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(529)
								hx::OrEq(this1,tmp27);
								HX_STACK_LINE(529)
								Value;
							}
							HX_STACK_LINE(529)
							mid;
						}
						HX_STACK_LINE(529)
						{
							HX_STACK_LINE(529)
							{
								HX_STACK_LINE(529)
								Float tmp23 = (Chroma * (int)255);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(529)
								int tmp24 = ::Math_obj::round(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(529)
								int Value = tmp24;		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(529)
								hx::AndEq(this1,(int)-256);
								HX_STACK_LINE(529)
								bool tmp25 = (Value > (int)255);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(529)
								int tmp26;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(529)
								if ((tmp25)){
									HX_STACK_LINE(529)
									tmp26 = (int)255;
								}
								else{
									HX_STACK_LINE(529)
									bool tmp27 = (Value < (int)0);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(529)
									if ((tmp27)){
										HX_STACK_LINE(529)
										tmp26 = (int)0;
									}
									else{
										HX_STACK_LINE(529)
										tmp26 = Value;
									}
								}
								HX_STACK_LINE(529)
								hx::OrEq(this1,tmp26);
								HX_STACK_LINE(529)
								Value;
							}
							HX_STACK_LINE(529)
							Chroma;
						}
						HX_STACK_LINE(529)
						{
							HX_STACK_LINE(529)
							{
								HX_STACK_LINE(529)
								Float tmp23 = (Alpha * (int)255);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(529)
								int tmp24 = ::Math_obj::round(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(529)
								int Value = tmp24;		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(529)
								hx::AndEq(this1,(int)16777215);
								HX_STACK_LINE(529)
								bool tmp25 = (Value > (int)255);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(529)
								int tmp26;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(529)
								if ((tmp25)){
									HX_STACK_LINE(529)
									tmp26 = (int)255;
								}
								else{
									HX_STACK_LINE(529)
									bool tmp27 = (Value < (int)0);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(529)
									if ((tmp27)){
										HX_STACK_LINE(529)
										tmp26 = (int)0;
									}
									else{
										HX_STACK_LINE(529)
										tmp26 = Value;
									}
								}
								HX_STACK_LINE(529)
								int tmp27 = (int(tmp26) << int((int)24));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(529)
								hx::OrEq(this1,tmp27);
								HX_STACK_LINE(529)
								Value;
							}
							HX_STACK_LINE(529)
							Alpha;
						}
						HX_STACK_LINE(529)
						tmp22 = this1;
					}
					HX_STACK_LINE(529)
					tmp22;
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(529)
					int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(529)
					{
						HX_STACK_LINE(529)
						{
							HX_STACK_LINE(529)
							{
								HX_STACK_LINE(529)
								Float tmp23 = (mid * (int)255);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(529)
								int tmp24 = ::Math_obj::round(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(529)
								int Value = tmp24;		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(529)
								hx::AndEq(this1,(int)-16711681);
								HX_STACK_LINE(529)
								bool tmp25 = (Value > (int)255);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(529)
								int tmp26;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(529)
								if ((tmp25)){
									HX_STACK_LINE(529)
									tmp26 = (int)255;
								}
								else{
									HX_STACK_LINE(529)
									bool tmp27 = (Value < (int)0);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(529)
									if ((tmp27)){
										HX_STACK_LINE(529)
										tmp26 = (int)0;
									}
									else{
										HX_STACK_LINE(529)
										tmp26 = Value;
									}
								}
								HX_STACK_LINE(529)
								int tmp27 = (int(tmp26) << int((int)16));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(529)
								hx::OrEq(this1,tmp27);
								HX_STACK_LINE(529)
								Value;
							}
							HX_STACK_LINE(529)
							mid;
						}
						HX_STACK_LINE(529)
						{
							HX_STACK_LINE(529)
							{
								HX_STACK_LINE(529)
								Float tmp23 = (match * (int)255);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(529)
								int tmp24 = ::Math_obj::round(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(529)
								int Value = tmp24;		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(529)
								hx::AndEq(this1,(int)-65281);
								HX_STACK_LINE(529)
								bool tmp25 = (Value > (int)255);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(529)
								int tmp26;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(529)
								if ((tmp25)){
									HX_STACK_LINE(529)
									tmp26 = (int)255;
								}
								else{
									HX_STACK_LINE(529)
									bool tmp27 = (Value < (int)0);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(529)
									if ((tmp27)){
										HX_STACK_LINE(529)
										tmp26 = (int)0;
									}
									else{
										HX_STACK_LINE(529)
										tmp26 = Value;
									}
								}
								HX_STACK_LINE(529)
								int tmp27 = (int(tmp26) << int((int)8));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(529)
								hx::OrEq(this1,tmp27);
								HX_STACK_LINE(529)
								Value;
							}
							HX_STACK_LINE(529)
							match;
						}
						HX_STACK_LINE(529)
						{
							HX_STACK_LINE(529)
							{
								HX_STACK_LINE(529)
								Float tmp23 = (Chroma * (int)255);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(529)
								int tmp24 = ::Math_obj::round(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(529)
								int Value = tmp24;		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(529)
								hx::AndEq(this1,(int)-256);
								HX_STACK_LINE(529)
								bool tmp25 = (Value > (int)255);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(529)
								int tmp26;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(529)
								if ((tmp25)){
									HX_STACK_LINE(529)
									tmp26 = (int)255;
								}
								else{
									HX_STACK_LINE(529)
									bool tmp27 = (Value < (int)0);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(529)
									if ((tmp27)){
										HX_STACK_LINE(529)
										tmp26 = (int)0;
									}
									else{
										HX_STACK_LINE(529)
										tmp26 = Value;
									}
								}
								HX_STACK_LINE(529)
								hx::OrEq(this1,tmp26);
								HX_STACK_LINE(529)
								Value;
							}
							HX_STACK_LINE(529)
							Chroma;
						}
						HX_STACK_LINE(529)
						{
							HX_STACK_LINE(529)
							{
								HX_STACK_LINE(529)
								Float tmp23 = (Alpha * (int)255);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(529)
								int tmp24 = ::Math_obj::round(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(529)
								int Value = tmp24;		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(529)
								hx::AndEq(this1,(int)16777215);
								HX_STACK_LINE(529)
								bool tmp25 = (Value > (int)255);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(529)
								int tmp26;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(529)
								if ((tmp25)){
									HX_STACK_LINE(529)
									tmp26 = (int)255;
								}
								else{
									HX_STACK_LINE(529)
									bool tmp27 = (Value < (int)0);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(529)
									if ((tmp27)){
										HX_STACK_LINE(529)
										tmp26 = (int)0;
									}
									else{
										HX_STACK_LINE(529)
										tmp26 = Value;
									}
								}
								HX_STACK_LINE(529)
								int tmp27 = (int(tmp26) << int((int)24));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(529)
								hx::OrEq(this1,tmp27);
								HX_STACK_LINE(529)
								Value;
							}
							HX_STACK_LINE(529)
							Alpha;
						}
						HX_STACK_LINE(529)
						tmp22 = this1;
					}
					HX_STACK_LINE(529)
					tmp22;
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(529)
					int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(529)
					{
						HX_STACK_LINE(529)
						{
							HX_STACK_LINE(529)
							{
								HX_STACK_LINE(529)
								Float tmp23 = (Chroma * (int)255);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(529)
								int tmp24 = ::Math_obj::round(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(529)
								int Value = tmp24;		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(529)
								hx::AndEq(this1,(int)-16711681);
								HX_STACK_LINE(529)
								bool tmp25 = (Value > (int)255);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(529)
								int tmp26;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(529)
								if ((tmp25)){
									HX_STACK_LINE(529)
									tmp26 = (int)255;
								}
								else{
									HX_STACK_LINE(529)
									bool tmp27 = (Value < (int)0);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(529)
									if ((tmp27)){
										HX_STACK_LINE(529)
										tmp26 = (int)0;
									}
									else{
										HX_STACK_LINE(529)
										tmp26 = Value;
									}
								}
								HX_STACK_LINE(529)
								int tmp27 = (int(tmp26) << int((int)16));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(529)
								hx::OrEq(this1,tmp27);
								HX_STACK_LINE(529)
								Value;
							}
							HX_STACK_LINE(529)
							Chroma;
						}
						HX_STACK_LINE(529)
						{
							HX_STACK_LINE(529)
							{
								HX_STACK_LINE(529)
								Float tmp23 = (match * (int)255);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(529)
								int tmp24 = ::Math_obj::round(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(529)
								int Value = tmp24;		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(529)
								hx::AndEq(this1,(int)-65281);
								HX_STACK_LINE(529)
								bool tmp25 = (Value > (int)255);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(529)
								int tmp26;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(529)
								if ((tmp25)){
									HX_STACK_LINE(529)
									tmp26 = (int)255;
								}
								else{
									HX_STACK_LINE(529)
									bool tmp27 = (Value < (int)0);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(529)
									if ((tmp27)){
										HX_STACK_LINE(529)
										tmp26 = (int)0;
									}
									else{
										HX_STACK_LINE(529)
										tmp26 = Value;
									}
								}
								HX_STACK_LINE(529)
								int tmp27 = (int(tmp26) << int((int)8));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(529)
								hx::OrEq(this1,tmp27);
								HX_STACK_LINE(529)
								Value;
							}
							HX_STACK_LINE(529)
							match;
						}
						HX_STACK_LINE(529)
						{
							HX_STACK_LINE(529)
							{
								HX_STACK_LINE(529)
								Float tmp23 = (mid * (int)255);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(529)
								int tmp24 = ::Math_obj::round(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(529)
								int Value = tmp24;		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(529)
								hx::AndEq(this1,(int)-256);
								HX_STACK_LINE(529)
								bool tmp25 = (Value > (int)255);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(529)
								int tmp26;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(529)
								if ((tmp25)){
									HX_STACK_LINE(529)
									tmp26 = (int)255;
								}
								else{
									HX_STACK_LINE(529)
									bool tmp27 = (Value < (int)0);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(529)
									if ((tmp27)){
										HX_STACK_LINE(529)
										tmp26 = (int)0;
									}
									else{
										HX_STACK_LINE(529)
										tmp26 = Value;
									}
								}
								HX_STACK_LINE(529)
								hx::OrEq(this1,tmp26);
								HX_STACK_LINE(529)
								Value;
							}
							HX_STACK_LINE(529)
							mid;
						}
						HX_STACK_LINE(529)
						{
							HX_STACK_LINE(529)
							{
								HX_STACK_LINE(529)
								Float tmp23 = (Alpha * (int)255);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(529)
								int tmp24 = ::Math_obj::round(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(529)
								int Value = tmp24;		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(529)
								hx::AndEq(this1,(int)16777215);
								HX_STACK_LINE(529)
								bool tmp25 = (Value > (int)255);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(529)
								int tmp26;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(529)
								if ((tmp25)){
									HX_STACK_LINE(529)
									tmp26 = (int)255;
								}
								else{
									HX_STACK_LINE(529)
									bool tmp27 = (Value < (int)0);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(529)
									if ((tmp27)){
										HX_STACK_LINE(529)
										tmp26 = (int)0;
									}
									else{
										HX_STACK_LINE(529)
										tmp26 = Value;
									}
								}
								HX_STACK_LINE(529)
								int tmp27 = (int(tmp26) << int((int)24));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(529)
								hx::OrEq(this1,tmp27);
								HX_STACK_LINE(529)
								Value;
							}
							HX_STACK_LINE(529)
							Alpha;
						}
						HX_STACK_LINE(529)
						tmp22 = this1;
					}
					HX_STACK_LINE(529)
					tmp22;
				}
				;break;
			}
		}
		HX_STACK_LINE(529)
		tmp9 = this1;
	}
	HX_STACK_LINE(529)
	return tmp9;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxColor_Impl__obj,setHSL,return )

int FlxColor_Impl__obj::setHSChromaMatch( int this1,Float Hue,Float Saturation,Float Chroma,Float Match,Float Alpha){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","setHSChromaMatch",0x8f5af4c7,"flixel.util._FlxColor.FlxColor_Impl_.setHSChromaMatch","flixel/util/FlxColor.hx",536,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(Hue,"Hue")
	HX_STACK_ARG(Saturation,"Saturation")
	HX_STACK_ARG(Chroma,"Chroma")
	HX_STACK_ARG(Match,"Match")
	HX_STACK_ARG(Alpha,"Alpha")
	HX_STACK_LINE(537)
	hx::ModEq(Hue,(int)360);
	HX_STACK_LINE(538)
	Float tmp = (Float(Hue) / Float((int)60));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(538)
	Float hueD = tmp;		HX_STACK_VAR(hueD,"hueD");
	HX_STACK_LINE(539)
	Float tmp1 = Chroma;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(539)
	Float tmp2 = hx::Mod(hueD,(int)2);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(539)
	Float tmp3 = (tmp2 - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(539)
	Float tmp4 = ::Math_obj::abs(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(539)
	Float tmp5 = ((int)1 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(539)
	Float tmp6 = (tmp1 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(539)
	Float tmp7 = Match;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(539)
	Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(539)
	Float mid = tmp8;		HX_STACK_VAR(mid,"mid");
	HX_STACK_LINE(540)
	hx::AddEq(Chroma,Match);
	HX_STACK_LINE(542)
	{
		HX_STACK_LINE(542)
		Float tmp9 = hueD;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(542)
		int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(542)
		int _g = tmp10;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(542)
		int tmp11 = _g;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(542)
		switch( (int)(tmp11)){
			case (int)0: {
				HX_STACK_LINE(544)
				int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(544)
				{
					HX_STACK_LINE(544)
					{
						HX_STACK_LINE(544)
						{
							HX_STACK_LINE(544)
							Float tmp13 = (Chroma * (int)255);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(544)
							int tmp14 = ::Math_obj::round(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(544)
							int Value = tmp14;		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(544)
							hx::AndEq(this1,(int)-16711681);
							HX_STACK_LINE(544)
							bool tmp15 = (Value > (int)255);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(544)
							int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(544)
							if ((tmp15)){
								HX_STACK_LINE(544)
								tmp16 = (int)255;
							}
							else{
								HX_STACK_LINE(544)
								bool tmp17 = (Value < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(544)
								if ((tmp17)){
									HX_STACK_LINE(544)
									tmp16 = (int)0;
								}
								else{
									HX_STACK_LINE(544)
									tmp16 = Value;
								}
							}
							HX_STACK_LINE(544)
							int tmp17 = (int(tmp16) << int((int)16));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(544)
							hx::OrEq(this1,tmp17);
							HX_STACK_LINE(544)
							Value;
						}
						HX_STACK_LINE(544)
						Chroma;
					}
					HX_STACK_LINE(544)
					{
						HX_STACK_LINE(544)
						{
							HX_STACK_LINE(544)
							Float tmp13 = (mid * (int)255);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(544)
							int tmp14 = ::Math_obj::round(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(544)
							int Value = tmp14;		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(544)
							hx::AndEq(this1,(int)-65281);
							HX_STACK_LINE(544)
							bool tmp15 = (Value > (int)255);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(544)
							int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(544)
							if ((tmp15)){
								HX_STACK_LINE(544)
								tmp16 = (int)255;
							}
							else{
								HX_STACK_LINE(544)
								bool tmp17 = (Value < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(544)
								if ((tmp17)){
									HX_STACK_LINE(544)
									tmp16 = (int)0;
								}
								else{
									HX_STACK_LINE(544)
									tmp16 = Value;
								}
							}
							HX_STACK_LINE(544)
							int tmp17 = (int(tmp16) << int((int)8));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(544)
							hx::OrEq(this1,tmp17);
							HX_STACK_LINE(544)
							Value;
						}
						HX_STACK_LINE(544)
						mid;
					}
					HX_STACK_LINE(544)
					{
						HX_STACK_LINE(544)
						{
							HX_STACK_LINE(544)
							Float tmp13 = (Match * (int)255);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(544)
							int tmp14 = ::Math_obj::round(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(544)
							int Value = tmp14;		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(544)
							hx::AndEq(this1,(int)-256);
							HX_STACK_LINE(544)
							bool tmp15 = (Value > (int)255);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(544)
							int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(544)
							if ((tmp15)){
								HX_STACK_LINE(544)
								tmp16 = (int)255;
							}
							else{
								HX_STACK_LINE(544)
								bool tmp17 = (Value < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(544)
								if ((tmp17)){
									HX_STACK_LINE(544)
									tmp16 = (int)0;
								}
								else{
									HX_STACK_LINE(544)
									tmp16 = Value;
								}
							}
							HX_STACK_LINE(544)
							hx::OrEq(this1,tmp16);
							HX_STACK_LINE(544)
							Value;
						}
						HX_STACK_LINE(544)
						Match;
					}
					HX_STACK_LINE(544)
					{
						HX_STACK_LINE(544)
						{
							HX_STACK_LINE(544)
							Float tmp13 = (Alpha * (int)255);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(544)
							int tmp14 = ::Math_obj::round(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(544)
							int Value = tmp14;		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(544)
							hx::AndEq(this1,(int)16777215);
							HX_STACK_LINE(544)
							bool tmp15 = (Value > (int)255);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(544)
							int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(544)
							if ((tmp15)){
								HX_STACK_LINE(544)
								tmp16 = (int)255;
							}
							else{
								HX_STACK_LINE(544)
								bool tmp17 = (Value < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(544)
								if ((tmp17)){
									HX_STACK_LINE(544)
									tmp16 = (int)0;
								}
								else{
									HX_STACK_LINE(544)
									tmp16 = Value;
								}
							}
							HX_STACK_LINE(544)
							int tmp17 = (int(tmp16) << int((int)24));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(544)
							hx::OrEq(this1,tmp17);
							HX_STACK_LINE(544)
							Value;
						}
						HX_STACK_LINE(544)
						Alpha;
					}
					HX_STACK_LINE(544)
					tmp12 = this1;
				}
				HX_STACK_LINE(544)
				tmp12;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(545)
				int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(545)
				{
					HX_STACK_LINE(545)
					{
						HX_STACK_LINE(545)
						{
							HX_STACK_LINE(545)
							Float tmp13 = (mid * (int)255);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(545)
							int tmp14 = ::Math_obj::round(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(545)
							int Value = tmp14;		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(545)
							hx::AndEq(this1,(int)-16711681);
							HX_STACK_LINE(545)
							bool tmp15 = (Value > (int)255);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(545)
							int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(545)
							if ((tmp15)){
								HX_STACK_LINE(545)
								tmp16 = (int)255;
							}
							else{
								HX_STACK_LINE(545)
								bool tmp17 = (Value < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(545)
								if ((tmp17)){
									HX_STACK_LINE(545)
									tmp16 = (int)0;
								}
								else{
									HX_STACK_LINE(545)
									tmp16 = Value;
								}
							}
							HX_STACK_LINE(545)
							int tmp17 = (int(tmp16) << int((int)16));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(545)
							hx::OrEq(this1,tmp17);
							HX_STACK_LINE(545)
							Value;
						}
						HX_STACK_LINE(545)
						mid;
					}
					HX_STACK_LINE(545)
					{
						HX_STACK_LINE(545)
						{
							HX_STACK_LINE(545)
							Float tmp13 = (Chroma * (int)255);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(545)
							int tmp14 = ::Math_obj::round(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(545)
							int Value = tmp14;		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(545)
							hx::AndEq(this1,(int)-65281);
							HX_STACK_LINE(545)
							bool tmp15 = (Value > (int)255);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(545)
							int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(545)
							if ((tmp15)){
								HX_STACK_LINE(545)
								tmp16 = (int)255;
							}
							else{
								HX_STACK_LINE(545)
								bool tmp17 = (Value < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(545)
								if ((tmp17)){
									HX_STACK_LINE(545)
									tmp16 = (int)0;
								}
								else{
									HX_STACK_LINE(545)
									tmp16 = Value;
								}
							}
							HX_STACK_LINE(545)
							int tmp17 = (int(tmp16) << int((int)8));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(545)
							hx::OrEq(this1,tmp17);
							HX_STACK_LINE(545)
							Value;
						}
						HX_STACK_LINE(545)
						Chroma;
					}
					HX_STACK_LINE(545)
					{
						HX_STACK_LINE(545)
						{
							HX_STACK_LINE(545)
							Float tmp13 = (Match * (int)255);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(545)
							int tmp14 = ::Math_obj::round(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(545)
							int Value = tmp14;		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(545)
							hx::AndEq(this1,(int)-256);
							HX_STACK_LINE(545)
							bool tmp15 = (Value > (int)255);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(545)
							int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(545)
							if ((tmp15)){
								HX_STACK_LINE(545)
								tmp16 = (int)255;
							}
							else{
								HX_STACK_LINE(545)
								bool tmp17 = (Value < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(545)
								if ((tmp17)){
									HX_STACK_LINE(545)
									tmp16 = (int)0;
								}
								else{
									HX_STACK_LINE(545)
									tmp16 = Value;
								}
							}
							HX_STACK_LINE(545)
							hx::OrEq(this1,tmp16);
							HX_STACK_LINE(545)
							Value;
						}
						HX_STACK_LINE(545)
						Match;
					}
					HX_STACK_LINE(545)
					{
						HX_STACK_LINE(545)
						{
							HX_STACK_LINE(545)
							Float tmp13 = (Alpha * (int)255);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(545)
							int tmp14 = ::Math_obj::round(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(545)
							int Value = tmp14;		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(545)
							hx::AndEq(this1,(int)16777215);
							HX_STACK_LINE(545)
							bool tmp15 = (Value > (int)255);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(545)
							int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(545)
							if ((tmp15)){
								HX_STACK_LINE(545)
								tmp16 = (int)255;
							}
							else{
								HX_STACK_LINE(545)
								bool tmp17 = (Value < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(545)
								if ((tmp17)){
									HX_STACK_LINE(545)
									tmp16 = (int)0;
								}
								else{
									HX_STACK_LINE(545)
									tmp16 = Value;
								}
							}
							HX_STACK_LINE(545)
							int tmp17 = (int(tmp16) << int((int)24));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(545)
							hx::OrEq(this1,tmp17);
							HX_STACK_LINE(545)
							Value;
						}
						HX_STACK_LINE(545)
						Alpha;
					}
					HX_STACK_LINE(545)
					tmp12 = this1;
				}
				HX_STACK_LINE(545)
				tmp12;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(546)
				int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(546)
				{
					HX_STACK_LINE(546)
					{
						HX_STACK_LINE(546)
						{
							HX_STACK_LINE(546)
							Float tmp13 = (Match * (int)255);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(546)
							int tmp14 = ::Math_obj::round(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(546)
							int Value = tmp14;		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(546)
							hx::AndEq(this1,(int)-16711681);
							HX_STACK_LINE(546)
							bool tmp15 = (Value > (int)255);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(546)
							int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(546)
							if ((tmp15)){
								HX_STACK_LINE(546)
								tmp16 = (int)255;
							}
							else{
								HX_STACK_LINE(546)
								bool tmp17 = (Value < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(546)
								if ((tmp17)){
									HX_STACK_LINE(546)
									tmp16 = (int)0;
								}
								else{
									HX_STACK_LINE(546)
									tmp16 = Value;
								}
							}
							HX_STACK_LINE(546)
							int tmp17 = (int(tmp16) << int((int)16));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(546)
							hx::OrEq(this1,tmp17);
							HX_STACK_LINE(546)
							Value;
						}
						HX_STACK_LINE(546)
						Match;
					}
					HX_STACK_LINE(546)
					{
						HX_STACK_LINE(546)
						{
							HX_STACK_LINE(546)
							Float tmp13 = (Chroma * (int)255);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(546)
							int tmp14 = ::Math_obj::round(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(546)
							int Value = tmp14;		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(546)
							hx::AndEq(this1,(int)-65281);
							HX_STACK_LINE(546)
							bool tmp15 = (Value > (int)255);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(546)
							int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(546)
							if ((tmp15)){
								HX_STACK_LINE(546)
								tmp16 = (int)255;
							}
							else{
								HX_STACK_LINE(546)
								bool tmp17 = (Value < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(546)
								if ((tmp17)){
									HX_STACK_LINE(546)
									tmp16 = (int)0;
								}
								else{
									HX_STACK_LINE(546)
									tmp16 = Value;
								}
							}
							HX_STACK_LINE(546)
							int tmp17 = (int(tmp16) << int((int)8));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(546)
							hx::OrEq(this1,tmp17);
							HX_STACK_LINE(546)
							Value;
						}
						HX_STACK_LINE(546)
						Chroma;
					}
					HX_STACK_LINE(546)
					{
						HX_STACK_LINE(546)
						{
							HX_STACK_LINE(546)
							Float tmp13 = (mid * (int)255);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(546)
							int tmp14 = ::Math_obj::round(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(546)
							int Value = tmp14;		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(546)
							hx::AndEq(this1,(int)-256);
							HX_STACK_LINE(546)
							bool tmp15 = (Value > (int)255);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(546)
							int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(546)
							if ((tmp15)){
								HX_STACK_LINE(546)
								tmp16 = (int)255;
							}
							else{
								HX_STACK_LINE(546)
								bool tmp17 = (Value < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(546)
								if ((tmp17)){
									HX_STACK_LINE(546)
									tmp16 = (int)0;
								}
								else{
									HX_STACK_LINE(546)
									tmp16 = Value;
								}
							}
							HX_STACK_LINE(546)
							hx::OrEq(this1,tmp16);
							HX_STACK_LINE(546)
							Value;
						}
						HX_STACK_LINE(546)
						mid;
					}
					HX_STACK_LINE(546)
					{
						HX_STACK_LINE(546)
						{
							HX_STACK_LINE(546)
							Float tmp13 = (Alpha * (int)255);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(546)
							int tmp14 = ::Math_obj::round(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(546)
							int Value = tmp14;		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(546)
							hx::AndEq(this1,(int)16777215);
							HX_STACK_LINE(546)
							bool tmp15 = (Value > (int)255);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(546)
							int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(546)
							if ((tmp15)){
								HX_STACK_LINE(546)
								tmp16 = (int)255;
							}
							else{
								HX_STACK_LINE(546)
								bool tmp17 = (Value < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(546)
								if ((tmp17)){
									HX_STACK_LINE(546)
									tmp16 = (int)0;
								}
								else{
									HX_STACK_LINE(546)
									tmp16 = Value;
								}
							}
							HX_STACK_LINE(546)
							int tmp17 = (int(tmp16) << int((int)24));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(546)
							hx::OrEq(this1,tmp17);
							HX_STACK_LINE(546)
							Value;
						}
						HX_STACK_LINE(546)
						Alpha;
					}
					HX_STACK_LINE(546)
					tmp12 = this1;
				}
				HX_STACK_LINE(546)
				tmp12;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(547)
				int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(547)
				{
					HX_STACK_LINE(547)
					{
						HX_STACK_LINE(547)
						{
							HX_STACK_LINE(547)
							Float tmp13 = (Match * (int)255);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(547)
							int tmp14 = ::Math_obj::round(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(547)
							int Value = tmp14;		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(547)
							hx::AndEq(this1,(int)-16711681);
							HX_STACK_LINE(547)
							bool tmp15 = (Value > (int)255);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(547)
							int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(547)
							if ((tmp15)){
								HX_STACK_LINE(547)
								tmp16 = (int)255;
							}
							else{
								HX_STACK_LINE(547)
								bool tmp17 = (Value < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(547)
								if ((tmp17)){
									HX_STACK_LINE(547)
									tmp16 = (int)0;
								}
								else{
									HX_STACK_LINE(547)
									tmp16 = Value;
								}
							}
							HX_STACK_LINE(547)
							int tmp17 = (int(tmp16) << int((int)16));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(547)
							hx::OrEq(this1,tmp17);
							HX_STACK_LINE(547)
							Value;
						}
						HX_STACK_LINE(547)
						Match;
					}
					HX_STACK_LINE(547)
					{
						HX_STACK_LINE(547)
						{
							HX_STACK_LINE(547)
							Float tmp13 = (mid * (int)255);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(547)
							int tmp14 = ::Math_obj::round(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(547)
							int Value = tmp14;		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(547)
							hx::AndEq(this1,(int)-65281);
							HX_STACK_LINE(547)
							bool tmp15 = (Value > (int)255);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(547)
							int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(547)
							if ((tmp15)){
								HX_STACK_LINE(547)
								tmp16 = (int)255;
							}
							else{
								HX_STACK_LINE(547)
								bool tmp17 = (Value < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(547)
								if ((tmp17)){
									HX_STACK_LINE(547)
									tmp16 = (int)0;
								}
								else{
									HX_STACK_LINE(547)
									tmp16 = Value;
								}
							}
							HX_STACK_LINE(547)
							int tmp17 = (int(tmp16) << int((int)8));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(547)
							hx::OrEq(this1,tmp17);
							HX_STACK_LINE(547)
							Value;
						}
						HX_STACK_LINE(547)
						mid;
					}
					HX_STACK_LINE(547)
					{
						HX_STACK_LINE(547)
						{
							HX_STACK_LINE(547)
							Float tmp13 = (Chroma * (int)255);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(547)
							int tmp14 = ::Math_obj::round(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(547)
							int Value = tmp14;		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(547)
							hx::AndEq(this1,(int)-256);
							HX_STACK_LINE(547)
							bool tmp15 = (Value > (int)255);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(547)
							int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(547)
							if ((tmp15)){
								HX_STACK_LINE(547)
								tmp16 = (int)255;
							}
							else{
								HX_STACK_LINE(547)
								bool tmp17 = (Value < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(547)
								if ((tmp17)){
									HX_STACK_LINE(547)
									tmp16 = (int)0;
								}
								else{
									HX_STACK_LINE(547)
									tmp16 = Value;
								}
							}
							HX_STACK_LINE(547)
							hx::OrEq(this1,tmp16);
							HX_STACK_LINE(547)
							Value;
						}
						HX_STACK_LINE(547)
						Chroma;
					}
					HX_STACK_LINE(547)
					{
						HX_STACK_LINE(547)
						{
							HX_STACK_LINE(547)
							Float tmp13 = (Alpha * (int)255);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(547)
							int tmp14 = ::Math_obj::round(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(547)
							int Value = tmp14;		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(547)
							hx::AndEq(this1,(int)16777215);
							HX_STACK_LINE(547)
							bool tmp15 = (Value > (int)255);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(547)
							int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(547)
							if ((tmp15)){
								HX_STACK_LINE(547)
								tmp16 = (int)255;
							}
							else{
								HX_STACK_LINE(547)
								bool tmp17 = (Value < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(547)
								if ((tmp17)){
									HX_STACK_LINE(547)
									tmp16 = (int)0;
								}
								else{
									HX_STACK_LINE(547)
									tmp16 = Value;
								}
							}
							HX_STACK_LINE(547)
							int tmp17 = (int(tmp16) << int((int)24));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(547)
							hx::OrEq(this1,tmp17);
							HX_STACK_LINE(547)
							Value;
						}
						HX_STACK_LINE(547)
						Alpha;
					}
					HX_STACK_LINE(547)
					tmp12 = this1;
				}
				HX_STACK_LINE(547)
				tmp12;
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(548)
				int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(548)
				{
					HX_STACK_LINE(548)
					{
						HX_STACK_LINE(548)
						{
							HX_STACK_LINE(548)
							Float tmp13 = (mid * (int)255);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(548)
							int tmp14 = ::Math_obj::round(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(548)
							int Value = tmp14;		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(548)
							hx::AndEq(this1,(int)-16711681);
							HX_STACK_LINE(548)
							bool tmp15 = (Value > (int)255);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(548)
							int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(548)
							if ((tmp15)){
								HX_STACK_LINE(548)
								tmp16 = (int)255;
							}
							else{
								HX_STACK_LINE(548)
								bool tmp17 = (Value < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(548)
								if ((tmp17)){
									HX_STACK_LINE(548)
									tmp16 = (int)0;
								}
								else{
									HX_STACK_LINE(548)
									tmp16 = Value;
								}
							}
							HX_STACK_LINE(548)
							int tmp17 = (int(tmp16) << int((int)16));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(548)
							hx::OrEq(this1,tmp17);
							HX_STACK_LINE(548)
							Value;
						}
						HX_STACK_LINE(548)
						mid;
					}
					HX_STACK_LINE(548)
					{
						HX_STACK_LINE(548)
						{
							HX_STACK_LINE(548)
							Float tmp13 = (Match * (int)255);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(548)
							int tmp14 = ::Math_obj::round(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(548)
							int Value = tmp14;		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(548)
							hx::AndEq(this1,(int)-65281);
							HX_STACK_LINE(548)
							bool tmp15 = (Value > (int)255);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(548)
							int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(548)
							if ((tmp15)){
								HX_STACK_LINE(548)
								tmp16 = (int)255;
							}
							else{
								HX_STACK_LINE(548)
								bool tmp17 = (Value < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(548)
								if ((tmp17)){
									HX_STACK_LINE(548)
									tmp16 = (int)0;
								}
								else{
									HX_STACK_LINE(548)
									tmp16 = Value;
								}
							}
							HX_STACK_LINE(548)
							int tmp17 = (int(tmp16) << int((int)8));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(548)
							hx::OrEq(this1,tmp17);
							HX_STACK_LINE(548)
							Value;
						}
						HX_STACK_LINE(548)
						Match;
					}
					HX_STACK_LINE(548)
					{
						HX_STACK_LINE(548)
						{
							HX_STACK_LINE(548)
							Float tmp13 = (Chroma * (int)255);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(548)
							int tmp14 = ::Math_obj::round(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(548)
							int Value = tmp14;		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(548)
							hx::AndEq(this1,(int)-256);
							HX_STACK_LINE(548)
							bool tmp15 = (Value > (int)255);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(548)
							int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(548)
							if ((tmp15)){
								HX_STACK_LINE(548)
								tmp16 = (int)255;
							}
							else{
								HX_STACK_LINE(548)
								bool tmp17 = (Value < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(548)
								if ((tmp17)){
									HX_STACK_LINE(548)
									tmp16 = (int)0;
								}
								else{
									HX_STACK_LINE(548)
									tmp16 = Value;
								}
							}
							HX_STACK_LINE(548)
							hx::OrEq(this1,tmp16);
							HX_STACK_LINE(548)
							Value;
						}
						HX_STACK_LINE(548)
						Chroma;
					}
					HX_STACK_LINE(548)
					{
						HX_STACK_LINE(548)
						{
							HX_STACK_LINE(548)
							Float tmp13 = (Alpha * (int)255);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(548)
							int tmp14 = ::Math_obj::round(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(548)
							int Value = tmp14;		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(548)
							hx::AndEq(this1,(int)16777215);
							HX_STACK_LINE(548)
							bool tmp15 = (Value > (int)255);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(548)
							int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(548)
							if ((tmp15)){
								HX_STACK_LINE(548)
								tmp16 = (int)255;
							}
							else{
								HX_STACK_LINE(548)
								bool tmp17 = (Value < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(548)
								if ((tmp17)){
									HX_STACK_LINE(548)
									tmp16 = (int)0;
								}
								else{
									HX_STACK_LINE(548)
									tmp16 = Value;
								}
							}
							HX_STACK_LINE(548)
							int tmp17 = (int(tmp16) << int((int)24));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(548)
							hx::OrEq(this1,tmp17);
							HX_STACK_LINE(548)
							Value;
						}
						HX_STACK_LINE(548)
						Alpha;
					}
					HX_STACK_LINE(548)
					tmp12 = this1;
				}
				HX_STACK_LINE(548)
				tmp12;
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(549)
				int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(549)
				{
					HX_STACK_LINE(549)
					{
						HX_STACK_LINE(549)
						{
							HX_STACK_LINE(549)
							Float tmp13 = (Chroma * (int)255);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(549)
							int tmp14 = ::Math_obj::round(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(549)
							int Value = tmp14;		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(549)
							hx::AndEq(this1,(int)-16711681);
							HX_STACK_LINE(549)
							bool tmp15 = (Value > (int)255);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(549)
							int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(549)
							if ((tmp15)){
								HX_STACK_LINE(549)
								tmp16 = (int)255;
							}
							else{
								HX_STACK_LINE(549)
								bool tmp17 = (Value < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(549)
								if ((tmp17)){
									HX_STACK_LINE(549)
									tmp16 = (int)0;
								}
								else{
									HX_STACK_LINE(549)
									tmp16 = Value;
								}
							}
							HX_STACK_LINE(549)
							int tmp17 = (int(tmp16) << int((int)16));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(549)
							hx::OrEq(this1,tmp17);
							HX_STACK_LINE(549)
							Value;
						}
						HX_STACK_LINE(549)
						Chroma;
					}
					HX_STACK_LINE(549)
					{
						HX_STACK_LINE(549)
						{
							HX_STACK_LINE(549)
							Float tmp13 = (Match * (int)255);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(549)
							int tmp14 = ::Math_obj::round(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(549)
							int Value = tmp14;		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(549)
							hx::AndEq(this1,(int)-65281);
							HX_STACK_LINE(549)
							bool tmp15 = (Value > (int)255);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(549)
							int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(549)
							if ((tmp15)){
								HX_STACK_LINE(549)
								tmp16 = (int)255;
							}
							else{
								HX_STACK_LINE(549)
								bool tmp17 = (Value < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(549)
								if ((tmp17)){
									HX_STACK_LINE(549)
									tmp16 = (int)0;
								}
								else{
									HX_STACK_LINE(549)
									tmp16 = Value;
								}
							}
							HX_STACK_LINE(549)
							int tmp17 = (int(tmp16) << int((int)8));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(549)
							hx::OrEq(this1,tmp17);
							HX_STACK_LINE(549)
							Value;
						}
						HX_STACK_LINE(549)
						Match;
					}
					HX_STACK_LINE(549)
					{
						HX_STACK_LINE(549)
						{
							HX_STACK_LINE(549)
							Float tmp13 = (mid * (int)255);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(549)
							int tmp14 = ::Math_obj::round(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(549)
							int Value = tmp14;		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(549)
							hx::AndEq(this1,(int)-256);
							HX_STACK_LINE(549)
							bool tmp15 = (Value > (int)255);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(549)
							int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(549)
							if ((tmp15)){
								HX_STACK_LINE(549)
								tmp16 = (int)255;
							}
							else{
								HX_STACK_LINE(549)
								bool tmp17 = (Value < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(549)
								if ((tmp17)){
									HX_STACK_LINE(549)
									tmp16 = (int)0;
								}
								else{
									HX_STACK_LINE(549)
									tmp16 = Value;
								}
							}
							HX_STACK_LINE(549)
							hx::OrEq(this1,tmp16);
							HX_STACK_LINE(549)
							Value;
						}
						HX_STACK_LINE(549)
						mid;
					}
					HX_STACK_LINE(549)
					{
						HX_STACK_LINE(549)
						{
							HX_STACK_LINE(549)
							Float tmp13 = (Alpha * (int)255);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(549)
							int tmp14 = ::Math_obj::round(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(549)
							int Value = tmp14;		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(549)
							hx::AndEq(this1,(int)16777215);
							HX_STACK_LINE(549)
							bool tmp15 = (Value > (int)255);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(549)
							int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(549)
							if ((tmp15)){
								HX_STACK_LINE(549)
								tmp16 = (int)255;
							}
							else{
								HX_STACK_LINE(549)
								bool tmp17 = (Value < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(549)
								if ((tmp17)){
									HX_STACK_LINE(549)
									tmp16 = (int)0;
								}
								else{
									HX_STACK_LINE(549)
									tmp16 = Value;
								}
							}
							HX_STACK_LINE(549)
							int tmp17 = (int(tmp16) << int((int)24));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(549)
							hx::OrEq(this1,tmp17);
							HX_STACK_LINE(549)
							Value;
						}
						HX_STACK_LINE(549)
						Alpha;
					}
					HX_STACK_LINE(549)
					tmp12 = this1;
				}
				HX_STACK_LINE(549)
				tmp12;
			}
			;break;
		}
	}
	HX_STACK_LINE(552)
	int tmp9 = this1;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(552)
	return tmp9;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxColor_Impl__obj,setHSChromaMatch,return )

int FlxColor_Impl__obj::_new( hx::Null< int >  __o_Value){
int Value = __o_Value.Default(0);
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","_new",0x4f82ece6,"flixel.util._FlxColor.FlxColor_Impl_._new","flixel/util/FlxColor.hx",557,0x9335c333)
	HX_STACK_ARG(Value,"Value")
{
		HX_STACK_LINE(557)
		int tmp = Value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(557)
		return tmp;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,_new,return )

int FlxColor_Impl__obj::getThis( int this1){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","getThis",0xa3c49faf,"flixel.util._FlxColor.FlxColor_Impl_.getThis","flixel/util/FlxColor.hx",561,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(565)
	int tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(565)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,getThis,return )

Void FlxColor_Impl__obj::validate( int this1){
{
		HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","validate",0x3dca4e9b,"flixel.util._FlxColor.FlxColor_Impl_.validate","flixel/util/FlxColor.hx",570,0x9335c333)
		HX_STACK_ARG(this1,"this1")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,validate,(void))

int FlxColor_Impl__obj::get_red( int this1){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","get_red",0xab118b83,"flixel.util._FlxColor.FlxColor_Impl_.get_red","flixel/util/FlxColor.hx",577,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(578)
	int tmp = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(578)
	int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(578)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,get_red,return )

int FlxColor_Impl__obj::get_green( int this1){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","get_green",0x6e5e3175,"flixel.util._FlxColor.FlxColor_Impl_.get_green","flixel/util/FlxColor.hx",582,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(583)
	int tmp = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(583)
	int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(583)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,get_green,return )

int FlxColor_Impl__obj::get_blue( int this1){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","get_blue",0xf9ba7c28,"flixel.util._FlxColor.FlxColor_Impl_.get_blue","flixel/util/FlxColor.hx",587,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(588)
	int tmp = (int(this1) & int((int)255));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(588)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,get_blue,return )

int FlxColor_Impl__obj::get_alpha( int this1){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","get_alpha",0xf607ca10,"flixel.util._FlxColor.FlxColor_Impl_.get_alpha","flixel/util/FlxColor.hx",592,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(593)
	int tmp = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(593)
	int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(593)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,get_alpha,return )

Float FlxColor_Impl__obj::get_redFloat( int this1){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","get_redFloat",0x28fb0f19,"flixel.util._FlxColor.FlxColor_Impl_.get_redFloat","flixel/util/FlxColor.hx",597,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(598)
	int tmp = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(598)
	int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(598)
	Float tmp2 = (Float(tmp1) / Float((int)255));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(598)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,get_redFloat,return )

Float FlxColor_Impl__obj::get_greenFloat( int this1){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","get_greenFloat",0x97159be7,"flixel.util._FlxColor.FlxColor_Impl_.get_greenFloat","flixel/util/FlxColor.hx",602,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(603)
	int tmp = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(603)
	int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(603)
	Float tmp2 = (Float(tmp1) / Float((int)255));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(603)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,get_greenFloat,return )

Float FlxColor_Impl__obj::get_blueFloat( int this1){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","get_blueFloat",0x58cea854,"flixel.util._FlxColor.FlxColor_Impl_.get_blueFloat","flixel/util/FlxColor.hx",607,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(608)
	int tmp = (int(this1) & int((int)255));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(608)
	Float tmp1 = (Float(tmp) / Float((int)255));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(608)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,get_blueFloat,return )

Float FlxColor_Impl__obj::get_alphaFloat( int this1){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","get_alphaFloat",0xe2f5f16c,"flixel.util._FlxColor.FlxColor_Impl_.get_alphaFloat","flixel/util/FlxColor.hx",612,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(613)
	int tmp = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(613)
	int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(613)
	Float tmp2 = (Float(tmp1) / Float((int)255));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(613)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,get_alphaFloat,return )

int FlxColor_Impl__obj::set_red( int this1,int Value){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","set_red",0x9e131c8f,"flixel.util._FlxColor.FlxColor_Impl_.set_red","flixel/util/FlxColor.hx",617,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(619)
	hx::AndEq(this1,(int)-16711681);
	HX_STACK_LINE(620)
	bool tmp = (Value > (int)255);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(620)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(620)
	if ((tmp)){
		HX_STACK_LINE(620)
		tmp1 = (int)255;
	}
	else{
		HX_STACK_LINE(620)
		bool tmp2 = (Value < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(620)
		if ((tmp2)){
			HX_STACK_LINE(620)
			tmp1 = (int)0;
		}
		else{
			HX_STACK_LINE(620)
			tmp1 = Value;
		}
	}
	HX_STACK_LINE(620)
	int tmp2 = (int(tmp1) << int((int)16));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(620)
	hx::OrEq(this1,tmp2);
	HX_STACK_LINE(621)
	int tmp3 = Value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(621)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,set_red,return )

int FlxColor_Impl__obj::set_green( int this1,int Value){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","set_green",0x51af1d81,"flixel.util._FlxColor.FlxColor_Impl_.set_green","flixel/util/FlxColor.hx",625,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(627)
	hx::AndEq(this1,(int)-65281);
	HX_STACK_LINE(628)
	bool tmp = (Value > (int)255);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(628)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(628)
	if ((tmp)){
		HX_STACK_LINE(628)
		tmp1 = (int)255;
	}
	else{
		HX_STACK_LINE(628)
		bool tmp2 = (Value < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(628)
		if ((tmp2)){
			HX_STACK_LINE(628)
			tmp1 = (int)0;
		}
		else{
			HX_STACK_LINE(628)
			tmp1 = Value;
		}
	}
	HX_STACK_LINE(628)
	int tmp2 = (int(tmp1) << int((int)8));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(628)
	hx::OrEq(this1,tmp2);
	HX_STACK_LINE(629)
	int tmp3 = Value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(629)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,set_green,return )

int FlxColor_Impl__obj::set_blue( int this1,int Value){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","set_blue",0xa817d59c,"flixel.util._FlxColor.FlxColor_Impl_.set_blue","flixel/util/FlxColor.hx",633,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(635)
	hx::AndEq(this1,(int)-256);
	HX_STACK_LINE(636)
	bool tmp = (Value > (int)255);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(636)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(636)
	if ((tmp)){
		HX_STACK_LINE(636)
		tmp1 = (int)255;
	}
	else{
		HX_STACK_LINE(636)
		bool tmp2 = (Value < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(636)
		if ((tmp2)){
			HX_STACK_LINE(636)
			tmp1 = (int)0;
		}
		else{
			HX_STACK_LINE(636)
			tmp1 = Value;
		}
	}
	HX_STACK_LINE(636)
	hx::OrEq(this1,tmp1);
	HX_STACK_LINE(637)
	int tmp2 = Value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(637)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,set_blue,return )

int FlxColor_Impl__obj::set_alpha( int this1,int Value){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","set_alpha",0xd958b61c,"flixel.util._FlxColor.FlxColor_Impl_.set_alpha","flixel/util/FlxColor.hx",641,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(643)
	hx::AndEq(this1,(int)16777215);
	HX_STACK_LINE(644)
	bool tmp = (Value > (int)255);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(644)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(644)
	if ((tmp)){
		HX_STACK_LINE(644)
		tmp1 = (int)255;
	}
	else{
		HX_STACK_LINE(644)
		bool tmp2 = (Value < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(644)
		if ((tmp2)){
			HX_STACK_LINE(644)
			tmp1 = (int)0;
		}
		else{
			HX_STACK_LINE(644)
			tmp1 = Value;
		}
	}
	HX_STACK_LINE(644)
	int tmp2 = (int(tmp1) << int((int)24));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(644)
	hx::OrEq(this1,tmp2);
	HX_STACK_LINE(645)
	int tmp3 = Value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(645)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,set_alpha,return )

Float FlxColor_Impl__obj::set_redFloat( int this1,Float Value){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","set_redFloat",0x3df4328d,"flixel.util._FlxColor.FlxColor_Impl_.set_redFloat","flixel/util/FlxColor.hx",649,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(650)
	{
		HX_STACK_LINE(650)
		Float tmp = (Value * (int)255);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(650)
		int tmp1 = ::Math_obj::round(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(650)
		int Value1 = tmp1;		HX_STACK_VAR(Value1,"Value1");
		HX_STACK_LINE(650)
		hx::AndEq(this1,(int)-16711681);
		HX_STACK_LINE(650)
		bool tmp2 = (Value1 > (int)255);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(650)
		int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(650)
		if ((tmp2)){
			HX_STACK_LINE(650)
			tmp3 = (int)255;
		}
		else{
			HX_STACK_LINE(650)
			bool tmp4 = (Value1 < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(650)
			if ((tmp4)){
				HX_STACK_LINE(650)
				tmp3 = (int)0;
			}
			else{
				HX_STACK_LINE(650)
				tmp3 = Value1;
			}
		}
		HX_STACK_LINE(650)
		int tmp4 = (int(tmp3) << int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(650)
		hx::OrEq(this1,tmp4);
		HX_STACK_LINE(650)
		Value1;
	}
	HX_STACK_LINE(651)
	Float tmp = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(651)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,set_redFloat,return )

Float FlxColor_Impl__obj::set_greenFloat( int this1,Float Value){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","set_greenFloat",0xb735845b,"flixel.util._FlxColor.FlxColor_Impl_.set_greenFloat","flixel/util/FlxColor.hx",655,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(656)
	{
		HX_STACK_LINE(656)
		Float tmp = (Value * (int)255);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(656)
		int tmp1 = ::Math_obj::round(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(656)
		int Value1 = tmp1;		HX_STACK_VAR(Value1,"Value1");
		HX_STACK_LINE(656)
		hx::AndEq(this1,(int)-65281);
		HX_STACK_LINE(656)
		bool tmp2 = (Value1 > (int)255);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(656)
		int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(656)
		if ((tmp2)){
			HX_STACK_LINE(656)
			tmp3 = (int)255;
		}
		else{
			HX_STACK_LINE(656)
			bool tmp4 = (Value1 < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(656)
			if ((tmp4)){
				HX_STACK_LINE(656)
				tmp3 = (int)0;
			}
			else{
				HX_STACK_LINE(656)
				tmp3 = Value1;
			}
		}
		HX_STACK_LINE(656)
		int tmp4 = (int(tmp3) << int((int)8));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(656)
		hx::OrEq(this1,tmp4);
		HX_STACK_LINE(656)
		Value1;
	}
	HX_STACK_LINE(657)
	Float tmp = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(657)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,set_greenFloat,return )

Float FlxColor_Impl__obj::set_blueFloat( int this1,Float Value){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","set_blueFloat",0x9dd48a60,"flixel.util._FlxColor.FlxColor_Impl_.set_blueFloat","flixel/util/FlxColor.hx",661,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(662)
	{
		HX_STACK_LINE(662)
		Float tmp = (Value * (int)255);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(662)
		int tmp1 = ::Math_obj::round(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(662)
		int Value1 = tmp1;		HX_STACK_VAR(Value1,"Value1");
		HX_STACK_LINE(662)
		hx::AndEq(this1,(int)-256);
		HX_STACK_LINE(662)
		bool tmp2 = (Value1 > (int)255);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(662)
		int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(662)
		if ((tmp2)){
			HX_STACK_LINE(662)
			tmp3 = (int)255;
		}
		else{
			HX_STACK_LINE(662)
			bool tmp4 = (Value1 < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(662)
			if ((tmp4)){
				HX_STACK_LINE(662)
				tmp3 = (int)0;
			}
			else{
				HX_STACK_LINE(662)
				tmp3 = Value1;
			}
		}
		HX_STACK_LINE(662)
		hx::OrEq(this1,tmp3);
		HX_STACK_LINE(662)
		Value1;
	}
	HX_STACK_LINE(663)
	Float tmp = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(663)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,set_blueFloat,return )

Float FlxColor_Impl__obj::set_alphaFloat( int this1,Float Value){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","set_alphaFloat",0x0315d9e0,"flixel.util._FlxColor.FlxColor_Impl_.set_alphaFloat","flixel/util/FlxColor.hx",667,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(668)
	{
		HX_STACK_LINE(668)
		Float tmp = (Value * (int)255);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(668)
		int tmp1 = ::Math_obj::round(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(668)
		int Value1 = tmp1;		HX_STACK_VAR(Value1,"Value1");
		HX_STACK_LINE(668)
		hx::AndEq(this1,(int)16777215);
		HX_STACK_LINE(668)
		bool tmp2 = (Value1 > (int)255);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(668)
		int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(668)
		if ((tmp2)){
			HX_STACK_LINE(668)
			tmp3 = (int)255;
		}
		else{
			HX_STACK_LINE(668)
			bool tmp4 = (Value1 < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(668)
			if ((tmp4)){
				HX_STACK_LINE(668)
				tmp3 = (int)0;
			}
			else{
				HX_STACK_LINE(668)
				tmp3 = Value1;
			}
		}
		HX_STACK_LINE(668)
		int tmp4 = (int(tmp3) << int((int)24));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(668)
		hx::OrEq(this1,tmp4);
		HX_STACK_LINE(668)
		Value1;
	}
	HX_STACK_LINE(669)
	Float tmp = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(669)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,set_alphaFloat,return )

Float FlxColor_Impl__obj::get_cyan( int this1){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","get_cyan",0xfa6d7eb1,"flixel.util._FlxColor.FlxColor_Impl_.get_cyan","flixel/util/FlxColor.hx",673,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(674)
	int tmp = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(674)
	int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(674)
	Float tmp2 = (Float(tmp1) / Float((int)255));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(674)
	Float tmp3 = ((int)1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(674)
	int tmp4 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(674)
	int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(674)
	Float tmp6 = (Float(tmp5) / Float((int)255));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(674)
	int tmp7 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(674)
	int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(674)
	Float tmp9 = (Float(tmp8) / Float((int)255));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(674)
	int tmp10 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(674)
	Float tmp11 = (Float(tmp10) / Float((int)255));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(674)
	Float tmp12 = ::Math_obj::max(tmp9,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(674)
	Float tmp13 = ::Math_obj::max(tmp6,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(674)
	Float tmp14 = ((int)1 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(674)
	Float tmp15 = (tmp3 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(674)
	int tmp16 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(674)
	int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(674)
	Float tmp18 = (Float(tmp17) / Float((int)255));		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(674)
	int tmp19 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(674)
	int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(674)
	Float tmp21 = (Float(tmp20) / Float((int)255));		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(674)
	int tmp22 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(674)
	Float tmp23 = (Float(tmp22) / Float((int)255));		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(674)
	Float tmp24 = ::Math_obj::max(tmp21,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(674)
	Float tmp25 = ::Math_obj::max(tmp18,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(674)
	Float tmp26 = (Float(tmp15) / Float(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(674)
	return tmp26;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,get_cyan,return )

Float FlxColor_Impl__obj::get_magenta( int this1){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","get_magenta",0xbba26d5b,"flixel.util._FlxColor.FlxColor_Impl_.get_magenta","flixel/util/FlxColor.hx",678,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(679)
	int tmp = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(679)
	int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(679)
	Float tmp2 = (Float(tmp1) / Float((int)255));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(679)
	Float tmp3 = ((int)1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(679)
	int tmp4 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(679)
	int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(679)
	Float tmp6 = (Float(tmp5) / Float((int)255));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(679)
	int tmp7 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(679)
	int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(679)
	Float tmp9 = (Float(tmp8) / Float((int)255));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(679)
	int tmp10 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(679)
	Float tmp11 = (Float(tmp10) / Float((int)255));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(679)
	Float tmp12 = ::Math_obj::max(tmp9,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(679)
	Float tmp13 = ::Math_obj::max(tmp6,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(679)
	Float tmp14 = ((int)1 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(679)
	Float tmp15 = (tmp3 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(679)
	int tmp16 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(679)
	int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(679)
	Float tmp18 = (Float(tmp17) / Float((int)255));		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(679)
	int tmp19 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(679)
	int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(679)
	Float tmp21 = (Float(tmp20) / Float((int)255));		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(679)
	int tmp22 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(679)
	Float tmp23 = (Float(tmp22) / Float((int)255));		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(679)
	Float tmp24 = ::Math_obj::max(tmp21,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(679)
	Float tmp25 = ::Math_obj::max(tmp18,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(679)
	Float tmp26 = (Float(tmp15) / Float(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(679)
	return tmp26;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,get_magenta,return )

Float FlxColor_Impl__obj::get_yellow( int this1){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","get_yellow",0xdee9d882,"flixel.util._FlxColor.FlxColor_Impl_.get_yellow","flixel/util/FlxColor.hx",683,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(684)
	int tmp = (int(this1) & int((int)255));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(684)
	Float tmp1 = (Float(tmp) / Float((int)255));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(684)
	Float tmp2 = ((int)1 - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(684)
	int tmp3 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(684)
	int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(684)
	Float tmp5 = (Float(tmp4) / Float((int)255));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(684)
	int tmp6 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(684)
	int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(684)
	Float tmp8 = (Float(tmp7) / Float((int)255));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(684)
	int tmp9 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(684)
	Float tmp10 = (Float(tmp9) / Float((int)255));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(684)
	Float tmp11 = ::Math_obj::max(tmp8,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(684)
	Float tmp12 = ::Math_obj::max(tmp5,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(684)
	Float tmp13 = ((int)1 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(684)
	Float tmp14 = (tmp2 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(684)
	int tmp15 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(684)
	int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(684)
	Float tmp17 = (Float(tmp16) / Float((int)255));		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(684)
	int tmp18 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(684)
	int tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(684)
	Float tmp20 = (Float(tmp19) / Float((int)255));		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(684)
	int tmp21 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(684)
	Float tmp22 = (Float(tmp21) / Float((int)255));		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(684)
	Float tmp23 = ::Math_obj::max(tmp20,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(684)
	Float tmp24 = ::Math_obj::max(tmp17,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(684)
	Float tmp25 = (Float(tmp14) / Float(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(684)
	return tmp25;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,get_yellow,return )

Float FlxColor_Impl__obj::get_black( int this1){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","get_black",0x8962f871,"flixel.util._FlxColor.FlxColor_Impl_.get_black","flixel/util/FlxColor.hx",688,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(689)
	int tmp = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(689)
	int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(689)
	Float tmp2 = (Float(tmp1) / Float((int)255));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(689)
	int tmp3 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(689)
	int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(689)
	Float tmp5 = (Float(tmp4) / Float((int)255));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(689)
	int tmp6 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(689)
	Float tmp7 = (Float(tmp6) / Float((int)255));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(689)
	Float tmp8 = ::Math_obj::max(tmp5,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(689)
	Float tmp9 = ::Math_obj::max(tmp2,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(689)
	Float tmp10 = ((int)1 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(689)
	return tmp10;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,get_black,return )

Float FlxColor_Impl__obj::set_cyan( int this1,Float Value){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","set_cyan",0xa8cad825,"flixel.util._FlxColor.FlxColor_Impl_.set_cyan","flixel/util/FlxColor.hx",693,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(694)
	{
		HX_STACK_LINE(694)
		int tmp = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(694)
		int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(694)
		Float tmp2 = (Float(tmp1) / Float((int)255));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(694)
		Float tmp3 = ((int)1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(694)
		int tmp4 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(694)
		int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(694)
		Float tmp6 = (Float(tmp5) / Float((int)255));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(694)
		int tmp7 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(694)
		int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(694)
		Float tmp9 = (Float(tmp8) / Float((int)255));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(694)
		int tmp10 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(694)
		Float tmp11 = (Float(tmp10) / Float((int)255));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(694)
		Float tmp12 = ::Math_obj::max(tmp9,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(694)
		Float tmp13 = ::Math_obj::max(tmp6,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(694)
		Float tmp14 = ((int)1 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(694)
		Float tmp15 = (tmp3 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(694)
		int tmp16 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(694)
		int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(694)
		Float tmp18 = (Float(tmp17) / Float((int)255));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(694)
		int tmp19 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(694)
		int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(694)
		Float tmp21 = (Float(tmp20) / Float((int)255));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(694)
		int tmp22 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(694)
		Float tmp23 = (Float(tmp22) / Float((int)255));		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(694)
		Float tmp24 = ::Math_obj::max(tmp21,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(694)
		Float tmp25 = ::Math_obj::max(tmp18,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(694)
		Float tmp26 = (Float(tmp15) / Float(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(694)
		Float Magenta = tmp26;		HX_STACK_VAR(Magenta,"Magenta");
		HX_STACK_LINE(694)
		int tmp27 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(694)
		Float tmp28 = (Float(tmp27) / Float((int)255));		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(694)
		Float tmp29 = ((int)1 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(694)
		int tmp30 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(694)
		int tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(694)
		Float tmp32 = (Float(tmp31) / Float((int)255));		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(694)
		int tmp33 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(694)
		int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(694)
		Float tmp35 = (Float(tmp34) / Float((int)255));		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(694)
		int tmp36 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(694)
		Float tmp37 = (Float(tmp36) / Float((int)255));		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(694)
		Float tmp38 = ::Math_obj::max(tmp35,tmp37);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(694)
		Float tmp39 = ::Math_obj::max(tmp32,tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(694)
		Float tmp40 = ((int)1 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(694)
		Float tmp41 = (tmp29 - tmp40);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(694)
		int tmp42 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(694)
		int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(694)
		Float tmp44 = (Float(tmp43) / Float((int)255));		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(694)
		int tmp45 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(694)
		int tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(694)
		Float tmp47 = (Float(tmp46) / Float((int)255));		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(694)
		int tmp48 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(694)
		Float tmp49 = (Float(tmp48) / Float((int)255));		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(694)
		Float tmp50 = ::Math_obj::max(tmp47,tmp49);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(694)
		Float tmp51 = ::Math_obj::max(tmp44,tmp50);		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(694)
		Float tmp52 = (Float(tmp41) / Float(tmp51));		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(694)
		Float Yellow = tmp52;		HX_STACK_VAR(Yellow,"Yellow");
		HX_STACK_LINE(694)
		int tmp53 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(694)
		int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(694)
		Float tmp55 = (Float(tmp54) / Float((int)255));		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(694)
		int tmp56 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(694)
		int tmp57 = (int(tmp56) & int((int)255));		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(694)
		Float tmp58 = (Float(tmp57) / Float((int)255));		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(694)
		int tmp59 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(694)
		Float tmp60 = (Float(tmp59) / Float((int)255));		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(694)
		Float tmp61 = ::Math_obj::max(tmp58,tmp60);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(694)
		Float tmp62 = ::Math_obj::max(tmp55,tmp61);		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(694)
		Float tmp63 = ((int)1 - tmp62);		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(694)
		Float Black = tmp63;		HX_STACK_VAR(Black,"Black");
		HX_STACK_LINE(694)
		int tmp64 = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(694)
		int tmp65 = (int(tmp64) & int((int)255));		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(694)
		Float tmp66 = (Float(tmp65) / Float((int)255));		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(694)
		Float Alpha = tmp66;		HX_STACK_VAR(Alpha,"Alpha");
		HX_STACK_LINE(694)
		{
			HX_STACK_LINE(694)
			Float tmp67 = ((int)1 - Value);		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(694)
			Float tmp68 = ((int)1 - Black);		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(694)
			Float tmp69 = (tmp67 * tmp68);		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(694)
			Float Value1 = tmp69;		HX_STACK_VAR(Value1,"Value1");
			HX_STACK_LINE(694)
			{
				HX_STACK_LINE(694)
				Float tmp70 = (Value1 * (int)255);		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(694)
				int tmp71 = ::Math_obj::round(tmp70);		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(694)
				int Value2 = tmp71;		HX_STACK_VAR(Value2,"Value2");
				HX_STACK_LINE(694)
				hx::AndEq(this1,(int)-16711681);
				HX_STACK_LINE(694)
				bool tmp72 = (Value2 > (int)255);		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(694)
				int tmp73;		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(694)
				if ((tmp72)){
					HX_STACK_LINE(694)
					tmp73 = (int)255;
				}
				else{
					HX_STACK_LINE(694)
					bool tmp74 = (Value2 < (int)0);		HX_STACK_VAR(tmp74,"tmp74");
					HX_STACK_LINE(694)
					if ((tmp74)){
						HX_STACK_LINE(694)
						tmp73 = (int)0;
					}
					else{
						HX_STACK_LINE(694)
						tmp73 = Value2;
					}
				}
				HX_STACK_LINE(694)
				int tmp74 = (int(tmp73) << int((int)16));		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(694)
				hx::OrEq(this1,tmp74);
				HX_STACK_LINE(694)
				Value2;
			}
			HX_STACK_LINE(694)
			Value1;
		}
		HX_STACK_LINE(694)
		{
			HX_STACK_LINE(694)
			Float tmp67 = ((int)1 - Magenta);		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(694)
			Float tmp68 = ((int)1 - Black);		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(694)
			Float tmp69 = (tmp67 * tmp68);		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(694)
			Float Value1 = tmp69;		HX_STACK_VAR(Value1,"Value1");
			HX_STACK_LINE(694)
			{
				HX_STACK_LINE(694)
				Float tmp70 = (Value1 * (int)255);		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(694)
				int tmp71 = ::Math_obj::round(tmp70);		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(694)
				int Value2 = tmp71;		HX_STACK_VAR(Value2,"Value2");
				HX_STACK_LINE(694)
				hx::AndEq(this1,(int)-65281);
				HX_STACK_LINE(694)
				bool tmp72 = (Value2 > (int)255);		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(694)
				int tmp73;		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(694)
				if ((tmp72)){
					HX_STACK_LINE(694)
					tmp73 = (int)255;
				}
				else{
					HX_STACK_LINE(694)
					bool tmp74 = (Value2 < (int)0);		HX_STACK_VAR(tmp74,"tmp74");
					HX_STACK_LINE(694)
					if ((tmp74)){
						HX_STACK_LINE(694)
						tmp73 = (int)0;
					}
					else{
						HX_STACK_LINE(694)
						tmp73 = Value2;
					}
				}
				HX_STACK_LINE(694)
				int tmp74 = (int(tmp73) << int((int)8));		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(694)
				hx::OrEq(this1,tmp74);
				HX_STACK_LINE(694)
				Value2;
			}
			HX_STACK_LINE(694)
			Value1;
		}
		HX_STACK_LINE(694)
		{
			HX_STACK_LINE(694)
			Float tmp67 = ((int)1 - Yellow);		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(694)
			Float tmp68 = ((int)1 - Black);		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(694)
			Float tmp69 = (tmp67 * tmp68);		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(694)
			Float Value1 = tmp69;		HX_STACK_VAR(Value1,"Value1");
			HX_STACK_LINE(694)
			{
				HX_STACK_LINE(694)
				Float tmp70 = (Value1 * (int)255);		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(694)
				int tmp71 = ::Math_obj::round(tmp70);		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(694)
				int Value2 = tmp71;		HX_STACK_VAR(Value2,"Value2");
				HX_STACK_LINE(694)
				hx::AndEq(this1,(int)-256);
				HX_STACK_LINE(694)
				bool tmp72 = (Value2 > (int)255);		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(694)
				int tmp73;		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(694)
				if ((tmp72)){
					HX_STACK_LINE(694)
					tmp73 = (int)255;
				}
				else{
					HX_STACK_LINE(694)
					bool tmp74 = (Value2 < (int)0);		HX_STACK_VAR(tmp74,"tmp74");
					HX_STACK_LINE(694)
					if ((tmp74)){
						HX_STACK_LINE(694)
						tmp73 = (int)0;
					}
					else{
						HX_STACK_LINE(694)
						tmp73 = Value2;
					}
				}
				HX_STACK_LINE(694)
				hx::OrEq(this1,tmp73);
				HX_STACK_LINE(694)
				Value2;
			}
			HX_STACK_LINE(694)
			Value1;
		}
		HX_STACK_LINE(694)
		{
			HX_STACK_LINE(694)
			{
				HX_STACK_LINE(694)
				Float tmp67 = (Alpha * (int)255);		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(694)
				int tmp68 = ::Math_obj::round(tmp67);		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(694)
				int Value1 = tmp68;		HX_STACK_VAR(Value1,"Value1");
				HX_STACK_LINE(694)
				hx::AndEq(this1,(int)16777215);
				HX_STACK_LINE(694)
				bool tmp69 = (Value1 > (int)255);		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(694)
				int tmp70;		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(694)
				if ((tmp69)){
					HX_STACK_LINE(694)
					tmp70 = (int)255;
				}
				else{
					HX_STACK_LINE(694)
					bool tmp71 = (Value1 < (int)0);		HX_STACK_VAR(tmp71,"tmp71");
					HX_STACK_LINE(694)
					if ((tmp71)){
						HX_STACK_LINE(694)
						tmp70 = (int)0;
					}
					else{
						HX_STACK_LINE(694)
						tmp70 = Value1;
					}
				}
				HX_STACK_LINE(694)
				int tmp71 = (int(tmp70) << int((int)24));		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(694)
				hx::OrEq(this1,tmp71);
				HX_STACK_LINE(694)
				Value1;
			}
			HX_STACK_LINE(694)
			Alpha;
		}
		HX_STACK_LINE(694)
		this1;
	}
	HX_STACK_LINE(695)
	Float tmp = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(695)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,set_cyan,return )

Float FlxColor_Impl__obj::set_magenta( int this1,Float Value){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","set_magenta",0xc60f7467,"flixel.util._FlxColor.FlxColor_Impl_.set_magenta","flixel/util/FlxColor.hx",699,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(700)
	{
		HX_STACK_LINE(700)
		int tmp = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(700)
		int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(700)
		Float tmp2 = (Float(tmp1) / Float((int)255));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(700)
		Float tmp3 = ((int)1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(700)
		int tmp4 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(700)
		int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(700)
		Float tmp6 = (Float(tmp5) / Float((int)255));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(700)
		int tmp7 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(700)
		int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(700)
		Float tmp9 = (Float(tmp8) / Float((int)255));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(700)
		int tmp10 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(700)
		Float tmp11 = (Float(tmp10) / Float((int)255));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(700)
		Float tmp12 = ::Math_obj::max(tmp9,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(700)
		Float tmp13 = ::Math_obj::max(tmp6,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(700)
		Float tmp14 = ((int)1 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(700)
		Float tmp15 = (tmp3 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(700)
		int tmp16 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(700)
		int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(700)
		Float tmp18 = (Float(tmp17) / Float((int)255));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(700)
		int tmp19 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(700)
		int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(700)
		Float tmp21 = (Float(tmp20) / Float((int)255));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(700)
		int tmp22 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(700)
		Float tmp23 = (Float(tmp22) / Float((int)255));		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(700)
		Float tmp24 = ::Math_obj::max(tmp21,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(700)
		Float tmp25 = ::Math_obj::max(tmp18,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(700)
		Float tmp26 = (Float(tmp15) / Float(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(700)
		Float Cyan = tmp26;		HX_STACK_VAR(Cyan,"Cyan");
		HX_STACK_LINE(700)
		int tmp27 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(700)
		Float tmp28 = (Float(tmp27) / Float((int)255));		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(700)
		Float tmp29 = ((int)1 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(700)
		int tmp30 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(700)
		int tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(700)
		Float tmp32 = (Float(tmp31) / Float((int)255));		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(700)
		int tmp33 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(700)
		int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(700)
		Float tmp35 = (Float(tmp34) / Float((int)255));		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(700)
		int tmp36 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(700)
		Float tmp37 = (Float(tmp36) / Float((int)255));		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(700)
		Float tmp38 = ::Math_obj::max(tmp35,tmp37);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(700)
		Float tmp39 = ::Math_obj::max(tmp32,tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(700)
		Float tmp40 = ((int)1 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(700)
		Float tmp41 = (tmp29 - tmp40);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(700)
		int tmp42 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(700)
		int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(700)
		Float tmp44 = (Float(tmp43) / Float((int)255));		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(700)
		int tmp45 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(700)
		int tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(700)
		Float tmp47 = (Float(tmp46) / Float((int)255));		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(700)
		int tmp48 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(700)
		Float tmp49 = (Float(tmp48) / Float((int)255));		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(700)
		Float tmp50 = ::Math_obj::max(tmp47,tmp49);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(700)
		Float tmp51 = ::Math_obj::max(tmp44,tmp50);		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(700)
		Float tmp52 = (Float(tmp41) / Float(tmp51));		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(700)
		Float Yellow = tmp52;		HX_STACK_VAR(Yellow,"Yellow");
		HX_STACK_LINE(700)
		int tmp53 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(700)
		int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(700)
		Float tmp55 = (Float(tmp54) / Float((int)255));		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(700)
		int tmp56 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(700)
		int tmp57 = (int(tmp56) & int((int)255));		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(700)
		Float tmp58 = (Float(tmp57) / Float((int)255));		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(700)
		int tmp59 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(700)
		Float tmp60 = (Float(tmp59) / Float((int)255));		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(700)
		Float tmp61 = ::Math_obj::max(tmp58,tmp60);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(700)
		Float tmp62 = ::Math_obj::max(tmp55,tmp61);		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(700)
		Float tmp63 = ((int)1 - tmp62);		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(700)
		Float Black = tmp63;		HX_STACK_VAR(Black,"Black");
		HX_STACK_LINE(700)
		int tmp64 = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(700)
		int tmp65 = (int(tmp64) & int((int)255));		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(700)
		Float tmp66 = (Float(tmp65) / Float((int)255));		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(700)
		Float Alpha = tmp66;		HX_STACK_VAR(Alpha,"Alpha");
		HX_STACK_LINE(700)
		{
			HX_STACK_LINE(700)
			Float tmp67 = ((int)1 - Cyan);		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(700)
			Float tmp68 = ((int)1 - Black);		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(700)
			Float tmp69 = (tmp67 * tmp68);		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(700)
			Float Value1 = tmp69;		HX_STACK_VAR(Value1,"Value1");
			HX_STACK_LINE(700)
			{
				HX_STACK_LINE(700)
				Float tmp70 = (Value1 * (int)255);		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(700)
				int tmp71 = ::Math_obj::round(tmp70);		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(700)
				int Value2 = tmp71;		HX_STACK_VAR(Value2,"Value2");
				HX_STACK_LINE(700)
				hx::AndEq(this1,(int)-16711681);
				HX_STACK_LINE(700)
				bool tmp72 = (Value2 > (int)255);		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(700)
				int tmp73;		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(700)
				if ((tmp72)){
					HX_STACK_LINE(700)
					tmp73 = (int)255;
				}
				else{
					HX_STACK_LINE(700)
					bool tmp74 = (Value2 < (int)0);		HX_STACK_VAR(tmp74,"tmp74");
					HX_STACK_LINE(700)
					if ((tmp74)){
						HX_STACK_LINE(700)
						tmp73 = (int)0;
					}
					else{
						HX_STACK_LINE(700)
						tmp73 = Value2;
					}
				}
				HX_STACK_LINE(700)
				int tmp74 = (int(tmp73) << int((int)16));		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(700)
				hx::OrEq(this1,tmp74);
				HX_STACK_LINE(700)
				Value2;
			}
			HX_STACK_LINE(700)
			Value1;
		}
		HX_STACK_LINE(700)
		{
			HX_STACK_LINE(700)
			Float tmp67 = ((int)1 - Value);		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(700)
			Float tmp68 = ((int)1 - Black);		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(700)
			Float tmp69 = (tmp67 * tmp68);		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(700)
			Float Value1 = tmp69;		HX_STACK_VAR(Value1,"Value1");
			HX_STACK_LINE(700)
			{
				HX_STACK_LINE(700)
				Float tmp70 = (Value1 * (int)255);		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(700)
				int tmp71 = ::Math_obj::round(tmp70);		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(700)
				int Value2 = tmp71;		HX_STACK_VAR(Value2,"Value2");
				HX_STACK_LINE(700)
				hx::AndEq(this1,(int)-65281);
				HX_STACK_LINE(700)
				bool tmp72 = (Value2 > (int)255);		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(700)
				int tmp73;		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(700)
				if ((tmp72)){
					HX_STACK_LINE(700)
					tmp73 = (int)255;
				}
				else{
					HX_STACK_LINE(700)
					bool tmp74 = (Value2 < (int)0);		HX_STACK_VAR(tmp74,"tmp74");
					HX_STACK_LINE(700)
					if ((tmp74)){
						HX_STACK_LINE(700)
						tmp73 = (int)0;
					}
					else{
						HX_STACK_LINE(700)
						tmp73 = Value2;
					}
				}
				HX_STACK_LINE(700)
				int tmp74 = (int(tmp73) << int((int)8));		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(700)
				hx::OrEq(this1,tmp74);
				HX_STACK_LINE(700)
				Value2;
			}
			HX_STACK_LINE(700)
			Value1;
		}
		HX_STACK_LINE(700)
		{
			HX_STACK_LINE(700)
			Float tmp67 = ((int)1 - Yellow);		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(700)
			Float tmp68 = ((int)1 - Black);		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(700)
			Float tmp69 = (tmp67 * tmp68);		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(700)
			Float Value1 = tmp69;		HX_STACK_VAR(Value1,"Value1");
			HX_STACK_LINE(700)
			{
				HX_STACK_LINE(700)
				Float tmp70 = (Value1 * (int)255);		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(700)
				int tmp71 = ::Math_obj::round(tmp70);		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(700)
				int Value2 = tmp71;		HX_STACK_VAR(Value2,"Value2");
				HX_STACK_LINE(700)
				hx::AndEq(this1,(int)-256);
				HX_STACK_LINE(700)
				bool tmp72 = (Value2 > (int)255);		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(700)
				int tmp73;		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(700)
				if ((tmp72)){
					HX_STACK_LINE(700)
					tmp73 = (int)255;
				}
				else{
					HX_STACK_LINE(700)
					bool tmp74 = (Value2 < (int)0);		HX_STACK_VAR(tmp74,"tmp74");
					HX_STACK_LINE(700)
					if ((tmp74)){
						HX_STACK_LINE(700)
						tmp73 = (int)0;
					}
					else{
						HX_STACK_LINE(700)
						tmp73 = Value2;
					}
				}
				HX_STACK_LINE(700)
				hx::OrEq(this1,tmp73);
				HX_STACK_LINE(700)
				Value2;
			}
			HX_STACK_LINE(700)
			Value1;
		}
		HX_STACK_LINE(700)
		{
			HX_STACK_LINE(700)
			{
				HX_STACK_LINE(700)
				Float tmp67 = (Alpha * (int)255);		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(700)
				int tmp68 = ::Math_obj::round(tmp67);		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(700)
				int Value1 = tmp68;		HX_STACK_VAR(Value1,"Value1");
				HX_STACK_LINE(700)
				hx::AndEq(this1,(int)16777215);
				HX_STACK_LINE(700)
				bool tmp69 = (Value1 > (int)255);		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(700)
				int tmp70;		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(700)
				if ((tmp69)){
					HX_STACK_LINE(700)
					tmp70 = (int)255;
				}
				else{
					HX_STACK_LINE(700)
					bool tmp71 = (Value1 < (int)0);		HX_STACK_VAR(tmp71,"tmp71");
					HX_STACK_LINE(700)
					if ((tmp71)){
						HX_STACK_LINE(700)
						tmp70 = (int)0;
					}
					else{
						HX_STACK_LINE(700)
						tmp70 = Value1;
					}
				}
				HX_STACK_LINE(700)
				int tmp71 = (int(tmp70) << int((int)24));		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(700)
				hx::OrEq(this1,tmp71);
				HX_STACK_LINE(700)
				Value1;
			}
			HX_STACK_LINE(700)
			Alpha;
		}
		HX_STACK_LINE(700)
		this1;
	}
	HX_STACK_LINE(701)
	Float tmp = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(701)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,set_magenta,return )

Float FlxColor_Impl__obj::set_yellow( int this1,Float Value){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","set_yellow",0xe26776f6,"flixel.util._FlxColor.FlxColor_Impl_.set_yellow","flixel/util/FlxColor.hx",705,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(706)
	{
		HX_STACK_LINE(706)
		int tmp = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(706)
		int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(706)
		Float tmp2 = (Float(tmp1) / Float((int)255));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(706)
		Float tmp3 = ((int)1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(706)
		int tmp4 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(706)
		int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(706)
		Float tmp6 = (Float(tmp5) / Float((int)255));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(706)
		int tmp7 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(706)
		int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(706)
		Float tmp9 = (Float(tmp8) / Float((int)255));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(706)
		int tmp10 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(706)
		Float tmp11 = (Float(tmp10) / Float((int)255));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(706)
		Float tmp12 = ::Math_obj::max(tmp9,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(706)
		Float tmp13 = ::Math_obj::max(tmp6,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(706)
		Float tmp14 = ((int)1 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(706)
		Float tmp15 = (tmp3 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(706)
		int tmp16 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(706)
		int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(706)
		Float tmp18 = (Float(tmp17) / Float((int)255));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(706)
		int tmp19 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(706)
		int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(706)
		Float tmp21 = (Float(tmp20) / Float((int)255));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(706)
		int tmp22 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(706)
		Float tmp23 = (Float(tmp22) / Float((int)255));		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(706)
		Float tmp24 = ::Math_obj::max(tmp21,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(706)
		Float tmp25 = ::Math_obj::max(tmp18,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(706)
		Float tmp26 = (Float(tmp15) / Float(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(706)
		Float Cyan = tmp26;		HX_STACK_VAR(Cyan,"Cyan");
		HX_STACK_LINE(706)
		int tmp27 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(706)
		int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(706)
		Float tmp29 = (Float(tmp28) / Float((int)255));		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(706)
		Float tmp30 = ((int)1 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(706)
		int tmp31 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(706)
		int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(706)
		Float tmp33 = (Float(tmp32) / Float((int)255));		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(706)
		int tmp34 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(706)
		int tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(706)
		Float tmp36 = (Float(tmp35) / Float((int)255));		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(706)
		int tmp37 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(706)
		Float tmp38 = (Float(tmp37) / Float((int)255));		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(706)
		Float tmp39 = ::Math_obj::max(tmp36,tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(706)
		Float tmp40 = ::Math_obj::max(tmp33,tmp39);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(706)
		Float tmp41 = ((int)1 - tmp40);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(706)
		Float tmp42 = (tmp30 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(706)
		int tmp43 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(706)
		int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(706)
		Float tmp45 = (Float(tmp44) / Float((int)255));		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(706)
		int tmp46 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(706)
		int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(706)
		Float tmp48 = (Float(tmp47) / Float((int)255));		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(706)
		int tmp49 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(706)
		Float tmp50 = (Float(tmp49) / Float((int)255));		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(706)
		Float tmp51 = ::Math_obj::max(tmp48,tmp50);		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(706)
		Float tmp52 = ::Math_obj::max(tmp45,tmp51);		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(706)
		Float tmp53 = (Float(tmp42) / Float(tmp52));		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(706)
		Float Magenta = tmp53;		HX_STACK_VAR(Magenta,"Magenta");
		HX_STACK_LINE(706)
		int tmp54 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(706)
		int tmp55 = (int(tmp54) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(706)
		Float tmp56 = (Float(tmp55) / Float((int)255));		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(706)
		int tmp57 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(706)
		int tmp58 = (int(tmp57) & int((int)255));		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(706)
		Float tmp59 = (Float(tmp58) / Float((int)255));		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(706)
		int tmp60 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(706)
		Float tmp61 = (Float(tmp60) / Float((int)255));		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(706)
		Float tmp62 = ::Math_obj::max(tmp59,tmp61);		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(706)
		Float tmp63 = ::Math_obj::max(tmp56,tmp62);		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(706)
		Float tmp64 = ((int)1 - tmp63);		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(706)
		Float Black = tmp64;		HX_STACK_VAR(Black,"Black");
		HX_STACK_LINE(706)
		int tmp65 = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(706)
		int tmp66 = (int(tmp65) & int((int)255));		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(706)
		Float tmp67 = (Float(tmp66) / Float((int)255));		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(706)
		Float Alpha = tmp67;		HX_STACK_VAR(Alpha,"Alpha");
		HX_STACK_LINE(706)
		{
			HX_STACK_LINE(706)
			Float tmp68 = ((int)1 - Cyan);		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(706)
			Float tmp69 = ((int)1 - Black);		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(706)
			Float tmp70 = (tmp68 * tmp69);		HX_STACK_VAR(tmp70,"tmp70");
			HX_STACK_LINE(706)
			Float Value1 = tmp70;		HX_STACK_VAR(Value1,"Value1");
			HX_STACK_LINE(706)
			{
				HX_STACK_LINE(706)
				Float tmp71 = (Value1 * (int)255);		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(706)
				int tmp72 = ::Math_obj::round(tmp71);		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(706)
				int Value2 = tmp72;		HX_STACK_VAR(Value2,"Value2");
				HX_STACK_LINE(706)
				hx::AndEq(this1,(int)-16711681);
				HX_STACK_LINE(706)
				bool tmp73 = (Value2 > (int)255);		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(706)
				int tmp74;		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(706)
				if ((tmp73)){
					HX_STACK_LINE(706)
					tmp74 = (int)255;
				}
				else{
					HX_STACK_LINE(706)
					bool tmp75 = (Value2 < (int)0);		HX_STACK_VAR(tmp75,"tmp75");
					HX_STACK_LINE(706)
					if ((tmp75)){
						HX_STACK_LINE(706)
						tmp74 = (int)0;
					}
					else{
						HX_STACK_LINE(706)
						tmp74 = Value2;
					}
				}
				HX_STACK_LINE(706)
				int tmp75 = (int(tmp74) << int((int)16));		HX_STACK_VAR(tmp75,"tmp75");
				HX_STACK_LINE(706)
				hx::OrEq(this1,tmp75);
				HX_STACK_LINE(706)
				Value2;
			}
			HX_STACK_LINE(706)
			Value1;
		}
		HX_STACK_LINE(706)
		{
			HX_STACK_LINE(706)
			Float tmp68 = ((int)1 - Magenta);		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(706)
			Float tmp69 = ((int)1 - Black);		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(706)
			Float tmp70 = (tmp68 * tmp69);		HX_STACK_VAR(tmp70,"tmp70");
			HX_STACK_LINE(706)
			Float Value1 = tmp70;		HX_STACK_VAR(Value1,"Value1");
			HX_STACK_LINE(706)
			{
				HX_STACK_LINE(706)
				Float tmp71 = (Value1 * (int)255);		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(706)
				int tmp72 = ::Math_obj::round(tmp71);		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(706)
				int Value2 = tmp72;		HX_STACK_VAR(Value2,"Value2");
				HX_STACK_LINE(706)
				hx::AndEq(this1,(int)-65281);
				HX_STACK_LINE(706)
				bool tmp73 = (Value2 > (int)255);		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(706)
				int tmp74;		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(706)
				if ((tmp73)){
					HX_STACK_LINE(706)
					tmp74 = (int)255;
				}
				else{
					HX_STACK_LINE(706)
					bool tmp75 = (Value2 < (int)0);		HX_STACK_VAR(tmp75,"tmp75");
					HX_STACK_LINE(706)
					if ((tmp75)){
						HX_STACK_LINE(706)
						tmp74 = (int)0;
					}
					else{
						HX_STACK_LINE(706)
						tmp74 = Value2;
					}
				}
				HX_STACK_LINE(706)
				int tmp75 = (int(tmp74) << int((int)8));		HX_STACK_VAR(tmp75,"tmp75");
				HX_STACK_LINE(706)
				hx::OrEq(this1,tmp75);
				HX_STACK_LINE(706)
				Value2;
			}
			HX_STACK_LINE(706)
			Value1;
		}
		HX_STACK_LINE(706)
		{
			HX_STACK_LINE(706)
			Float tmp68 = ((int)1 - Value);		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(706)
			Float tmp69 = ((int)1 - Black);		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(706)
			Float tmp70 = (tmp68 * tmp69);		HX_STACK_VAR(tmp70,"tmp70");
			HX_STACK_LINE(706)
			Float Value1 = tmp70;		HX_STACK_VAR(Value1,"Value1");
			HX_STACK_LINE(706)
			{
				HX_STACK_LINE(706)
				Float tmp71 = (Value1 * (int)255);		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(706)
				int tmp72 = ::Math_obj::round(tmp71);		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(706)
				int Value2 = tmp72;		HX_STACK_VAR(Value2,"Value2");
				HX_STACK_LINE(706)
				hx::AndEq(this1,(int)-256);
				HX_STACK_LINE(706)
				bool tmp73 = (Value2 > (int)255);		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(706)
				int tmp74;		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(706)
				if ((tmp73)){
					HX_STACK_LINE(706)
					tmp74 = (int)255;
				}
				else{
					HX_STACK_LINE(706)
					bool tmp75 = (Value2 < (int)0);		HX_STACK_VAR(tmp75,"tmp75");
					HX_STACK_LINE(706)
					if ((tmp75)){
						HX_STACK_LINE(706)
						tmp74 = (int)0;
					}
					else{
						HX_STACK_LINE(706)
						tmp74 = Value2;
					}
				}
				HX_STACK_LINE(706)
				hx::OrEq(this1,tmp74);
				HX_STACK_LINE(706)
				Value2;
			}
			HX_STACK_LINE(706)
			Value1;
		}
		HX_STACK_LINE(706)
		{
			HX_STACK_LINE(706)
			{
				HX_STACK_LINE(706)
				Float tmp68 = (Alpha * (int)255);		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(706)
				int tmp69 = ::Math_obj::round(tmp68);		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(706)
				int Value1 = tmp69;		HX_STACK_VAR(Value1,"Value1");
				HX_STACK_LINE(706)
				hx::AndEq(this1,(int)16777215);
				HX_STACK_LINE(706)
				bool tmp70 = (Value1 > (int)255);		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(706)
				int tmp71;		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(706)
				if ((tmp70)){
					HX_STACK_LINE(706)
					tmp71 = (int)255;
				}
				else{
					HX_STACK_LINE(706)
					bool tmp72 = (Value1 < (int)0);		HX_STACK_VAR(tmp72,"tmp72");
					HX_STACK_LINE(706)
					if ((tmp72)){
						HX_STACK_LINE(706)
						tmp71 = (int)0;
					}
					else{
						HX_STACK_LINE(706)
						tmp71 = Value1;
					}
				}
				HX_STACK_LINE(706)
				int tmp72 = (int(tmp71) << int((int)24));		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(706)
				hx::OrEq(this1,tmp72);
				HX_STACK_LINE(706)
				Value1;
			}
			HX_STACK_LINE(706)
			Alpha;
		}
		HX_STACK_LINE(706)
		this1;
	}
	HX_STACK_LINE(707)
	Float tmp = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(707)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,set_yellow,return )

Float FlxColor_Impl__obj::set_black( int this1,Float Value){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","set_black",0x6cb3e47d,"flixel.util._FlxColor.FlxColor_Impl_.set_black","flixel/util/FlxColor.hx",711,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(712)
	{
		HX_STACK_LINE(712)
		int tmp = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(712)
		int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(712)
		Float tmp2 = (Float(tmp1) / Float((int)255));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(712)
		Float tmp3 = ((int)1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(712)
		int tmp4 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(712)
		int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(712)
		Float tmp6 = (Float(tmp5) / Float((int)255));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(712)
		int tmp7 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(712)
		int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(712)
		Float tmp9 = (Float(tmp8) / Float((int)255));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(712)
		int tmp10 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(712)
		Float tmp11 = (Float(tmp10) / Float((int)255));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(712)
		Float tmp12 = ::Math_obj::max(tmp9,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(712)
		Float tmp13 = ::Math_obj::max(tmp6,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(712)
		Float tmp14 = ((int)1 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(712)
		Float tmp15 = (tmp3 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(712)
		int tmp16 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(712)
		int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(712)
		Float tmp18 = (Float(tmp17) / Float((int)255));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(712)
		int tmp19 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(712)
		int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(712)
		Float tmp21 = (Float(tmp20) / Float((int)255));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(712)
		int tmp22 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(712)
		Float tmp23 = (Float(tmp22) / Float((int)255));		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(712)
		Float tmp24 = ::Math_obj::max(tmp21,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(712)
		Float tmp25 = ::Math_obj::max(tmp18,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(712)
		Float tmp26 = (Float(tmp15) / Float(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(712)
		Float Cyan = tmp26;		HX_STACK_VAR(Cyan,"Cyan");
		HX_STACK_LINE(712)
		int tmp27 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(712)
		int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(712)
		Float tmp29 = (Float(tmp28) / Float((int)255));		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(712)
		Float tmp30 = ((int)1 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(712)
		int tmp31 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(712)
		int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(712)
		Float tmp33 = (Float(tmp32) / Float((int)255));		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(712)
		int tmp34 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(712)
		int tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(712)
		Float tmp36 = (Float(tmp35) / Float((int)255));		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(712)
		int tmp37 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(712)
		Float tmp38 = (Float(tmp37) / Float((int)255));		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(712)
		Float tmp39 = ::Math_obj::max(tmp36,tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(712)
		Float tmp40 = ::Math_obj::max(tmp33,tmp39);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(712)
		Float tmp41 = ((int)1 - tmp40);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(712)
		Float tmp42 = (tmp30 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(712)
		int tmp43 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(712)
		int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(712)
		Float tmp45 = (Float(tmp44) / Float((int)255));		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(712)
		int tmp46 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(712)
		int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(712)
		Float tmp48 = (Float(tmp47) / Float((int)255));		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(712)
		int tmp49 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(712)
		Float tmp50 = (Float(tmp49) / Float((int)255));		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(712)
		Float tmp51 = ::Math_obj::max(tmp48,tmp50);		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(712)
		Float tmp52 = ::Math_obj::max(tmp45,tmp51);		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(712)
		Float tmp53 = (Float(tmp42) / Float(tmp52));		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(712)
		Float Magenta = tmp53;		HX_STACK_VAR(Magenta,"Magenta");
		HX_STACK_LINE(712)
		int tmp54 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(712)
		Float tmp55 = (Float(tmp54) / Float((int)255));		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(712)
		Float tmp56 = ((int)1 - tmp55);		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(712)
		int tmp57 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(712)
		int tmp58 = (int(tmp57) & int((int)255));		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(712)
		Float tmp59 = (Float(tmp58) / Float((int)255));		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(712)
		int tmp60 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(712)
		int tmp61 = (int(tmp60) & int((int)255));		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(712)
		Float tmp62 = (Float(tmp61) / Float((int)255));		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(712)
		int tmp63 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(712)
		Float tmp64 = (Float(tmp63) / Float((int)255));		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(712)
		Float tmp65 = ::Math_obj::max(tmp62,tmp64);		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(712)
		Float tmp66 = ::Math_obj::max(tmp59,tmp65);		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(712)
		Float tmp67 = ((int)1 - tmp66);		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(712)
		Float tmp68 = (tmp56 - tmp67);		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(712)
		int tmp69 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(712)
		int tmp70 = (int(tmp69) & int((int)255));		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(712)
		Float tmp71 = (Float(tmp70) / Float((int)255));		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(712)
		int tmp72 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(712)
		int tmp73 = (int(tmp72) & int((int)255));		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(712)
		Float tmp74 = (Float(tmp73) / Float((int)255));		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(712)
		int tmp75 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(712)
		Float tmp76 = (Float(tmp75) / Float((int)255));		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(712)
		Float tmp77 = ::Math_obj::max(tmp74,tmp76);		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(712)
		Float tmp78 = ::Math_obj::max(tmp71,tmp77);		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(712)
		Float tmp79 = (Float(tmp68) / Float(tmp78));		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(712)
		Float Yellow = tmp79;		HX_STACK_VAR(Yellow,"Yellow");
		HX_STACK_LINE(712)
		int tmp80 = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(712)
		int tmp81 = (int(tmp80) & int((int)255));		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(712)
		Float tmp82 = (Float(tmp81) / Float((int)255));		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(712)
		Float Alpha = tmp82;		HX_STACK_VAR(Alpha,"Alpha");
		HX_STACK_LINE(712)
		{
			HX_STACK_LINE(712)
			Float tmp83 = ((int)1 - Cyan);		HX_STACK_VAR(tmp83,"tmp83");
			HX_STACK_LINE(712)
			Float tmp84 = ((int)1 - Value);		HX_STACK_VAR(tmp84,"tmp84");
			HX_STACK_LINE(712)
			Float tmp85 = (tmp83 * tmp84);		HX_STACK_VAR(tmp85,"tmp85");
			HX_STACK_LINE(712)
			Float Value1 = tmp85;		HX_STACK_VAR(Value1,"Value1");
			HX_STACK_LINE(712)
			{
				HX_STACK_LINE(712)
				Float tmp86 = (Value1 * (int)255);		HX_STACK_VAR(tmp86,"tmp86");
				HX_STACK_LINE(712)
				int tmp87 = ::Math_obj::round(tmp86);		HX_STACK_VAR(tmp87,"tmp87");
				HX_STACK_LINE(712)
				int Value2 = tmp87;		HX_STACK_VAR(Value2,"Value2");
				HX_STACK_LINE(712)
				hx::AndEq(this1,(int)-16711681);
				HX_STACK_LINE(712)
				bool tmp88 = (Value2 > (int)255);		HX_STACK_VAR(tmp88,"tmp88");
				HX_STACK_LINE(712)
				int tmp89;		HX_STACK_VAR(tmp89,"tmp89");
				HX_STACK_LINE(712)
				if ((tmp88)){
					HX_STACK_LINE(712)
					tmp89 = (int)255;
				}
				else{
					HX_STACK_LINE(712)
					bool tmp90 = (Value2 < (int)0);		HX_STACK_VAR(tmp90,"tmp90");
					HX_STACK_LINE(712)
					if ((tmp90)){
						HX_STACK_LINE(712)
						tmp89 = (int)0;
					}
					else{
						HX_STACK_LINE(712)
						tmp89 = Value2;
					}
				}
				HX_STACK_LINE(712)
				int tmp90 = (int(tmp89) << int((int)16));		HX_STACK_VAR(tmp90,"tmp90");
				HX_STACK_LINE(712)
				hx::OrEq(this1,tmp90);
				HX_STACK_LINE(712)
				Value2;
			}
			HX_STACK_LINE(712)
			Value1;
		}
		HX_STACK_LINE(712)
		{
			HX_STACK_LINE(712)
			Float tmp83 = ((int)1 - Magenta);		HX_STACK_VAR(tmp83,"tmp83");
			HX_STACK_LINE(712)
			Float tmp84 = ((int)1 - Value);		HX_STACK_VAR(tmp84,"tmp84");
			HX_STACK_LINE(712)
			Float tmp85 = (tmp83 * tmp84);		HX_STACK_VAR(tmp85,"tmp85");
			HX_STACK_LINE(712)
			Float Value1 = tmp85;		HX_STACK_VAR(Value1,"Value1");
			HX_STACK_LINE(712)
			{
				HX_STACK_LINE(712)
				Float tmp86 = (Value1 * (int)255);		HX_STACK_VAR(tmp86,"tmp86");
				HX_STACK_LINE(712)
				int tmp87 = ::Math_obj::round(tmp86);		HX_STACK_VAR(tmp87,"tmp87");
				HX_STACK_LINE(712)
				int Value2 = tmp87;		HX_STACK_VAR(Value2,"Value2");
				HX_STACK_LINE(712)
				hx::AndEq(this1,(int)-65281);
				HX_STACK_LINE(712)
				bool tmp88 = (Value2 > (int)255);		HX_STACK_VAR(tmp88,"tmp88");
				HX_STACK_LINE(712)
				int tmp89;		HX_STACK_VAR(tmp89,"tmp89");
				HX_STACK_LINE(712)
				if ((tmp88)){
					HX_STACK_LINE(712)
					tmp89 = (int)255;
				}
				else{
					HX_STACK_LINE(712)
					bool tmp90 = (Value2 < (int)0);		HX_STACK_VAR(tmp90,"tmp90");
					HX_STACK_LINE(712)
					if ((tmp90)){
						HX_STACK_LINE(712)
						tmp89 = (int)0;
					}
					else{
						HX_STACK_LINE(712)
						tmp89 = Value2;
					}
				}
				HX_STACK_LINE(712)
				int tmp90 = (int(tmp89) << int((int)8));		HX_STACK_VAR(tmp90,"tmp90");
				HX_STACK_LINE(712)
				hx::OrEq(this1,tmp90);
				HX_STACK_LINE(712)
				Value2;
			}
			HX_STACK_LINE(712)
			Value1;
		}
		HX_STACK_LINE(712)
		{
			HX_STACK_LINE(712)
			Float tmp83 = ((int)1 - Yellow);		HX_STACK_VAR(tmp83,"tmp83");
			HX_STACK_LINE(712)
			Float tmp84 = ((int)1 - Value);		HX_STACK_VAR(tmp84,"tmp84");
			HX_STACK_LINE(712)
			Float tmp85 = (tmp83 * tmp84);		HX_STACK_VAR(tmp85,"tmp85");
			HX_STACK_LINE(712)
			Float Value1 = tmp85;		HX_STACK_VAR(Value1,"Value1");
			HX_STACK_LINE(712)
			{
				HX_STACK_LINE(712)
				Float tmp86 = (Value1 * (int)255);		HX_STACK_VAR(tmp86,"tmp86");
				HX_STACK_LINE(712)
				int tmp87 = ::Math_obj::round(tmp86);		HX_STACK_VAR(tmp87,"tmp87");
				HX_STACK_LINE(712)
				int Value2 = tmp87;		HX_STACK_VAR(Value2,"Value2");
				HX_STACK_LINE(712)
				hx::AndEq(this1,(int)-256);
				HX_STACK_LINE(712)
				bool tmp88 = (Value2 > (int)255);		HX_STACK_VAR(tmp88,"tmp88");
				HX_STACK_LINE(712)
				int tmp89;		HX_STACK_VAR(tmp89,"tmp89");
				HX_STACK_LINE(712)
				if ((tmp88)){
					HX_STACK_LINE(712)
					tmp89 = (int)255;
				}
				else{
					HX_STACK_LINE(712)
					bool tmp90 = (Value2 < (int)0);		HX_STACK_VAR(tmp90,"tmp90");
					HX_STACK_LINE(712)
					if ((tmp90)){
						HX_STACK_LINE(712)
						tmp89 = (int)0;
					}
					else{
						HX_STACK_LINE(712)
						tmp89 = Value2;
					}
				}
				HX_STACK_LINE(712)
				hx::OrEq(this1,tmp89);
				HX_STACK_LINE(712)
				Value2;
			}
			HX_STACK_LINE(712)
			Value1;
		}
		HX_STACK_LINE(712)
		{
			HX_STACK_LINE(712)
			{
				HX_STACK_LINE(712)
				Float tmp83 = (Alpha * (int)255);		HX_STACK_VAR(tmp83,"tmp83");
				HX_STACK_LINE(712)
				int tmp84 = ::Math_obj::round(tmp83);		HX_STACK_VAR(tmp84,"tmp84");
				HX_STACK_LINE(712)
				int Value1 = tmp84;		HX_STACK_VAR(Value1,"Value1");
				HX_STACK_LINE(712)
				hx::AndEq(this1,(int)16777215);
				HX_STACK_LINE(712)
				bool tmp85 = (Value1 > (int)255);		HX_STACK_VAR(tmp85,"tmp85");
				HX_STACK_LINE(712)
				int tmp86;		HX_STACK_VAR(tmp86,"tmp86");
				HX_STACK_LINE(712)
				if ((tmp85)){
					HX_STACK_LINE(712)
					tmp86 = (int)255;
				}
				else{
					HX_STACK_LINE(712)
					bool tmp87 = (Value1 < (int)0);		HX_STACK_VAR(tmp87,"tmp87");
					HX_STACK_LINE(712)
					if ((tmp87)){
						HX_STACK_LINE(712)
						tmp86 = (int)0;
					}
					else{
						HX_STACK_LINE(712)
						tmp86 = Value1;
					}
				}
				HX_STACK_LINE(712)
				int tmp87 = (int(tmp86) << int((int)24));		HX_STACK_VAR(tmp87,"tmp87");
				HX_STACK_LINE(712)
				hx::OrEq(this1,tmp87);
				HX_STACK_LINE(712)
				Value1;
			}
			HX_STACK_LINE(712)
			Alpha;
		}
		HX_STACK_LINE(712)
		this1;
	}
	HX_STACK_LINE(713)
	Float tmp = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(713)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,set_black,return )

Float FlxColor_Impl__obj::get_hue( int this1){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","get_hue",0xab0a02ea,"flixel.util._FlxColor.FlxColor_Impl_.get_hue","flixel/util/FlxColor.hx",717,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(718)
	Float tmp = ::Math_obj::sqrt((int)3);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(718)
	int tmp1 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(718)
	int tmp2 = (int(tmp1) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(718)
	Float tmp3 = (Float(tmp2) / Float((int)255));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(718)
	int tmp4 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(718)
	Float tmp5 = (Float(tmp4) / Float((int)255));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(718)
	Float tmp6 = (tmp3 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(718)
	Float tmp7 = (tmp * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(718)
	int tmp8 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(718)
	int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(718)
	Float tmp10 = (Float(tmp9) / Float((int)255));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(718)
	Float tmp11 = ((int)2 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(718)
	int tmp12 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(718)
	int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(718)
	Float tmp14 = (Float(tmp13) / Float((int)255));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(718)
	Float tmp15 = (tmp11 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(718)
	int tmp16 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(718)
	Float tmp17 = (Float(tmp16) / Float((int)255));		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(718)
	Float tmp18 = (tmp15 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(718)
	Float tmp19 = ::Math_obj::atan2(tmp7,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(718)
	Float hueRad = tmp19;		HX_STACK_VAR(hueRad,"hueRad");
	HX_STACK_LINE(719)
	Float hue = (int)0;		HX_STACK_VAR(hue,"hue");
	HX_STACK_LINE(720)
	bool tmp20 = (hueRad != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(720)
	if ((tmp20)){
		HX_STACK_LINE(722)
		Float tmp21 = ::Math_obj::PI;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(722)
		Float tmp22 = (Float((int)180) / Float(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(722)
		Float tmp23 = ::Math_obj::sqrt((int)3);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(722)
		int tmp24 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(722)
		int tmp25 = (int(tmp24) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(722)
		Float tmp26 = (Float(tmp25) / Float((int)255));		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(722)
		int tmp27 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(722)
		Float tmp28 = (Float(tmp27) / Float((int)255));		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(722)
		Float tmp29 = (tmp26 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(722)
		Float tmp30 = (tmp23 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(722)
		int tmp31 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(722)
		int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(722)
		Float tmp33 = (Float(tmp32) / Float((int)255));		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(722)
		Float tmp34 = ((int)2 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(722)
		int tmp35 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(722)
		int tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(722)
		Float tmp37 = (Float(tmp36) / Float((int)255));		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(722)
		Float tmp38 = (tmp34 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(722)
		int tmp39 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(722)
		Float tmp40 = (Float(tmp39) / Float((int)255));		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(722)
		Float tmp41 = (tmp38 - tmp40);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(722)
		Float tmp42 = ::Math_obj::atan2(tmp30,tmp41);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(722)
		Float tmp43 = (tmp22 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(722)
		hue = tmp43;
	}
	HX_STACK_LINE(725)
	bool tmp21 = (hue < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(725)
	Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(725)
	if ((tmp21)){
		HX_STACK_LINE(725)
		tmp22 = (hue + (int)360);
	}
	else{
		HX_STACK_LINE(725)
		tmp22 = hue;
	}
	HX_STACK_LINE(725)
	return tmp22;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,get_hue,return )

Float FlxColor_Impl__obj::get_brightness( int this1){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","get_brightness",0x252b65df,"flixel.util._FlxColor.FlxColor_Impl_.get_brightness","flixel/util/FlxColor.hx",729,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(730)
	int tmp = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(730)
	int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(730)
	Float tmp2 = (Float(tmp1) / Float((int)255));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(730)
	int tmp3 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(730)
	int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(730)
	Float tmp5 = (Float(tmp4) / Float((int)255));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(730)
	int tmp6 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(730)
	Float tmp7 = (Float(tmp6) / Float((int)255));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(730)
	Float tmp8 = ::Math_obj::max(tmp5,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(730)
	Float tmp9 = ::Math_obj::max(tmp2,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(730)
	return tmp9;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,get_brightness,return )

Float FlxColor_Impl__obj::get_saturation( int this1){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","get_saturation",0xb65babe0,"flixel.util._FlxColor.FlxColor_Impl_.get_saturation","flixel/util/FlxColor.hx",734,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(735)
	int tmp = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(735)
	int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(735)
	Float tmp2 = (Float(tmp1) / Float((int)255));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(735)
	int tmp3 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(735)
	int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(735)
	Float tmp5 = (Float(tmp4) / Float((int)255));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(735)
	int tmp6 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(735)
	Float tmp7 = (Float(tmp6) / Float((int)255));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(735)
	Float tmp8 = ::Math_obj::max(tmp5,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(735)
	Float tmp9 = ::Math_obj::max(tmp2,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(735)
	int tmp10 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(735)
	int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(735)
	Float tmp12 = (Float(tmp11) / Float((int)255));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(735)
	int tmp13 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(735)
	int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(735)
	Float tmp15 = (Float(tmp14) / Float((int)255));		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(735)
	int tmp16 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(735)
	Float tmp17 = (Float(tmp16) / Float((int)255));		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(735)
	Float tmp18 = ::Math_obj::min(tmp15,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(735)
	Float tmp19 = ::Math_obj::min(tmp12,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(735)
	Float tmp20 = (tmp9 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(735)
	int tmp21 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(735)
	int tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(735)
	Float tmp23 = (Float(tmp22) / Float((int)255));		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(735)
	int tmp24 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(735)
	int tmp25 = (int(tmp24) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(735)
	Float tmp26 = (Float(tmp25) / Float((int)255));		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(735)
	int tmp27 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(735)
	Float tmp28 = (Float(tmp27) / Float((int)255));		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(735)
	Float tmp29 = ::Math_obj::max(tmp26,tmp28);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(735)
	Float tmp30 = ::Math_obj::max(tmp23,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(735)
	Float tmp31 = (Float(tmp20) / Float(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(735)
	return tmp31;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,get_saturation,return )

Float FlxColor_Impl__obj::get_lightness( int this1){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","get_lightness",0x5544981f,"flixel.util._FlxColor.FlxColor_Impl_.get_lightness","flixel/util/FlxColor.hx",739,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(740)
	int tmp = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(740)
	int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(740)
	Float tmp2 = (Float(tmp1) / Float((int)255));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(740)
	int tmp3 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(740)
	int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(740)
	Float tmp5 = (Float(tmp4) / Float((int)255));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(740)
	int tmp6 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(740)
	Float tmp7 = (Float(tmp6) / Float((int)255));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(740)
	Float tmp8 = ::Math_obj::max(tmp5,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(740)
	Float tmp9 = ::Math_obj::max(tmp2,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(740)
	int tmp10 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(740)
	int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(740)
	Float tmp12 = (Float(tmp11) / Float((int)255));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(740)
	int tmp13 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(740)
	int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(740)
	Float tmp15 = (Float(tmp14) / Float((int)255));		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(740)
	int tmp16 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(740)
	Float tmp17 = (Float(tmp16) / Float((int)255));		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(740)
	Float tmp18 = ::Math_obj::min(tmp15,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(740)
	Float tmp19 = ::Math_obj::min(tmp12,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(740)
	Float tmp20 = (tmp9 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(740)
	Float tmp21 = (Float(tmp20) / Float((int)2));		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(740)
	return tmp21;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,get_lightness,return )

Float FlxColor_Impl__obj::set_hue( int this1,Float Value){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","set_hue",0x9e0b93f6,"flixel.util._FlxColor.FlxColor_Impl_.set_hue","flixel/util/FlxColor.hx",744,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(745)
	{
		HX_STACK_LINE(745)
		int tmp = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(745)
		int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(745)
		Float tmp2 = (Float(tmp1) / Float((int)255));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(745)
		int tmp3 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(745)
		int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(745)
		Float tmp5 = (Float(tmp4) / Float((int)255));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(745)
		int tmp6 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(745)
		Float tmp7 = (Float(tmp6) / Float((int)255));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(745)
		Float tmp8 = ::Math_obj::max(tmp5,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(745)
		Float tmp9 = ::Math_obj::max(tmp2,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(745)
		int tmp10 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(745)
		int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(745)
		Float tmp12 = (Float(tmp11) / Float((int)255));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(745)
		int tmp13 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(745)
		int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(745)
		Float tmp15 = (Float(tmp14) / Float((int)255));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(745)
		int tmp16 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(745)
		Float tmp17 = (Float(tmp16) / Float((int)255));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(745)
		Float tmp18 = ::Math_obj::min(tmp15,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(745)
		Float tmp19 = ::Math_obj::min(tmp12,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(745)
		Float tmp20 = (tmp9 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(745)
		int tmp21 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(745)
		int tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(745)
		Float tmp23 = (Float(tmp22) / Float((int)255));		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(745)
		int tmp24 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(745)
		int tmp25 = (int(tmp24) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(745)
		Float tmp26 = (Float(tmp25) / Float((int)255));		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(745)
		int tmp27 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(745)
		Float tmp28 = (Float(tmp27) / Float((int)255));		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(745)
		Float tmp29 = ::Math_obj::max(tmp26,tmp28);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(745)
		Float tmp30 = ::Math_obj::max(tmp23,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(745)
		Float tmp31 = (Float(tmp20) / Float(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(745)
		Float Saturation = tmp31;		HX_STACK_VAR(Saturation,"Saturation");
		HX_STACK_LINE(745)
		int tmp32 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(745)
		int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(745)
		Float tmp34 = (Float(tmp33) / Float((int)255));		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(745)
		int tmp35 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(745)
		int tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(745)
		Float tmp37 = (Float(tmp36) / Float((int)255));		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(745)
		int tmp38 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(745)
		Float tmp39 = (Float(tmp38) / Float((int)255));		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(745)
		Float tmp40 = ::Math_obj::max(tmp37,tmp39);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(745)
		Float tmp41 = ::Math_obj::max(tmp34,tmp40);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(745)
		Float Brightness = tmp41;		HX_STACK_VAR(Brightness,"Brightness");
		HX_STACK_LINE(745)
		int tmp42 = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(745)
		int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(745)
		Float tmp44 = (Float(tmp43) / Float((int)255));		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(745)
		Float Alpha = tmp44;		HX_STACK_VAR(Alpha,"Alpha");
		HX_STACK_LINE(745)
		Float tmp45 = (Brightness * Saturation);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(745)
		Float chroma = tmp45;		HX_STACK_VAR(chroma,"chroma");
		HX_STACK_LINE(745)
		Float tmp46 = (Brightness - chroma);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(745)
		Float match = tmp46;		HX_STACK_VAR(match,"match");
		HX_STACK_LINE(745)
		{
			HX_STACK_LINE(745)
			Float Hue = Value;		HX_STACK_VAR(Hue,"Hue");
			HX_STACK_LINE(745)
			Float Chroma = chroma;		HX_STACK_VAR(Chroma,"Chroma");
			HX_STACK_LINE(745)
			hx::ModEq(Hue,(int)360);
			HX_STACK_LINE(745)
			Float tmp47 = (Float(Hue) / Float((int)60));		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(745)
			Float hueD = tmp47;		HX_STACK_VAR(hueD,"hueD");
			HX_STACK_LINE(745)
			Float tmp48 = Chroma;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(745)
			Float tmp49 = hx::Mod(hueD,(int)2);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(745)
			Float tmp50 = (tmp49 - (int)1);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(745)
			Float tmp51 = ::Math_obj::abs(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(745)
			Float tmp52 = ((int)1 - tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(745)
			Float tmp53 = (tmp48 * tmp52);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(745)
			Float tmp54 = match;		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(745)
			Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(745)
			Float mid = tmp55;		HX_STACK_VAR(mid,"mid");
			HX_STACK_LINE(745)
			hx::AddEq(Chroma,match);
			HX_STACK_LINE(745)
			{
				HX_STACK_LINE(745)
				Float tmp56 = hueD;		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(745)
				int tmp57 = ::Std_obj::_int(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(745)
				int _g = tmp57;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(745)
				int tmp58 = _g;		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(745)
				switch( (int)(tmp58)){
					case (int)0: {
						HX_STACK_LINE(745)
						int tmp59;		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(745)
						{
							HX_STACK_LINE(745)
							{
								HX_STACK_LINE(745)
								{
									HX_STACK_LINE(745)
									Float tmp60 = (Chroma * (int)255);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(745)
									int tmp61 = ::Math_obj::round(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(745)
									int Value1 = tmp61;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(745)
									hx::AndEq(this1,(int)-16711681);
									HX_STACK_LINE(745)
									bool tmp62 = (Value1 > (int)255);		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(745)
									int tmp63;		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(745)
									if ((tmp62)){
										HX_STACK_LINE(745)
										tmp63 = (int)255;
									}
									else{
										HX_STACK_LINE(745)
										bool tmp64 = (Value1 < (int)0);		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(745)
										if ((tmp64)){
											HX_STACK_LINE(745)
											tmp63 = (int)0;
										}
										else{
											HX_STACK_LINE(745)
											tmp63 = Value1;
										}
									}
									HX_STACK_LINE(745)
									int tmp64 = (int(tmp63) << int((int)16));		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(745)
									hx::OrEq(this1,tmp64);
									HX_STACK_LINE(745)
									Value1;
								}
								HX_STACK_LINE(745)
								Chroma;
							}
							HX_STACK_LINE(745)
							{
								HX_STACK_LINE(745)
								{
									HX_STACK_LINE(745)
									Float tmp60 = (mid * (int)255);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(745)
									int tmp61 = ::Math_obj::round(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(745)
									int Value1 = tmp61;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(745)
									hx::AndEq(this1,(int)-65281);
									HX_STACK_LINE(745)
									bool tmp62 = (Value1 > (int)255);		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(745)
									int tmp63;		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(745)
									if ((tmp62)){
										HX_STACK_LINE(745)
										tmp63 = (int)255;
									}
									else{
										HX_STACK_LINE(745)
										bool tmp64 = (Value1 < (int)0);		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(745)
										if ((tmp64)){
											HX_STACK_LINE(745)
											tmp63 = (int)0;
										}
										else{
											HX_STACK_LINE(745)
											tmp63 = Value1;
										}
									}
									HX_STACK_LINE(745)
									int tmp64 = (int(tmp63) << int((int)8));		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(745)
									hx::OrEq(this1,tmp64);
									HX_STACK_LINE(745)
									Value1;
								}
								HX_STACK_LINE(745)
								mid;
							}
							HX_STACK_LINE(745)
							{
								HX_STACK_LINE(745)
								{
									HX_STACK_LINE(745)
									Float tmp60 = (match * (int)255);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(745)
									int tmp61 = ::Math_obj::round(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(745)
									int Value1 = tmp61;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(745)
									hx::AndEq(this1,(int)-256);
									HX_STACK_LINE(745)
									bool tmp62 = (Value1 > (int)255);		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(745)
									int tmp63;		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(745)
									if ((tmp62)){
										HX_STACK_LINE(745)
										tmp63 = (int)255;
									}
									else{
										HX_STACK_LINE(745)
										bool tmp64 = (Value1 < (int)0);		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(745)
										if ((tmp64)){
											HX_STACK_LINE(745)
											tmp63 = (int)0;
										}
										else{
											HX_STACK_LINE(745)
											tmp63 = Value1;
										}
									}
									HX_STACK_LINE(745)
									hx::OrEq(this1,tmp63);
									HX_STACK_LINE(745)
									Value1;
								}
								HX_STACK_LINE(745)
								match;
							}
							HX_STACK_LINE(745)
							{
								HX_STACK_LINE(745)
								{
									HX_STACK_LINE(745)
									Float tmp60 = (Alpha * (int)255);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(745)
									int tmp61 = ::Math_obj::round(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(745)
									int Value1 = tmp61;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(745)
									hx::AndEq(this1,(int)16777215);
									HX_STACK_LINE(745)
									bool tmp62 = (Value1 > (int)255);		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(745)
									int tmp63;		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(745)
									if ((tmp62)){
										HX_STACK_LINE(745)
										tmp63 = (int)255;
									}
									else{
										HX_STACK_LINE(745)
										bool tmp64 = (Value1 < (int)0);		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(745)
										if ((tmp64)){
											HX_STACK_LINE(745)
											tmp63 = (int)0;
										}
										else{
											HX_STACK_LINE(745)
											tmp63 = Value1;
										}
									}
									HX_STACK_LINE(745)
									int tmp64 = (int(tmp63) << int((int)24));		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(745)
									hx::OrEq(this1,tmp64);
									HX_STACK_LINE(745)
									Value1;
								}
								HX_STACK_LINE(745)
								Alpha;
							}
							HX_STACK_LINE(745)
							tmp59 = this1;
						}
						HX_STACK_LINE(745)
						tmp59;
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(745)
						int tmp59;		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(745)
						{
							HX_STACK_LINE(745)
							{
								HX_STACK_LINE(745)
								{
									HX_STACK_LINE(745)
									Float tmp60 = (mid * (int)255);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(745)
									int tmp61 = ::Math_obj::round(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(745)
									int Value1 = tmp61;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(745)
									hx::AndEq(this1,(int)-16711681);
									HX_STACK_LINE(745)
									bool tmp62 = (Value1 > (int)255);		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(745)
									int tmp63;		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(745)
									if ((tmp62)){
										HX_STACK_LINE(745)
										tmp63 = (int)255;
									}
									else{
										HX_STACK_LINE(745)
										bool tmp64 = (Value1 < (int)0);		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(745)
										if ((tmp64)){
											HX_STACK_LINE(745)
											tmp63 = (int)0;
										}
										else{
											HX_STACK_LINE(745)
											tmp63 = Value1;
										}
									}
									HX_STACK_LINE(745)
									int tmp64 = (int(tmp63) << int((int)16));		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(745)
									hx::OrEq(this1,tmp64);
									HX_STACK_LINE(745)
									Value1;
								}
								HX_STACK_LINE(745)
								mid;
							}
							HX_STACK_LINE(745)
							{
								HX_STACK_LINE(745)
								{
									HX_STACK_LINE(745)
									Float tmp60 = (Chroma * (int)255);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(745)
									int tmp61 = ::Math_obj::round(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(745)
									int Value1 = tmp61;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(745)
									hx::AndEq(this1,(int)-65281);
									HX_STACK_LINE(745)
									bool tmp62 = (Value1 > (int)255);		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(745)
									int tmp63;		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(745)
									if ((tmp62)){
										HX_STACK_LINE(745)
										tmp63 = (int)255;
									}
									else{
										HX_STACK_LINE(745)
										bool tmp64 = (Value1 < (int)0);		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(745)
										if ((tmp64)){
											HX_STACK_LINE(745)
											tmp63 = (int)0;
										}
										else{
											HX_STACK_LINE(745)
											tmp63 = Value1;
										}
									}
									HX_STACK_LINE(745)
									int tmp64 = (int(tmp63) << int((int)8));		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(745)
									hx::OrEq(this1,tmp64);
									HX_STACK_LINE(745)
									Value1;
								}
								HX_STACK_LINE(745)
								Chroma;
							}
							HX_STACK_LINE(745)
							{
								HX_STACK_LINE(745)
								{
									HX_STACK_LINE(745)
									Float tmp60 = (match * (int)255);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(745)
									int tmp61 = ::Math_obj::round(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(745)
									int Value1 = tmp61;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(745)
									hx::AndEq(this1,(int)-256);
									HX_STACK_LINE(745)
									bool tmp62 = (Value1 > (int)255);		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(745)
									int tmp63;		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(745)
									if ((tmp62)){
										HX_STACK_LINE(745)
										tmp63 = (int)255;
									}
									else{
										HX_STACK_LINE(745)
										bool tmp64 = (Value1 < (int)0);		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(745)
										if ((tmp64)){
											HX_STACK_LINE(745)
											tmp63 = (int)0;
										}
										else{
											HX_STACK_LINE(745)
											tmp63 = Value1;
										}
									}
									HX_STACK_LINE(745)
									hx::OrEq(this1,tmp63);
									HX_STACK_LINE(745)
									Value1;
								}
								HX_STACK_LINE(745)
								match;
							}
							HX_STACK_LINE(745)
							{
								HX_STACK_LINE(745)
								{
									HX_STACK_LINE(745)
									Float tmp60 = (Alpha * (int)255);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(745)
									int tmp61 = ::Math_obj::round(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(745)
									int Value1 = tmp61;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(745)
									hx::AndEq(this1,(int)16777215);
									HX_STACK_LINE(745)
									bool tmp62 = (Value1 > (int)255);		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(745)
									int tmp63;		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(745)
									if ((tmp62)){
										HX_STACK_LINE(745)
										tmp63 = (int)255;
									}
									else{
										HX_STACK_LINE(745)
										bool tmp64 = (Value1 < (int)0);		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(745)
										if ((tmp64)){
											HX_STACK_LINE(745)
											tmp63 = (int)0;
										}
										else{
											HX_STACK_LINE(745)
											tmp63 = Value1;
										}
									}
									HX_STACK_LINE(745)
									int tmp64 = (int(tmp63) << int((int)24));		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(745)
									hx::OrEq(this1,tmp64);
									HX_STACK_LINE(745)
									Value1;
								}
								HX_STACK_LINE(745)
								Alpha;
							}
							HX_STACK_LINE(745)
							tmp59 = this1;
						}
						HX_STACK_LINE(745)
						tmp59;
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(745)
						int tmp59;		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(745)
						{
							HX_STACK_LINE(745)
							{
								HX_STACK_LINE(745)
								{
									HX_STACK_LINE(745)
									Float tmp60 = (match * (int)255);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(745)
									int tmp61 = ::Math_obj::round(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(745)
									int Value1 = tmp61;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(745)
									hx::AndEq(this1,(int)-16711681);
									HX_STACK_LINE(745)
									bool tmp62 = (Value1 > (int)255);		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(745)
									int tmp63;		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(745)
									if ((tmp62)){
										HX_STACK_LINE(745)
										tmp63 = (int)255;
									}
									else{
										HX_STACK_LINE(745)
										bool tmp64 = (Value1 < (int)0);		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(745)
										if ((tmp64)){
											HX_STACK_LINE(745)
											tmp63 = (int)0;
										}
										else{
											HX_STACK_LINE(745)
											tmp63 = Value1;
										}
									}
									HX_STACK_LINE(745)
									int tmp64 = (int(tmp63) << int((int)16));		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(745)
									hx::OrEq(this1,tmp64);
									HX_STACK_LINE(745)
									Value1;
								}
								HX_STACK_LINE(745)
								match;
							}
							HX_STACK_LINE(745)
							{
								HX_STACK_LINE(745)
								{
									HX_STACK_LINE(745)
									Float tmp60 = (Chroma * (int)255);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(745)
									int tmp61 = ::Math_obj::round(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(745)
									int Value1 = tmp61;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(745)
									hx::AndEq(this1,(int)-65281);
									HX_STACK_LINE(745)
									bool tmp62 = (Value1 > (int)255);		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(745)
									int tmp63;		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(745)
									if ((tmp62)){
										HX_STACK_LINE(745)
										tmp63 = (int)255;
									}
									else{
										HX_STACK_LINE(745)
										bool tmp64 = (Value1 < (int)0);		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(745)
										if ((tmp64)){
											HX_STACK_LINE(745)
											tmp63 = (int)0;
										}
										else{
											HX_STACK_LINE(745)
											tmp63 = Value1;
										}
									}
									HX_STACK_LINE(745)
									int tmp64 = (int(tmp63) << int((int)8));		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(745)
									hx::OrEq(this1,tmp64);
									HX_STACK_LINE(745)
									Value1;
								}
								HX_STACK_LINE(745)
								Chroma;
							}
							HX_STACK_LINE(745)
							{
								HX_STACK_LINE(745)
								{
									HX_STACK_LINE(745)
									Float tmp60 = (mid * (int)255);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(745)
									int tmp61 = ::Math_obj::round(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(745)
									int Value1 = tmp61;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(745)
									hx::AndEq(this1,(int)-256);
									HX_STACK_LINE(745)
									bool tmp62 = (Value1 > (int)255);		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(745)
									int tmp63;		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(745)
									if ((tmp62)){
										HX_STACK_LINE(745)
										tmp63 = (int)255;
									}
									else{
										HX_STACK_LINE(745)
										bool tmp64 = (Value1 < (int)0);		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(745)
										if ((tmp64)){
											HX_STACK_LINE(745)
											tmp63 = (int)0;
										}
										else{
											HX_STACK_LINE(745)
											tmp63 = Value1;
										}
									}
									HX_STACK_LINE(745)
									hx::OrEq(this1,tmp63);
									HX_STACK_LINE(745)
									Value1;
								}
								HX_STACK_LINE(745)
								mid;
							}
							HX_STACK_LINE(745)
							{
								HX_STACK_LINE(745)
								{
									HX_STACK_LINE(745)
									Float tmp60 = (Alpha * (int)255);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(745)
									int tmp61 = ::Math_obj::round(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(745)
									int Value1 = tmp61;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(745)
									hx::AndEq(this1,(int)16777215);
									HX_STACK_LINE(745)
									bool tmp62 = (Value1 > (int)255);		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(745)
									int tmp63;		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(745)
									if ((tmp62)){
										HX_STACK_LINE(745)
										tmp63 = (int)255;
									}
									else{
										HX_STACK_LINE(745)
										bool tmp64 = (Value1 < (int)0);		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(745)
										if ((tmp64)){
											HX_STACK_LINE(745)
											tmp63 = (int)0;
										}
										else{
											HX_STACK_LINE(745)
											tmp63 = Value1;
										}
									}
									HX_STACK_LINE(745)
									int tmp64 = (int(tmp63) << int((int)24));		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(745)
									hx::OrEq(this1,tmp64);
									HX_STACK_LINE(745)
									Value1;
								}
								HX_STACK_LINE(745)
								Alpha;
							}
							HX_STACK_LINE(745)
							tmp59 = this1;
						}
						HX_STACK_LINE(745)
						tmp59;
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(745)
						int tmp59;		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(745)
						{
							HX_STACK_LINE(745)
							{
								HX_STACK_LINE(745)
								{
									HX_STACK_LINE(745)
									Float tmp60 = (match * (int)255);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(745)
									int tmp61 = ::Math_obj::round(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(745)
									int Value1 = tmp61;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(745)
									hx::AndEq(this1,(int)-16711681);
									HX_STACK_LINE(745)
									bool tmp62 = (Value1 > (int)255);		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(745)
									int tmp63;		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(745)
									if ((tmp62)){
										HX_STACK_LINE(745)
										tmp63 = (int)255;
									}
									else{
										HX_STACK_LINE(745)
										bool tmp64 = (Value1 < (int)0);		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(745)
										if ((tmp64)){
											HX_STACK_LINE(745)
											tmp63 = (int)0;
										}
										else{
											HX_STACK_LINE(745)
											tmp63 = Value1;
										}
									}
									HX_STACK_LINE(745)
									int tmp64 = (int(tmp63) << int((int)16));		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(745)
									hx::OrEq(this1,tmp64);
									HX_STACK_LINE(745)
									Value1;
								}
								HX_STACK_LINE(745)
								match;
							}
							HX_STACK_LINE(745)
							{
								HX_STACK_LINE(745)
								{
									HX_STACK_LINE(745)
									Float tmp60 = (mid * (int)255);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(745)
									int tmp61 = ::Math_obj::round(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(745)
									int Value1 = tmp61;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(745)
									hx::AndEq(this1,(int)-65281);
									HX_STACK_LINE(745)
									bool tmp62 = (Value1 > (int)255);		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(745)
									int tmp63;		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(745)
									if ((tmp62)){
										HX_STACK_LINE(745)
										tmp63 = (int)255;
									}
									else{
										HX_STACK_LINE(745)
										bool tmp64 = (Value1 < (int)0);		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(745)
										if ((tmp64)){
											HX_STACK_LINE(745)
											tmp63 = (int)0;
										}
										else{
											HX_STACK_LINE(745)
											tmp63 = Value1;
										}
									}
									HX_STACK_LINE(745)
									int tmp64 = (int(tmp63) << int((int)8));		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(745)
									hx::OrEq(this1,tmp64);
									HX_STACK_LINE(745)
									Value1;
								}
								HX_STACK_LINE(745)
								mid;
							}
							HX_STACK_LINE(745)
							{
								HX_STACK_LINE(745)
								{
									HX_STACK_LINE(745)
									Float tmp60 = (Chroma * (int)255);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(745)
									int tmp61 = ::Math_obj::round(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(745)
									int Value1 = tmp61;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(745)
									hx::AndEq(this1,(int)-256);
									HX_STACK_LINE(745)
									bool tmp62 = (Value1 > (int)255);		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(745)
									int tmp63;		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(745)
									if ((tmp62)){
										HX_STACK_LINE(745)
										tmp63 = (int)255;
									}
									else{
										HX_STACK_LINE(745)
										bool tmp64 = (Value1 < (int)0);		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(745)
										if ((tmp64)){
											HX_STACK_LINE(745)
											tmp63 = (int)0;
										}
										else{
											HX_STACK_LINE(745)
											tmp63 = Value1;
										}
									}
									HX_STACK_LINE(745)
									hx::OrEq(this1,tmp63);
									HX_STACK_LINE(745)
									Value1;
								}
								HX_STACK_LINE(745)
								Chroma;
							}
							HX_STACK_LINE(745)
							{
								HX_STACK_LINE(745)
								{
									HX_STACK_LINE(745)
									Float tmp60 = (Alpha * (int)255);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(745)
									int tmp61 = ::Math_obj::round(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(745)
									int Value1 = tmp61;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(745)
									hx::AndEq(this1,(int)16777215);
									HX_STACK_LINE(745)
									bool tmp62 = (Value1 > (int)255);		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(745)
									int tmp63;		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(745)
									if ((tmp62)){
										HX_STACK_LINE(745)
										tmp63 = (int)255;
									}
									else{
										HX_STACK_LINE(745)
										bool tmp64 = (Value1 < (int)0);		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(745)
										if ((tmp64)){
											HX_STACK_LINE(745)
											tmp63 = (int)0;
										}
										else{
											HX_STACK_LINE(745)
											tmp63 = Value1;
										}
									}
									HX_STACK_LINE(745)
									int tmp64 = (int(tmp63) << int((int)24));		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(745)
									hx::OrEq(this1,tmp64);
									HX_STACK_LINE(745)
									Value1;
								}
								HX_STACK_LINE(745)
								Alpha;
							}
							HX_STACK_LINE(745)
							tmp59 = this1;
						}
						HX_STACK_LINE(745)
						tmp59;
					}
					;break;
					case (int)4: {
						HX_STACK_LINE(745)
						int tmp59;		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(745)
						{
							HX_STACK_LINE(745)
							{
								HX_STACK_LINE(745)
								{
									HX_STACK_LINE(745)
									Float tmp60 = (mid * (int)255);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(745)
									int tmp61 = ::Math_obj::round(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(745)
									int Value1 = tmp61;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(745)
									hx::AndEq(this1,(int)-16711681);
									HX_STACK_LINE(745)
									bool tmp62 = (Value1 > (int)255);		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(745)
									int tmp63;		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(745)
									if ((tmp62)){
										HX_STACK_LINE(745)
										tmp63 = (int)255;
									}
									else{
										HX_STACK_LINE(745)
										bool tmp64 = (Value1 < (int)0);		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(745)
										if ((tmp64)){
											HX_STACK_LINE(745)
											tmp63 = (int)0;
										}
										else{
											HX_STACK_LINE(745)
											tmp63 = Value1;
										}
									}
									HX_STACK_LINE(745)
									int tmp64 = (int(tmp63) << int((int)16));		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(745)
									hx::OrEq(this1,tmp64);
									HX_STACK_LINE(745)
									Value1;
								}
								HX_STACK_LINE(745)
								mid;
							}
							HX_STACK_LINE(745)
							{
								HX_STACK_LINE(745)
								{
									HX_STACK_LINE(745)
									Float tmp60 = (match * (int)255);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(745)
									int tmp61 = ::Math_obj::round(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(745)
									int Value1 = tmp61;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(745)
									hx::AndEq(this1,(int)-65281);
									HX_STACK_LINE(745)
									bool tmp62 = (Value1 > (int)255);		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(745)
									int tmp63;		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(745)
									if ((tmp62)){
										HX_STACK_LINE(745)
										tmp63 = (int)255;
									}
									else{
										HX_STACK_LINE(745)
										bool tmp64 = (Value1 < (int)0);		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(745)
										if ((tmp64)){
											HX_STACK_LINE(745)
											tmp63 = (int)0;
										}
										else{
											HX_STACK_LINE(745)
											tmp63 = Value1;
										}
									}
									HX_STACK_LINE(745)
									int tmp64 = (int(tmp63) << int((int)8));		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(745)
									hx::OrEq(this1,tmp64);
									HX_STACK_LINE(745)
									Value1;
								}
								HX_STACK_LINE(745)
								match;
							}
							HX_STACK_LINE(745)
							{
								HX_STACK_LINE(745)
								{
									HX_STACK_LINE(745)
									Float tmp60 = (Chroma * (int)255);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(745)
									int tmp61 = ::Math_obj::round(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(745)
									int Value1 = tmp61;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(745)
									hx::AndEq(this1,(int)-256);
									HX_STACK_LINE(745)
									bool tmp62 = (Value1 > (int)255);		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(745)
									int tmp63;		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(745)
									if ((tmp62)){
										HX_STACK_LINE(745)
										tmp63 = (int)255;
									}
									else{
										HX_STACK_LINE(745)
										bool tmp64 = (Value1 < (int)0);		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(745)
										if ((tmp64)){
											HX_STACK_LINE(745)
											tmp63 = (int)0;
										}
										else{
											HX_STACK_LINE(745)
											tmp63 = Value1;
										}
									}
									HX_STACK_LINE(745)
									hx::OrEq(this1,tmp63);
									HX_STACK_LINE(745)
									Value1;
								}
								HX_STACK_LINE(745)
								Chroma;
							}
							HX_STACK_LINE(745)
							{
								HX_STACK_LINE(745)
								{
									HX_STACK_LINE(745)
									Float tmp60 = (Alpha * (int)255);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(745)
									int tmp61 = ::Math_obj::round(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(745)
									int Value1 = tmp61;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(745)
									hx::AndEq(this1,(int)16777215);
									HX_STACK_LINE(745)
									bool tmp62 = (Value1 > (int)255);		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(745)
									int tmp63;		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(745)
									if ((tmp62)){
										HX_STACK_LINE(745)
										tmp63 = (int)255;
									}
									else{
										HX_STACK_LINE(745)
										bool tmp64 = (Value1 < (int)0);		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(745)
										if ((tmp64)){
											HX_STACK_LINE(745)
											tmp63 = (int)0;
										}
										else{
											HX_STACK_LINE(745)
											tmp63 = Value1;
										}
									}
									HX_STACK_LINE(745)
									int tmp64 = (int(tmp63) << int((int)24));		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(745)
									hx::OrEq(this1,tmp64);
									HX_STACK_LINE(745)
									Value1;
								}
								HX_STACK_LINE(745)
								Alpha;
							}
							HX_STACK_LINE(745)
							tmp59 = this1;
						}
						HX_STACK_LINE(745)
						tmp59;
					}
					;break;
					case (int)5: {
						HX_STACK_LINE(745)
						int tmp59;		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(745)
						{
							HX_STACK_LINE(745)
							{
								HX_STACK_LINE(745)
								{
									HX_STACK_LINE(745)
									Float tmp60 = (Chroma * (int)255);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(745)
									int tmp61 = ::Math_obj::round(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(745)
									int Value1 = tmp61;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(745)
									hx::AndEq(this1,(int)-16711681);
									HX_STACK_LINE(745)
									bool tmp62 = (Value1 > (int)255);		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(745)
									int tmp63;		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(745)
									if ((tmp62)){
										HX_STACK_LINE(745)
										tmp63 = (int)255;
									}
									else{
										HX_STACK_LINE(745)
										bool tmp64 = (Value1 < (int)0);		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(745)
										if ((tmp64)){
											HX_STACK_LINE(745)
											tmp63 = (int)0;
										}
										else{
											HX_STACK_LINE(745)
											tmp63 = Value1;
										}
									}
									HX_STACK_LINE(745)
									int tmp64 = (int(tmp63) << int((int)16));		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(745)
									hx::OrEq(this1,tmp64);
									HX_STACK_LINE(745)
									Value1;
								}
								HX_STACK_LINE(745)
								Chroma;
							}
							HX_STACK_LINE(745)
							{
								HX_STACK_LINE(745)
								{
									HX_STACK_LINE(745)
									Float tmp60 = (match * (int)255);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(745)
									int tmp61 = ::Math_obj::round(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(745)
									int Value1 = tmp61;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(745)
									hx::AndEq(this1,(int)-65281);
									HX_STACK_LINE(745)
									bool tmp62 = (Value1 > (int)255);		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(745)
									int tmp63;		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(745)
									if ((tmp62)){
										HX_STACK_LINE(745)
										tmp63 = (int)255;
									}
									else{
										HX_STACK_LINE(745)
										bool tmp64 = (Value1 < (int)0);		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(745)
										if ((tmp64)){
											HX_STACK_LINE(745)
											tmp63 = (int)0;
										}
										else{
											HX_STACK_LINE(745)
											tmp63 = Value1;
										}
									}
									HX_STACK_LINE(745)
									int tmp64 = (int(tmp63) << int((int)8));		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(745)
									hx::OrEq(this1,tmp64);
									HX_STACK_LINE(745)
									Value1;
								}
								HX_STACK_LINE(745)
								match;
							}
							HX_STACK_LINE(745)
							{
								HX_STACK_LINE(745)
								{
									HX_STACK_LINE(745)
									Float tmp60 = (mid * (int)255);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(745)
									int tmp61 = ::Math_obj::round(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(745)
									int Value1 = tmp61;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(745)
									hx::AndEq(this1,(int)-256);
									HX_STACK_LINE(745)
									bool tmp62 = (Value1 > (int)255);		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(745)
									int tmp63;		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(745)
									if ((tmp62)){
										HX_STACK_LINE(745)
										tmp63 = (int)255;
									}
									else{
										HX_STACK_LINE(745)
										bool tmp64 = (Value1 < (int)0);		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(745)
										if ((tmp64)){
											HX_STACK_LINE(745)
											tmp63 = (int)0;
										}
										else{
											HX_STACK_LINE(745)
											tmp63 = Value1;
										}
									}
									HX_STACK_LINE(745)
									hx::OrEq(this1,tmp63);
									HX_STACK_LINE(745)
									Value1;
								}
								HX_STACK_LINE(745)
								mid;
							}
							HX_STACK_LINE(745)
							{
								HX_STACK_LINE(745)
								{
									HX_STACK_LINE(745)
									Float tmp60 = (Alpha * (int)255);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(745)
									int tmp61 = ::Math_obj::round(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(745)
									int Value1 = tmp61;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(745)
									hx::AndEq(this1,(int)16777215);
									HX_STACK_LINE(745)
									bool tmp62 = (Value1 > (int)255);		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(745)
									int tmp63;		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(745)
									if ((tmp62)){
										HX_STACK_LINE(745)
										tmp63 = (int)255;
									}
									else{
										HX_STACK_LINE(745)
										bool tmp64 = (Value1 < (int)0);		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(745)
										if ((tmp64)){
											HX_STACK_LINE(745)
											tmp63 = (int)0;
										}
										else{
											HX_STACK_LINE(745)
											tmp63 = Value1;
										}
									}
									HX_STACK_LINE(745)
									int tmp64 = (int(tmp63) << int((int)24));		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(745)
									hx::OrEq(this1,tmp64);
									HX_STACK_LINE(745)
									Value1;
								}
								HX_STACK_LINE(745)
								Alpha;
							}
							HX_STACK_LINE(745)
							tmp59 = this1;
						}
						HX_STACK_LINE(745)
						tmp59;
					}
					;break;
				}
			}
			HX_STACK_LINE(745)
			this1;
		}
	}
	HX_STACK_LINE(746)
	Float tmp = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(746)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,set_hue,return )

Float FlxColor_Impl__obj::set_saturation( int this1,Float Value){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","set_saturation",0xd67b9454,"flixel.util._FlxColor.FlxColor_Impl_.set_saturation","flixel/util/FlxColor.hx",750,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(751)
	{
		HX_STACK_LINE(751)
		int tmp = this1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(751)
		Float tmp1 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::get_hue(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(751)
		Float Hue = tmp1;		HX_STACK_VAR(Hue,"Hue");
		HX_STACK_LINE(751)
		int tmp2 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(751)
		int tmp3 = (int(tmp2) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(751)
		Float tmp4 = (Float(tmp3) / Float((int)255));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(751)
		int tmp5 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(751)
		int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(751)
		Float tmp7 = (Float(tmp6) / Float((int)255));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(751)
		int tmp8 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(751)
		Float tmp9 = (Float(tmp8) / Float((int)255));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(751)
		Float tmp10 = ::Math_obj::max(tmp7,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(751)
		Float tmp11 = ::Math_obj::max(tmp4,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(751)
		Float Brightness = tmp11;		HX_STACK_VAR(Brightness,"Brightness");
		HX_STACK_LINE(751)
		int tmp12 = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(751)
		int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(751)
		Float tmp14 = (Float(tmp13) / Float((int)255));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(751)
		Float Alpha = tmp14;		HX_STACK_VAR(Alpha,"Alpha");
		HX_STACK_LINE(751)
		Float tmp15 = (Brightness * Value);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(751)
		Float chroma = tmp15;		HX_STACK_VAR(chroma,"chroma");
		HX_STACK_LINE(751)
		Float tmp16 = (Brightness - chroma);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(751)
		Float match = tmp16;		HX_STACK_VAR(match,"match");
		HX_STACK_LINE(751)
		{
			HX_STACK_LINE(751)
			Float Hue1 = Hue;		HX_STACK_VAR(Hue1,"Hue1");
			HX_STACK_LINE(751)
			Float Chroma = chroma;		HX_STACK_VAR(Chroma,"Chroma");
			HX_STACK_LINE(751)
			hx::ModEq(Hue1,(int)360);
			HX_STACK_LINE(751)
			Float tmp17 = (Float(Hue1) / Float((int)60));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(751)
			Float hueD = tmp17;		HX_STACK_VAR(hueD,"hueD");
			HX_STACK_LINE(751)
			Float tmp18 = Chroma;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(751)
			Float tmp19 = hx::Mod(hueD,(int)2);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(751)
			Float tmp20 = (tmp19 - (int)1);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(751)
			Float tmp21 = ::Math_obj::abs(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(751)
			Float tmp22 = ((int)1 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(751)
			Float tmp23 = (tmp18 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(751)
			Float tmp24 = match;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(751)
			Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(751)
			Float mid = tmp25;		HX_STACK_VAR(mid,"mid");
			HX_STACK_LINE(751)
			hx::AddEq(Chroma,match);
			HX_STACK_LINE(751)
			{
				HX_STACK_LINE(751)
				Float tmp26 = hueD;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(751)
				int tmp27 = ::Std_obj::_int(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(751)
				int _g = tmp27;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(751)
				int tmp28 = _g;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(751)
				switch( (int)(tmp28)){
					case (int)0: {
						HX_STACK_LINE(751)
						int tmp29;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(751)
						{
							HX_STACK_LINE(751)
							{
								HX_STACK_LINE(751)
								{
									HX_STACK_LINE(751)
									Float tmp30 = (Chroma * (int)255);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(751)
									int tmp31 = ::Math_obj::round(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(751)
									int Value1 = tmp31;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(751)
									hx::AndEq(this1,(int)-16711681);
									HX_STACK_LINE(751)
									bool tmp32 = (Value1 > (int)255);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(751)
									int tmp33;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(751)
									if ((tmp32)){
										HX_STACK_LINE(751)
										tmp33 = (int)255;
									}
									else{
										HX_STACK_LINE(751)
										bool tmp34 = (Value1 < (int)0);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(751)
										if ((tmp34)){
											HX_STACK_LINE(751)
											tmp33 = (int)0;
										}
										else{
											HX_STACK_LINE(751)
											tmp33 = Value1;
										}
									}
									HX_STACK_LINE(751)
									int tmp34 = (int(tmp33) << int((int)16));		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(751)
									hx::OrEq(this1,tmp34);
									HX_STACK_LINE(751)
									Value1;
								}
								HX_STACK_LINE(751)
								Chroma;
							}
							HX_STACK_LINE(751)
							{
								HX_STACK_LINE(751)
								{
									HX_STACK_LINE(751)
									Float tmp30 = (mid * (int)255);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(751)
									int tmp31 = ::Math_obj::round(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(751)
									int Value1 = tmp31;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(751)
									hx::AndEq(this1,(int)-65281);
									HX_STACK_LINE(751)
									bool tmp32 = (Value1 > (int)255);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(751)
									int tmp33;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(751)
									if ((tmp32)){
										HX_STACK_LINE(751)
										tmp33 = (int)255;
									}
									else{
										HX_STACK_LINE(751)
										bool tmp34 = (Value1 < (int)0);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(751)
										if ((tmp34)){
											HX_STACK_LINE(751)
											tmp33 = (int)0;
										}
										else{
											HX_STACK_LINE(751)
											tmp33 = Value1;
										}
									}
									HX_STACK_LINE(751)
									int tmp34 = (int(tmp33) << int((int)8));		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(751)
									hx::OrEq(this1,tmp34);
									HX_STACK_LINE(751)
									Value1;
								}
								HX_STACK_LINE(751)
								mid;
							}
							HX_STACK_LINE(751)
							{
								HX_STACK_LINE(751)
								{
									HX_STACK_LINE(751)
									Float tmp30 = (match * (int)255);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(751)
									int tmp31 = ::Math_obj::round(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(751)
									int Value1 = tmp31;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(751)
									hx::AndEq(this1,(int)-256);
									HX_STACK_LINE(751)
									bool tmp32 = (Value1 > (int)255);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(751)
									int tmp33;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(751)
									if ((tmp32)){
										HX_STACK_LINE(751)
										tmp33 = (int)255;
									}
									else{
										HX_STACK_LINE(751)
										bool tmp34 = (Value1 < (int)0);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(751)
										if ((tmp34)){
											HX_STACK_LINE(751)
											tmp33 = (int)0;
										}
										else{
											HX_STACK_LINE(751)
											tmp33 = Value1;
										}
									}
									HX_STACK_LINE(751)
									hx::OrEq(this1,tmp33);
									HX_STACK_LINE(751)
									Value1;
								}
								HX_STACK_LINE(751)
								match;
							}
							HX_STACK_LINE(751)
							{
								HX_STACK_LINE(751)
								{
									HX_STACK_LINE(751)
									Float tmp30 = (Alpha * (int)255);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(751)
									int tmp31 = ::Math_obj::round(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(751)
									int Value1 = tmp31;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(751)
									hx::AndEq(this1,(int)16777215);
									HX_STACK_LINE(751)
									bool tmp32 = (Value1 > (int)255);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(751)
									int tmp33;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(751)
									if ((tmp32)){
										HX_STACK_LINE(751)
										tmp33 = (int)255;
									}
									else{
										HX_STACK_LINE(751)
										bool tmp34 = (Value1 < (int)0);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(751)
										if ((tmp34)){
											HX_STACK_LINE(751)
											tmp33 = (int)0;
										}
										else{
											HX_STACK_LINE(751)
											tmp33 = Value1;
										}
									}
									HX_STACK_LINE(751)
									int tmp34 = (int(tmp33) << int((int)24));		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(751)
									hx::OrEq(this1,tmp34);
									HX_STACK_LINE(751)
									Value1;
								}
								HX_STACK_LINE(751)
								Alpha;
							}
							HX_STACK_LINE(751)
							tmp29 = this1;
						}
						HX_STACK_LINE(751)
						tmp29;
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(751)
						int tmp29;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(751)
						{
							HX_STACK_LINE(751)
							{
								HX_STACK_LINE(751)
								{
									HX_STACK_LINE(751)
									Float tmp30 = (mid * (int)255);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(751)
									int tmp31 = ::Math_obj::round(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(751)
									int Value1 = tmp31;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(751)
									hx::AndEq(this1,(int)-16711681);
									HX_STACK_LINE(751)
									bool tmp32 = (Value1 > (int)255);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(751)
									int tmp33;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(751)
									if ((tmp32)){
										HX_STACK_LINE(751)
										tmp33 = (int)255;
									}
									else{
										HX_STACK_LINE(751)
										bool tmp34 = (Value1 < (int)0);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(751)
										if ((tmp34)){
											HX_STACK_LINE(751)
											tmp33 = (int)0;
										}
										else{
											HX_STACK_LINE(751)
											tmp33 = Value1;
										}
									}
									HX_STACK_LINE(751)
									int tmp34 = (int(tmp33) << int((int)16));		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(751)
									hx::OrEq(this1,tmp34);
									HX_STACK_LINE(751)
									Value1;
								}
								HX_STACK_LINE(751)
								mid;
							}
							HX_STACK_LINE(751)
							{
								HX_STACK_LINE(751)
								{
									HX_STACK_LINE(751)
									Float tmp30 = (Chroma * (int)255);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(751)
									int tmp31 = ::Math_obj::round(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(751)
									int Value1 = tmp31;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(751)
									hx::AndEq(this1,(int)-65281);
									HX_STACK_LINE(751)
									bool tmp32 = (Value1 > (int)255);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(751)
									int tmp33;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(751)
									if ((tmp32)){
										HX_STACK_LINE(751)
										tmp33 = (int)255;
									}
									else{
										HX_STACK_LINE(751)
										bool tmp34 = (Value1 < (int)0);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(751)
										if ((tmp34)){
											HX_STACK_LINE(751)
											tmp33 = (int)0;
										}
										else{
											HX_STACK_LINE(751)
											tmp33 = Value1;
										}
									}
									HX_STACK_LINE(751)
									int tmp34 = (int(tmp33) << int((int)8));		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(751)
									hx::OrEq(this1,tmp34);
									HX_STACK_LINE(751)
									Value1;
								}
								HX_STACK_LINE(751)
								Chroma;
							}
							HX_STACK_LINE(751)
							{
								HX_STACK_LINE(751)
								{
									HX_STACK_LINE(751)
									Float tmp30 = (match * (int)255);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(751)
									int tmp31 = ::Math_obj::round(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(751)
									int Value1 = tmp31;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(751)
									hx::AndEq(this1,(int)-256);
									HX_STACK_LINE(751)
									bool tmp32 = (Value1 > (int)255);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(751)
									int tmp33;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(751)
									if ((tmp32)){
										HX_STACK_LINE(751)
										tmp33 = (int)255;
									}
									else{
										HX_STACK_LINE(751)
										bool tmp34 = (Value1 < (int)0);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(751)
										if ((tmp34)){
											HX_STACK_LINE(751)
											tmp33 = (int)0;
										}
										else{
											HX_STACK_LINE(751)
											tmp33 = Value1;
										}
									}
									HX_STACK_LINE(751)
									hx::OrEq(this1,tmp33);
									HX_STACK_LINE(751)
									Value1;
								}
								HX_STACK_LINE(751)
								match;
							}
							HX_STACK_LINE(751)
							{
								HX_STACK_LINE(751)
								{
									HX_STACK_LINE(751)
									Float tmp30 = (Alpha * (int)255);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(751)
									int tmp31 = ::Math_obj::round(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(751)
									int Value1 = tmp31;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(751)
									hx::AndEq(this1,(int)16777215);
									HX_STACK_LINE(751)
									bool tmp32 = (Value1 > (int)255);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(751)
									int tmp33;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(751)
									if ((tmp32)){
										HX_STACK_LINE(751)
										tmp33 = (int)255;
									}
									else{
										HX_STACK_LINE(751)
										bool tmp34 = (Value1 < (int)0);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(751)
										if ((tmp34)){
											HX_STACK_LINE(751)
											tmp33 = (int)0;
										}
										else{
											HX_STACK_LINE(751)
											tmp33 = Value1;
										}
									}
									HX_STACK_LINE(751)
									int tmp34 = (int(tmp33) << int((int)24));		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(751)
									hx::OrEq(this1,tmp34);
									HX_STACK_LINE(751)
									Value1;
								}
								HX_STACK_LINE(751)
								Alpha;
							}
							HX_STACK_LINE(751)
							tmp29 = this1;
						}
						HX_STACK_LINE(751)
						tmp29;
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(751)
						int tmp29;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(751)
						{
							HX_STACK_LINE(751)
							{
								HX_STACK_LINE(751)
								{
									HX_STACK_LINE(751)
									Float tmp30 = (match * (int)255);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(751)
									int tmp31 = ::Math_obj::round(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(751)
									int Value1 = tmp31;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(751)
									hx::AndEq(this1,(int)-16711681);
									HX_STACK_LINE(751)
									bool tmp32 = (Value1 > (int)255);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(751)
									int tmp33;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(751)
									if ((tmp32)){
										HX_STACK_LINE(751)
										tmp33 = (int)255;
									}
									else{
										HX_STACK_LINE(751)
										bool tmp34 = (Value1 < (int)0);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(751)
										if ((tmp34)){
											HX_STACK_LINE(751)
											tmp33 = (int)0;
										}
										else{
											HX_STACK_LINE(751)
											tmp33 = Value1;
										}
									}
									HX_STACK_LINE(751)
									int tmp34 = (int(tmp33) << int((int)16));		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(751)
									hx::OrEq(this1,tmp34);
									HX_STACK_LINE(751)
									Value1;
								}
								HX_STACK_LINE(751)
								match;
							}
							HX_STACK_LINE(751)
							{
								HX_STACK_LINE(751)
								{
									HX_STACK_LINE(751)
									Float tmp30 = (Chroma * (int)255);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(751)
									int tmp31 = ::Math_obj::round(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(751)
									int Value1 = tmp31;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(751)
									hx::AndEq(this1,(int)-65281);
									HX_STACK_LINE(751)
									bool tmp32 = (Value1 > (int)255);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(751)
									int tmp33;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(751)
									if ((tmp32)){
										HX_STACK_LINE(751)
										tmp33 = (int)255;
									}
									else{
										HX_STACK_LINE(751)
										bool tmp34 = (Value1 < (int)0);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(751)
										if ((tmp34)){
											HX_STACK_LINE(751)
											tmp33 = (int)0;
										}
										else{
											HX_STACK_LINE(751)
											tmp33 = Value1;
										}
									}
									HX_STACK_LINE(751)
									int tmp34 = (int(tmp33) << int((int)8));		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(751)
									hx::OrEq(this1,tmp34);
									HX_STACK_LINE(751)
									Value1;
								}
								HX_STACK_LINE(751)
								Chroma;
							}
							HX_STACK_LINE(751)
							{
								HX_STACK_LINE(751)
								{
									HX_STACK_LINE(751)
									Float tmp30 = (mid * (int)255);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(751)
									int tmp31 = ::Math_obj::round(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(751)
									int Value1 = tmp31;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(751)
									hx::AndEq(this1,(int)-256);
									HX_STACK_LINE(751)
									bool tmp32 = (Value1 > (int)255);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(751)
									int tmp33;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(751)
									if ((tmp32)){
										HX_STACK_LINE(751)
										tmp33 = (int)255;
									}
									else{
										HX_STACK_LINE(751)
										bool tmp34 = (Value1 < (int)0);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(751)
										if ((tmp34)){
											HX_STACK_LINE(751)
											tmp33 = (int)0;
										}
										else{
											HX_STACK_LINE(751)
											tmp33 = Value1;
										}
									}
									HX_STACK_LINE(751)
									hx::OrEq(this1,tmp33);
									HX_STACK_LINE(751)
									Value1;
								}
								HX_STACK_LINE(751)
								mid;
							}
							HX_STACK_LINE(751)
							{
								HX_STACK_LINE(751)
								{
									HX_STACK_LINE(751)
									Float tmp30 = (Alpha * (int)255);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(751)
									int tmp31 = ::Math_obj::round(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(751)
									int Value1 = tmp31;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(751)
									hx::AndEq(this1,(int)16777215);
									HX_STACK_LINE(751)
									bool tmp32 = (Value1 > (int)255);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(751)
									int tmp33;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(751)
									if ((tmp32)){
										HX_STACK_LINE(751)
										tmp33 = (int)255;
									}
									else{
										HX_STACK_LINE(751)
										bool tmp34 = (Value1 < (int)0);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(751)
										if ((tmp34)){
											HX_STACK_LINE(751)
											tmp33 = (int)0;
										}
										else{
											HX_STACK_LINE(751)
											tmp33 = Value1;
										}
									}
									HX_STACK_LINE(751)
									int tmp34 = (int(tmp33) << int((int)24));		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(751)
									hx::OrEq(this1,tmp34);
									HX_STACK_LINE(751)
									Value1;
								}
								HX_STACK_LINE(751)
								Alpha;
							}
							HX_STACK_LINE(751)
							tmp29 = this1;
						}
						HX_STACK_LINE(751)
						tmp29;
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(751)
						int tmp29;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(751)
						{
							HX_STACK_LINE(751)
							{
								HX_STACK_LINE(751)
								{
									HX_STACK_LINE(751)
									Float tmp30 = (match * (int)255);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(751)
									int tmp31 = ::Math_obj::round(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(751)
									int Value1 = tmp31;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(751)
									hx::AndEq(this1,(int)-16711681);
									HX_STACK_LINE(751)
									bool tmp32 = (Value1 > (int)255);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(751)
									int tmp33;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(751)
									if ((tmp32)){
										HX_STACK_LINE(751)
										tmp33 = (int)255;
									}
									else{
										HX_STACK_LINE(751)
										bool tmp34 = (Value1 < (int)0);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(751)
										if ((tmp34)){
											HX_STACK_LINE(751)
											tmp33 = (int)0;
										}
										else{
											HX_STACK_LINE(751)
											tmp33 = Value1;
										}
									}
									HX_STACK_LINE(751)
									int tmp34 = (int(tmp33) << int((int)16));		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(751)
									hx::OrEq(this1,tmp34);
									HX_STACK_LINE(751)
									Value1;
								}
								HX_STACK_LINE(751)
								match;
							}
							HX_STACK_LINE(751)
							{
								HX_STACK_LINE(751)
								{
									HX_STACK_LINE(751)
									Float tmp30 = (mid * (int)255);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(751)
									int tmp31 = ::Math_obj::round(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(751)
									int Value1 = tmp31;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(751)
									hx::AndEq(this1,(int)-65281);
									HX_STACK_LINE(751)
									bool tmp32 = (Value1 > (int)255);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(751)
									int tmp33;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(751)
									if ((tmp32)){
										HX_STACK_LINE(751)
										tmp33 = (int)255;
									}
									else{
										HX_STACK_LINE(751)
										bool tmp34 = (Value1 < (int)0);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(751)
										if ((tmp34)){
											HX_STACK_LINE(751)
											tmp33 = (int)0;
										}
										else{
											HX_STACK_LINE(751)
											tmp33 = Value1;
										}
									}
									HX_STACK_LINE(751)
									int tmp34 = (int(tmp33) << int((int)8));		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(751)
									hx::OrEq(this1,tmp34);
									HX_STACK_LINE(751)
									Value1;
								}
								HX_STACK_LINE(751)
								mid;
							}
							HX_STACK_LINE(751)
							{
								HX_STACK_LINE(751)
								{
									HX_STACK_LINE(751)
									Float tmp30 = (Chroma * (int)255);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(751)
									int tmp31 = ::Math_obj::round(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(751)
									int Value1 = tmp31;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(751)
									hx::AndEq(this1,(int)-256);
									HX_STACK_LINE(751)
									bool tmp32 = (Value1 > (int)255);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(751)
									int tmp33;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(751)
									if ((tmp32)){
										HX_STACK_LINE(751)
										tmp33 = (int)255;
									}
									else{
										HX_STACK_LINE(751)
										bool tmp34 = (Value1 < (int)0);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(751)
										if ((tmp34)){
											HX_STACK_LINE(751)
											tmp33 = (int)0;
										}
										else{
											HX_STACK_LINE(751)
											tmp33 = Value1;
										}
									}
									HX_STACK_LINE(751)
									hx::OrEq(this1,tmp33);
									HX_STACK_LINE(751)
									Value1;
								}
								HX_STACK_LINE(751)
								Chroma;
							}
							HX_STACK_LINE(751)
							{
								HX_STACK_LINE(751)
								{
									HX_STACK_LINE(751)
									Float tmp30 = (Alpha * (int)255);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(751)
									int tmp31 = ::Math_obj::round(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(751)
									int Value1 = tmp31;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(751)
									hx::AndEq(this1,(int)16777215);
									HX_STACK_LINE(751)
									bool tmp32 = (Value1 > (int)255);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(751)
									int tmp33;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(751)
									if ((tmp32)){
										HX_STACK_LINE(751)
										tmp33 = (int)255;
									}
									else{
										HX_STACK_LINE(751)
										bool tmp34 = (Value1 < (int)0);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(751)
										if ((tmp34)){
											HX_STACK_LINE(751)
											tmp33 = (int)0;
										}
										else{
											HX_STACK_LINE(751)
											tmp33 = Value1;
										}
									}
									HX_STACK_LINE(751)
									int tmp34 = (int(tmp33) << int((int)24));		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(751)
									hx::OrEq(this1,tmp34);
									HX_STACK_LINE(751)
									Value1;
								}
								HX_STACK_LINE(751)
								Alpha;
							}
							HX_STACK_LINE(751)
							tmp29 = this1;
						}
						HX_STACK_LINE(751)
						tmp29;
					}
					;break;
					case (int)4: {
						HX_STACK_LINE(751)
						int tmp29;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(751)
						{
							HX_STACK_LINE(751)
							{
								HX_STACK_LINE(751)
								{
									HX_STACK_LINE(751)
									Float tmp30 = (mid * (int)255);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(751)
									int tmp31 = ::Math_obj::round(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(751)
									int Value1 = tmp31;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(751)
									hx::AndEq(this1,(int)-16711681);
									HX_STACK_LINE(751)
									bool tmp32 = (Value1 > (int)255);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(751)
									int tmp33;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(751)
									if ((tmp32)){
										HX_STACK_LINE(751)
										tmp33 = (int)255;
									}
									else{
										HX_STACK_LINE(751)
										bool tmp34 = (Value1 < (int)0);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(751)
										if ((tmp34)){
											HX_STACK_LINE(751)
											tmp33 = (int)0;
										}
										else{
											HX_STACK_LINE(751)
											tmp33 = Value1;
										}
									}
									HX_STACK_LINE(751)
									int tmp34 = (int(tmp33) << int((int)16));		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(751)
									hx::OrEq(this1,tmp34);
									HX_STACK_LINE(751)
									Value1;
								}
								HX_STACK_LINE(751)
								mid;
							}
							HX_STACK_LINE(751)
							{
								HX_STACK_LINE(751)
								{
									HX_STACK_LINE(751)
									Float tmp30 = (match * (int)255);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(751)
									int tmp31 = ::Math_obj::round(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(751)
									int Value1 = tmp31;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(751)
									hx::AndEq(this1,(int)-65281);
									HX_STACK_LINE(751)
									bool tmp32 = (Value1 > (int)255);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(751)
									int tmp33;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(751)
									if ((tmp32)){
										HX_STACK_LINE(751)
										tmp33 = (int)255;
									}
									else{
										HX_STACK_LINE(751)
										bool tmp34 = (Value1 < (int)0);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(751)
										if ((tmp34)){
											HX_STACK_LINE(751)
											tmp33 = (int)0;
										}
										else{
											HX_STACK_LINE(751)
											tmp33 = Value1;
										}
									}
									HX_STACK_LINE(751)
									int tmp34 = (int(tmp33) << int((int)8));		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(751)
									hx::OrEq(this1,tmp34);
									HX_STACK_LINE(751)
									Value1;
								}
								HX_STACK_LINE(751)
								match;
							}
							HX_STACK_LINE(751)
							{
								HX_STACK_LINE(751)
								{
									HX_STACK_LINE(751)
									Float tmp30 = (Chroma * (int)255);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(751)
									int tmp31 = ::Math_obj::round(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(751)
									int Value1 = tmp31;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(751)
									hx::AndEq(this1,(int)-256);
									HX_STACK_LINE(751)
									bool tmp32 = (Value1 > (int)255);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(751)
									int tmp33;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(751)
									if ((tmp32)){
										HX_STACK_LINE(751)
										tmp33 = (int)255;
									}
									else{
										HX_STACK_LINE(751)
										bool tmp34 = (Value1 < (int)0);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(751)
										if ((tmp34)){
											HX_STACK_LINE(751)
											tmp33 = (int)0;
										}
										else{
											HX_STACK_LINE(751)
											tmp33 = Value1;
										}
									}
									HX_STACK_LINE(751)
									hx::OrEq(this1,tmp33);
									HX_STACK_LINE(751)
									Value1;
								}
								HX_STACK_LINE(751)
								Chroma;
							}
							HX_STACK_LINE(751)
							{
								HX_STACK_LINE(751)
								{
									HX_STACK_LINE(751)
									Float tmp30 = (Alpha * (int)255);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(751)
									int tmp31 = ::Math_obj::round(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(751)
									int Value1 = tmp31;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(751)
									hx::AndEq(this1,(int)16777215);
									HX_STACK_LINE(751)
									bool tmp32 = (Value1 > (int)255);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(751)
									int tmp33;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(751)
									if ((tmp32)){
										HX_STACK_LINE(751)
										tmp33 = (int)255;
									}
									else{
										HX_STACK_LINE(751)
										bool tmp34 = (Value1 < (int)0);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(751)
										if ((tmp34)){
											HX_STACK_LINE(751)
											tmp33 = (int)0;
										}
										else{
											HX_STACK_LINE(751)
											tmp33 = Value1;
										}
									}
									HX_STACK_LINE(751)
									int tmp34 = (int(tmp33) << int((int)24));		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(751)
									hx::OrEq(this1,tmp34);
									HX_STACK_LINE(751)
									Value1;
								}
								HX_STACK_LINE(751)
								Alpha;
							}
							HX_STACK_LINE(751)
							tmp29 = this1;
						}
						HX_STACK_LINE(751)
						tmp29;
					}
					;break;
					case (int)5: {
						HX_STACK_LINE(751)
						int tmp29;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(751)
						{
							HX_STACK_LINE(751)
							{
								HX_STACK_LINE(751)
								{
									HX_STACK_LINE(751)
									Float tmp30 = (Chroma * (int)255);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(751)
									int tmp31 = ::Math_obj::round(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(751)
									int Value1 = tmp31;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(751)
									hx::AndEq(this1,(int)-16711681);
									HX_STACK_LINE(751)
									bool tmp32 = (Value1 > (int)255);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(751)
									int tmp33;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(751)
									if ((tmp32)){
										HX_STACK_LINE(751)
										tmp33 = (int)255;
									}
									else{
										HX_STACK_LINE(751)
										bool tmp34 = (Value1 < (int)0);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(751)
										if ((tmp34)){
											HX_STACK_LINE(751)
											tmp33 = (int)0;
										}
										else{
											HX_STACK_LINE(751)
											tmp33 = Value1;
										}
									}
									HX_STACK_LINE(751)
									int tmp34 = (int(tmp33) << int((int)16));		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(751)
									hx::OrEq(this1,tmp34);
									HX_STACK_LINE(751)
									Value1;
								}
								HX_STACK_LINE(751)
								Chroma;
							}
							HX_STACK_LINE(751)
							{
								HX_STACK_LINE(751)
								{
									HX_STACK_LINE(751)
									Float tmp30 = (match * (int)255);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(751)
									int tmp31 = ::Math_obj::round(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(751)
									int Value1 = tmp31;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(751)
									hx::AndEq(this1,(int)-65281);
									HX_STACK_LINE(751)
									bool tmp32 = (Value1 > (int)255);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(751)
									int tmp33;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(751)
									if ((tmp32)){
										HX_STACK_LINE(751)
										tmp33 = (int)255;
									}
									else{
										HX_STACK_LINE(751)
										bool tmp34 = (Value1 < (int)0);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(751)
										if ((tmp34)){
											HX_STACK_LINE(751)
											tmp33 = (int)0;
										}
										else{
											HX_STACK_LINE(751)
											tmp33 = Value1;
										}
									}
									HX_STACK_LINE(751)
									int tmp34 = (int(tmp33) << int((int)8));		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(751)
									hx::OrEq(this1,tmp34);
									HX_STACK_LINE(751)
									Value1;
								}
								HX_STACK_LINE(751)
								match;
							}
							HX_STACK_LINE(751)
							{
								HX_STACK_LINE(751)
								{
									HX_STACK_LINE(751)
									Float tmp30 = (mid * (int)255);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(751)
									int tmp31 = ::Math_obj::round(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(751)
									int Value1 = tmp31;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(751)
									hx::AndEq(this1,(int)-256);
									HX_STACK_LINE(751)
									bool tmp32 = (Value1 > (int)255);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(751)
									int tmp33;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(751)
									if ((tmp32)){
										HX_STACK_LINE(751)
										tmp33 = (int)255;
									}
									else{
										HX_STACK_LINE(751)
										bool tmp34 = (Value1 < (int)0);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(751)
										if ((tmp34)){
											HX_STACK_LINE(751)
											tmp33 = (int)0;
										}
										else{
											HX_STACK_LINE(751)
											tmp33 = Value1;
										}
									}
									HX_STACK_LINE(751)
									hx::OrEq(this1,tmp33);
									HX_STACK_LINE(751)
									Value1;
								}
								HX_STACK_LINE(751)
								mid;
							}
							HX_STACK_LINE(751)
							{
								HX_STACK_LINE(751)
								{
									HX_STACK_LINE(751)
									Float tmp30 = (Alpha * (int)255);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(751)
									int tmp31 = ::Math_obj::round(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(751)
									int Value1 = tmp31;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(751)
									hx::AndEq(this1,(int)16777215);
									HX_STACK_LINE(751)
									bool tmp32 = (Value1 > (int)255);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(751)
									int tmp33;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(751)
									if ((tmp32)){
										HX_STACK_LINE(751)
										tmp33 = (int)255;
									}
									else{
										HX_STACK_LINE(751)
										bool tmp34 = (Value1 < (int)0);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(751)
										if ((tmp34)){
											HX_STACK_LINE(751)
											tmp33 = (int)0;
										}
										else{
											HX_STACK_LINE(751)
											tmp33 = Value1;
										}
									}
									HX_STACK_LINE(751)
									int tmp34 = (int(tmp33) << int((int)24));		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(751)
									hx::OrEq(this1,tmp34);
									HX_STACK_LINE(751)
									Value1;
								}
								HX_STACK_LINE(751)
								Alpha;
							}
							HX_STACK_LINE(751)
							tmp29 = this1;
						}
						HX_STACK_LINE(751)
						tmp29;
					}
					;break;
				}
			}
			HX_STACK_LINE(751)
			this1;
		}
	}
	HX_STACK_LINE(752)
	Float tmp = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(752)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,set_saturation,return )

Float FlxColor_Impl__obj::set_brightness( int this1,Float Value){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","set_brightness",0x454b4e53,"flixel.util._FlxColor.FlxColor_Impl_.set_brightness","flixel/util/FlxColor.hx",756,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(757)
	{
		HX_STACK_LINE(757)
		int tmp = this1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(757)
		Float tmp1 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::get_hue(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(757)
		Float Hue = tmp1;		HX_STACK_VAR(Hue,"Hue");
		HX_STACK_LINE(757)
		int tmp2 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(757)
		int tmp3 = (int(tmp2) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(757)
		Float tmp4 = (Float(tmp3) / Float((int)255));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(757)
		int tmp5 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(757)
		int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(757)
		Float tmp7 = (Float(tmp6) / Float((int)255));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(757)
		int tmp8 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(757)
		Float tmp9 = (Float(tmp8) / Float((int)255));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(757)
		Float tmp10 = ::Math_obj::max(tmp7,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(757)
		Float tmp11 = ::Math_obj::max(tmp4,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(757)
		int tmp12 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(757)
		int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(757)
		Float tmp14 = (Float(tmp13) / Float((int)255));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(757)
		int tmp15 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(757)
		int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(757)
		Float tmp17 = (Float(tmp16) / Float((int)255));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(757)
		int tmp18 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(757)
		Float tmp19 = (Float(tmp18) / Float((int)255));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(757)
		Float tmp20 = ::Math_obj::min(tmp17,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(757)
		Float tmp21 = ::Math_obj::min(tmp14,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(757)
		Float tmp22 = (tmp11 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(757)
		int tmp23 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(757)
		int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(757)
		Float tmp25 = (Float(tmp24) / Float((int)255));		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(757)
		int tmp26 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(757)
		int tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(757)
		Float tmp28 = (Float(tmp27) / Float((int)255));		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(757)
		int tmp29 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(757)
		Float tmp30 = (Float(tmp29) / Float((int)255));		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(757)
		Float tmp31 = ::Math_obj::max(tmp28,tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(757)
		Float tmp32 = ::Math_obj::max(tmp25,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(757)
		Float tmp33 = (Float(tmp22) / Float(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(757)
		Float Saturation = tmp33;		HX_STACK_VAR(Saturation,"Saturation");
		HX_STACK_LINE(757)
		int tmp34 = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(757)
		int tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(757)
		Float tmp36 = (Float(tmp35) / Float((int)255));		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(757)
		Float Alpha = tmp36;		HX_STACK_VAR(Alpha,"Alpha");
		HX_STACK_LINE(757)
		Float tmp37 = (Value * Saturation);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(757)
		Float chroma = tmp37;		HX_STACK_VAR(chroma,"chroma");
		HX_STACK_LINE(757)
		Float tmp38 = (Value - chroma);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(757)
		Float match = tmp38;		HX_STACK_VAR(match,"match");
		HX_STACK_LINE(757)
		{
			HX_STACK_LINE(757)
			Float Hue1 = Hue;		HX_STACK_VAR(Hue1,"Hue1");
			HX_STACK_LINE(757)
			Float Chroma = chroma;		HX_STACK_VAR(Chroma,"Chroma");
			HX_STACK_LINE(757)
			hx::ModEq(Hue1,(int)360);
			HX_STACK_LINE(757)
			Float tmp39 = (Float(Hue1) / Float((int)60));		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(757)
			Float hueD = tmp39;		HX_STACK_VAR(hueD,"hueD");
			HX_STACK_LINE(757)
			Float tmp40 = Chroma;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(757)
			Float tmp41 = hx::Mod(hueD,(int)2);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(757)
			Float tmp42 = (tmp41 - (int)1);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(757)
			Float tmp43 = ::Math_obj::abs(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(757)
			Float tmp44 = ((int)1 - tmp43);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(757)
			Float tmp45 = (tmp40 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(757)
			Float tmp46 = match;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(757)
			Float tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(757)
			Float mid = tmp47;		HX_STACK_VAR(mid,"mid");
			HX_STACK_LINE(757)
			hx::AddEq(Chroma,match);
			HX_STACK_LINE(757)
			{
				HX_STACK_LINE(757)
				Float tmp48 = hueD;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(757)
				int tmp49 = ::Std_obj::_int(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(757)
				int _g = tmp49;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(757)
				int tmp50 = _g;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(757)
				switch( (int)(tmp50)){
					case (int)0: {
						HX_STACK_LINE(757)
						int tmp51;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(757)
						{
							HX_STACK_LINE(757)
							{
								HX_STACK_LINE(757)
								{
									HX_STACK_LINE(757)
									Float tmp52 = (Chroma * (int)255);		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(757)
									int tmp53 = ::Math_obj::round(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(757)
									int Value1 = tmp53;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(757)
									hx::AndEq(this1,(int)-16711681);
									HX_STACK_LINE(757)
									bool tmp54 = (Value1 > (int)255);		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(757)
									int tmp55;		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(757)
									if ((tmp54)){
										HX_STACK_LINE(757)
										tmp55 = (int)255;
									}
									else{
										HX_STACK_LINE(757)
										bool tmp56 = (Value1 < (int)0);		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(757)
										if ((tmp56)){
											HX_STACK_LINE(757)
											tmp55 = (int)0;
										}
										else{
											HX_STACK_LINE(757)
											tmp55 = Value1;
										}
									}
									HX_STACK_LINE(757)
									int tmp56 = (int(tmp55) << int((int)16));		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(757)
									hx::OrEq(this1,tmp56);
									HX_STACK_LINE(757)
									Value1;
								}
								HX_STACK_LINE(757)
								Chroma;
							}
							HX_STACK_LINE(757)
							{
								HX_STACK_LINE(757)
								{
									HX_STACK_LINE(757)
									Float tmp52 = (mid * (int)255);		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(757)
									int tmp53 = ::Math_obj::round(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(757)
									int Value1 = tmp53;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(757)
									hx::AndEq(this1,(int)-65281);
									HX_STACK_LINE(757)
									bool tmp54 = (Value1 > (int)255);		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(757)
									int tmp55;		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(757)
									if ((tmp54)){
										HX_STACK_LINE(757)
										tmp55 = (int)255;
									}
									else{
										HX_STACK_LINE(757)
										bool tmp56 = (Value1 < (int)0);		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(757)
										if ((tmp56)){
											HX_STACK_LINE(757)
											tmp55 = (int)0;
										}
										else{
											HX_STACK_LINE(757)
											tmp55 = Value1;
										}
									}
									HX_STACK_LINE(757)
									int tmp56 = (int(tmp55) << int((int)8));		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(757)
									hx::OrEq(this1,tmp56);
									HX_STACK_LINE(757)
									Value1;
								}
								HX_STACK_LINE(757)
								mid;
							}
							HX_STACK_LINE(757)
							{
								HX_STACK_LINE(757)
								{
									HX_STACK_LINE(757)
									Float tmp52 = (match * (int)255);		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(757)
									int tmp53 = ::Math_obj::round(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(757)
									int Value1 = tmp53;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(757)
									hx::AndEq(this1,(int)-256);
									HX_STACK_LINE(757)
									bool tmp54 = (Value1 > (int)255);		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(757)
									int tmp55;		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(757)
									if ((tmp54)){
										HX_STACK_LINE(757)
										tmp55 = (int)255;
									}
									else{
										HX_STACK_LINE(757)
										bool tmp56 = (Value1 < (int)0);		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(757)
										if ((tmp56)){
											HX_STACK_LINE(757)
											tmp55 = (int)0;
										}
										else{
											HX_STACK_LINE(757)
											tmp55 = Value1;
										}
									}
									HX_STACK_LINE(757)
									hx::OrEq(this1,tmp55);
									HX_STACK_LINE(757)
									Value1;
								}
								HX_STACK_LINE(757)
								match;
							}
							HX_STACK_LINE(757)
							{
								HX_STACK_LINE(757)
								{
									HX_STACK_LINE(757)
									Float tmp52 = (Alpha * (int)255);		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(757)
									int tmp53 = ::Math_obj::round(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(757)
									int Value1 = tmp53;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(757)
									hx::AndEq(this1,(int)16777215);
									HX_STACK_LINE(757)
									bool tmp54 = (Value1 > (int)255);		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(757)
									int tmp55;		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(757)
									if ((tmp54)){
										HX_STACK_LINE(757)
										tmp55 = (int)255;
									}
									else{
										HX_STACK_LINE(757)
										bool tmp56 = (Value1 < (int)0);		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(757)
										if ((tmp56)){
											HX_STACK_LINE(757)
											tmp55 = (int)0;
										}
										else{
											HX_STACK_LINE(757)
											tmp55 = Value1;
										}
									}
									HX_STACK_LINE(757)
									int tmp56 = (int(tmp55) << int((int)24));		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(757)
									hx::OrEq(this1,tmp56);
									HX_STACK_LINE(757)
									Value1;
								}
								HX_STACK_LINE(757)
								Alpha;
							}
							HX_STACK_LINE(757)
							tmp51 = this1;
						}
						HX_STACK_LINE(757)
						tmp51;
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(757)
						int tmp51;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(757)
						{
							HX_STACK_LINE(757)
							{
								HX_STACK_LINE(757)
								{
									HX_STACK_LINE(757)
									Float tmp52 = (mid * (int)255);		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(757)
									int tmp53 = ::Math_obj::round(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(757)
									int Value1 = tmp53;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(757)
									hx::AndEq(this1,(int)-16711681);
									HX_STACK_LINE(757)
									bool tmp54 = (Value1 > (int)255);		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(757)
									int tmp55;		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(757)
									if ((tmp54)){
										HX_STACK_LINE(757)
										tmp55 = (int)255;
									}
									else{
										HX_STACK_LINE(757)
										bool tmp56 = (Value1 < (int)0);		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(757)
										if ((tmp56)){
											HX_STACK_LINE(757)
											tmp55 = (int)0;
										}
										else{
											HX_STACK_LINE(757)
											tmp55 = Value1;
										}
									}
									HX_STACK_LINE(757)
									int tmp56 = (int(tmp55) << int((int)16));		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(757)
									hx::OrEq(this1,tmp56);
									HX_STACK_LINE(757)
									Value1;
								}
								HX_STACK_LINE(757)
								mid;
							}
							HX_STACK_LINE(757)
							{
								HX_STACK_LINE(757)
								{
									HX_STACK_LINE(757)
									Float tmp52 = (Chroma * (int)255);		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(757)
									int tmp53 = ::Math_obj::round(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(757)
									int Value1 = tmp53;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(757)
									hx::AndEq(this1,(int)-65281);
									HX_STACK_LINE(757)
									bool tmp54 = (Value1 > (int)255);		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(757)
									int tmp55;		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(757)
									if ((tmp54)){
										HX_STACK_LINE(757)
										tmp55 = (int)255;
									}
									else{
										HX_STACK_LINE(757)
										bool tmp56 = (Value1 < (int)0);		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(757)
										if ((tmp56)){
											HX_STACK_LINE(757)
											tmp55 = (int)0;
										}
										else{
											HX_STACK_LINE(757)
											tmp55 = Value1;
										}
									}
									HX_STACK_LINE(757)
									int tmp56 = (int(tmp55) << int((int)8));		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(757)
									hx::OrEq(this1,tmp56);
									HX_STACK_LINE(757)
									Value1;
								}
								HX_STACK_LINE(757)
								Chroma;
							}
							HX_STACK_LINE(757)
							{
								HX_STACK_LINE(757)
								{
									HX_STACK_LINE(757)
									Float tmp52 = (match * (int)255);		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(757)
									int tmp53 = ::Math_obj::round(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(757)
									int Value1 = tmp53;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(757)
									hx::AndEq(this1,(int)-256);
									HX_STACK_LINE(757)
									bool tmp54 = (Value1 > (int)255);		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(757)
									int tmp55;		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(757)
									if ((tmp54)){
										HX_STACK_LINE(757)
										tmp55 = (int)255;
									}
									else{
										HX_STACK_LINE(757)
										bool tmp56 = (Value1 < (int)0);		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(757)
										if ((tmp56)){
											HX_STACK_LINE(757)
											tmp55 = (int)0;
										}
										else{
											HX_STACK_LINE(757)
											tmp55 = Value1;
										}
									}
									HX_STACK_LINE(757)
									hx::OrEq(this1,tmp55);
									HX_STACK_LINE(757)
									Value1;
								}
								HX_STACK_LINE(757)
								match;
							}
							HX_STACK_LINE(757)
							{
								HX_STACK_LINE(757)
								{
									HX_STACK_LINE(757)
									Float tmp52 = (Alpha * (int)255);		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(757)
									int tmp53 = ::Math_obj::round(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(757)
									int Value1 = tmp53;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(757)
									hx::AndEq(this1,(int)16777215);
									HX_STACK_LINE(757)
									bool tmp54 = (Value1 > (int)255);		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(757)
									int tmp55;		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(757)
									if ((tmp54)){
										HX_STACK_LINE(757)
										tmp55 = (int)255;
									}
									else{
										HX_STACK_LINE(757)
										bool tmp56 = (Value1 < (int)0);		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(757)
										if ((tmp56)){
											HX_STACK_LINE(757)
											tmp55 = (int)0;
										}
										else{
											HX_STACK_LINE(757)
											tmp55 = Value1;
										}
									}
									HX_STACK_LINE(757)
									int tmp56 = (int(tmp55) << int((int)24));		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(757)
									hx::OrEq(this1,tmp56);
									HX_STACK_LINE(757)
									Value1;
								}
								HX_STACK_LINE(757)
								Alpha;
							}
							HX_STACK_LINE(757)
							tmp51 = this1;
						}
						HX_STACK_LINE(757)
						tmp51;
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(757)
						int tmp51;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(757)
						{
							HX_STACK_LINE(757)
							{
								HX_STACK_LINE(757)
								{
									HX_STACK_LINE(757)
									Float tmp52 = (match * (int)255);		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(757)
									int tmp53 = ::Math_obj::round(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(757)
									int Value1 = tmp53;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(757)
									hx::AndEq(this1,(int)-16711681);
									HX_STACK_LINE(757)
									bool tmp54 = (Value1 > (int)255);		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(757)
									int tmp55;		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(757)
									if ((tmp54)){
										HX_STACK_LINE(757)
										tmp55 = (int)255;
									}
									else{
										HX_STACK_LINE(757)
										bool tmp56 = (Value1 < (int)0);		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(757)
										if ((tmp56)){
											HX_STACK_LINE(757)
											tmp55 = (int)0;
										}
										else{
											HX_STACK_LINE(757)
											tmp55 = Value1;
										}
									}
									HX_STACK_LINE(757)
									int tmp56 = (int(tmp55) << int((int)16));		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(757)
									hx::OrEq(this1,tmp56);
									HX_STACK_LINE(757)
									Value1;
								}
								HX_STACK_LINE(757)
								match;
							}
							HX_STACK_LINE(757)
							{
								HX_STACK_LINE(757)
								{
									HX_STACK_LINE(757)
									Float tmp52 = (Chroma * (int)255);		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(757)
									int tmp53 = ::Math_obj::round(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(757)
									int Value1 = tmp53;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(757)
									hx::AndEq(this1,(int)-65281);
									HX_STACK_LINE(757)
									bool tmp54 = (Value1 > (int)255);		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(757)
									int tmp55;		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(757)
									if ((tmp54)){
										HX_STACK_LINE(757)
										tmp55 = (int)255;
									}
									else{
										HX_STACK_LINE(757)
										bool tmp56 = (Value1 < (int)0);		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(757)
										if ((tmp56)){
											HX_STACK_LINE(757)
											tmp55 = (int)0;
										}
										else{
											HX_STACK_LINE(757)
											tmp55 = Value1;
										}
									}
									HX_STACK_LINE(757)
									int tmp56 = (int(tmp55) << int((int)8));		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(757)
									hx::OrEq(this1,tmp56);
									HX_STACK_LINE(757)
									Value1;
								}
								HX_STACK_LINE(757)
								Chroma;
							}
							HX_STACK_LINE(757)
							{
								HX_STACK_LINE(757)
								{
									HX_STACK_LINE(757)
									Float tmp52 = (mid * (int)255);		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(757)
									int tmp53 = ::Math_obj::round(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(757)
									int Value1 = tmp53;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(757)
									hx::AndEq(this1,(int)-256);
									HX_STACK_LINE(757)
									bool tmp54 = (Value1 > (int)255);		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(757)
									int tmp55;		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(757)
									if ((tmp54)){
										HX_STACK_LINE(757)
										tmp55 = (int)255;
									}
									else{
										HX_STACK_LINE(757)
										bool tmp56 = (Value1 < (int)0);		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(757)
										if ((tmp56)){
											HX_STACK_LINE(757)
											tmp55 = (int)0;
										}
										else{
											HX_STACK_LINE(757)
											tmp55 = Value1;
										}
									}
									HX_STACK_LINE(757)
									hx::OrEq(this1,tmp55);
									HX_STACK_LINE(757)
									Value1;
								}
								HX_STACK_LINE(757)
								mid;
							}
							HX_STACK_LINE(757)
							{
								HX_STACK_LINE(757)
								{
									HX_STACK_LINE(757)
									Float tmp52 = (Alpha * (int)255);		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(757)
									int tmp53 = ::Math_obj::round(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(757)
									int Value1 = tmp53;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(757)
									hx::AndEq(this1,(int)16777215);
									HX_STACK_LINE(757)
									bool tmp54 = (Value1 > (int)255);		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(757)
									int tmp55;		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(757)
									if ((tmp54)){
										HX_STACK_LINE(757)
										tmp55 = (int)255;
									}
									else{
										HX_STACK_LINE(757)
										bool tmp56 = (Value1 < (int)0);		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(757)
										if ((tmp56)){
											HX_STACK_LINE(757)
											tmp55 = (int)0;
										}
										else{
											HX_STACK_LINE(757)
											tmp55 = Value1;
										}
									}
									HX_STACK_LINE(757)
									int tmp56 = (int(tmp55) << int((int)24));		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(757)
									hx::OrEq(this1,tmp56);
									HX_STACK_LINE(757)
									Value1;
								}
								HX_STACK_LINE(757)
								Alpha;
							}
							HX_STACK_LINE(757)
							tmp51 = this1;
						}
						HX_STACK_LINE(757)
						tmp51;
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(757)
						int tmp51;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(757)
						{
							HX_STACK_LINE(757)
							{
								HX_STACK_LINE(757)
								{
									HX_STACK_LINE(757)
									Float tmp52 = (match * (int)255);		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(757)
									int tmp53 = ::Math_obj::round(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(757)
									int Value1 = tmp53;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(757)
									hx::AndEq(this1,(int)-16711681);
									HX_STACK_LINE(757)
									bool tmp54 = (Value1 > (int)255);		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(757)
									int tmp55;		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(757)
									if ((tmp54)){
										HX_STACK_LINE(757)
										tmp55 = (int)255;
									}
									else{
										HX_STACK_LINE(757)
										bool tmp56 = (Value1 < (int)0);		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(757)
										if ((tmp56)){
											HX_STACK_LINE(757)
											tmp55 = (int)0;
										}
										else{
											HX_STACK_LINE(757)
											tmp55 = Value1;
										}
									}
									HX_STACK_LINE(757)
									int tmp56 = (int(tmp55) << int((int)16));		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(757)
									hx::OrEq(this1,tmp56);
									HX_STACK_LINE(757)
									Value1;
								}
								HX_STACK_LINE(757)
								match;
							}
							HX_STACK_LINE(757)
							{
								HX_STACK_LINE(757)
								{
									HX_STACK_LINE(757)
									Float tmp52 = (mid * (int)255);		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(757)
									int tmp53 = ::Math_obj::round(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(757)
									int Value1 = tmp53;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(757)
									hx::AndEq(this1,(int)-65281);
									HX_STACK_LINE(757)
									bool tmp54 = (Value1 > (int)255);		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(757)
									int tmp55;		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(757)
									if ((tmp54)){
										HX_STACK_LINE(757)
										tmp55 = (int)255;
									}
									else{
										HX_STACK_LINE(757)
										bool tmp56 = (Value1 < (int)0);		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(757)
										if ((tmp56)){
											HX_STACK_LINE(757)
											tmp55 = (int)0;
										}
										else{
											HX_STACK_LINE(757)
											tmp55 = Value1;
										}
									}
									HX_STACK_LINE(757)
									int tmp56 = (int(tmp55) << int((int)8));		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(757)
									hx::OrEq(this1,tmp56);
									HX_STACK_LINE(757)
									Value1;
								}
								HX_STACK_LINE(757)
								mid;
							}
							HX_STACK_LINE(757)
							{
								HX_STACK_LINE(757)
								{
									HX_STACK_LINE(757)
									Float tmp52 = (Chroma * (int)255);		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(757)
									int tmp53 = ::Math_obj::round(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(757)
									int Value1 = tmp53;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(757)
									hx::AndEq(this1,(int)-256);
									HX_STACK_LINE(757)
									bool tmp54 = (Value1 > (int)255);		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(757)
									int tmp55;		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(757)
									if ((tmp54)){
										HX_STACK_LINE(757)
										tmp55 = (int)255;
									}
									else{
										HX_STACK_LINE(757)
										bool tmp56 = (Value1 < (int)0);		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(757)
										if ((tmp56)){
											HX_STACK_LINE(757)
											tmp55 = (int)0;
										}
										else{
											HX_STACK_LINE(757)
											tmp55 = Value1;
										}
									}
									HX_STACK_LINE(757)
									hx::OrEq(this1,tmp55);
									HX_STACK_LINE(757)
									Value1;
								}
								HX_STACK_LINE(757)
								Chroma;
							}
							HX_STACK_LINE(757)
							{
								HX_STACK_LINE(757)
								{
									HX_STACK_LINE(757)
									Float tmp52 = (Alpha * (int)255);		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(757)
									int tmp53 = ::Math_obj::round(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(757)
									int Value1 = tmp53;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(757)
									hx::AndEq(this1,(int)16777215);
									HX_STACK_LINE(757)
									bool tmp54 = (Value1 > (int)255);		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(757)
									int tmp55;		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(757)
									if ((tmp54)){
										HX_STACK_LINE(757)
										tmp55 = (int)255;
									}
									else{
										HX_STACK_LINE(757)
										bool tmp56 = (Value1 < (int)0);		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(757)
										if ((tmp56)){
											HX_STACK_LINE(757)
											tmp55 = (int)0;
										}
										else{
											HX_STACK_LINE(757)
											tmp55 = Value1;
										}
									}
									HX_STACK_LINE(757)
									int tmp56 = (int(tmp55) << int((int)24));		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(757)
									hx::OrEq(this1,tmp56);
									HX_STACK_LINE(757)
									Value1;
								}
								HX_STACK_LINE(757)
								Alpha;
							}
							HX_STACK_LINE(757)
							tmp51 = this1;
						}
						HX_STACK_LINE(757)
						tmp51;
					}
					;break;
					case (int)4: {
						HX_STACK_LINE(757)
						int tmp51;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(757)
						{
							HX_STACK_LINE(757)
							{
								HX_STACK_LINE(757)
								{
									HX_STACK_LINE(757)
									Float tmp52 = (mid * (int)255);		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(757)
									int tmp53 = ::Math_obj::round(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(757)
									int Value1 = tmp53;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(757)
									hx::AndEq(this1,(int)-16711681);
									HX_STACK_LINE(757)
									bool tmp54 = (Value1 > (int)255);		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(757)
									int tmp55;		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(757)
									if ((tmp54)){
										HX_STACK_LINE(757)
										tmp55 = (int)255;
									}
									else{
										HX_STACK_LINE(757)
										bool tmp56 = (Value1 < (int)0);		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(757)
										if ((tmp56)){
											HX_STACK_LINE(757)
											tmp55 = (int)0;
										}
										else{
											HX_STACK_LINE(757)
											tmp55 = Value1;
										}
									}
									HX_STACK_LINE(757)
									int tmp56 = (int(tmp55) << int((int)16));		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(757)
									hx::OrEq(this1,tmp56);
									HX_STACK_LINE(757)
									Value1;
								}
								HX_STACK_LINE(757)
								mid;
							}
							HX_STACK_LINE(757)
							{
								HX_STACK_LINE(757)
								{
									HX_STACK_LINE(757)
									Float tmp52 = (match * (int)255);		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(757)
									int tmp53 = ::Math_obj::round(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(757)
									int Value1 = tmp53;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(757)
									hx::AndEq(this1,(int)-65281);
									HX_STACK_LINE(757)
									bool tmp54 = (Value1 > (int)255);		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(757)
									int tmp55;		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(757)
									if ((tmp54)){
										HX_STACK_LINE(757)
										tmp55 = (int)255;
									}
									else{
										HX_STACK_LINE(757)
										bool tmp56 = (Value1 < (int)0);		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(757)
										if ((tmp56)){
											HX_STACK_LINE(757)
											tmp55 = (int)0;
										}
										else{
											HX_STACK_LINE(757)
											tmp55 = Value1;
										}
									}
									HX_STACK_LINE(757)
									int tmp56 = (int(tmp55) << int((int)8));		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(757)
									hx::OrEq(this1,tmp56);
									HX_STACK_LINE(757)
									Value1;
								}
								HX_STACK_LINE(757)
								match;
							}
							HX_STACK_LINE(757)
							{
								HX_STACK_LINE(757)
								{
									HX_STACK_LINE(757)
									Float tmp52 = (Chroma * (int)255);		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(757)
									int tmp53 = ::Math_obj::round(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(757)
									int Value1 = tmp53;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(757)
									hx::AndEq(this1,(int)-256);
									HX_STACK_LINE(757)
									bool tmp54 = (Value1 > (int)255);		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(757)
									int tmp55;		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(757)
									if ((tmp54)){
										HX_STACK_LINE(757)
										tmp55 = (int)255;
									}
									else{
										HX_STACK_LINE(757)
										bool tmp56 = (Value1 < (int)0);		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(757)
										if ((tmp56)){
											HX_STACK_LINE(757)
											tmp55 = (int)0;
										}
										else{
											HX_STACK_LINE(757)
											tmp55 = Value1;
										}
									}
									HX_STACK_LINE(757)
									hx::OrEq(this1,tmp55);
									HX_STACK_LINE(757)
									Value1;
								}
								HX_STACK_LINE(757)
								Chroma;
							}
							HX_STACK_LINE(757)
							{
								HX_STACK_LINE(757)
								{
									HX_STACK_LINE(757)
									Float tmp52 = (Alpha * (int)255);		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(757)
									int tmp53 = ::Math_obj::round(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(757)
									int Value1 = tmp53;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(757)
									hx::AndEq(this1,(int)16777215);
									HX_STACK_LINE(757)
									bool tmp54 = (Value1 > (int)255);		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(757)
									int tmp55;		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(757)
									if ((tmp54)){
										HX_STACK_LINE(757)
										tmp55 = (int)255;
									}
									else{
										HX_STACK_LINE(757)
										bool tmp56 = (Value1 < (int)0);		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(757)
										if ((tmp56)){
											HX_STACK_LINE(757)
											tmp55 = (int)0;
										}
										else{
											HX_STACK_LINE(757)
											tmp55 = Value1;
										}
									}
									HX_STACK_LINE(757)
									int tmp56 = (int(tmp55) << int((int)24));		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(757)
									hx::OrEq(this1,tmp56);
									HX_STACK_LINE(757)
									Value1;
								}
								HX_STACK_LINE(757)
								Alpha;
							}
							HX_STACK_LINE(757)
							tmp51 = this1;
						}
						HX_STACK_LINE(757)
						tmp51;
					}
					;break;
					case (int)5: {
						HX_STACK_LINE(757)
						int tmp51;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(757)
						{
							HX_STACK_LINE(757)
							{
								HX_STACK_LINE(757)
								{
									HX_STACK_LINE(757)
									Float tmp52 = (Chroma * (int)255);		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(757)
									int tmp53 = ::Math_obj::round(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(757)
									int Value1 = tmp53;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(757)
									hx::AndEq(this1,(int)-16711681);
									HX_STACK_LINE(757)
									bool tmp54 = (Value1 > (int)255);		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(757)
									int tmp55;		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(757)
									if ((tmp54)){
										HX_STACK_LINE(757)
										tmp55 = (int)255;
									}
									else{
										HX_STACK_LINE(757)
										bool tmp56 = (Value1 < (int)0);		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(757)
										if ((tmp56)){
											HX_STACK_LINE(757)
											tmp55 = (int)0;
										}
										else{
											HX_STACK_LINE(757)
											tmp55 = Value1;
										}
									}
									HX_STACK_LINE(757)
									int tmp56 = (int(tmp55) << int((int)16));		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(757)
									hx::OrEq(this1,tmp56);
									HX_STACK_LINE(757)
									Value1;
								}
								HX_STACK_LINE(757)
								Chroma;
							}
							HX_STACK_LINE(757)
							{
								HX_STACK_LINE(757)
								{
									HX_STACK_LINE(757)
									Float tmp52 = (match * (int)255);		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(757)
									int tmp53 = ::Math_obj::round(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(757)
									int Value1 = tmp53;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(757)
									hx::AndEq(this1,(int)-65281);
									HX_STACK_LINE(757)
									bool tmp54 = (Value1 > (int)255);		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(757)
									int tmp55;		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(757)
									if ((tmp54)){
										HX_STACK_LINE(757)
										tmp55 = (int)255;
									}
									else{
										HX_STACK_LINE(757)
										bool tmp56 = (Value1 < (int)0);		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(757)
										if ((tmp56)){
											HX_STACK_LINE(757)
											tmp55 = (int)0;
										}
										else{
											HX_STACK_LINE(757)
											tmp55 = Value1;
										}
									}
									HX_STACK_LINE(757)
									int tmp56 = (int(tmp55) << int((int)8));		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(757)
									hx::OrEq(this1,tmp56);
									HX_STACK_LINE(757)
									Value1;
								}
								HX_STACK_LINE(757)
								match;
							}
							HX_STACK_LINE(757)
							{
								HX_STACK_LINE(757)
								{
									HX_STACK_LINE(757)
									Float tmp52 = (mid * (int)255);		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(757)
									int tmp53 = ::Math_obj::round(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(757)
									int Value1 = tmp53;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(757)
									hx::AndEq(this1,(int)-256);
									HX_STACK_LINE(757)
									bool tmp54 = (Value1 > (int)255);		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(757)
									int tmp55;		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(757)
									if ((tmp54)){
										HX_STACK_LINE(757)
										tmp55 = (int)255;
									}
									else{
										HX_STACK_LINE(757)
										bool tmp56 = (Value1 < (int)0);		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(757)
										if ((tmp56)){
											HX_STACK_LINE(757)
											tmp55 = (int)0;
										}
										else{
											HX_STACK_LINE(757)
											tmp55 = Value1;
										}
									}
									HX_STACK_LINE(757)
									hx::OrEq(this1,tmp55);
									HX_STACK_LINE(757)
									Value1;
								}
								HX_STACK_LINE(757)
								mid;
							}
							HX_STACK_LINE(757)
							{
								HX_STACK_LINE(757)
								{
									HX_STACK_LINE(757)
									Float tmp52 = (Alpha * (int)255);		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(757)
									int tmp53 = ::Math_obj::round(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(757)
									int Value1 = tmp53;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(757)
									hx::AndEq(this1,(int)16777215);
									HX_STACK_LINE(757)
									bool tmp54 = (Value1 > (int)255);		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(757)
									int tmp55;		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(757)
									if ((tmp54)){
										HX_STACK_LINE(757)
										tmp55 = (int)255;
									}
									else{
										HX_STACK_LINE(757)
										bool tmp56 = (Value1 < (int)0);		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(757)
										if ((tmp56)){
											HX_STACK_LINE(757)
											tmp55 = (int)0;
										}
										else{
											HX_STACK_LINE(757)
											tmp55 = Value1;
										}
									}
									HX_STACK_LINE(757)
									int tmp56 = (int(tmp55) << int((int)24));		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(757)
									hx::OrEq(this1,tmp56);
									HX_STACK_LINE(757)
									Value1;
								}
								HX_STACK_LINE(757)
								Alpha;
							}
							HX_STACK_LINE(757)
							tmp51 = this1;
						}
						HX_STACK_LINE(757)
						tmp51;
					}
					;break;
				}
			}
			HX_STACK_LINE(757)
			this1;
		}
	}
	HX_STACK_LINE(758)
	Float tmp = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(758)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,set_brightness,return )

Float FlxColor_Impl__obj::set_lightness( int this1,Float Value){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","set_lightness",0x9a4a7a2b,"flixel.util._FlxColor.FlxColor_Impl_.set_lightness","flixel/util/FlxColor.hx",762,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(763)
	{
		HX_STACK_LINE(763)
		int tmp = this1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(763)
		Float tmp1 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::get_hue(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(763)
		Float Hue = tmp1;		HX_STACK_VAR(Hue,"Hue");
		HX_STACK_LINE(763)
		int tmp2 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(763)
		int tmp3 = (int(tmp2) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(763)
		Float tmp4 = (Float(tmp3) / Float((int)255));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(763)
		int tmp5 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(763)
		int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(763)
		Float tmp7 = (Float(tmp6) / Float((int)255));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(763)
		int tmp8 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(763)
		Float tmp9 = (Float(tmp8) / Float((int)255));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(763)
		Float tmp10 = ::Math_obj::max(tmp7,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(763)
		Float tmp11 = ::Math_obj::max(tmp4,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(763)
		int tmp12 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(763)
		int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(763)
		Float tmp14 = (Float(tmp13) / Float((int)255));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(763)
		int tmp15 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(763)
		int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(763)
		Float tmp17 = (Float(tmp16) / Float((int)255));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(763)
		int tmp18 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(763)
		Float tmp19 = (Float(tmp18) / Float((int)255));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(763)
		Float tmp20 = ::Math_obj::min(tmp17,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(763)
		Float tmp21 = ::Math_obj::min(tmp14,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(763)
		Float tmp22 = (tmp11 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(763)
		int tmp23 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(763)
		int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(763)
		Float tmp25 = (Float(tmp24) / Float((int)255));		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(763)
		int tmp26 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(763)
		int tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(763)
		Float tmp28 = (Float(tmp27) / Float((int)255));		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(763)
		int tmp29 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(763)
		Float tmp30 = (Float(tmp29) / Float((int)255));		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(763)
		Float tmp31 = ::Math_obj::max(tmp28,tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(763)
		Float tmp32 = ::Math_obj::max(tmp25,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(763)
		Float tmp33 = (Float(tmp22) / Float(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(763)
		Float Saturation = tmp33;		HX_STACK_VAR(Saturation,"Saturation");
		HX_STACK_LINE(763)
		int tmp34 = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(763)
		int tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(763)
		Float tmp36 = (Float(tmp35) / Float((int)255));		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(763)
		Float Alpha = tmp36;		HX_STACK_VAR(Alpha,"Alpha");
		HX_STACK_LINE(763)
		Float tmp37 = ((int)2 * Value);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(763)
		Float tmp38 = (tmp37 - (int)1);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(763)
		Float tmp39 = ::Math_obj::abs(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(763)
		Float tmp40 = ((int)1 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(763)
		Float tmp41 = Saturation;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(763)
		Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(763)
		Float chroma = tmp42;		HX_STACK_VAR(chroma,"chroma");
		HX_STACK_LINE(763)
		Float tmp43 = Value;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(763)
		Float tmp44 = (Float(chroma) / Float((int)2));		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(763)
		Float tmp45 = (tmp43 - tmp44);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(763)
		Float match = tmp45;		HX_STACK_VAR(match,"match");
		HX_STACK_LINE(763)
		{
			HX_STACK_LINE(763)
			Float Hue1 = Hue;		HX_STACK_VAR(Hue1,"Hue1");
			HX_STACK_LINE(763)
			Float Chroma = chroma;		HX_STACK_VAR(Chroma,"Chroma");
			HX_STACK_LINE(763)
			hx::ModEq(Hue1,(int)360);
			HX_STACK_LINE(763)
			Float tmp46 = (Float(Hue1) / Float((int)60));		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(763)
			Float hueD = tmp46;		HX_STACK_VAR(hueD,"hueD");
			HX_STACK_LINE(763)
			Float tmp47 = Chroma;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(763)
			Float tmp48 = hx::Mod(hueD,(int)2);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(763)
			Float tmp49 = (tmp48 - (int)1);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(763)
			Float tmp50 = ::Math_obj::abs(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(763)
			Float tmp51 = ((int)1 - tmp50);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(763)
			Float tmp52 = (tmp47 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(763)
			Float tmp53 = match;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(763)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(763)
			Float mid = tmp54;		HX_STACK_VAR(mid,"mid");
			HX_STACK_LINE(763)
			hx::AddEq(Chroma,match);
			HX_STACK_LINE(763)
			{
				HX_STACK_LINE(763)
				Float tmp55 = hueD;		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(763)
				int tmp56 = ::Std_obj::_int(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(763)
				int _g = tmp56;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(763)
				int tmp57 = _g;		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(763)
				switch( (int)(tmp57)){
					case (int)0: {
						HX_STACK_LINE(763)
						int tmp58;		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(763)
						{
							HX_STACK_LINE(763)
							{
								HX_STACK_LINE(763)
								{
									HX_STACK_LINE(763)
									Float tmp59 = (Chroma * (int)255);		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(763)
									int tmp60 = ::Math_obj::round(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(763)
									int Value1 = tmp60;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(763)
									hx::AndEq(this1,(int)-16711681);
									HX_STACK_LINE(763)
									bool tmp61 = (Value1 > (int)255);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(763)
									int tmp62;		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(763)
									if ((tmp61)){
										HX_STACK_LINE(763)
										tmp62 = (int)255;
									}
									else{
										HX_STACK_LINE(763)
										bool tmp63 = (Value1 < (int)0);		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(763)
										if ((tmp63)){
											HX_STACK_LINE(763)
											tmp62 = (int)0;
										}
										else{
											HX_STACK_LINE(763)
											tmp62 = Value1;
										}
									}
									HX_STACK_LINE(763)
									int tmp63 = (int(tmp62) << int((int)16));		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(763)
									hx::OrEq(this1,tmp63);
									HX_STACK_LINE(763)
									Value1;
								}
								HX_STACK_LINE(763)
								Chroma;
							}
							HX_STACK_LINE(763)
							{
								HX_STACK_LINE(763)
								{
									HX_STACK_LINE(763)
									Float tmp59 = (mid * (int)255);		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(763)
									int tmp60 = ::Math_obj::round(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(763)
									int Value1 = tmp60;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(763)
									hx::AndEq(this1,(int)-65281);
									HX_STACK_LINE(763)
									bool tmp61 = (Value1 > (int)255);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(763)
									int tmp62;		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(763)
									if ((tmp61)){
										HX_STACK_LINE(763)
										tmp62 = (int)255;
									}
									else{
										HX_STACK_LINE(763)
										bool tmp63 = (Value1 < (int)0);		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(763)
										if ((tmp63)){
											HX_STACK_LINE(763)
											tmp62 = (int)0;
										}
										else{
											HX_STACK_LINE(763)
											tmp62 = Value1;
										}
									}
									HX_STACK_LINE(763)
									int tmp63 = (int(tmp62) << int((int)8));		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(763)
									hx::OrEq(this1,tmp63);
									HX_STACK_LINE(763)
									Value1;
								}
								HX_STACK_LINE(763)
								mid;
							}
							HX_STACK_LINE(763)
							{
								HX_STACK_LINE(763)
								{
									HX_STACK_LINE(763)
									Float tmp59 = (match * (int)255);		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(763)
									int tmp60 = ::Math_obj::round(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(763)
									int Value1 = tmp60;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(763)
									hx::AndEq(this1,(int)-256);
									HX_STACK_LINE(763)
									bool tmp61 = (Value1 > (int)255);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(763)
									int tmp62;		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(763)
									if ((tmp61)){
										HX_STACK_LINE(763)
										tmp62 = (int)255;
									}
									else{
										HX_STACK_LINE(763)
										bool tmp63 = (Value1 < (int)0);		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(763)
										if ((tmp63)){
											HX_STACK_LINE(763)
											tmp62 = (int)0;
										}
										else{
											HX_STACK_LINE(763)
											tmp62 = Value1;
										}
									}
									HX_STACK_LINE(763)
									hx::OrEq(this1,tmp62);
									HX_STACK_LINE(763)
									Value1;
								}
								HX_STACK_LINE(763)
								match;
							}
							HX_STACK_LINE(763)
							{
								HX_STACK_LINE(763)
								{
									HX_STACK_LINE(763)
									Float tmp59 = (Alpha * (int)255);		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(763)
									int tmp60 = ::Math_obj::round(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(763)
									int Value1 = tmp60;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(763)
									hx::AndEq(this1,(int)16777215);
									HX_STACK_LINE(763)
									bool tmp61 = (Value1 > (int)255);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(763)
									int tmp62;		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(763)
									if ((tmp61)){
										HX_STACK_LINE(763)
										tmp62 = (int)255;
									}
									else{
										HX_STACK_LINE(763)
										bool tmp63 = (Value1 < (int)0);		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(763)
										if ((tmp63)){
											HX_STACK_LINE(763)
											tmp62 = (int)0;
										}
										else{
											HX_STACK_LINE(763)
											tmp62 = Value1;
										}
									}
									HX_STACK_LINE(763)
									int tmp63 = (int(tmp62) << int((int)24));		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(763)
									hx::OrEq(this1,tmp63);
									HX_STACK_LINE(763)
									Value1;
								}
								HX_STACK_LINE(763)
								Alpha;
							}
							HX_STACK_LINE(763)
							tmp58 = this1;
						}
						HX_STACK_LINE(763)
						tmp58;
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(763)
						int tmp58;		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(763)
						{
							HX_STACK_LINE(763)
							{
								HX_STACK_LINE(763)
								{
									HX_STACK_LINE(763)
									Float tmp59 = (mid * (int)255);		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(763)
									int tmp60 = ::Math_obj::round(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(763)
									int Value1 = tmp60;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(763)
									hx::AndEq(this1,(int)-16711681);
									HX_STACK_LINE(763)
									bool tmp61 = (Value1 > (int)255);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(763)
									int tmp62;		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(763)
									if ((tmp61)){
										HX_STACK_LINE(763)
										tmp62 = (int)255;
									}
									else{
										HX_STACK_LINE(763)
										bool tmp63 = (Value1 < (int)0);		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(763)
										if ((tmp63)){
											HX_STACK_LINE(763)
											tmp62 = (int)0;
										}
										else{
											HX_STACK_LINE(763)
											tmp62 = Value1;
										}
									}
									HX_STACK_LINE(763)
									int tmp63 = (int(tmp62) << int((int)16));		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(763)
									hx::OrEq(this1,tmp63);
									HX_STACK_LINE(763)
									Value1;
								}
								HX_STACK_LINE(763)
								mid;
							}
							HX_STACK_LINE(763)
							{
								HX_STACK_LINE(763)
								{
									HX_STACK_LINE(763)
									Float tmp59 = (Chroma * (int)255);		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(763)
									int tmp60 = ::Math_obj::round(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(763)
									int Value1 = tmp60;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(763)
									hx::AndEq(this1,(int)-65281);
									HX_STACK_LINE(763)
									bool tmp61 = (Value1 > (int)255);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(763)
									int tmp62;		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(763)
									if ((tmp61)){
										HX_STACK_LINE(763)
										tmp62 = (int)255;
									}
									else{
										HX_STACK_LINE(763)
										bool tmp63 = (Value1 < (int)0);		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(763)
										if ((tmp63)){
											HX_STACK_LINE(763)
											tmp62 = (int)0;
										}
										else{
											HX_STACK_LINE(763)
											tmp62 = Value1;
										}
									}
									HX_STACK_LINE(763)
									int tmp63 = (int(tmp62) << int((int)8));		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(763)
									hx::OrEq(this1,tmp63);
									HX_STACK_LINE(763)
									Value1;
								}
								HX_STACK_LINE(763)
								Chroma;
							}
							HX_STACK_LINE(763)
							{
								HX_STACK_LINE(763)
								{
									HX_STACK_LINE(763)
									Float tmp59 = (match * (int)255);		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(763)
									int tmp60 = ::Math_obj::round(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(763)
									int Value1 = tmp60;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(763)
									hx::AndEq(this1,(int)-256);
									HX_STACK_LINE(763)
									bool tmp61 = (Value1 > (int)255);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(763)
									int tmp62;		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(763)
									if ((tmp61)){
										HX_STACK_LINE(763)
										tmp62 = (int)255;
									}
									else{
										HX_STACK_LINE(763)
										bool tmp63 = (Value1 < (int)0);		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(763)
										if ((tmp63)){
											HX_STACK_LINE(763)
											tmp62 = (int)0;
										}
										else{
											HX_STACK_LINE(763)
											tmp62 = Value1;
										}
									}
									HX_STACK_LINE(763)
									hx::OrEq(this1,tmp62);
									HX_STACK_LINE(763)
									Value1;
								}
								HX_STACK_LINE(763)
								match;
							}
							HX_STACK_LINE(763)
							{
								HX_STACK_LINE(763)
								{
									HX_STACK_LINE(763)
									Float tmp59 = (Alpha * (int)255);		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(763)
									int tmp60 = ::Math_obj::round(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(763)
									int Value1 = tmp60;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(763)
									hx::AndEq(this1,(int)16777215);
									HX_STACK_LINE(763)
									bool tmp61 = (Value1 > (int)255);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(763)
									int tmp62;		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(763)
									if ((tmp61)){
										HX_STACK_LINE(763)
										tmp62 = (int)255;
									}
									else{
										HX_STACK_LINE(763)
										bool tmp63 = (Value1 < (int)0);		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(763)
										if ((tmp63)){
											HX_STACK_LINE(763)
											tmp62 = (int)0;
										}
										else{
											HX_STACK_LINE(763)
											tmp62 = Value1;
										}
									}
									HX_STACK_LINE(763)
									int tmp63 = (int(tmp62) << int((int)24));		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(763)
									hx::OrEq(this1,tmp63);
									HX_STACK_LINE(763)
									Value1;
								}
								HX_STACK_LINE(763)
								Alpha;
							}
							HX_STACK_LINE(763)
							tmp58 = this1;
						}
						HX_STACK_LINE(763)
						tmp58;
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(763)
						int tmp58;		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(763)
						{
							HX_STACK_LINE(763)
							{
								HX_STACK_LINE(763)
								{
									HX_STACK_LINE(763)
									Float tmp59 = (match * (int)255);		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(763)
									int tmp60 = ::Math_obj::round(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(763)
									int Value1 = tmp60;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(763)
									hx::AndEq(this1,(int)-16711681);
									HX_STACK_LINE(763)
									bool tmp61 = (Value1 > (int)255);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(763)
									int tmp62;		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(763)
									if ((tmp61)){
										HX_STACK_LINE(763)
										tmp62 = (int)255;
									}
									else{
										HX_STACK_LINE(763)
										bool tmp63 = (Value1 < (int)0);		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(763)
										if ((tmp63)){
											HX_STACK_LINE(763)
											tmp62 = (int)0;
										}
										else{
											HX_STACK_LINE(763)
											tmp62 = Value1;
										}
									}
									HX_STACK_LINE(763)
									int tmp63 = (int(tmp62) << int((int)16));		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(763)
									hx::OrEq(this1,tmp63);
									HX_STACK_LINE(763)
									Value1;
								}
								HX_STACK_LINE(763)
								match;
							}
							HX_STACK_LINE(763)
							{
								HX_STACK_LINE(763)
								{
									HX_STACK_LINE(763)
									Float tmp59 = (Chroma * (int)255);		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(763)
									int tmp60 = ::Math_obj::round(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(763)
									int Value1 = tmp60;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(763)
									hx::AndEq(this1,(int)-65281);
									HX_STACK_LINE(763)
									bool tmp61 = (Value1 > (int)255);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(763)
									int tmp62;		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(763)
									if ((tmp61)){
										HX_STACK_LINE(763)
										tmp62 = (int)255;
									}
									else{
										HX_STACK_LINE(763)
										bool tmp63 = (Value1 < (int)0);		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(763)
										if ((tmp63)){
											HX_STACK_LINE(763)
											tmp62 = (int)0;
										}
										else{
											HX_STACK_LINE(763)
											tmp62 = Value1;
										}
									}
									HX_STACK_LINE(763)
									int tmp63 = (int(tmp62) << int((int)8));		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(763)
									hx::OrEq(this1,tmp63);
									HX_STACK_LINE(763)
									Value1;
								}
								HX_STACK_LINE(763)
								Chroma;
							}
							HX_STACK_LINE(763)
							{
								HX_STACK_LINE(763)
								{
									HX_STACK_LINE(763)
									Float tmp59 = (mid * (int)255);		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(763)
									int tmp60 = ::Math_obj::round(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(763)
									int Value1 = tmp60;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(763)
									hx::AndEq(this1,(int)-256);
									HX_STACK_LINE(763)
									bool tmp61 = (Value1 > (int)255);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(763)
									int tmp62;		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(763)
									if ((tmp61)){
										HX_STACK_LINE(763)
										tmp62 = (int)255;
									}
									else{
										HX_STACK_LINE(763)
										bool tmp63 = (Value1 < (int)0);		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(763)
										if ((tmp63)){
											HX_STACK_LINE(763)
											tmp62 = (int)0;
										}
										else{
											HX_STACK_LINE(763)
											tmp62 = Value1;
										}
									}
									HX_STACK_LINE(763)
									hx::OrEq(this1,tmp62);
									HX_STACK_LINE(763)
									Value1;
								}
								HX_STACK_LINE(763)
								mid;
							}
							HX_STACK_LINE(763)
							{
								HX_STACK_LINE(763)
								{
									HX_STACK_LINE(763)
									Float tmp59 = (Alpha * (int)255);		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(763)
									int tmp60 = ::Math_obj::round(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(763)
									int Value1 = tmp60;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(763)
									hx::AndEq(this1,(int)16777215);
									HX_STACK_LINE(763)
									bool tmp61 = (Value1 > (int)255);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(763)
									int tmp62;		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(763)
									if ((tmp61)){
										HX_STACK_LINE(763)
										tmp62 = (int)255;
									}
									else{
										HX_STACK_LINE(763)
										bool tmp63 = (Value1 < (int)0);		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(763)
										if ((tmp63)){
											HX_STACK_LINE(763)
											tmp62 = (int)0;
										}
										else{
											HX_STACK_LINE(763)
											tmp62 = Value1;
										}
									}
									HX_STACK_LINE(763)
									int tmp63 = (int(tmp62) << int((int)24));		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(763)
									hx::OrEq(this1,tmp63);
									HX_STACK_LINE(763)
									Value1;
								}
								HX_STACK_LINE(763)
								Alpha;
							}
							HX_STACK_LINE(763)
							tmp58 = this1;
						}
						HX_STACK_LINE(763)
						tmp58;
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(763)
						int tmp58;		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(763)
						{
							HX_STACK_LINE(763)
							{
								HX_STACK_LINE(763)
								{
									HX_STACK_LINE(763)
									Float tmp59 = (match * (int)255);		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(763)
									int tmp60 = ::Math_obj::round(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(763)
									int Value1 = tmp60;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(763)
									hx::AndEq(this1,(int)-16711681);
									HX_STACK_LINE(763)
									bool tmp61 = (Value1 > (int)255);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(763)
									int tmp62;		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(763)
									if ((tmp61)){
										HX_STACK_LINE(763)
										tmp62 = (int)255;
									}
									else{
										HX_STACK_LINE(763)
										bool tmp63 = (Value1 < (int)0);		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(763)
										if ((tmp63)){
											HX_STACK_LINE(763)
											tmp62 = (int)0;
										}
										else{
											HX_STACK_LINE(763)
											tmp62 = Value1;
										}
									}
									HX_STACK_LINE(763)
									int tmp63 = (int(tmp62) << int((int)16));		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(763)
									hx::OrEq(this1,tmp63);
									HX_STACK_LINE(763)
									Value1;
								}
								HX_STACK_LINE(763)
								match;
							}
							HX_STACK_LINE(763)
							{
								HX_STACK_LINE(763)
								{
									HX_STACK_LINE(763)
									Float tmp59 = (mid * (int)255);		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(763)
									int tmp60 = ::Math_obj::round(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(763)
									int Value1 = tmp60;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(763)
									hx::AndEq(this1,(int)-65281);
									HX_STACK_LINE(763)
									bool tmp61 = (Value1 > (int)255);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(763)
									int tmp62;		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(763)
									if ((tmp61)){
										HX_STACK_LINE(763)
										tmp62 = (int)255;
									}
									else{
										HX_STACK_LINE(763)
										bool tmp63 = (Value1 < (int)0);		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(763)
										if ((tmp63)){
											HX_STACK_LINE(763)
											tmp62 = (int)0;
										}
										else{
											HX_STACK_LINE(763)
											tmp62 = Value1;
										}
									}
									HX_STACK_LINE(763)
									int tmp63 = (int(tmp62) << int((int)8));		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(763)
									hx::OrEq(this1,tmp63);
									HX_STACK_LINE(763)
									Value1;
								}
								HX_STACK_LINE(763)
								mid;
							}
							HX_STACK_LINE(763)
							{
								HX_STACK_LINE(763)
								{
									HX_STACK_LINE(763)
									Float tmp59 = (Chroma * (int)255);		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(763)
									int tmp60 = ::Math_obj::round(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(763)
									int Value1 = tmp60;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(763)
									hx::AndEq(this1,(int)-256);
									HX_STACK_LINE(763)
									bool tmp61 = (Value1 > (int)255);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(763)
									int tmp62;		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(763)
									if ((tmp61)){
										HX_STACK_LINE(763)
										tmp62 = (int)255;
									}
									else{
										HX_STACK_LINE(763)
										bool tmp63 = (Value1 < (int)0);		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(763)
										if ((tmp63)){
											HX_STACK_LINE(763)
											tmp62 = (int)0;
										}
										else{
											HX_STACK_LINE(763)
											tmp62 = Value1;
										}
									}
									HX_STACK_LINE(763)
									hx::OrEq(this1,tmp62);
									HX_STACK_LINE(763)
									Value1;
								}
								HX_STACK_LINE(763)
								Chroma;
							}
							HX_STACK_LINE(763)
							{
								HX_STACK_LINE(763)
								{
									HX_STACK_LINE(763)
									Float tmp59 = (Alpha * (int)255);		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(763)
									int tmp60 = ::Math_obj::round(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(763)
									int Value1 = tmp60;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(763)
									hx::AndEq(this1,(int)16777215);
									HX_STACK_LINE(763)
									bool tmp61 = (Value1 > (int)255);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(763)
									int tmp62;		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(763)
									if ((tmp61)){
										HX_STACK_LINE(763)
										tmp62 = (int)255;
									}
									else{
										HX_STACK_LINE(763)
										bool tmp63 = (Value1 < (int)0);		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(763)
										if ((tmp63)){
											HX_STACK_LINE(763)
											tmp62 = (int)0;
										}
										else{
											HX_STACK_LINE(763)
											tmp62 = Value1;
										}
									}
									HX_STACK_LINE(763)
									int tmp63 = (int(tmp62) << int((int)24));		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(763)
									hx::OrEq(this1,tmp63);
									HX_STACK_LINE(763)
									Value1;
								}
								HX_STACK_LINE(763)
								Alpha;
							}
							HX_STACK_LINE(763)
							tmp58 = this1;
						}
						HX_STACK_LINE(763)
						tmp58;
					}
					;break;
					case (int)4: {
						HX_STACK_LINE(763)
						int tmp58;		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(763)
						{
							HX_STACK_LINE(763)
							{
								HX_STACK_LINE(763)
								{
									HX_STACK_LINE(763)
									Float tmp59 = (mid * (int)255);		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(763)
									int tmp60 = ::Math_obj::round(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(763)
									int Value1 = tmp60;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(763)
									hx::AndEq(this1,(int)-16711681);
									HX_STACK_LINE(763)
									bool tmp61 = (Value1 > (int)255);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(763)
									int tmp62;		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(763)
									if ((tmp61)){
										HX_STACK_LINE(763)
										tmp62 = (int)255;
									}
									else{
										HX_STACK_LINE(763)
										bool tmp63 = (Value1 < (int)0);		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(763)
										if ((tmp63)){
											HX_STACK_LINE(763)
											tmp62 = (int)0;
										}
										else{
											HX_STACK_LINE(763)
											tmp62 = Value1;
										}
									}
									HX_STACK_LINE(763)
									int tmp63 = (int(tmp62) << int((int)16));		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(763)
									hx::OrEq(this1,tmp63);
									HX_STACK_LINE(763)
									Value1;
								}
								HX_STACK_LINE(763)
								mid;
							}
							HX_STACK_LINE(763)
							{
								HX_STACK_LINE(763)
								{
									HX_STACK_LINE(763)
									Float tmp59 = (match * (int)255);		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(763)
									int tmp60 = ::Math_obj::round(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(763)
									int Value1 = tmp60;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(763)
									hx::AndEq(this1,(int)-65281);
									HX_STACK_LINE(763)
									bool tmp61 = (Value1 > (int)255);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(763)
									int tmp62;		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(763)
									if ((tmp61)){
										HX_STACK_LINE(763)
										tmp62 = (int)255;
									}
									else{
										HX_STACK_LINE(763)
										bool tmp63 = (Value1 < (int)0);		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(763)
										if ((tmp63)){
											HX_STACK_LINE(763)
											tmp62 = (int)0;
										}
										else{
											HX_STACK_LINE(763)
											tmp62 = Value1;
										}
									}
									HX_STACK_LINE(763)
									int tmp63 = (int(tmp62) << int((int)8));		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(763)
									hx::OrEq(this1,tmp63);
									HX_STACK_LINE(763)
									Value1;
								}
								HX_STACK_LINE(763)
								match;
							}
							HX_STACK_LINE(763)
							{
								HX_STACK_LINE(763)
								{
									HX_STACK_LINE(763)
									Float tmp59 = (Chroma * (int)255);		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(763)
									int tmp60 = ::Math_obj::round(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(763)
									int Value1 = tmp60;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(763)
									hx::AndEq(this1,(int)-256);
									HX_STACK_LINE(763)
									bool tmp61 = (Value1 > (int)255);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(763)
									int tmp62;		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(763)
									if ((tmp61)){
										HX_STACK_LINE(763)
										tmp62 = (int)255;
									}
									else{
										HX_STACK_LINE(763)
										bool tmp63 = (Value1 < (int)0);		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(763)
										if ((tmp63)){
											HX_STACK_LINE(763)
											tmp62 = (int)0;
										}
										else{
											HX_STACK_LINE(763)
											tmp62 = Value1;
										}
									}
									HX_STACK_LINE(763)
									hx::OrEq(this1,tmp62);
									HX_STACK_LINE(763)
									Value1;
								}
								HX_STACK_LINE(763)
								Chroma;
							}
							HX_STACK_LINE(763)
							{
								HX_STACK_LINE(763)
								{
									HX_STACK_LINE(763)
									Float tmp59 = (Alpha * (int)255);		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(763)
									int tmp60 = ::Math_obj::round(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(763)
									int Value1 = tmp60;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(763)
									hx::AndEq(this1,(int)16777215);
									HX_STACK_LINE(763)
									bool tmp61 = (Value1 > (int)255);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(763)
									int tmp62;		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(763)
									if ((tmp61)){
										HX_STACK_LINE(763)
										tmp62 = (int)255;
									}
									else{
										HX_STACK_LINE(763)
										bool tmp63 = (Value1 < (int)0);		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(763)
										if ((tmp63)){
											HX_STACK_LINE(763)
											tmp62 = (int)0;
										}
										else{
											HX_STACK_LINE(763)
											tmp62 = Value1;
										}
									}
									HX_STACK_LINE(763)
									int tmp63 = (int(tmp62) << int((int)24));		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(763)
									hx::OrEq(this1,tmp63);
									HX_STACK_LINE(763)
									Value1;
								}
								HX_STACK_LINE(763)
								Alpha;
							}
							HX_STACK_LINE(763)
							tmp58 = this1;
						}
						HX_STACK_LINE(763)
						tmp58;
					}
					;break;
					case (int)5: {
						HX_STACK_LINE(763)
						int tmp58;		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(763)
						{
							HX_STACK_LINE(763)
							{
								HX_STACK_LINE(763)
								{
									HX_STACK_LINE(763)
									Float tmp59 = (Chroma * (int)255);		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(763)
									int tmp60 = ::Math_obj::round(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(763)
									int Value1 = tmp60;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(763)
									hx::AndEq(this1,(int)-16711681);
									HX_STACK_LINE(763)
									bool tmp61 = (Value1 > (int)255);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(763)
									int tmp62;		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(763)
									if ((tmp61)){
										HX_STACK_LINE(763)
										tmp62 = (int)255;
									}
									else{
										HX_STACK_LINE(763)
										bool tmp63 = (Value1 < (int)0);		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(763)
										if ((tmp63)){
											HX_STACK_LINE(763)
											tmp62 = (int)0;
										}
										else{
											HX_STACK_LINE(763)
											tmp62 = Value1;
										}
									}
									HX_STACK_LINE(763)
									int tmp63 = (int(tmp62) << int((int)16));		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(763)
									hx::OrEq(this1,tmp63);
									HX_STACK_LINE(763)
									Value1;
								}
								HX_STACK_LINE(763)
								Chroma;
							}
							HX_STACK_LINE(763)
							{
								HX_STACK_LINE(763)
								{
									HX_STACK_LINE(763)
									Float tmp59 = (match * (int)255);		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(763)
									int tmp60 = ::Math_obj::round(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(763)
									int Value1 = tmp60;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(763)
									hx::AndEq(this1,(int)-65281);
									HX_STACK_LINE(763)
									bool tmp61 = (Value1 > (int)255);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(763)
									int tmp62;		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(763)
									if ((tmp61)){
										HX_STACK_LINE(763)
										tmp62 = (int)255;
									}
									else{
										HX_STACK_LINE(763)
										bool tmp63 = (Value1 < (int)0);		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(763)
										if ((tmp63)){
											HX_STACK_LINE(763)
											tmp62 = (int)0;
										}
										else{
											HX_STACK_LINE(763)
											tmp62 = Value1;
										}
									}
									HX_STACK_LINE(763)
									int tmp63 = (int(tmp62) << int((int)8));		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(763)
									hx::OrEq(this1,tmp63);
									HX_STACK_LINE(763)
									Value1;
								}
								HX_STACK_LINE(763)
								match;
							}
							HX_STACK_LINE(763)
							{
								HX_STACK_LINE(763)
								{
									HX_STACK_LINE(763)
									Float tmp59 = (mid * (int)255);		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(763)
									int tmp60 = ::Math_obj::round(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(763)
									int Value1 = tmp60;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(763)
									hx::AndEq(this1,(int)-256);
									HX_STACK_LINE(763)
									bool tmp61 = (Value1 > (int)255);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(763)
									int tmp62;		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(763)
									if ((tmp61)){
										HX_STACK_LINE(763)
										tmp62 = (int)255;
									}
									else{
										HX_STACK_LINE(763)
										bool tmp63 = (Value1 < (int)0);		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(763)
										if ((tmp63)){
											HX_STACK_LINE(763)
											tmp62 = (int)0;
										}
										else{
											HX_STACK_LINE(763)
											tmp62 = Value1;
										}
									}
									HX_STACK_LINE(763)
									hx::OrEq(this1,tmp62);
									HX_STACK_LINE(763)
									Value1;
								}
								HX_STACK_LINE(763)
								mid;
							}
							HX_STACK_LINE(763)
							{
								HX_STACK_LINE(763)
								{
									HX_STACK_LINE(763)
									Float tmp59 = (Alpha * (int)255);		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(763)
									int tmp60 = ::Math_obj::round(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(763)
									int Value1 = tmp60;		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(763)
									hx::AndEq(this1,(int)16777215);
									HX_STACK_LINE(763)
									bool tmp61 = (Value1 > (int)255);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(763)
									int tmp62;		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(763)
									if ((tmp61)){
										HX_STACK_LINE(763)
										tmp62 = (int)255;
									}
									else{
										HX_STACK_LINE(763)
										bool tmp63 = (Value1 < (int)0);		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(763)
										if ((tmp63)){
											HX_STACK_LINE(763)
											tmp62 = (int)0;
										}
										else{
											HX_STACK_LINE(763)
											tmp62 = Value1;
										}
									}
									HX_STACK_LINE(763)
									int tmp63 = (int(tmp62) << int((int)24));		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(763)
									hx::OrEq(this1,tmp63);
									HX_STACK_LINE(763)
									Value1;
								}
								HX_STACK_LINE(763)
								Alpha;
							}
							HX_STACK_LINE(763)
							tmp58 = this1;
						}
						HX_STACK_LINE(763)
						tmp58;
					}
					;break;
				}
			}
			HX_STACK_LINE(763)
			this1;
		}
	}
	HX_STACK_LINE(764)
	Float tmp = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(764)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,set_lightness,return )

Float FlxColor_Impl__obj::maxColor( int this1){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","maxColor",0x2d604224,"flixel.util._FlxColor.FlxColor_Impl_.maxColor","flixel/util/FlxColor.hx",768,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(769)
	int tmp = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(769)
	int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(769)
	Float tmp2 = (Float(tmp1) / Float((int)255));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(769)
	int tmp3 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(769)
	int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(769)
	Float tmp5 = (Float(tmp4) / Float((int)255));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(769)
	int tmp6 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(769)
	Float tmp7 = (Float(tmp6) / Float((int)255));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(769)
	Float tmp8 = ::Math_obj::max(tmp5,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(769)
	Float tmp9 = ::Math_obj::max(tmp2,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(769)
	return tmp9;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,maxColor,return )

Float FlxColor_Impl__obj::minColor( int this1){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","minColor",0x7a7a5c76,"flixel.util._FlxColor.FlxColor_Impl_.minColor","flixel/util/FlxColor.hx",773,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(774)
	int tmp = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(774)
	int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(774)
	Float tmp2 = (Float(tmp1) / Float((int)255));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(774)
	int tmp3 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(774)
	int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(774)
	Float tmp5 = (Float(tmp4) / Float((int)255));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(774)
	int tmp6 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(774)
	Float tmp7 = (Float(tmp6) / Float((int)255));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(774)
	Float tmp8 = ::Math_obj::min(tmp5,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(774)
	Float tmp9 = ::Math_obj::min(tmp2,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(774)
	return tmp9;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,minColor,return )

int FlxColor_Impl__obj::boundChannel( int this1,int Value){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","boundChannel",0x855280aa,"flixel.util._FlxColor.FlxColor_Impl_.boundChannel","flixel/util/FlxColor.hx",778,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(779)
	bool tmp = (Value > (int)255);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(779)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(779)
	if ((tmp)){
		HX_STACK_LINE(779)
		tmp1 = (int)255;
	}
	else{
		HX_STACK_LINE(779)
		bool tmp2 = (Value < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(779)
		if ((tmp2)){
			HX_STACK_LINE(779)
			tmp1 = (int)0;
		}
		else{
			HX_STACK_LINE(779)
			tmp1 = Value;
		}
	}
	HX_STACK_LINE(779)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,boundChannel,return )


FlxColor_Impl__obj::FlxColor_Impl__obj()
{
}

bool FlxColor_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { outValue = add_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"setRGB") ) { outValue = setRGB_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setHSB") ) { outValue = setHSB_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setHSL") ) { outValue = setHSL_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fromInt") ) { outValue = fromInt_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"fromRGB") ) { outValue = fromRGB_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"fromHSB") ) { outValue = fromHSB_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"fromHSL") ) { outValue = fromHSL_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"to24Bit") ) { outValue = to24Bit_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setCMYK") ) { outValue = setCMYK_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getThis") ) { outValue = getThis_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_red") ) { outValue = get_red_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_red") ) { outValue = set_red_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_hue") ) { outValue = get_hue_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_hue") ) { outValue = set_hue_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fromCMYK") ) { outValue = fromCMYK_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"gradient") ) { outValue = gradient_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"multiply") ) { outValue = multiply_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"subtract") ) { outValue = subtract_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"validate") ) { outValue = validate_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_blue") ) { outValue = get_blue_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_blue") ) { outValue = set_blue_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_cyan") ) { outValue = get_cyan_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_cyan") ) { outValue = set_cyan_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"maxColor") ) { outValue = maxColor_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"minColor") ) { outValue = minColor_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_green") ) { outValue = get_green_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_alpha") ) { outValue = get_alpha_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_green") ) { outValue = set_green_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { outValue = set_alpha_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_black") ) { outValue = get_black_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_black") ) { outValue = set_black_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_yellow") ) { outValue = get_yellow_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_yellow") ) { outValue = set_yellow_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"interpolate") ) { outValue = interpolate_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"toHexString") ) { outValue = toHexString_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"toWebString") ) { outValue = toWebString_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getDarkened") ) { outValue = getDarkened_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getInverted") ) { outValue = getInverted_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setRGBFloat") ) { outValue = setRGBFloat_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_magenta") ) { outValue = get_magenta_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_magenta") ) { outValue = set_magenta_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fromRGBFloat") ) { outValue = fromRGBFloat_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getColorInfo") ) { outValue = getColorInfo_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getLightened") ) { outValue = getLightened_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_redFloat") ) { outValue = get_redFloat_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_redFloat") ) { outValue = set_redFloat_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"boundChannel") ) { outValue = boundChannel_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_blueFloat") ) { outValue = get_blueFloat_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_blueFloat") ) { outValue = set_blueFloat_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_lightness") ) { outValue = get_lightness_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_lightness") ) { outValue = set_lightness_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_greenFloat") ) { outValue = get_greenFloat_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_alphaFloat") ) { outValue = get_alphaFloat_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_greenFloat") ) { outValue = set_greenFloat_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_alphaFloat") ) { outValue = set_alphaFloat_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_brightness") ) { outValue = get_brightness_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_saturation") ) { outValue = get_saturation_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_saturation") ) { outValue = set_saturation_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_brightness") ) { outValue = set_brightness_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getHSBColorWheel") ) { outValue = getHSBColorWheel_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setHSChromaMatch") ) { outValue = setHSChromaMatch_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getTriadicHarmony") ) { outValue = getTriadicHarmony_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getAnalogousHarmony") ) { outValue = getAnalogousHarmony_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getComplementHarmony") ) { outValue = getComplementHarmony_dyn(); return true;  }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"getSplitComplementHarmony") ) { outValue = getSplitComplementHarmony_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &FlxColor_Impl__obj::TRANSPARENT,HX_HCSTRING("TRANSPARENT","\x32","\x37","\xf6","\xf8")},
	{hx::fsInt,(void *) &FlxColor_Impl__obj::WHITE,HX_HCSTRING("WHITE","\x89","\x82","\xab","\x47")},
	{hx::fsInt,(void *) &FlxColor_Impl__obj::GRAY,HX_HCSTRING("GRAY","\xe3","\x97","\x2c","\x2f")},
	{hx::fsInt,(void *) &FlxColor_Impl__obj::BLACK,HX_HCSTRING("BLACK","\x9f","\x0d","\xe0","\x32")},
	{hx::fsInt,(void *) &FlxColor_Impl__obj::GREEN,HX_HCSTRING("GREEN","\xa3","\x46","\xdb","\x17")},
	{hx::fsInt,(void *) &FlxColor_Impl__obj::LIME,HX_HCSTRING("LIME","\x15","\xdf","\x73","\x32")},
	{hx::fsInt,(void *) &FlxColor_Impl__obj::YELLOW,HX_HCSTRING("YELLOW","\x74","\x4b","\xdf","\x82")},
	{hx::fsInt,(void *) &FlxColor_Impl__obj::ORANGE,HX_HCSTRING("ORANGE","\xee","\x5e","\x3f","\xf8")},
	{hx::fsInt,(void *) &FlxColor_Impl__obj::RED,HX_HCSTRING("RED","\x31","\x75","\x3e","\x00")},
	{hx::fsInt,(void *) &FlxColor_Impl__obj::PURPLE,HX_HCSTRING("PURPLE","\x3c","\xa2","\x0c","\x24")},
	{hx::fsInt,(void *) &FlxColor_Impl__obj::BLUE,HX_HCSTRING("BLUE","\x9a","\x0a","\xda","\x2b")},
	{hx::fsInt,(void *) &FlxColor_Impl__obj::BROWN,HX_HCSTRING("BROWN","\x56","\x06","\xe2","\x36")},
	{hx::fsInt,(void *) &FlxColor_Impl__obj::PINK,HX_HCSTRING("PINK","\x76","\xba","\x18","\x35")},
	{hx::fsInt,(void *) &FlxColor_Impl__obj::MAGENTA,HX_HCSTRING("MAGENTA","\x09","\x8e","\x71","\x8e")},
	{hx::fsInt,(void *) &FlxColor_Impl__obj::CYAN,HX_HCSTRING("CYAN","\x23","\x0d","\x8d","\x2c")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &FlxColor_Impl__obj::colorLookup,HX_HCSTRING("colorLookup","\x3d","\x34","\xde","\x1b")},
	{hx::fsObject /*::EReg*/ ,(void *) &FlxColor_Impl__obj::COLOR_REGEX,HX_HCSTRING("COLOR_REGEX","\x6b","\x2b","\xe2","\x09")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::TRANSPARENT,"TRANSPARENT");
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::WHITE,"WHITE");
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::GRAY,"GRAY");
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::BLACK,"BLACK");
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::GREEN,"GREEN");
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::LIME,"LIME");
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::YELLOW,"YELLOW");
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::ORANGE,"ORANGE");
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::RED,"RED");
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::PURPLE,"PURPLE");
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::BLUE,"BLUE");
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::BROWN,"BROWN");
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::PINK,"PINK");
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::MAGENTA,"MAGENTA");
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::CYAN,"CYAN");
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::colorLookup,"colorLookup");
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::COLOR_REGEX,"COLOR_REGEX");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::TRANSPARENT,"TRANSPARENT");
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::WHITE,"WHITE");
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::GRAY,"GRAY");
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::BLACK,"BLACK");
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::GREEN,"GREEN");
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::LIME,"LIME");
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::YELLOW,"YELLOW");
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::ORANGE,"ORANGE");
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::RED,"RED");
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::PURPLE,"PURPLE");
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::BLUE,"BLUE");
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::BROWN,"BROWN");
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::PINK,"PINK");
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::MAGENTA,"MAGENTA");
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::CYAN,"CYAN");
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::colorLookup,"colorLookup");
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::COLOR_REGEX,"COLOR_REGEX");
};

#endif

hx::Class FlxColor_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("TRANSPARENT","\x32","\x37","\xf6","\xf8"),
	HX_HCSTRING("WHITE","\x89","\x82","\xab","\x47"),
	HX_HCSTRING("GRAY","\xe3","\x97","\x2c","\x2f"),
	HX_HCSTRING("BLACK","\x9f","\x0d","\xe0","\x32"),
	HX_HCSTRING("GREEN","\xa3","\x46","\xdb","\x17"),
	HX_HCSTRING("LIME","\x15","\xdf","\x73","\x32"),
	HX_HCSTRING("YELLOW","\x74","\x4b","\xdf","\x82"),
	HX_HCSTRING("ORANGE","\xee","\x5e","\x3f","\xf8"),
	HX_HCSTRING("RED","\x31","\x75","\x3e","\x00"),
	HX_HCSTRING("PURPLE","\x3c","\xa2","\x0c","\x24"),
	HX_HCSTRING("BLUE","\x9a","\x0a","\xda","\x2b"),
	HX_HCSTRING("BROWN","\x56","\x06","\xe2","\x36"),
	HX_HCSTRING("PINK","\x76","\xba","\x18","\x35"),
	HX_HCSTRING("MAGENTA","\x09","\x8e","\x71","\x8e"),
	HX_HCSTRING("CYAN","\x23","\x0d","\x8d","\x2c"),
	HX_HCSTRING("colorLookup","\x3d","\x34","\xde","\x1b"),
	HX_HCSTRING("COLOR_REGEX","\x6b","\x2b","\xe2","\x09"),
	HX_HCSTRING("fromInt","\xa5","\xdd","\xfa","\x57"),
	HX_HCSTRING("fromRGB","\xc3","\x8f","\x01","\x58"),
	HX_HCSTRING("fromRGBFloat","\xd9","\xa2","\x53","\x9a"),
	HX_HCSTRING("fromCMYK","\x66","\xa9","\x76","\x9f"),
	HX_HCSTRING("fromHSB","\xad","\x03","\xfa","\x57"),
	HX_HCSTRING("fromHSL","\xb7","\x03","\xfa","\x57"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("getHSBColorWheel","\x99","\x27","\x93","\x2f"),
	HX_HCSTRING("interpolate","\xc1","\xd4","\x32","\x1f"),
	HX_HCSTRING("gradient","\xf0","\x39","\x3f","\x2a"),
	HX_HCSTRING("multiply","\x24","\xe2","\x8c","\x9a"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("subtract","\x14","\x75","\x11","\xf8"),
	HX_HCSTRING("getComplementHarmony","\x4a","\x20","\xb6","\xd3"),
	HX_HCSTRING("getAnalogousHarmony","\xdf","\x79","\xe2","\xa4"),
	HX_HCSTRING("getSplitComplementHarmony","\xbc","\xbe","\x30","\x75"),
	HX_HCSTRING("getTriadicHarmony","\xf4","\x5d","\xd3","\xab"),
	HX_HCSTRING("to24Bit","\xd0","\x66","\xf1","\x25"),
	HX_HCSTRING("toHexString","\x11","\x69","\xb3","\x6d"),
	HX_HCSTRING("toWebString","\x8a","\x5b","\x00","\x37"),
	HX_HCSTRING("getColorInfo","\xfb","\x5f","\x7f","\x30"),
	HX_HCSTRING("getDarkened","\x34","\xe7","\xef","\xb2"),
	HX_HCSTRING("getLightened","\x68","\xad","\xb1","\xe0"),
	HX_HCSTRING("getInverted","\xab","\x73","\x25","\x1b"),
	HX_HCSTRING("setRGB","\x8b","\x4c","\x6e","\x6f"),
	HX_HCSTRING("setRGBFloat","\x11","\x91","\x9d","\x2a"),
	HX_HCSTRING("setCMYK","\x9e","\x1b","\x2f","\x07"),
	HX_HCSTRING("setHSB","\x75","\xc0","\x66","\x6f"),
	HX_HCSTRING("setHSL","\x7f","\xc0","\x66","\x6f"),
	HX_HCSTRING("setHSChromaMatch","\xc2","\x69","\x0f","\x10"),
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("getThis","\x14","\xb6","\x7e","\x1f"),
	HX_HCSTRING("validate","\x96","\xd0","\xe3","\x04"),
	HX_HCSTRING("get_red","\xe8","\xa1","\xcb","\x26"),
	HX_HCSTRING("get_green","\x1a","\x6b","\x96","\xdd"),
	HX_HCSTRING("get_blue","\x23","\xfe","\xd3","\xc0"),
	HX_HCSTRING("get_alpha","\xb5","\x03","\x40","\x65"),
	HX_HCSTRING("get_redFloat","\x94","\xaa","\xfc","\x26"),
	HX_HCSTRING("get_greenFloat","\x22","\x4c","\x51","\x4d"),
	HX_HCSTRING("get_blueFloat","\x79","\x18","\x35","\x9c"),
	HX_HCSTRING("get_alphaFloat","\xa7","\xa1","\x31","\x99"),
	HX_HCSTRING("set_red","\xf4","\x32","\xcd","\x19"),
	HX_HCSTRING("set_green","\x26","\x57","\xe7","\xc0"),
	HX_HCSTRING("set_blue","\x97","\x57","\x31","\x6f"),
	HX_HCSTRING("set_alpha","\xc1","\xef","\x90","\x48"),
	HX_HCSTRING("set_redFloat","\x08","\xce","\xf5","\x3b"),
	HX_HCSTRING("set_greenFloat","\x96","\x34","\x71","\x6d"),
	HX_HCSTRING("set_blueFloat","\x85","\xfa","\x3a","\xe1"),
	HX_HCSTRING("set_alphaFloat","\x1b","\x8a","\x51","\xb9"),
	HX_HCSTRING("get_cyan","\xac","\x00","\x87","\xc1"),
	HX_HCSTRING("get_magenta","\x40","\x1a","\x98","\x94"),
	HX_HCSTRING("get_yellow","\x3d","\x0f","\xe4","\xc0"),
	HX_HCSTRING("get_black","\x16","\x32","\x9b","\xf8"),
	HX_HCSTRING("set_cyan","\x20","\x5a","\xe4","\x6f"),
	HX_HCSTRING("set_magenta","\x4c","\x21","\x05","\x9f"),
	HX_HCSTRING("set_yellow","\xb1","\xad","\x61","\xc4"),
	HX_HCSTRING("set_black","\x22","\x1e","\xec","\xdb"),
	HX_HCSTRING("get_hue","\x4f","\x19","\xc4","\x26"),
	HX_HCSTRING("get_brightness","\x1a","\x16","\x67","\xdb"),
	HX_HCSTRING("get_saturation","\x1b","\x5c","\x97","\x6c"),
	HX_HCSTRING("get_lightness","\x44","\x08","\xab","\x98"),
	HX_HCSTRING("set_hue","\x5b","\xaa","\xc5","\x19"),
	HX_HCSTRING("set_saturation","\x8f","\x44","\xb7","\x8c"),
	HX_HCSTRING("set_brightness","\x8e","\xfe","\x86","\xfb"),
	HX_HCSTRING("set_lightness","\x50","\xea","\xb0","\xdd"),
	HX_HCSTRING("maxColor","\x1f","\xc4","\x79","\xf4"),
	HX_HCSTRING("minColor","\x71","\xde","\x93","\x41"),
	HX_HCSTRING("boundChannel","\x25","\x1c","\x54","\x83"),
	::String(null()) };

void FlxColor_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util._FlxColor.FlxColor_Impl_","\x09","\xb7","\xa9","\xef");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxColor_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlxColor_Impl__obj >;
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

void FlxColor_Impl__obj::__boot()
{
	TRANSPARENT= (int)0;
	WHITE= (int)-1;
	GRAY= (int)-8355712;
	BLACK= (int)-16777216;
	GREEN= (int)-16744448;
	LIME= (int)-16711936;
	YELLOW= (int)-256;
	ORANGE= (int)-23296;
	RED= (int)-65536;
	PURPLE= (int)-8388480;
	BLUE= (int)-16776961;
	BROWN= (int)-7650029;
	PINK= (int)-16181;
	MAGENTA= (int)-65281;
	CYAN= (int)-16711681;
struct _Function_0_1{
	inline static ::haxe::ds::StringMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/macros/FlxMacroUtil.hx",54,0x8cc0f087)
		{
			HX_STACK_LINE(54)
			::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(54)
			{
				HX_STACK_LINE(54)
				::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(54)
				::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(54)
				tmp = tmp2;
			}
			HX_STACK_LINE(54)
			::haxe::ds::StringMap _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("TRANSPARENT","\x32","\x37","\xf6","\xf8"),(int)0);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("WHITE","\x89","\x82","\xab","\x47"),(int)-1);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("GRAY","\xe3","\x97","\x2c","\x2f"),(int)-8355712);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("BLACK","\x9f","\x0d","\xe0","\x32"),(int)-16777216);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("GREEN","\xa3","\x46","\xdb","\x17"),(int)-16744448);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("LIME","\x15","\xdf","\x73","\x32"),(int)-16711936);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("YELLOW","\x74","\x4b","\xdf","\x82"),(int)-256);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("ORANGE","\xee","\x5e","\x3f","\xf8"),(int)-23296);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("RED","\x31","\x75","\x3e","\x00"),(int)-65536);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("PURPLE","\x3c","\xa2","\x0c","\x24"),(int)-8388480);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("BLUE","\x9a","\x0a","\xda","\x2b"),(int)-16776961);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("BROWN","\x56","\x06","\xe2","\x36"),(int)-7650029);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("PINK","\x76","\xba","\x18","\x35"),(int)-16181);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("MAGENTA","\x09","\x8e","\x71","\x8e"),(int)-65281);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("CYAN","\x23","\x0d","\x8d","\x2c"),(int)-16711681);
			HX_STACK_LINE(54)
			return _g;
		}
		return null();
	}
};
	colorLookup= _Function_0_1::Block();
	COLOR_REGEX= ::EReg_obj::__new(HX_HCSTRING("^(0x|#)(([A-F0-9]{2}){3,4})$","\x25","\x93","\x28","\x2c"),HX_HCSTRING("i","\x69","\x00","\x00","\x00"));
}

} // end namespace flixel
} // end namespace util
} // end namespace _FlxColor
