#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroupIterator
#include <flixel/group/FlxTypedGroupIterator.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
namespace flixel{
namespace group{

Void FlxTypedGroup_obj::__construct(hx::Null< int >  __o_MaxSize)
{
HX_STACK_FRAME("flixel.group.FlxTypedGroup","new",0x9772c4d8,"flixel.group.FlxTypedGroup.new","flixel/group/FlxGroup.hx",16,0x1e89d58e)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_MaxSize,"MaxSize")
int MaxSize = __o_MaxSize.Default(0);
{
	HX_STACK_LINE(81)
	this->_marker = (int)0;
	HX_STACK_LINE(77)
	this->length = (int)0;
	HX_STACK_LINE(88)
	super::__construct();
	HX_STACK_LINE(90)
	this->members = cpp::ArrayBase_obj::__new();
	HX_STACK_LINE(92)
	int tmp = MaxSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(92)
	Float tmp1 = ::Math_obj::abs(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(92)
	int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(92)
	this->set_maxSize(tmp2);
	HX_STACK_LINE(94)
	this->flixelType = (int)2;
}
;
	return null();
}

//FlxTypedGroup_obj::~FlxTypedGroup_obj() { }

Dynamic FlxTypedGroup_obj::__CreateEmpty() { return  new FlxTypedGroup_obj; }
hx::ObjectPtr< FlxTypedGroup_obj > FlxTypedGroup_obj::__new(hx::Null< int >  __o_MaxSize)
{  hx::ObjectPtr< FlxTypedGroup_obj > _result_ = new FlxTypedGroup_obj();
	_result_->__construct(__o_MaxSize);
	return _result_;}

Dynamic FlxTypedGroup_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTypedGroup_obj > _result_ = new FlxTypedGroup_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void FlxTypedGroup_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.group.FlxTypedGroup","destroy",0x8044bd72,"flixel.group.FlxTypedGroup.destroy","flixel/group/FlxGroup.hx",104,0x1e89d58e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(105)
		this->super::destroy();
		HX_STACK_LINE(107)
		bool tmp = (this->members != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(107)
		if ((tmp)){
			HX_STACK_LINE(109)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(110)
			::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
			HX_STACK_LINE(112)
			while((true)){
				HX_STACK_LINE(112)
				int tmp1 = i;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(112)
				int tmp2 = this->length;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(112)
				bool tmp3 = (tmp1 < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(112)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(112)
				if ((tmp4)){
					HX_STACK_LINE(112)
					break;
				}
				HX_STACK_LINE(114)
				int tmp5 = (i)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(114)
				Dynamic tmp6 = this->members->__GetItem(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(114)
				basic = tmp6;
				HX_STACK_LINE(116)
				bool tmp7 = (basic != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(116)
				if ((tmp7)){
					HX_STACK_LINE(117)
					basic->destroy();
				}
			}
			HX_STACK_LINE(120)
			this->members = null();
		}
	}
return null();
}


Void FlxTypedGroup_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.group.FlxTypedGroup","update",0x4e08ac91,"flixel.group.FlxTypedGroup.update","flixel/group/FlxGroup.hx",128,0x1e89d58e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(129)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(130)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(132)
		while((true)){
			HX_STACK_LINE(132)
			int tmp = i;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(132)
			int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(132)
			bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(132)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(132)
			if ((tmp3)){
				HX_STACK_LINE(132)
				break;
			}
			HX_STACK_LINE(134)
			int tmp4 = (i)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(134)
			Dynamic tmp5 = this->members->__GetItem(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(134)
			basic = tmp5;
			HX_STACK_LINE(136)
			bool tmp6 = (basic != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(136)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(136)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(136)
			if ((tmp7)){
				HX_STACK_LINE(136)
				tmp8 = basic->exists;
			}
			else{
				HX_STACK_LINE(136)
				tmp8 = false;
			}
			HX_STACK_LINE(136)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(136)
			if ((tmp8)){
				HX_STACK_LINE(136)
				tmp9 = basic->active;
			}
			else{
				HX_STACK_LINE(136)
				tmp9 = false;
			}
			HX_STACK_LINE(136)
			if ((tmp9)){
				HX_STACK_LINE(138)
				Float tmp10 = elapsed;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(138)
				basic->update(tmp10);
			}
		}
	}
return null();
}


Void FlxTypedGroup_obj::draw( ){
{
		HX_STACK_FRAME("flixel.group.FlxTypedGroup","draw",0xe667208c,"flixel.group.FlxTypedGroup.draw","flixel/group/FlxGroup.hx",147,0x1e89d58e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(148)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(149)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(151)
		while((true)){
			HX_STACK_LINE(151)
			int tmp = i;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(151)
			int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(151)
			bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(151)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(151)
			if ((tmp3)){
				HX_STACK_LINE(151)
				break;
			}
			HX_STACK_LINE(153)
			int tmp4 = (i)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(153)
			Dynamic tmp5 = this->members->__GetItem(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(153)
			basic = tmp5;
			HX_STACK_LINE(155)
			bool tmp6 = (basic != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(155)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(155)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(155)
			if ((tmp7)){
				HX_STACK_LINE(155)
				tmp8 = basic->exists;
			}
			else{
				HX_STACK_LINE(155)
				tmp8 = false;
			}
			HX_STACK_LINE(155)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(155)
			if ((tmp8)){
				HX_STACK_LINE(155)
				tmp9 = basic->visible;
			}
			else{
				HX_STACK_LINE(155)
				tmp9 = false;
			}
			HX_STACK_LINE(155)
			if ((tmp9)){
				HX_STACK_LINE(157)
				basic->draw();
			}
		}
	}
return null();
}


Dynamic FlxTypedGroup_obj::add( Dynamic Object){
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","add",0x9768e699,"flixel.group.FlxTypedGroup.add","flixel/group/FlxGroup.hx",173,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_LINE(174)
	bool tmp = (Object == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(174)
	if ((tmp)){
		HX_STACK_LINE(177)
		return null();
	}
	HX_STACK_LINE(181)
	Dynamic tmp1 = Object;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(181)
	int tmp2 = this->members->__Field(HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"), hx::paccDynamic )(tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(181)
	bool tmp3 = (tmp2 >= (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(181)
	if ((tmp3)){
		HX_STACK_LINE(183)
		Dynamic tmp4 = Object;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(183)
		return tmp4;
	}
	HX_STACK_LINE(187)
	int tmp4 = this->getFirstNull();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(187)
	int index = tmp4;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(188)
	bool tmp5 = (index != (int)-1);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(188)
	if ((tmp5)){
		HX_STACK_LINE(190)
		Dynamic tmp6 = Object;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(190)
		hx::IndexRef((this->members).mPtr,index) = tmp6;
		HX_STACK_LINE(192)
		int tmp7 = index;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(192)
		int tmp8 = this->length;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(192)
		bool tmp9 = (tmp7 >= tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(192)
		if ((tmp9)){
			HX_STACK_LINE(194)
			int tmp10 = (index + (int)1);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(194)
			this->length = tmp10;
		}
		HX_STACK_LINE(197)
		Dynamic tmp10 = Object;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(197)
		return tmp10;
	}
	HX_STACK_LINE(201)
	int tmp6 = this->maxSize;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(201)
	bool tmp7 = (tmp6 > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(201)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(201)
	if ((tmp7)){
		HX_STACK_LINE(201)
		int tmp9 = this->length;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(201)
		int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(201)
		int tmp11 = this->maxSize;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(201)
		int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(201)
		tmp8 = (tmp10 >= tmp12);
	}
	else{
		HX_STACK_LINE(201)
		tmp8 = false;
	}
	HX_STACK_LINE(201)
	if ((tmp8)){
		HX_STACK_LINE(203)
		Dynamic tmp9 = Object;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(203)
		return tmp9;
	}
	HX_STACK_LINE(207)
	Dynamic tmp9 = Object;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(207)
	this->members->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp9);
	HX_STACK_LINE(208)
	(this->length)++;
	HX_STACK_LINE(210)
	Dynamic tmp10 = Object;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(210)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,add,return )

Dynamic FlxTypedGroup_obj::insert( int position,Dynamic object){
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","insert",0x64e069c1,"flixel.group.FlxTypedGroup.insert","flixel/group/FlxGroup.hx",225,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(position,"position")
	HX_STACK_ARG(object,"object")
	HX_STACK_LINE(226)
	bool tmp = (object == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(226)
	if ((tmp)){
		HX_STACK_LINE(229)
		return null();
	}
	HX_STACK_LINE(233)
	Dynamic tmp1 = object;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(233)
	int tmp2 = this->members->__Field(HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"), hx::paccDynamic )(tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(233)
	bool tmp3 = (tmp2 >= (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(233)
	if ((tmp3)){
		HX_STACK_LINE(235)
		Dynamic tmp4 = object;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(235)
		return tmp4;
	}
	HX_STACK_LINE(239)
	int tmp4 = position;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(239)
	int tmp5 = this->length;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(239)
	bool tmp6 = (tmp4 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(239)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(239)
	if ((tmp6)){
		HX_STACK_LINE(239)
		Dynamic tmp8 = this->members->__GetItem(position);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(239)
		Dynamic tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(239)
		tmp7 = (tmp9 == null());
	}
	else{
		HX_STACK_LINE(239)
		tmp7 = false;
	}
	HX_STACK_LINE(239)
	if ((tmp7)){
		HX_STACK_LINE(241)
		Dynamic tmp8 = object;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(241)
		hx::IndexRef((this->members).mPtr,position) = tmp8;
		HX_STACK_LINE(242)
		Dynamic tmp9 = object;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(242)
		return tmp9;
	}
	HX_STACK_LINE(246)
	int tmp8 = this->maxSize;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(246)
	bool tmp9 = (tmp8 > (int)0);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(246)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(246)
	if ((tmp9)){
		HX_STACK_LINE(246)
		int tmp11 = this->length;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(246)
		int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(246)
		int tmp13 = this->maxSize;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(246)
		int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(246)
		tmp10 = (tmp12 >= tmp14);
	}
	else{
		HX_STACK_LINE(246)
		tmp10 = false;
	}
	HX_STACK_LINE(246)
	if ((tmp10)){
		HX_STACK_LINE(248)
		Dynamic tmp11 = object;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(248)
		return tmp11;
	}
	HX_STACK_LINE(252)
	int tmp11 = position;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(252)
	Dynamic tmp12 = object;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(252)
	this->members->__Field(HX_HCSTRING("insert","\x39","\x43","\xdd","\x9d"), hx::paccDynamic )(tmp11,tmp12);
	HX_STACK_LINE(253)
	(this->length)++;
	HX_STACK_LINE(255)
	Dynamic tmp13 = object;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(255)
	return tmp13;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,insert,return )

Dynamic FlxTypedGroup_obj::recycle( ::hx::Class ObjectClass,Dynamic ObjectFactory,hx::Null< bool >  __o_Force,hx::Null< bool >  __o_Revive){
bool Force = __o_Force.Default(false);
bool Revive = __o_Revive.Default(true);
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","recycle",0x934aa08b,"flixel.group.FlxTypedGroup.recycle","flixel/group/FlxGroup.hx",281,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectClass,"ObjectClass")
	HX_STACK_ARG(ObjectFactory,"ObjectFactory")
	HX_STACK_ARG(Force,"Force")
	HX_STACK_ARG(Revive,"Revive")
{
		HX_STACK_LINE(282)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(285)
		int tmp = this->maxSize;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(285)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(285)
		if ((tmp1)){
			HX_STACK_LINE(288)
			int tmp2 = this->length;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(288)
			int tmp3 = this->maxSize;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(288)
			bool tmp4 = (tmp2 < tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(288)
			if ((tmp4)){
				HX_STACK_LINE(290)
				Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(290)
				{
					HX_STACK_LINE(290)
					Dynamic object = null();		HX_STACK_VAR(object,"object");
					HX_STACK_LINE(290)
					bool tmp6 = (ObjectFactory != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(290)
					if ((tmp6)){
						HX_STACK_LINE(290)
						Dynamic tmp7 = ObjectFactory();		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(290)
						Dynamic tmp8 = object = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(290)
						this->add(tmp8);
					}
					else{
						HX_STACK_LINE(290)
						bool tmp7 = (ObjectClass != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(290)
						if ((tmp7)){
							HX_STACK_LINE(290)
							::hx::Class tmp8 = ObjectClass;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(290)
							Dynamic tmp9 = ::Type_obj::createInstance(tmp8,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(290)
							Dynamic tmp10 = object = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(290)
							this->add(tmp10);
						}
					}
					HX_STACK_LINE(290)
					tmp5 = object;
				}
				HX_STACK_LINE(290)
				Dynamic tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(290)
				return tmp6;
			}
			else{
				HX_STACK_LINE(295)
				int tmp5 = (this->_marker)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(295)
				Dynamic tmp6 = this->members->__GetItem(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(295)
				basic = tmp6;
				HX_STACK_LINE(297)
				int tmp7 = this->_marker;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(297)
				int tmp8 = this->maxSize;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(297)
				bool tmp9 = (tmp7 >= tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(297)
				if ((tmp9)){
					HX_STACK_LINE(299)
					this->_marker = (int)0;
				}
				HX_STACK_LINE(302)
				bool tmp10 = Revive;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(302)
				if ((tmp10)){
					HX_STACK_LINE(304)
					basic->revive();
				}
				HX_STACK_LINE(307)
				Dynamic tmp11 = ((Dynamic)(basic));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(307)
				return tmp11;
			}
		}
		else{
			HX_STACK_LINE(313)
			::hx::Class tmp2 = ObjectClass;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(313)
			bool tmp3 = Force;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(313)
			Dynamic tmp4 = this->getFirstAvailable(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(313)
			basic = tmp4;
			HX_STACK_LINE(315)
			bool tmp5 = (basic != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(315)
			if ((tmp5)){
				HX_STACK_LINE(317)
				bool tmp6 = Revive;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(317)
				if ((tmp6)){
					HX_STACK_LINE(319)
					basic->revive();
				}
				HX_STACK_LINE(321)
				Dynamic tmp7 = ((Dynamic)(basic));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(321)
				return tmp7;
			}
			HX_STACK_LINE(324)
			Dynamic tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(324)
			{
				HX_STACK_LINE(324)
				Dynamic object = null();		HX_STACK_VAR(object,"object");
				HX_STACK_LINE(324)
				bool tmp7 = (ObjectFactory != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(324)
				if ((tmp7)){
					HX_STACK_LINE(324)
					Dynamic tmp8 = ObjectFactory();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(324)
					Dynamic tmp9 = object = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(324)
					this->add(tmp9);
				}
				else{
					HX_STACK_LINE(324)
					bool tmp8 = (ObjectClass != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(324)
					if ((tmp8)){
						HX_STACK_LINE(324)
						::hx::Class tmp9 = ObjectClass;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(324)
						Dynamic tmp10 = ::Type_obj::createInstance(tmp9,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(324)
						Dynamic tmp11 = object = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(324)
						this->add(tmp11);
					}
				}
				HX_STACK_LINE(324)
				tmp6 = object;
			}
			HX_STACK_LINE(324)
			Dynamic tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(324)
			return tmp7;
		}
		HX_STACK_LINE(285)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTypedGroup_obj,recycle,return )

Dynamic FlxTypedGroup_obj::recycleCreateObject( ::hx::Class ObjectClass,Dynamic ObjectFactory){
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","recycleCreateObject",0x87e5d006,"flixel.group.FlxTypedGroup.recycleCreateObject","flixel/group/FlxGroup.hx",329,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectClass,"ObjectClass")
	HX_STACK_ARG(ObjectFactory,"ObjectFactory")
	HX_STACK_LINE(330)
	Dynamic object = null();		HX_STACK_VAR(object,"object");
	HX_STACK_LINE(332)
	bool tmp = (ObjectFactory != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(332)
	if ((tmp)){
		HX_STACK_LINE(334)
		Dynamic tmp1 = ObjectFactory();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(334)
		Dynamic tmp2 = object = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(334)
		this->add(tmp2);
	}
	else{
		HX_STACK_LINE(336)
		bool tmp1 = (ObjectClass != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(336)
		if ((tmp1)){
			HX_STACK_LINE(338)
			::hx::Class tmp2 = ObjectClass;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(338)
			Dynamic tmp3 = ::Type_obj::createInstance(tmp2,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(338)
			Dynamic tmp4 = object = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(338)
			this->add(tmp4);
		}
	}
	HX_STACK_LINE(341)
	Dynamic tmp1 = object;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(341)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,recycleCreateObject,return )

Dynamic FlxTypedGroup_obj::remove( Dynamic Object,hx::Null< bool >  __o_Splice){
bool Splice = __o_Splice.Default(false);
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","remove",0xcb8bc2cc,"flixel.group.FlxTypedGroup.remove","flixel/group/FlxGroup.hx",352,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(Splice,"Splice")
{
		HX_STACK_LINE(353)
		bool tmp = (this->members == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(353)
		if ((tmp)){
			HX_STACK_LINE(354)
			return null();
		}
		HX_STACK_LINE(356)
		Dynamic tmp1 = Object;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(356)
		int tmp2 = this->members->__Field(HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"), hx::paccDynamic )(tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(356)
		int index = tmp2;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(358)
		bool tmp3 = (index < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(358)
		if ((tmp3)){
			HX_STACK_LINE(359)
			return null();
		}
		HX_STACK_LINE(361)
		bool tmp4 = Splice;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(361)
		if ((tmp4)){
			HX_STACK_LINE(362)
			int tmp5 = index;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(362)
			this->members->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp5,(int)1);
		}
		else{
			HX_STACK_LINE(364)
			hx::IndexRef((this->members).mPtr,index) = null();
		}
		HX_STACK_LINE(366)
		Dynamic tmp5 = Object;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(366)
		return tmp5;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,remove,return )

Dynamic FlxTypedGroup_obj::replace( Dynamic OldObject,Dynamic NewObject){
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","replace",0x06e6d8ac,"flixel.group.FlxTypedGroup.replace","flixel/group/FlxGroup.hx",378,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(OldObject,"OldObject")
	HX_STACK_ARG(NewObject,"NewObject")
	HX_STACK_LINE(379)
	Dynamic tmp = OldObject;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(379)
	int tmp1 = this->members->__Field(HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"), hx::paccDynamic )(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(379)
	int index = tmp1;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(381)
	bool tmp2 = (index < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(381)
	if ((tmp2)){
		HX_STACK_LINE(382)
		return null();
	}
	HX_STACK_LINE(384)
	Dynamic tmp3 = NewObject;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(384)
	hx::IndexRef((this->members).mPtr,index) = tmp3;
	HX_STACK_LINE(386)
	Dynamic tmp4 = NewObject;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(386)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,replace,return )

Void FlxTypedGroup_obj::sort( Dynamic Function,hx::Null< int >  __o_Order){
int Order = __o_Order.Default(-1);
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","sort",0xf04f1be6,"flixel.group.FlxTypedGroup.sort","flixel/group/FlxGroup.hx",397,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Function,"Function")
	HX_STACK_ARG(Order,"Order")
{
		HX_STACK_LINE(398)
		Dynamic tmp = Function;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(398)
		int tmp1 = Order;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(398)
		Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(398)
		{
			HX_STACK_LINE(398)
			Dynamic f = tmp;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(398)
			int a1 = tmp1;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,int,a1,Dynamic,f)
			int __ArgCount() const { return 2; }
			int run(Dynamic a2,Dynamic a3){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","flixel/group/FlxGroup.hx",398,0x1e89d58e)
				HX_STACK_ARG(a2,"a2")
				HX_STACK_ARG(a3,"a3")
				{
					HX_STACK_LINE(398)
					int tmp3 = a1;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(398)
					Dynamic tmp4 = a2;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(398)
					Dynamic tmp5 = a3;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(398)
					int tmp6 = f(tmp3,tmp4,tmp5).Cast< int >();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(398)
					return tmp6;
				}
				return null();
			}
			HX_END_LOCAL_FUNC2(return)

			HX_STACK_LINE(398)
			tmp2 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(398)
		this->members->__Field(HX_HCSTRING("sort","\x5e","\x27","\x58","\x4c"), hx::paccDynamic )(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,sort,(void))

Dynamic FlxTypedGroup_obj::getFirstAvailable( ::hx::Class ObjectClass,hx::Null< bool >  __o_Force){
bool Force = __o_Force.Default(false);
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","getFirstAvailable",0x3f88c127,"flixel.group.FlxTypedGroup.getFirstAvailable","flixel/group/FlxGroup.hx",410,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectClass,"ObjectClass")
	HX_STACK_ARG(Force,"Force")
{
		HX_STACK_LINE(411)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(412)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(414)
		while((true)){
			HX_STACK_LINE(414)
			int tmp = i;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(414)
			int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(414)
			bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(414)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(414)
			if ((tmp3)){
				HX_STACK_LINE(414)
				break;
			}
			HX_STACK_LINE(416)
			int tmp4 = (i)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(416)
			Dynamic tmp5 = this->members->__GetItem(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(416)
			basic = tmp5;
			HX_STACK_LINE(418)
			bool tmp6 = (basic != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(418)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(418)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(418)
			if ((tmp7)){
				HX_STACK_LINE(418)
				bool tmp9 = basic->exists;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(418)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(418)
				bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(418)
				tmp8 = !(tmp11);
			}
			else{
				HX_STACK_LINE(418)
				tmp8 = false;
			}
			HX_STACK_LINE(418)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(418)
			if ((tmp8)){
				HX_STACK_LINE(418)
				bool tmp10 = (ObjectClass == null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(418)
				bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(418)
				bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(418)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(418)
				bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(418)
				bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(418)
				if ((tmp15)){
					HX_STACK_LINE(418)
					::flixel::FlxBasic tmp16 = basic;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(418)
					::hx::Class tmp17 = ObjectClass;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(418)
					::flixel::FlxBasic tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(418)
					::hx::Class tmp19 = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(418)
					::flixel::FlxBasic tmp20 = tmp18;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(418)
					::hx::Class tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(418)
					tmp9 = ::Std_obj::is(tmp20,tmp21);
				}
				else{
					HX_STACK_LINE(418)
					tmp9 = true;
				}
			}
			else{
				HX_STACK_LINE(418)
				tmp9 = false;
			}
			HX_STACK_LINE(418)
			if ((tmp9)){
				HX_STACK_LINE(420)
				bool tmp10 = Force;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(420)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(420)
				if ((tmp10)){
					HX_STACK_LINE(420)
					::flixel::FlxBasic tmp12 = basic;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(420)
					::flixel::FlxBasic tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(420)
					::hx::Class tmp14 = ::Type_obj::getClass(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(420)
					::hx::Class tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(420)
					::hx::Class tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(420)
					::String tmp17 = ::Type_obj::getClassName(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(420)
					::String tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(420)
					::hx::Class tmp19 = ObjectClass;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(420)
					::hx::Class tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(420)
					::String tmp21 = ::Type_obj::getClassName(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(420)
					::String tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(420)
					tmp11 = (tmp18 != tmp22);
				}
				else{
					HX_STACK_LINE(420)
					tmp11 = false;
				}
				HX_STACK_LINE(420)
				if ((tmp11)){
					HX_STACK_LINE(422)
					continue;
				}
				HX_STACK_LINE(424)
				int tmp12 = (i - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(424)
				Dynamic tmp13 = this->members->__GetItem(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(424)
				return tmp13;
			}
		}
		HX_STACK_LINE(428)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,getFirstAvailable,return )

int FlxTypedGroup_obj::getFirstNull( ){
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","getFirstNull",0xc17e73e9,"flixel.group.FlxTypedGroup.getFirstNull","flixel/group/FlxGroup.hx",438,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(439)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(441)
	while((true)){
		HX_STACK_LINE(441)
		int tmp = i;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(441)
		int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(441)
		bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(441)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(441)
		if ((tmp3)){
			HX_STACK_LINE(441)
			break;
		}
		HX_STACK_LINE(443)
		Dynamic tmp4 = this->members->__GetItem(i);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(443)
		bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(443)
		if ((tmp5)){
			HX_STACK_LINE(445)
			int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(445)
			return tmp6;
		}
		HX_STACK_LINE(447)
		(i)++;
	}
	HX_STACK_LINE(450)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,getFirstNull,return )

Dynamic FlxTypedGroup_obj::getFirstExisting( ){
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","getFirstExisting",0x314444ed,"flixel.group.FlxTypedGroup.getFirstExisting","flixel/group/FlxGroup.hx",460,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(461)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(462)
	::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(464)
	while((true)){
		HX_STACK_LINE(464)
		int tmp = i;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(464)
		int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(464)
		bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(464)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(464)
		if ((tmp3)){
			HX_STACK_LINE(464)
			break;
		}
		HX_STACK_LINE(466)
		int tmp4 = (i)++;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(466)
		Dynamic tmp5 = this->members->__GetItem(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(466)
		basic = tmp5;
		HX_STACK_LINE(468)
		bool tmp6 = (basic != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(468)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(468)
		if ((tmp6)){
			HX_STACK_LINE(468)
			tmp7 = basic->exists;
		}
		else{
			HX_STACK_LINE(468)
			tmp7 = false;
		}
		HX_STACK_LINE(468)
		if ((tmp7)){
			HX_STACK_LINE(470)
			Dynamic tmp8 = ((Dynamic)(basic));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(470)
			return tmp8;
		}
	}
	HX_STACK_LINE(474)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,getFirstExisting,return )

Dynamic FlxTypedGroup_obj::getFirstAlive( ){
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","getFirstAlive",0x0afc442b,"flixel.group.FlxTypedGroup.getFirstAlive","flixel/group/FlxGroup.hx",484,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(485)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(486)
	::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(488)
	while((true)){
		HX_STACK_LINE(488)
		int tmp = i;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(488)
		int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(488)
		bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(488)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(488)
		if ((tmp3)){
			HX_STACK_LINE(488)
			break;
		}
		HX_STACK_LINE(490)
		int tmp4 = (i)++;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(490)
		Dynamic tmp5 = this->members->__GetItem(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(490)
		basic = tmp5;
		HX_STACK_LINE(492)
		bool tmp6 = (basic != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(492)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(492)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(492)
		if ((tmp7)){
			HX_STACK_LINE(492)
			tmp8 = basic->exists;
		}
		else{
			HX_STACK_LINE(492)
			tmp8 = false;
		}
		HX_STACK_LINE(492)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(492)
		if ((tmp8)){
			HX_STACK_LINE(492)
			tmp9 = basic->alive;
		}
		else{
			HX_STACK_LINE(492)
			tmp9 = false;
		}
		HX_STACK_LINE(492)
		if ((tmp9)){
			HX_STACK_LINE(494)
			Dynamic tmp10 = ((Dynamic)(basic));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(494)
			return tmp10;
		}
	}
	HX_STACK_LINE(498)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,getFirstAlive,return )

Dynamic FlxTypedGroup_obj::getFirstDead( ){
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","getFirstDead",0xbad62406,"flixel.group.FlxTypedGroup.getFirstDead","flixel/group/FlxGroup.hx",508,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(509)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(510)
	::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(512)
	while((true)){
		HX_STACK_LINE(512)
		int tmp = i;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(512)
		int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(512)
		bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(512)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(512)
		if ((tmp3)){
			HX_STACK_LINE(512)
			break;
		}
		HX_STACK_LINE(514)
		int tmp4 = (i)++;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(514)
		Dynamic tmp5 = this->members->__GetItem(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(514)
		basic = tmp5;
		HX_STACK_LINE(516)
		bool tmp6 = (basic != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(516)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(516)
		if ((tmp6)){
			HX_STACK_LINE(516)
			bool tmp8 = basic->alive;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(516)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(516)
			tmp7 = !(tmp9);
		}
		else{
			HX_STACK_LINE(516)
			tmp7 = false;
		}
		HX_STACK_LINE(516)
		if ((tmp7)){
			HX_STACK_LINE(518)
			Dynamic tmp8 = ((Dynamic)(basic));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(518)
			return tmp8;
		}
	}
	HX_STACK_LINE(522)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,getFirstDead,return )

int FlxTypedGroup_obj::countLiving( ){
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","countLiving",0x0ee705d0,"flixel.group.FlxTypedGroup.countLiving","flixel/group/FlxGroup.hx",531,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(532)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(533)
	int count = (int)-1;		HX_STACK_VAR(count,"count");
	HX_STACK_LINE(534)
	::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(536)
	while((true)){
		HX_STACK_LINE(536)
		int tmp = i;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(536)
		int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(536)
		bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(536)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(536)
		if ((tmp3)){
			HX_STACK_LINE(536)
			break;
		}
		HX_STACK_LINE(538)
		int tmp4 = (i)++;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(538)
		Dynamic tmp5 = this->members->__GetItem(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(538)
		basic = tmp5;
		HX_STACK_LINE(540)
		bool tmp6 = (basic != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(540)
		if ((tmp6)){
			HX_STACK_LINE(542)
			bool tmp7 = (count < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(542)
			if ((tmp7)){
				HX_STACK_LINE(544)
				count = (int)0;
			}
			HX_STACK_LINE(546)
			bool tmp8 = basic->exists;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(546)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(546)
			if ((tmp8)){
				HX_STACK_LINE(546)
				tmp9 = basic->alive;
			}
			else{
				HX_STACK_LINE(546)
				tmp9 = false;
			}
			HX_STACK_LINE(546)
			if ((tmp9)){
				HX_STACK_LINE(548)
				(count)++;
			}
		}
	}
	HX_STACK_LINE(553)
	int tmp = count;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(553)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,countLiving,return )

int FlxTypedGroup_obj::countDead( ){
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","countDead",0x0964718b,"flixel.group.FlxTypedGroup.countDead","flixel/group/FlxGroup.hx",562,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(563)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(564)
	int count = (int)-1;		HX_STACK_VAR(count,"count");
	HX_STACK_LINE(565)
	::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(567)
	while((true)){
		HX_STACK_LINE(567)
		int tmp = i;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(567)
		int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(567)
		bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(567)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(567)
		if ((tmp3)){
			HX_STACK_LINE(567)
			break;
		}
		HX_STACK_LINE(569)
		int tmp4 = (i)++;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(569)
		Dynamic tmp5 = this->members->__GetItem(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(569)
		basic = tmp5;
		HX_STACK_LINE(571)
		bool tmp6 = (basic != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(571)
		if ((tmp6)){
			HX_STACK_LINE(573)
			bool tmp7 = (count < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(573)
			if ((tmp7)){
				HX_STACK_LINE(575)
				count = (int)0;
			}
			HX_STACK_LINE(577)
			bool tmp8 = basic->alive;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(577)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(577)
			if ((tmp9)){
				HX_STACK_LINE(579)
				(count)++;
			}
		}
	}
	HX_STACK_LINE(584)
	int tmp = count;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(584)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,countDead,return )

Dynamic FlxTypedGroup_obj::getRandom( hx::Null< int >  __o_StartIndex,hx::Null< int >  __o_Length){
int StartIndex = __o_StartIndex.Default(0);
int Length = __o_Length.Default(0);
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","getRandom",0xe8c349b1,"flixel.group.FlxTypedGroup.getRandom","flixel/group/FlxGroup.hx",595,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(StartIndex,"StartIndex")
	HX_STACK_ARG(Length,"Length")
{
		HX_STACK_LINE(596)
		bool tmp = (StartIndex < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(596)
		if ((tmp)){
			HX_STACK_LINE(598)
			StartIndex = (int)0;
		}
		HX_STACK_LINE(600)
		bool tmp1 = (Length <= (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(600)
		if ((tmp1)){
			HX_STACK_LINE(602)
			int tmp2 = this->length;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(602)
			Length = tmp2;
		}
		HX_STACK_LINE(605)
		::flixel::math::FlxRandom tmp2 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(605)
		int tmp3 = StartIndex;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(605)
		int tmp4 = Length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(605)
		Dynamic tmp5 = tmp2->getObject_flixel_group_FlxTypedGroup_T(this->members,null(),tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(605)
		return tmp5;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,getRandom,return )

Void FlxTypedGroup_obj::clear( ){
{
		HX_STACK_FRAME("flixel.group.FlxTypedGroup","clear",0x1c7a7405,"flixel.group.FlxTypedGroup.clear","flixel/group/FlxGroup.hx",613,0x1e89d58e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(614)
		this->length = (int)0;
		HX_STACK_LINE(615)
		::flixel::util::FlxArrayUtil_obj::clearArray(this->members,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,clear,(void))

Void FlxTypedGroup_obj::kill( ){
{
		HX_STACK_FRAME("flixel.group.FlxTypedGroup","kill",0xeb00d426,"flixel.group.FlxTypedGroup.kill","flixel/group/FlxGroup.hx",623,0x1e89d58e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(624)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(625)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(627)
		while((true)){
			HX_STACK_LINE(627)
			int tmp = i;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(627)
			int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(627)
			bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(627)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(627)
			if ((tmp3)){
				HX_STACK_LINE(627)
				break;
			}
			HX_STACK_LINE(629)
			int tmp4 = (i)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(629)
			Dynamic tmp5 = this->members->__GetItem(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(629)
			basic = tmp5;
			HX_STACK_LINE(631)
			bool tmp6 = (basic != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(631)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(631)
			if ((tmp6)){
				HX_STACK_LINE(631)
				tmp7 = basic->exists;
			}
			else{
				HX_STACK_LINE(631)
				tmp7 = false;
			}
			HX_STACK_LINE(631)
			if ((tmp7)){
				HX_STACK_LINE(633)
				basic->kill();
			}
		}
		HX_STACK_LINE(637)
		this->super::kill();
	}
return null();
}


Void FlxTypedGroup_obj::revive( ){
{
		HX_STACK_FRAME("flixel.group.FlxTypedGroup","revive",0xd17a20dd,"flixel.group.FlxTypedGroup.revive","flixel/group/FlxGroup.hx",644,0x1e89d58e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(645)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(646)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(648)
		while((true)){
			HX_STACK_LINE(648)
			int tmp = i;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(648)
			int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(648)
			bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(648)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(648)
			if ((tmp3)){
				HX_STACK_LINE(648)
				break;
			}
			HX_STACK_LINE(650)
			int tmp4 = (i)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(650)
			Dynamic tmp5 = this->members->__GetItem(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(650)
			basic = tmp5;
			HX_STACK_LINE(652)
			bool tmp6 = (basic != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(652)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(652)
			if ((tmp6)){
				HX_STACK_LINE(652)
				bool tmp8 = basic->exists;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(652)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(652)
				tmp7 = !(tmp9);
			}
			else{
				HX_STACK_LINE(652)
				tmp7 = false;
			}
			HX_STACK_LINE(652)
			if ((tmp7)){
				HX_STACK_LINE(654)
				basic->revive();
			}
		}
		HX_STACK_LINE(658)
		this->super::revive();
	}
return null();
}


::flixel::group::FlxTypedGroupIterator FlxTypedGroup_obj::iterator( Dynamic filter){
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","iterator",0x7e9a2276,"flixel.group.FlxTypedGroup.iterator","flixel/group/FlxGroup.hx",665,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(filter,"filter")
	HX_STACK_LINE(666)
	::flixel::group::FlxTypedGroupIterator tmp = ::flixel::group::FlxTypedGroupIterator_obj::__new(this->members,filter);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(666)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,iterator,return )

Void FlxTypedGroup_obj::forEach( Dynamic Function,hx::Null< bool >  __o_Recurse){
bool Recurse = __o_Recurse.Default(false);
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","forEach",0x207cba22,"flixel.group.FlxTypedGroup.forEach","flixel/group/FlxGroup.hx",676,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Function,"Function")
	HX_STACK_ARG(Recurse,"Recurse")
{
		HX_STACK_LINE(677)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(678)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(680)
		while((true)){
			HX_STACK_LINE(680)
			int tmp = i;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(680)
			int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(680)
			bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(680)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(680)
			if ((tmp3)){
				HX_STACK_LINE(680)
				break;
			}
			HX_STACK_LINE(682)
			int tmp4 = (i)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(682)
			Dynamic tmp5 = this->members->__GetItem(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(682)
			basic = tmp5;
			HX_STACK_LINE(684)
			bool tmp6 = (basic != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(684)
			if ((tmp6)){
				HX_STACK_LINE(686)
				bool tmp7 = Recurse;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(686)
				if ((tmp7)){
					HX_STACK_LINE(688)
					::flixel::group::FlxTypedGroup tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(688)
					{
						HX_STACK_LINE(688)
						::flixel::group::FlxTypedGroup group = null();		HX_STACK_VAR(group,"group");
						HX_STACK_LINE(688)
						bool tmp9 = (basic != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(688)
						if ((tmp9)){
							HX_STACK_LINE(688)
							bool tmp10 = (basic->flixelType == (int)2);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(688)
							if ((tmp10)){
								HX_STACK_LINE(688)
								group = ((::flixel::group::FlxTypedGroup)(basic));
							}
							else{
								HX_STACK_LINE(688)
								bool tmp11 = (basic->flixelType == (int)4);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(688)
								if ((tmp11)){
									HX_STACK_LINE(688)
									::flixel::group::FlxTypedSpriteGroup spriteGroup = ((::flixel::group::FlxTypedSpriteGroup)(basic));		HX_STACK_VAR(spriteGroup,"spriteGroup");
									HX_STACK_LINE(688)
									group = spriteGroup->group;
								}
							}
						}
						HX_STACK_LINE(688)
						tmp8 = group;
					}
					HX_STACK_LINE(688)
					::flixel::group::FlxTypedGroup group = tmp8;		HX_STACK_VAR(group,"group");
					HX_STACK_LINE(689)
					bool tmp9 = (group != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(689)
					if ((tmp9)){
						HX_STACK_LINE(691)
						Dynamic tmp10 = Function;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(691)
						bool tmp11 = Recurse;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(691)
						group->forEach(tmp10,tmp11);
					}
				}
				HX_STACK_LINE(695)
				Dynamic tmp8 = ((Dynamic)(basic));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(695)
				Function(tmp8).Cast< Void >();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,forEach,(void))

Void FlxTypedGroup_obj::forEachAlive( Dynamic Function,hx::Null< bool >  __o_Recurse){
bool Recurse = __o_Recurse.Default(false);
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","forEachAlive",0x4c021e4b,"flixel.group.FlxTypedGroup.forEachAlive","flixel/group/FlxGroup.hx",707,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Function,"Function")
	HX_STACK_ARG(Recurse,"Recurse")
{
		HX_STACK_LINE(708)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(709)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(711)
		while((true)){
			HX_STACK_LINE(711)
			int tmp = i;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(711)
			int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(711)
			bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(711)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(711)
			if ((tmp3)){
				HX_STACK_LINE(711)
				break;
			}
			HX_STACK_LINE(713)
			int tmp4 = (i)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(713)
			Dynamic tmp5 = this->members->__GetItem(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(713)
			basic = tmp5;
			HX_STACK_LINE(715)
			bool tmp6 = (basic != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(715)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(715)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(715)
			if ((tmp7)){
				HX_STACK_LINE(715)
				tmp8 = basic->exists;
			}
			else{
				HX_STACK_LINE(715)
				tmp8 = false;
			}
			HX_STACK_LINE(715)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(715)
			if ((tmp8)){
				HX_STACK_LINE(715)
				tmp9 = basic->alive;
			}
			else{
				HX_STACK_LINE(715)
				tmp9 = false;
			}
			HX_STACK_LINE(715)
			if ((tmp9)){
				HX_STACK_LINE(717)
				bool tmp10 = Recurse;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(717)
				if ((tmp10)){
					HX_STACK_LINE(719)
					::flixel::group::FlxTypedGroup tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(719)
					{
						HX_STACK_LINE(719)
						::flixel::group::FlxTypedGroup group = null();		HX_STACK_VAR(group,"group");
						HX_STACK_LINE(719)
						bool tmp12 = (basic != null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(719)
						if ((tmp12)){
							HX_STACK_LINE(719)
							bool tmp13 = (basic->flixelType == (int)2);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(719)
							if ((tmp13)){
								HX_STACK_LINE(719)
								group = ((::flixel::group::FlxTypedGroup)(basic));
							}
							else{
								HX_STACK_LINE(719)
								bool tmp14 = (basic->flixelType == (int)4);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(719)
								if ((tmp14)){
									HX_STACK_LINE(719)
									::flixel::group::FlxTypedSpriteGroup spriteGroup = ((::flixel::group::FlxTypedSpriteGroup)(basic));		HX_STACK_VAR(spriteGroup,"spriteGroup");
									HX_STACK_LINE(719)
									group = spriteGroup->group;
								}
							}
						}
						HX_STACK_LINE(719)
						tmp11 = group;
					}
					HX_STACK_LINE(719)
					::flixel::group::FlxTypedGroup group = tmp11;		HX_STACK_VAR(group,"group");
					HX_STACK_LINE(720)
					bool tmp12 = (group != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(720)
					if ((tmp12)){
						HX_STACK_LINE(722)
						Dynamic tmp13 = Function;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(722)
						bool tmp14 = Recurse;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(722)
						group->forEachAlive(tmp13,tmp14);
					}
				}
				HX_STACK_LINE(726)
				Dynamic tmp11 = ((Dynamic)(basic));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(726)
				Function(tmp11).Cast< Void >();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,forEachAlive,(void))

Void FlxTypedGroup_obj::forEachDead( Dynamic Function,hx::Null< bool >  __o_Recurse){
bool Recurse = __o_Recurse.Default(false);
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","forEachDead",0x5740ede6,"flixel.group.FlxTypedGroup.forEachDead","flixel/group/FlxGroup.hx",738,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Function,"Function")
	HX_STACK_ARG(Recurse,"Recurse")
{
		HX_STACK_LINE(739)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(740)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(742)
		while((true)){
			HX_STACK_LINE(742)
			int tmp = i;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(742)
			int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(742)
			bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(742)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(742)
			if ((tmp3)){
				HX_STACK_LINE(742)
				break;
			}
			HX_STACK_LINE(744)
			int tmp4 = (i)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(744)
			Dynamic tmp5 = this->members->__GetItem(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(744)
			basic = tmp5;
			HX_STACK_LINE(746)
			bool tmp6 = (basic != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(746)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(746)
			if ((tmp6)){
				HX_STACK_LINE(746)
				bool tmp8 = basic->alive;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(746)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(746)
				tmp7 = !(tmp9);
			}
			else{
				HX_STACK_LINE(746)
				tmp7 = false;
			}
			HX_STACK_LINE(746)
			if ((tmp7)){
				HX_STACK_LINE(748)
				bool tmp8 = Recurse;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(748)
				if ((tmp8)){
					HX_STACK_LINE(750)
					::flixel::group::FlxTypedGroup tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(750)
					{
						HX_STACK_LINE(750)
						::flixel::group::FlxTypedGroup group = null();		HX_STACK_VAR(group,"group");
						HX_STACK_LINE(750)
						bool tmp10 = (basic != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(750)
						if ((tmp10)){
							HX_STACK_LINE(750)
							bool tmp11 = (basic->flixelType == (int)2);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(750)
							if ((tmp11)){
								HX_STACK_LINE(750)
								group = ((::flixel::group::FlxTypedGroup)(basic));
							}
							else{
								HX_STACK_LINE(750)
								bool tmp12 = (basic->flixelType == (int)4);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(750)
								if ((tmp12)){
									HX_STACK_LINE(750)
									::flixel::group::FlxTypedSpriteGroup spriteGroup = ((::flixel::group::FlxTypedSpriteGroup)(basic));		HX_STACK_VAR(spriteGroup,"spriteGroup");
									HX_STACK_LINE(750)
									group = spriteGroup->group;
								}
							}
						}
						HX_STACK_LINE(750)
						tmp9 = group;
					}
					HX_STACK_LINE(750)
					::flixel::group::FlxTypedGroup group = tmp9;		HX_STACK_VAR(group,"group");
					HX_STACK_LINE(751)
					bool tmp10 = (group != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(751)
					if ((tmp10)){
						HX_STACK_LINE(753)
						Dynamic tmp11 = Function;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(753)
						bool tmp12 = Recurse;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(753)
						group->forEachDead(tmp11,tmp12);
					}
				}
				HX_STACK_LINE(757)
				Dynamic tmp9 = ((Dynamic)(basic));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(757)
				Function(tmp9).Cast< Void >();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,forEachDead,(void))

Void FlxTypedGroup_obj::forEachExists( Dynamic Function,hx::Null< bool >  __o_Recurse){
bool Recurse = __o_Recurse.Default(false);
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","forEachExists",0xb812919e,"flixel.group.FlxTypedGroup.forEachExists","flixel/group/FlxGroup.hx",769,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Function,"Function")
	HX_STACK_ARG(Recurse,"Recurse")
{
		HX_STACK_LINE(770)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(771)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(773)
		while((true)){
			HX_STACK_LINE(773)
			int tmp = i;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(773)
			int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(773)
			bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(773)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(773)
			if ((tmp3)){
				HX_STACK_LINE(773)
				break;
			}
			HX_STACK_LINE(775)
			int tmp4 = (i)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(775)
			Dynamic tmp5 = this->members->__GetItem(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(775)
			basic = tmp5;
			HX_STACK_LINE(777)
			bool tmp6 = (basic != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(777)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(777)
			if ((tmp6)){
				HX_STACK_LINE(777)
				tmp7 = basic->exists;
			}
			else{
				HX_STACK_LINE(777)
				tmp7 = false;
			}
			HX_STACK_LINE(777)
			if ((tmp7)){
				HX_STACK_LINE(779)
				bool tmp8 = Recurse;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(779)
				if ((tmp8)){
					HX_STACK_LINE(781)
					::flixel::group::FlxTypedGroup tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(781)
					{
						HX_STACK_LINE(781)
						::flixel::group::FlxTypedGroup group = null();		HX_STACK_VAR(group,"group");
						HX_STACK_LINE(781)
						bool tmp10 = (basic != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(781)
						if ((tmp10)){
							HX_STACK_LINE(781)
							bool tmp11 = (basic->flixelType == (int)2);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(781)
							if ((tmp11)){
								HX_STACK_LINE(781)
								group = ((::flixel::group::FlxTypedGroup)(basic));
							}
							else{
								HX_STACK_LINE(781)
								bool tmp12 = (basic->flixelType == (int)4);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(781)
								if ((tmp12)){
									HX_STACK_LINE(781)
									::flixel::group::FlxTypedSpriteGroup spriteGroup = ((::flixel::group::FlxTypedSpriteGroup)(basic));		HX_STACK_VAR(spriteGroup,"spriteGroup");
									HX_STACK_LINE(781)
									group = spriteGroup->group;
								}
							}
						}
						HX_STACK_LINE(781)
						tmp9 = group;
					}
					HX_STACK_LINE(781)
					::flixel::group::FlxTypedGroup group = tmp9;		HX_STACK_VAR(group,"group");
					HX_STACK_LINE(782)
					bool tmp10 = (group != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(782)
					if ((tmp10)){
						HX_STACK_LINE(784)
						Dynamic tmp11 = Function;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(784)
						bool tmp12 = Recurse;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(784)
						group->forEachExists(tmp11,tmp12);
					}
				}
				HX_STACK_LINE(788)
				Dynamic tmp9 = ((Dynamic)(basic));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(788)
				Function(tmp9).Cast< Void >();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,forEachExists,(void))

Void FlxTypedGroup_obj::forEachOfType( ::hx::Class ObjectClass,Dynamic Function,hx::Null< bool >  __o_Recurse){
bool Recurse = __o_Recurse.Default(false);
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","forEachOfType",0x4c90cb33,"flixel.group.FlxTypedGroup.forEachOfType","flixel/group/FlxGroup.hx",801,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectClass,"ObjectClass")
	HX_STACK_ARG(Function,"Function")
	HX_STACK_ARG(Recurse,"Recurse")
{
		HX_STACK_LINE(802)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(803)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(805)
		while((true)){
			HX_STACK_LINE(805)
			int tmp = i;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(805)
			int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(805)
			bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(805)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(805)
			if ((tmp3)){
				HX_STACK_LINE(805)
				break;
			}
			HX_STACK_LINE(807)
			int tmp4 = (i)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(807)
			Dynamic tmp5 = this->members->__GetItem(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(807)
			basic = tmp5;
			HX_STACK_LINE(809)
			bool tmp6 = (basic != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(809)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(809)
			if ((tmp6)){
				HX_STACK_LINE(809)
				::flixel::FlxBasic tmp8 = basic;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(809)
				::hx::Class tmp9 = ObjectClass;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(809)
				::flixel::FlxBasic tmp10 = tmp8;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(809)
				::hx::Class tmp11 = tmp9;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(809)
				tmp7 = ::Std_obj::is(tmp10,tmp11);
			}
			else{
				HX_STACK_LINE(809)
				tmp7 = false;
			}
			HX_STACK_LINE(809)
			if ((tmp7)){
				HX_STACK_LINE(811)
				bool tmp8 = Recurse;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(811)
				if ((tmp8)){
					HX_STACK_LINE(813)
					::flixel::group::FlxTypedGroup tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(813)
					{
						HX_STACK_LINE(813)
						::flixel::group::FlxTypedGroup group = null();		HX_STACK_VAR(group,"group");
						HX_STACK_LINE(813)
						bool tmp10 = (basic != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(813)
						if ((tmp10)){
							HX_STACK_LINE(813)
							bool tmp11 = (basic->flixelType == (int)2);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(813)
							if ((tmp11)){
								HX_STACK_LINE(813)
								group = ((::flixel::group::FlxTypedGroup)(basic));
							}
							else{
								HX_STACK_LINE(813)
								bool tmp12 = (basic->flixelType == (int)4);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(813)
								if ((tmp12)){
									HX_STACK_LINE(813)
									::flixel::group::FlxTypedSpriteGroup spriteGroup = ((::flixel::group::FlxTypedSpriteGroup)(basic));		HX_STACK_VAR(spriteGroup,"spriteGroup");
									HX_STACK_LINE(813)
									group = spriteGroup->group;
								}
							}
						}
						HX_STACK_LINE(813)
						tmp9 = group;
					}
					HX_STACK_LINE(813)
					::flixel::group::FlxTypedGroup group = tmp9;		HX_STACK_VAR(group,"group");
					HX_STACK_LINE(814)
					bool tmp10 = (group != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(814)
					if ((tmp10)){
						HX_STACK_LINE(816)
						::hx::Class tmp11 = ObjectClass;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(816)
						Dynamic tmp12 = Function;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(816)
						bool tmp13 = Recurse;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(816)
						group->forEachOfType(tmp11,tmp12,tmp13);
					}
				}
				HX_STACK_LINE(820)
				Dynamic tmp9 = ((Dynamic)(basic));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(820)
				Function(tmp9).Cast< Void >();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTypedGroup_obj,forEachOfType,(void))

int FlxTypedGroup_obj::set_maxSize( int Size){
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","set_maxSize",0x3b478d20,"flixel.group.FlxTypedGroup.set_maxSize","flixel/group/FlxGroup.hx",826,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Size,"Size")
	HX_STACK_LINE(827)
	int tmp = Size;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(827)
	Float tmp1 = ::Math_obj::abs(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(827)
	int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(827)
	this->maxSize = tmp2;
	HX_STACK_LINE(829)
	int tmp3 = this->_marker;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(829)
	int tmp4 = this->maxSize;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(829)
	bool tmp5 = (tmp3 >= tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(829)
	if ((tmp5)){
		HX_STACK_LINE(831)
		this->_marker = (int)0;
	}
	HX_STACK_LINE(833)
	int tmp6 = this->maxSize;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(833)
	bool tmp7 = (tmp6 == (int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(833)
	bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(833)
	bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(833)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(833)
	if ((tmp9)){
		HX_STACK_LINE(833)
		tmp10 = (this->members == null());
	}
	else{
		HX_STACK_LINE(833)
		tmp10 = true;
	}
	HX_STACK_LINE(833)
	bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(833)
	bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(833)
	if ((tmp11)){
		HX_STACK_LINE(833)
		int tmp13 = this->maxSize;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(833)
		int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(833)
		int tmp15 = this->length;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(833)
		int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(833)
		tmp12 = (tmp14 >= tmp16);
	}
	else{
		HX_STACK_LINE(833)
		tmp12 = true;
	}
	HX_STACK_LINE(833)
	if ((tmp12)){
		HX_STACK_LINE(835)
		int tmp13 = this->maxSize;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(835)
		return tmp13;
	}
	HX_STACK_LINE(839)
	int tmp13 = this->maxSize;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(839)
	int i = tmp13;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(840)
	int tmp14 = this->length;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(840)
	int l = tmp14;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(841)
	::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(843)
	while((true)){
		HX_STACK_LINE(843)
		bool tmp15 = (i < l);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(843)
		bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(843)
		if ((tmp16)){
			HX_STACK_LINE(843)
			break;
		}
		HX_STACK_LINE(845)
		int tmp17 = (i)++;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(845)
		Dynamic tmp18 = this->members->__GetItem(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(845)
		basic = tmp18;
		HX_STACK_LINE(847)
		bool tmp19 = (basic != null());		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(847)
		if ((tmp19)){
			HX_STACK_LINE(848)
			basic->destroy();
		}
	}
	HX_STACK_LINE(851)
	int tmp15 = this->maxSize;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(851)
	::flixel::util::FlxArrayUtil_obj::setLength_flixel_group_FlxTypedGroup_T(this->members,tmp15);
	HX_STACK_LINE(852)
	int tmp16 = this->members->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(852)
	this->length = tmp16;
	HX_STACK_LINE(854)
	int tmp17 = this->maxSize;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(854)
	return tmp17;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,set_maxSize,return )

bool FlxTypedGroup_obj::overlaps( Dynamic Callback,::flixel::group::FlxTypedGroup Group,Float X,Float Y,bool InScreenSpace,::flixel::FlxCamera Camera){
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","overlaps",0x302aab94,"flixel.group.FlxTypedGroup.overlaps","flixel/group/FlxGroup.hx",24,0x1e89d58e)
	HX_STACK_ARG(Callback,"Callback")
	HX_STACK_ARG(Group,"Group")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_LINE(25)
	bool result = false;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(26)
	bool tmp = (Group != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	if ((tmp)){
		HX_STACK_LINE(28)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(29)
		int l = Group->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(30)
		::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(32)
		while((true)){
			HX_STACK_LINE(32)
			bool tmp1 = (i < l);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(32)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(32)
			if ((tmp2)){
				HX_STACK_LINE(32)
				break;
			}
			HX_STACK_LINE(34)
			int tmp3 = (i)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(34)
			::flixel::FlxBasic tmp4 = Group->members->__GetItem(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(34)
			basic = tmp4;
			HX_STACK_LINE(36)
			bool tmp5 = (basic != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(36)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(36)
			if ((tmp5)){
				HX_STACK_LINE(36)
				::flixel::FlxBasic tmp7 = basic;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(36)
				Float tmp8 = X;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(36)
				Float tmp9 = Y;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(36)
				bool tmp10 = InScreenSpace;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(36)
				::flixel::FlxCamera tmp11 = Camera;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(36)
				::flixel::FlxBasic tmp12 = tmp7;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(36)
				Float tmp13 = tmp8;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(36)
				Float tmp14 = tmp9;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(36)
				bool tmp15 = tmp10;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(36)
				::flixel::FlxCamera tmp16 = tmp11;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(36)
				tmp6 = Callback(tmp12,tmp13,tmp14,tmp15,tmp16).Cast< bool >();
			}
			else{
				HX_STACK_LINE(36)
				tmp6 = false;
			}
			HX_STACK_LINE(36)
			if ((tmp6)){
				HX_STACK_LINE(38)
				result = true;
				HX_STACK_LINE(39)
				break;
			}
		}
	}
	HX_STACK_LINE(43)
	bool tmp1 = result;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(43)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxTypedGroup_obj,overlaps,return )

::flixel::group::FlxTypedGroup FlxTypedGroup_obj::resolveGroup( ::flixel::FlxBasic ObjectOrGroup){
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","resolveGroup",0x84c4b53b,"flixel.group.FlxTypedGroup.resolveGroup","flixel/group/FlxGroup.hx",48,0x1e89d58e)
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup")
	HX_STACK_LINE(49)
	::flixel::group::FlxTypedGroup group = null();		HX_STACK_VAR(group,"group");
	HX_STACK_LINE(50)
	bool tmp = (ObjectOrGroup != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	if ((tmp)){
		HX_STACK_LINE(52)
		bool tmp1 = (ObjectOrGroup->flixelType == (int)2);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(52)
		if ((tmp1)){
			HX_STACK_LINE(54)
			group = ((::flixel::group::FlxTypedGroup)(ObjectOrGroup));
		}
		else{
			HX_STACK_LINE(56)
			bool tmp2 = (ObjectOrGroup->flixelType == (int)4);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(56)
			if ((tmp2)){
				HX_STACK_LINE(58)
				::flixel::group::FlxTypedSpriteGroup spriteGroup = ((::flixel::group::FlxTypedSpriteGroup)(ObjectOrGroup));		HX_STACK_VAR(spriteGroup,"spriteGroup");
				HX_STACK_LINE(59)
				group = spriteGroup->group;
			}
		}
	}
	HX_STACK_LINE(62)
	::flixel::group::FlxTypedGroup tmp1 = group;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(62)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,resolveGroup,return )


FlxTypedGroup_obj::FlxTypedGroup_obj()
{
}

void FlxTypedGroup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTypedGroup);
	HX_MARK_MEMBER_NAME(members,"members");
	HX_MARK_MEMBER_NAME(maxSize,"maxSize");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(_marker,"_marker");
	::flixel::FlxBasic_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTypedGroup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(members,"members");
	HX_VISIT_MEMBER_NAME(maxSize,"maxSize");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(_marker,"_marker");
	::flixel::FlxBasic_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxTypedGroup_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"sort") ) { return sort_dyn(); }
		if (HX_FIELD_EQ(inName,"kill") ) { return kill_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"insert") ) { return insert_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"revive") ) { return revive_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"members") ) { return members; }
		if (HX_FIELD_EQ(inName,"maxSize") ) { return maxSize; }
		if (HX_FIELD_EQ(inName,"_marker") ) { return _marker; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"recycle") ) { return recycle_dyn(); }
		if (HX_FIELD_EQ(inName,"replace") ) { return replace_dyn(); }
		if (HX_FIELD_EQ(inName,"forEach") ) { return forEach_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { return iterator_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"countDead") ) { return countDead_dyn(); }
		if (HX_FIELD_EQ(inName,"getRandom") ) { return getRandom_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"countLiving") ) { return countLiving_dyn(); }
		if (HX_FIELD_EQ(inName,"forEachDead") ) { return forEachDead_dyn(); }
		if (HX_FIELD_EQ(inName,"set_maxSize") ) { return set_maxSize_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getFirstNull") ) { return getFirstNull_dyn(); }
		if (HX_FIELD_EQ(inName,"getFirstDead") ) { return getFirstDead_dyn(); }
		if (HX_FIELD_EQ(inName,"forEachAlive") ) { return forEachAlive_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getFirstAlive") ) { return getFirstAlive_dyn(); }
		if (HX_FIELD_EQ(inName,"forEachExists") ) { return forEachExists_dyn(); }
		if (HX_FIELD_EQ(inName,"forEachOfType") ) { return forEachOfType_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getFirstExisting") ) { return getFirstExisting_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getFirstAvailable") ) { return getFirstAvailable_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"recycleCreateObject") ) { return recycleCreateObject_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxTypedGroup_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"overlaps") ) { outValue = overlaps_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resolveGroup") ) { outValue = resolveGroup_dyn(); return true;  }
	}
	return false;
}

Dynamic FlxTypedGroup_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"members") ) { members=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxSize") ) { if (inCallProp == hx::paccAlways) return set_maxSize(inValue);maxSize=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_marker") ) { _marker=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTypedGroup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("members","\xd9","\x2c","\x70","\x1a"));
	outFields->push(HX_HCSTRING("maxSize","\x85","\xf9","\x83","\xcc"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("_marker","\x59","\x87","\xe7","\x28"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(FlxTypedGroup_obj,members),HX_HCSTRING("members","\xd9","\x2c","\x70","\x1a")},
	{hx::fsInt,(int)offsetof(FlxTypedGroup_obj,maxSize),HX_HCSTRING("maxSize","\x85","\xf9","\x83","\xcc")},
	{hx::fsInt,(int)offsetof(FlxTypedGroup_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{hx::fsInt,(int)offsetof(FlxTypedGroup_obj,_marker),HX_HCSTRING("_marker","\x59","\x87","\xe7","\x28")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("members","\xd9","\x2c","\x70","\x1a"),
	HX_HCSTRING("maxSize","\x85","\xf9","\x83","\xcc"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("_marker","\x59","\x87","\xe7","\x28"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("insert","\x39","\x43","\xdd","\x9d"),
	HX_HCSTRING("recycle","\x13","\x10","\x8c","\x37"),
	HX_HCSTRING("recycleCreateObject","\x8e","\x6b","\x54","\x8e"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("replace","\x34","\x48","\x28","\xab"),
	HX_HCSTRING("sort","\x5e","\x27","\x58","\x4c"),
	HX_HCSTRING("getFirstAvailable","\xaf","\xea","\xb3","\x05"),
	HX_HCSTRING("getFirstNull","\x61","\xb7","\x33","\x0f"),
	HX_HCSTRING("getFirstExisting","\x65","\xa4","\x6c","\xee"),
	HX_HCSTRING("getFirstAlive","\xb3","\x09","\xe2","\xbb"),
	HX_HCSTRING("getFirstDead","\x7e","\x67","\x8b","\x08"),
	HX_HCSTRING("countLiving","\x58","\xd9","\x8a","\x30"),
	HX_HCSTRING("countDead","\x13","\xd3","\x86","\x54"),
	HX_HCSTRING("getRandom","\x39","\xab","\xe5","\x33"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("kill","\x9e","\xdf","\x09","\x47"),
	HX_HCSTRING("revive","\x55","\xfa","\x76","\x0a"),
	HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"),
	HX_HCSTRING("forEach","\xaa","\x29","\xbe","\xc4"),
	HX_HCSTRING("forEachAlive","\xc3","\x61","\xb7","\x99"),
	HX_HCSTRING("forEachDead","\x6e","\xc1","\xe4","\x78"),
	HX_HCSTRING("forEachExists","\x26","\x57","\xf8","\x68"),
	HX_HCSTRING("forEachOfType","\xbb","\x90","\x76","\xfd"),
	HX_HCSTRING("set_maxSize","\xa8","\x60","\xeb","\x5c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTypedGroup_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTypedGroup_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxTypedGroup_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("overlaps","\x0c","\xd3","\x2a","\x45"),
	HX_HCSTRING("resolveGroup","\xb3","\xf8","\x79","\xd2"),
	::String(null()) };

void FlxTypedGroup_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.group.FlxTypedGroup","\xe6","\xb8","\x51","\xd3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxTypedGroup_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxTypedGroup_obj >;
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
} // end namespace group
