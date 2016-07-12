#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_system_replay_FrameRecord
#include <flixel/system/replay/FrameRecord.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
namespace flixel{
namespace util{

Void FlxArrayUtil_obj::__construct()
{
	return null();
}

//FlxArrayUtil_obj::~FlxArrayUtil_obj() { }

Dynamic FlxArrayUtil_obj::__CreateEmpty() { return  new FlxArrayUtil_obj; }
hx::ObjectPtr< FlxArrayUtil_obj > FlxArrayUtil_obj::__new()
{  hx::ObjectPtr< FlxArrayUtil_obj > _result_ = new FlxArrayUtil_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxArrayUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxArrayUtil_obj > _result_ = new FlxArrayUtil_obj();
	_result_->__construct();
	return _result_;}

Void FlxArrayUtil_obj::setLength_Int( Array< int > array,int newLength){
{
		HX_STACK_FRAME("flixel.util.FlxArrayUtil","setLength_Int",0x3efc372d,"flixel.util.FlxArrayUtil.setLength_Int","flixel/util/FlxArrayUtil.hx",16,0xa0dc755b)
		HX_STACK_ARG(array,"array")
		HX_STACK_ARG(newLength,"newLength")
		HX_STACK_LINE(17)
		bool tmp = (newLength < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(17)
		if ((tmp)){
			HX_STACK_LINE(17)
			return null();
		}
		HX_STACK_LINE(18)
		int oldLength = array->length;		HX_STACK_VAR(oldLength,"oldLength");
		HX_STACK_LINE(19)
		int tmp1 = (newLength - oldLength);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(19)
		int diff = tmp1;		HX_STACK_VAR(diff,"diff");
		HX_STACK_LINE(20)
		bool tmp2 = (diff < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(20)
		if ((tmp2)){
			HX_STACK_LINE(25)
			int tmp3 = diff;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(25)
			int tmp4 = -(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(25)
			diff = tmp4;
			HX_STACK_LINE(26)
			{
				HX_STACK_LINE(26)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(26)
				while((true)){
					HX_STACK_LINE(26)
					bool tmp5 = (_g < diff);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(26)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(26)
					if ((tmp6)){
						HX_STACK_LINE(26)
						break;
					}
					HX_STACK_LINE(26)
					int tmp7 = (_g)++;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(26)
					int i = tmp7;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(28)
					array->pop();
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,setLength_Int,(void))

Void FlxArrayUtil_obj::setLength_flixel_group_FlxTypedGroup_T( cpp::ArrayBase array,int newLength){
{
		HX_STACK_FRAME("flixel.util.FlxArrayUtil","setLength_flixel_group_FlxTypedGroup_T",0x1139627b,"flixel.util.FlxArrayUtil.setLength_flixel_group_FlxTypedGroup_T","flixel/util/FlxArrayUtil.hx",16,0xa0dc755b)
		HX_STACK_ARG(array,"array")
		HX_STACK_ARG(newLength,"newLength")
		HX_STACK_LINE(17)
		bool tmp = (newLength < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(17)
		if ((tmp)){
			HX_STACK_LINE(17)
			return null();
		}
		HX_STACK_LINE(18)
		int oldLength = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(oldLength,"oldLength");
		HX_STACK_LINE(19)
		int tmp1 = (newLength - oldLength);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(19)
		int diff = tmp1;		HX_STACK_VAR(diff,"diff");
		HX_STACK_LINE(20)
		bool tmp2 = (diff < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(20)
		if ((tmp2)){
			HX_STACK_LINE(25)
			int tmp3 = diff;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(25)
			int tmp4 = -(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(25)
			diff = tmp4;
			HX_STACK_LINE(26)
			{
				HX_STACK_LINE(26)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(26)
				while((true)){
					HX_STACK_LINE(26)
					bool tmp5 = (_g < diff);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(26)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(26)
					if ((tmp6)){
						HX_STACK_LINE(26)
						break;
					}
					HX_STACK_LINE(26)
					int tmp7 = (_g)++;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(26)
					int i = tmp7;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(28)
					array->__Field(HX_HCSTRING("pop","\x91","\x5d","\x55","\x00"), hx::paccDynamic )();
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,setLength_flixel_group_FlxTypedGroup_T,(void))

Array< int > FlxArrayUtil_obj::flatten2DArray_Int( Array< ::Dynamic > array){
	HX_STACK_FRAME("flixel.util.FlxArrayUtil","flatten2DArray_Int",0x9867551e,"flixel.util.FlxArrayUtil.flatten2DArray_Int","flixel/util/FlxArrayUtil.hx",120,0xa0dc755b)
	HX_STACK_ARG(array,"array")
	HX_STACK_LINE(121)
	Array< int > result = Array_obj< int >::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(123)
	{
		HX_STACK_LINE(123)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(123)
		while((true)){
			HX_STACK_LINE(123)
			bool tmp = (_g < array->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(123)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(123)
			if ((tmp1)){
				HX_STACK_LINE(123)
				break;
			}
			HX_STACK_LINE(123)
			Array< int > innerArray = array->__get(_g).StaticCast< Array< int > >();		HX_STACK_VAR(innerArray,"innerArray");
			HX_STACK_LINE(123)
			++(_g);
			HX_STACK_LINE(125)
			result = result->concat(innerArray);
		}
	}
	HX_STACK_LINE(128)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxArrayUtil_obj,flatten2DArray_Int,return )

Void FlxArrayUtil_obj::setLength_cacheValue_T( cpp::ArrayBase array,int newLength){
{
		HX_STACK_FRAME("flixel.util.FlxArrayUtil","setLength_cacheValue_T",0xac46dc86,"flixel.util.FlxArrayUtil.setLength_cacheValue_T","flixel/util/FlxArrayUtil.hx",16,0xa0dc755b)
		HX_STACK_ARG(array,"array")
		HX_STACK_ARG(newLength,"newLength")
		HX_STACK_LINE(17)
		bool tmp = (newLength < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(17)
		if ((tmp)){
			HX_STACK_LINE(17)
			return null();
		}
		HX_STACK_LINE(18)
		int oldLength = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(oldLength,"oldLength");
		HX_STACK_LINE(19)
		int tmp1 = (newLength - oldLength);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(19)
		int diff = tmp1;		HX_STACK_VAR(diff,"diff");
		HX_STACK_LINE(20)
		bool tmp2 = (diff < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(20)
		if ((tmp2)){
			HX_STACK_LINE(25)
			int tmp3 = diff;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(25)
			int tmp4 = -(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(25)
			diff = tmp4;
			HX_STACK_LINE(26)
			{
				HX_STACK_LINE(26)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(26)
				while((true)){
					HX_STACK_LINE(26)
					bool tmp5 = (_g < diff);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(26)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(26)
					if ((tmp6)){
						HX_STACK_LINE(26)
						break;
					}
					HX_STACK_LINE(26)
					int tmp7 = (_g)++;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(26)
					int i = tmp7;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(28)
					array->__Field(HX_HCSTRING("pop","\x91","\x5d","\x55","\x00"), hx::paccDynamic )();
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,setLength_cacheValue_T,(void))

Void FlxArrayUtil_obj::setLength_flixel_system_replay_FrameRecord( Array< ::Dynamic > array,int newLength){
{
		HX_STACK_FRAME("flixel.util.FlxArrayUtil","setLength_flixel_system_replay_FrameRecord",0x79844eb5,"flixel.util.FlxArrayUtil.setLength_flixel_system_replay_FrameRecord","flixel/util/FlxArrayUtil.hx",16,0xa0dc755b)
		HX_STACK_ARG(array,"array")
		HX_STACK_ARG(newLength,"newLength")
		HX_STACK_LINE(17)
		bool tmp = (newLength < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(17)
		if ((tmp)){
			HX_STACK_LINE(17)
			return null();
		}
		HX_STACK_LINE(18)
		int oldLength = array->length;		HX_STACK_VAR(oldLength,"oldLength");
		HX_STACK_LINE(19)
		int tmp1 = (newLength - oldLength);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(19)
		int diff = tmp1;		HX_STACK_VAR(diff,"diff");
		HX_STACK_LINE(20)
		bool tmp2 = (diff < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(20)
		if ((tmp2)){
			HX_STACK_LINE(25)
			int tmp3 = diff;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(25)
			int tmp4 = -(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(25)
			diff = tmp4;
			HX_STACK_LINE(26)
			{
				HX_STACK_LINE(26)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(26)
				while((true)){
					HX_STACK_LINE(26)
					bool tmp5 = (_g < diff);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(26)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(26)
					if ((tmp6)){
						HX_STACK_LINE(26)
						break;
					}
					HX_STACK_LINE(26)
					int tmp7 = (_g)++;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(26)
					int i = tmp7;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(28)
					array->pop().StaticCast< ::flixel::_system::replay::FrameRecord >();
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,setLength_flixel_system_replay_FrameRecord,(void))

Array< ::Dynamic > FlxArrayUtil_obj::fastSplice_flixel_tweens_FlxTween( Array< ::Dynamic > array,::flixel::tweens::FlxTween element){
	HX_STACK_FRAME("flixel.util.FlxArrayUtil","fastSplice_flixel_tweens_FlxTween",0x134d3569,"flixel.util.FlxArrayUtil.fastSplice_flixel_tweens_FlxTween","flixel/util/FlxArrayUtil.hx",45,0xa0dc755b)
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(element,"element")
	HX_STACK_LINE(46)
	::flixel::tweens::FlxTween tmp = element;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(46)
	int tmp1 = array->indexOf(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(46)
	int index = tmp1;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(47)
	bool tmp2 = (index != (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(47)
	if ((tmp2)){
		HX_STACK_LINE(49)
		int tmp3 = (array->length - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(49)
		::flixel::tweens::FlxTween tmp4 = array->__get(tmp3).StaticCast< ::flixel::tweens::FlxTween >();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(49)
		array[index] = tmp4;
		HX_STACK_LINE(49)
		array->pop().StaticCast< ::flixel::tweens::FlxTween >();
		HX_STACK_LINE(49)
		return array;
	}
	HX_STACK_LINE(51)
	return array;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,fastSplice_flixel_tweens_FlxTween,return )

Array< ::Dynamic > FlxArrayUtil_obj::fastSplice_flixel_util_FlxTimer( Array< ::Dynamic > array,::flixel::util::FlxTimer element){
	HX_STACK_FRAME("flixel.util.FlxArrayUtil","fastSplice_flixel_util_FlxTimer",0x46676ae9,"flixel.util.FlxArrayUtil.fastSplice_flixel_util_FlxTimer","flixel/util/FlxArrayUtil.hx",45,0xa0dc755b)
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(element,"element")
	HX_STACK_LINE(46)
	::flixel::util::FlxTimer tmp = element;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(46)
	int tmp1 = array->indexOf(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(46)
	int index = tmp1;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(47)
	bool tmp2 = (index != (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(47)
	if ((tmp2)){
		HX_STACK_LINE(49)
		int tmp3 = (array->length - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(49)
		::flixel::util::FlxTimer tmp4 = array->__get(tmp3).StaticCast< ::flixel::util::FlxTimer >();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(49)
		array[index] = tmp4;
		HX_STACK_LINE(49)
		array->pop().StaticCast< ::flixel::util::FlxTimer >();
		HX_STACK_LINE(49)
		return array;
	}
	HX_STACK_LINE(51)
	return array;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,fastSplice_flixel_util_FlxTimer,return )

cpp::ArrayBase FlxArrayUtil_obj::swapAndPop_fastSplice_T( cpp::ArrayBase array,int index){
	HX_STACK_FRAME("flixel.util.FlxArrayUtil","swapAndPop_fastSplice_T",0xfdfa2694,"flixel.util.FlxArrayUtil.swapAndPop_fastSplice_T","flixel/util/FlxArrayUtil.hx",75,0xa0dc755b)
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(76)
	int tmp = (array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) - (int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(76)
	Dynamic tmp1 = array->__GetItem(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(76)
	hx::IndexRef((array).mPtr,index) = tmp1;
	HX_STACK_LINE(77)
	array->__Field(HX_HCSTRING("pop","\x91","\x5d","\x55","\x00"), hx::paccDynamic )();
	HX_STACK_LINE(78)
	return array;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,swapAndPop_fastSplice_T,return )

Void FlxArrayUtil_obj::clearArray( cpp::ArrayBase array,hx::Null< bool >  __o_recursive){
bool recursive = __o_recursive.Default(false);
	HX_STACK_FRAME("flixel.util.FlxArrayUtil","clearArray",0xac755a77,"flixel.util.FlxArrayUtil.clearArray","flixel/util/FlxArrayUtil.hx",90,0xa0dc755b)
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(recursive,"recursive")
{
		HX_STACK_LINE(91)
		bool tmp = (array != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(91)
		if ((tmp)){
			HX_STACK_LINE(93)
			bool tmp1 = recursive;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(93)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(93)
			if ((tmp2)){
				HX_STACK_LINE(95)
				while((true)){
					HX_STACK_LINE(95)
					bool tmp3 = (array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(95)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(95)
					if ((tmp4)){
						HX_STACK_LINE(95)
						break;
					}
					HX_STACK_LINE(97)
					array->__Field(HX_HCSTRING("pop","\x91","\x5d","\x55","\x00"), hx::paccDynamic )();
				}
			}
			else{
				HX_STACK_LINE(102)
				while((true)){
					HX_STACK_LINE(102)
					bool tmp3 = (array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(102)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(102)
					if ((tmp4)){
						HX_STACK_LINE(102)
						break;
					}
					HX_STACK_LINE(104)
					Dynamic tmp5 = array->__Field(HX_HCSTRING("pop","\x91","\x5d","\x55","\x00"), hx::paccDynamic )();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(104)
					Dynamic thing = tmp5;		HX_STACK_VAR(thing,"thing");
					HX_STACK_LINE(105)
					Dynamic tmp6 = thing;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(105)
					bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< Array<int> >());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(105)
					if ((tmp7)){
						HX_STACK_LINE(107)
						bool tmp8 = recursive;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(107)
						::flixel::util::FlxArrayUtil_obj::clearArray(array,tmp8);
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,clearArray,(void))

bool FlxArrayUtil_obj::equals( cpp::ArrayBase array1,cpp::ArrayBase array2){
	HX_STACK_FRAME("flixel.util.FlxArrayUtil","equals",0x2985aa6a,"flixel.util.FlxArrayUtil.equals","flixel/util/FlxArrayUtil.hx",136,0xa0dc755b)
	HX_STACK_ARG(array1,"array1")
	HX_STACK_ARG(array2,"array2")
	HX_STACK_LINE(137)
	bool tmp = (array1 == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(137)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(137)
	if ((tmp)){
		HX_STACK_LINE(137)
		tmp1 = (array2 == null());
	}
	else{
		HX_STACK_LINE(137)
		tmp1 = false;
	}
	HX_STACK_LINE(137)
	if ((tmp1)){
		HX_STACK_LINE(138)
		return true;
	}
	HX_STACK_LINE(139)
	bool tmp2 = (array1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(139)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(139)
	if ((tmp2)){
		HX_STACK_LINE(139)
		tmp3 = (array2 != null());
	}
	else{
		HX_STACK_LINE(139)
		tmp3 = false;
	}
	HX_STACK_LINE(139)
	if ((tmp3)){
		HX_STACK_LINE(140)
		return false;
	}
	HX_STACK_LINE(141)
	bool tmp4 = (array1 != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(141)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(141)
	if ((tmp4)){
		HX_STACK_LINE(141)
		tmp5 = (array2 == null());
	}
	else{
		HX_STACK_LINE(141)
		tmp5 = false;
	}
	HX_STACK_LINE(141)
	if ((tmp5)){
		HX_STACK_LINE(142)
		return false;
	}
	HX_STACK_LINE(143)
	bool tmp6 = (array1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) != array2->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(143)
	if ((tmp6)){
		HX_STACK_LINE(144)
		return false;
	}
	HX_STACK_LINE(146)
	{
		HX_STACK_LINE(146)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(146)
		int _g = array1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(146)
		while((true)){
			HX_STACK_LINE(146)
			bool tmp7 = (_g1 < _g);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(146)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(146)
			if ((tmp8)){
				HX_STACK_LINE(146)
				break;
			}
			HX_STACK_LINE(146)
			int tmp9 = (_g1)++;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(146)
			int i = tmp9;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(148)
			Dynamic tmp10 = array1->__GetItem(i);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(148)
			Dynamic tmp11 = array2->__GetItem(i);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(148)
			bool tmp12 = (tmp10 != tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(148)
			if ((tmp12)){
				HX_STACK_LINE(150)
				return false;
			}
		}
	}
	HX_STACK_LINE(153)
	return true;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,equals,return )

Dynamic FlxArrayUtil_obj::last( cpp::ArrayBase array){
	HX_STACK_FRAME("flixel.util.FlxArrayUtil","last",0x58e5d5c1,"flixel.util.FlxArrayUtil.last","flixel/util/FlxArrayUtil.hx",160,0xa0dc755b)
	HX_STACK_ARG(array,"array")
	HX_STACK_LINE(161)
	bool tmp = (array == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(161)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(161)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(161)
	if ((tmp1)){
		HX_STACK_LINE(161)
		tmp2 = (array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) == (int)0);
	}
	else{
		HX_STACK_LINE(161)
		tmp2 = true;
	}
	HX_STACK_LINE(161)
	if ((tmp2)){
		HX_STACK_LINE(162)
		return null();
	}
	HX_STACK_LINE(163)
	int tmp3 = (array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(163)
	Dynamic tmp4 = array->__GetItem(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(163)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxArrayUtil_obj,last,return )

bool FlxArrayUtil_obj::contains( cpp::ArrayBase array,Dynamic element){
	HX_STACK_FRAME("flixel.util.FlxArrayUtil","contains",0x2d55b70a,"flixel.util.FlxArrayUtil.contains","flixel/util/FlxArrayUtil.hx",167,0xa0dc755b)
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(element,"element")
	HX_STACK_LINE(168)
	Dynamic tmp = element;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(168)
	int tmp1 = array->__Field(HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"), hx::paccDynamic )(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(168)
	bool tmp2 = (tmp1 != (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(168)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,contains,return )


FlxArrayUtil_obj::FlxArrayUtil_obj()
{
}

bool FlxArrayUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"last") ) { outValue = last_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"equals") ) { outValue = equals_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"contains") ) { outValue = contains_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"clearArray") ) { outValue = clearArray_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setLength_Int") ) { outValue = setLength_Int_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"flatten2DArray_Int") ) { outValue = flatten2DArray_Int_dyn(); return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"setLength_cacheValue_T") ) { outValue = setLength_cacheValue_T_dyn(); return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"swapAndPop_fastSplice_T") ) { outValue = swapAndPop_fastSplice_T_dyn(); return true;  }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"fastSplice_flixel_util_FlxTimer") ) { outValue = fastSplice_flixel_util_FlxTimer_dyn(); return true;  }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"fastSplice_flixel_tweens_FlxTween") ) { outValue = fastSplice_flixel_tweens_FlxTween_dyn(); return true;  }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"setLength_flixel_group_FlxTypedGroup_T") ) { outValue = setLength_flixel_group_FlxTypedGroup_T_dyn(); return true;  }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"setLength_flixel_system_replay_FrameRecord") ) { outValue = setLength_flixel_system_replay_FrameRecord_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxArrayUtil_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxArrayUtil_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxArrayUtil_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("setLength_Int","\xf8","\x47","\x06","\xcb"),
	HX_HCSTRING("setLength_flixel_group_FlxTypedGroup_T","\x50","\x1a","\xe2","\x41"),
	HX_HCSTRING("flatten2DArray_Int","\x73","\x84","\x55","\x08"),
	HX_HCSTRING("setLength_cacheValue_T","\x5b","\xda","\x87","\x71"),
	HX_HCSTRING("setLength_flixel_system_replay_FrameRecord","\x0a","\x15","\xae","\x16"),
	HX_HCSTRING("fastSplice_flixel_tweens_FlxTween","\xb4","\x8d","\xa9","\xb9"),
	HX_HCSTRING("fastSplice_flixel_util_FlxTimer","\x74","\x8a","\x94","\x6f"),
	HX_HCSTRING("swapAndPop_fastSplice_T","\x1f","\x43","\x97","\xd1"),
	HX_HCSTRING("clearArray","\xcc","\xac","\x99","\xfa"),
	HX_HCSTRING("equals","\x3f","\xee","\xf2","\xbf"),
	HX_HCSTRING("last","\x56","\x0a","\xad","\x47"),
	HX_HCSTRING("contains","\x1f","\x5a","\x7b","\x2c"),
	::String(null()) };

void FlxArrayUtil_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.FlxArrayUtil","\xe3","\x4c","\x85","\x6b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxArrayUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlxArrayUtil_obj >;
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
} // end namespace util
