#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_BaseScaleMode
#include <flixel/system/scaleModes/BaseScaleMode.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_LabelValuePair
#include <flixel/util/FlxPool_flixel_util_LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
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
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif
namespace flixel{
namespace input{

Void FlxPointer_obj::__construct()
{
HX_STACK_FRAME("flixel.input.FlxPointer","new",0x20c36c33,"flixel.input.FlxPointer.new","flixel/input/FlxPointer.hx",8,0xe6a2529b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(17)
	this->_globalScreenY = (int)0;
	HX_STACK_LINE(16)
	this->_globalScreenX = (int)0;
	HX_STACK_LINE(14)
	this->screenY = (int)0;
	HX_STACK_LINE(13)
	this->screenX = (int)0;
	HX_STACK_LINE(11)
	this->y = (int)0;
	HX_STACK_LINE(10)
	this->x = (int)0;
}
;
	return null();
}

//FlxPointer_obj::~FlxPointer_obj() { }

Dynamic FlxPointer_obj::__CreateEmpty() { return  new FlxPointer_obj; }
hx::ObjectPtr< FlxPointer_obj > FlxPointer_obj::__new()
{  hx::ObjectPtr< FlxPointer_obj > _result_ = new FlxPointer_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxPointer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxPointer_obj > _result_ = new FlxPointer_obj();
	_result_->__construct();
	return _result_;}

::flixel::math::FlxPoint FlxPointer_obj::getWorldPosition( ::flixel::FlxCamera Camera,::flixel::math::FlxPoint point){
	HX_STACK_FRAME("flixel.input.FlxPointer","getWorldPosition",0x52927af2,"flixel.input.FlxPointer.getWorldPosition","flixel/input/FlxPointer.hx",30,0xe6a2529b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(31)
	bool tmp = (Camera == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(31)
	if ((tmp)){
		HX_STACK_LINE(33)
		::flixel::FlxCamera tmp1 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(33)
		Camera = tmp1;
	}
	HX_STACK_LINE(35)
	bool tmp1 = (point == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(35)
	if ((tmp1)){
		HX_STACK_LINE(37)
		::flixel::math::FlxPoint tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(37)
		{
			HX_STACK_LINE(37)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(37)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(37)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp3 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(37)
			::flixel::math::FlxPoint tmp4 = tmp3->get();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(37)
			Float tmp5 = X;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(37)
			Float tmp6 = Y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(37)
			::flixel::math::FlxPoint tmp7 = tmp4->set(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(37)
			::flixel::math::FlxPoint point1 = tmp7;		HX_STACK_VAR(point1,"point1");
			HX_STACK_LINE(37)
			point1->_inPool = false;
			HX_STACK_LINE(37)
			tmp2 = point1;
		}
		HX_STACK_LINE(37)
		point = tmp2;
	}
	HX_STACK_LINE(39)
	::flixel::FlxCamera tmp2 = Camera;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(39)
	::flixel::math::FlxPoint tmp3 = this->getScreenPosition(tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(39)
	::flixel::math::FlxPoint screenPosition = tmp3;		HX_STACK_VAR(screenPosition,"screenPosition");
	HX_STACK_LINE(40)
	Float tmp4 = screenPosition->x;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(40)
	Float tmp5 = Camera->scroll->x;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(40)
	Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(40)
	point->set_x(tmp6);
	HX_STACK_LINE(41)
	Float tmp7 = screenPosition->y;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(41)
	Float tmp8 = Camera->scroll->y;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(41)
	Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(41)
	point->set_y(tmp9);
	HX_STACK_LINE(42)
	screenPosition->put();
	HX_STACK_LINE(43)
	::flixel::math::FlxPoint tmp10 = point;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(43)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxPointer_obj,getWorldPosition,return )

::flixel::math::FlxPoint FlxPointer_obj::getScreenPosition( ::flixel::FlxCamera Camera,::flixel::math::FlxPoint point){
	HX_STACK_FRAME("flixel.input.FlxPointer","getScreenPosition",0xae561a7e,"flixel.input.FlxPointer.getScreenPosition","flixel/input/FlxPointer.hx",55,0xe6a2529b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(56)
	bool tmp = (Camera == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	if ((tmp)){
		HX_STACK_LINE(58)
		::flixel::FlxCamera tmp1 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(58)
		Camera = tmp1;
	}
	HX_STACK_LINE(60)
	bool tmp1 = (point == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(60)
	if ((tmp1)){
		HX_STACK_LINE(62)
		::flixel::math::FlxPoint tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(62)
		{
			HX_STACK_LINE(62)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(62)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(62)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp3 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(62)
			::flixel::math::FlxPoint tmp4 = tmp3->get();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(62)
			Float tmp5 = X;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(62)
			Float tmp6 = Y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(62)
			::flixel::math::FlxPoint tmp7 = tmp4->set(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(62)
			::flixel::math::FlxPoint point1 = tmp7;		HX_STACK_VAR(point1,"point1");
			HX_STACK_LINE(62)
			point1->_inPool = false;
			HX_STACK_LINE(62)
			tmp2 = point1;
		}
		HX_STACK_LINE(62)
		point = tmp2;
	}
	HX_STACK_LINE(65)
	int tmp2 = this->_globalScreenX;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(65)
	Float tmp3 = Camera->x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(65)
	Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(65)
	Float tmp5 = (((Float)0.5) * Camera->width);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(65)
	Float tmp6 = (Camera->zoom - Camera->initialZoom);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(65)
	Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(65)
	Float tmp8 = (tmp4 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(65)
	Float tmp9 = Camera->zoom;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(65)
	Float tmp10 = (Float(tmp8) / Float(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(65)
	point->set_x(tmp10);
	HX_STACK_LINE(66)
	int tmp11 = this->_globalScreenY;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(66)
	Float tmp12 = Camera->y;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(66)
	Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(66)
	Float tmp14 = (((Float)0.5) * Camera->height);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(66)
	Float tmp15 = (Camera->zoom - Camera->initialZoom);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(66)
	Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(66)
	Float tmp17 = (tmp13 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(66)
	Float tmp18 = Camera->zoom;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(66)
	Float tmp19 = (Float(tmp17) / Float(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(66)
	point->set_y(tmp19);
	HX_STACK_LINE(68)
	::flixel::math::FlxPoint tmp20 = point;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(68)
	return tmp20;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxPointer_obj,getScreenPosition,return )

::flixel::math::FlxPoint FlxPointer_obj::getPosition( ::flixel::math::FlxPoint point){
	HX_STACK_FRAME("flixel.input.FlxPointer","getPosition",0x9fea8a32,"flixel.input.FlxPointer.getPosition","flixel/input/FlxPointer.hx",75,0xe6a2529b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(76)
	bool tmp = (point == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(76)
	if ((tmp)){
		HX_STACK_LINE(77)
		::flixel::math::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(77)
		{
			HX_STACK_LINE(77)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(77)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(77)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp2 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(77)
			::flixel::math::FlxPoint tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(77)
			Float tmp4 = X;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(77)
			Float tmp5 = Y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(77)
			::flixel::math::FlxPoint tmp6 = tmp3->set(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(77)
			::flixel::math::FlxPoint point1 = tmp6;		HX_STACK_VAR(point1,"point1");
			HX_STACK_LINE(77)
			point1->_inPool = false;
			HX_STACK_LINE(77)
			tmp1 = point1;
		}
		HX_STACK_LINE(77)
		point = tmp1;
	}
	HX_STACK_LINE(78)
	int tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(78)
	int tmp2 = this->y;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(78)
	::flixel::math::FlxPoint tmp3 = point->set(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(78)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPointer_obj,getPosition,return )

bool FlxPointer_obj::overlaps( ::flixel::FlxBasic ObjectOrGroup,::flixel::FlxCamera Camera){
	HX_STACK_FRAME("flixel.input.FlxPointer","overlaps",0xe0967a59,"flixel.input.FlxPointer.overlaps","flixel/input/FlxPointer.hx",91,0xe6a2529b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup")
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_LINE(90)
	::flixel::input::FlxPointer _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(92)
	Array< bool > result = Array_obj< bool >::__new().Add(false);		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(94)
	::flixel::group::FlxTypedGroup tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(94)
	{
		HX_STACK_LINE(94)
		::flixel::group::FlxTypedGroup group = null();		HX_STACK_VAR(group,"group");
		HX_STACK_LINE(94)
		bool tmp1 = (ObjectOrGroup != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(94)
		if ((tmp1)){
			HX_STACK_LINE(94)
			bool tmp2 = (ObjectOrGroup->flixelType == (int)2);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(94)
			if ((tmp2)){
				HX_STACK_LINE(94)
				group = ((::flixel::group::FlxTypedGroup)(ObjectOrGroup));
			}
			else{
				HX_STACK_LINE(94)
				bool tmp3 = (ObjectOrGroup->flixelType == (int)4);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(94)
				if ((tmp3)){
					HX_STACK_LINE(94)
					::flixel::group::FlxTypedSpriteGroup spriteGroup = ((::flixel::group::FlxTypedSpriteGroup)(ObjectOrGroup));		HX_STACK_VAR(spriteGroup,"spriteGroup");
					HX_STACK_LINE(94)
					group = spriteGroup->group;
				}
			}
		}
		HX_STACK_LINE(94)
		tmp = group;
	}
	HX_STACK_LINE(94)
	::flixel::group::FlxTypedGroup group = tmp;		HX_STACK_VAR(group,"group");
	HX_STACK_LINE(95)
	bool tmp1 = (group != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(95)
	if ((tmp1)){

		HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_2_1,Array< bool >,result,::flixel::input::FlxPointer,_g,::flixel::FlxCamera,Camera)
		int __ArgCount() const { return 1; }
		Void run(::flixel::FlxBasic basic){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","flixel/input/FlxPointer.hx",98,0xe6a2529b)
			HX_STACK_ARG(basic,"basic")
			{
				HX_STACK_LINE(99)
				::flixel::FlxBasic tmp2 = basic;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(99)
				::flixel::FlxCamera tmp3 = Camera;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(99)
				bool tmp4 = _g->overlaps(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(99)
				if ((tmp4)){
					HX_STACK_LINE(101)
					result[(int)0] = true;
					HX_STACK_LINE(102)
					return null();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(97)
		group->forEachExists( Dynamic(new _Function_2_1(result,_g,Camera)),null());
	}
	else{
		HX_STACK_LINE(108)
		::flixel::math::FlxPoint tmp2 = this->getPosition(null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(108)
		::flixel::math::FlxPoint point = tmp2;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(109)
		::flixel::FlxObject object = ((::flixel::FlxObject)(ObjectOrGroup));		HX_STACK_VAR(object,"object");
		HX_STACK_LINE(110)
		::flixel::math::FlxPoint tmp3 = point;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(110)
		::flixel::FlxCamera tmp4 = Camera;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(110)
		bool tmp5 = object->overlapsPoint(tmp3,true,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(110)
		result[(int)0] = tmp5;
		HX_STACK_LINE(111)
		point->put();
	}
	HX_STACK_LINE(114)
	bool tmp2 = result->__get((int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(114)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxPointer_obj,overlaps,return )

Void FlxPointer_obj::setGlobalScreenPositionUnsafe( Float newX,Float newY){
{
		HX_STACK_FRAME("flixel.input.FlxPointer","setGlobalScreenPositionUnsafe",0x8f7aed13,"flixel.input.FlxPointer.setGlobalScreenPositionUnsafe","flixel/input/FlxPointer.hx",122,0xe6a2529b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(newX,"newX")
		HX_STACK_ARG(newY,"newY")
		HX_STACK_LINE(123)
		Float tmp = newX;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(123)
		::flixel::_system::scaleModes::BaseScaleMode tmp1 = ::flixel::FlxG_obj::scaleMode;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(123)
		Float tmp2 = tmp1->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(123)
		Float tmp3 = (Float(tmp) / Float(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(123)
		int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(123)
		this->_globalScreenX = tmp4;
		HX_STACK_LINE(124)
		Float tmp5 = newY;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(124)
		::flixel::_system::scaleModes::BaseScaleMode tmp6 = ::flixel::FlxG_obj::scaleMode;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(124)
		Float tmp7 = tmp6->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(124)
		Float tmp8 = (Float(tmp5) / Float(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(124)
		int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(124)
		this->_globalScreenY = tmp9;
		HX_STACK_LINE(126)
		this->updatePositions();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxPointer_obj,setGlobalScreenPositionUnsafe,(void))

::String FlxPointer_obj::toString( ){
	HX_STACK_FRAME("flixel.input.FlxPointer","toString",0xd3da77f9,"flixel.input.FlxPointer.toString","flixel/input/FlxPointer.hx",130,0xe6a2529b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(132)
	::flixel::util::LabelValuePair tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(132)
	{
		HX_STACK_LINE(132)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp1 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(132)
		::flixel::util::LabelValuePair tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(132)
		::flixel::util::LabelValuePair _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(132)
		_this->label = HX_HCSTRING("x","\x78","\x00","\x00","\x00");
		HX_STACK_LINE(132)
		int tmp3 = this->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(132)
		_this->value = tmp3;
		HX_STACK_LINE(132)
		tmp = _this;
	}
	HX_STACK_LINE(133)
	::flixel::util::LabelValuePair tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(133)
	{
		HX_STACK_LINE(133)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp2 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(133)
		::flixel::util::LabelValuePair tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(133)
		::flixel::util::LabelValuePair _this = tmp3;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(133)
		_this->label = HX_HCSTRING("y","\x79","\x00","\x00","\x00");
		HX_STACK_LINE(133)
		int tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(133)
		_this->value = tmp4;
		HX_STACK_LINE(133)
		tmp1 = _this;
	}
	HX_STACK_LINE(131)
	::String tmp2 = ::flixel::util::FlxStringUtil_obj::getDebugString(Array_obj< ::Dynamic >::__new().Add(tmp).Add(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(131)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPointer_obj,toString,return )

Void FlxPointer_obj::updatePositions( ){
{
		HX_STACK_FRAME("flixel.input.FlxPointer","updatePositions",0xb47050b4,"flixel.input.FlxPointer.updatePositions","flixel/input/FlxPointer.hx",141,0xe6a2529b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(142)
		::flixel::math::FlxPoint tmp = this->getScreenPosition(null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(142)
		::flixel::math::FlxPoint screenPosition = tmp;		HX_STACK_VAR(screenPosition,"screenPosition");
		HX_STACK_LINE(143)
		Float tmp1 = screenPosition->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(143)
		int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(143)
		this->screenX = tmp2;
		HX_STACK_LINE(144)
		Float tmp3 = screenPosition->y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(144)
		int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(144)
		this->screenY = tmp4;
		HX_STACK_LINE(145)
		screenPosition->put();
		HX_STACK_LINE(147)
		::flixel::math::FlxPoint tmp5 = this->getWorldPosition(null(),null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(147)
		::flixel::math::FlxPoint worldPosition = tmp5;		HX_STACK_VAR(worldPosition,"worldPosition");
		HX_STACK_LINE(148)
		Float tmp6 = worldPosition->x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(148)
		int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(148)
		this->x = tmp7;
		HX_STACK_LINE(149)
		Float tmp8 = worldPosition->y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(149)
		int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(149)
		this->y = tmp9;
		HX_STACK_LINE(150)
		worldPosition->put();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPointer_obj,updatePositions,(void))


FlxPointer_obj::FlxPointer_obj()
{
}

Dynamic FlxPointer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"screenX") ) { return screenX; }
		if (HX_FIELD_EQ(inName,"screenY") ) { return screenY; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"overlaps") ) { return overlaps_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getPosition") ) { return getPosition_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_globalScreenX") ) { return _globalScreenX; }
		if (HX_FIELD_EQ(inName,"_globalScreenY") ) { return _globalScreenY; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updatePositions") ) { return updatePositions_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getWorldPosition") ) { return getWorldPosition_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getScreenPosition") ) { return getScreenPosition_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"setGlobalScreenPositionUnsafe") ) { return setGlobalScreenPositionUnsafe_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxPointer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"screenX") ) { screenX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screenY") ) { screenY=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_globalScreenX") ) { _globalScreenX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_globalScreenY") ) { _globalScreenY=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxPointer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("screenX","\x6c","\xc3","\x36","\x2a"));
	outFields->push(HX_HCSTRING("screenY","\x6d","\xc3","\x36","\x2a"));
	outFields->push(HX_HCSTRING("_globalScreenX","\x8a","\xec","\xc1","\x8e"));
	outFields->push(HX_HCSTRING("_globalScreenY","\x8b","\xec","\xc1","\x8e"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxPointer_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(FlxPointer_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(FlxPointer_obj,screenX),HX_HCSTRING("screenX","\x6c","\xc3","\x36","\x2a")},
	{hx::fsInt,(int)offsetof(FlxPointer_obj,screenY),HX_HCSTRING("screenY","\x6d","\xc3","\x36","\x2a")},
	{hx::fsInt,(int)offsetof(FlxPointer_obj,_globalScreenX),HX_HCSTRING("_globalScreenX","\x8a","\xec","\xc1","\x8e")},
	{hx::fsInt,(int)offsetof(FlxPointer_obj,_globalScreenY),HX_HCSTRING("_globalScreenY","\x8b","\xec","\xc1","\x8e")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("screenX","\x6c","\xc3","\x36","\x2a"),
	HX_HCSTRING("screenY","\x6d","\xc3","\x36","\x2a"),
	HX_HCSTRING("_globalScreenX","\x8a","\xec","\xc1","\x8e"),
	HX_HCSTRING("_globalScreenY","\x8b","\xec","\xc1","\x8e"),
	HX_HCSTRING("getWorldPosition","\xa5","\x3e","\x0b","\xe6"),
	HX_HCSTRING("getScreenPosition","\x6b","\x93","\x88","\x24"),
	HX_HCSTRING("getPosition","\x5f","\x63","\xee","\xf0"),
	HX_HCSTRING("overlaps","\x0c","\xd3","\x2a","\x45"),
	HX_HCSTRING("setGlobalScreenPositionUnsafe","\x80","\x95","\xb5","\x56"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("updatePositions","\x61","\xc4","\xdc","\x1f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxPointer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxPointer_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxPointer_obj::__mClass;

void FlxPointer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.FlxPointer","\xc1","\xd6","\x8e","\xc2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxPointer_obj >;
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
} // end namespace input
