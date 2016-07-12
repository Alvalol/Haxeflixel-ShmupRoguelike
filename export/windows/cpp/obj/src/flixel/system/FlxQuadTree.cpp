#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_FlxLinkedList
#include <flixel/system/FlxLinkedList.h>
#endif
#ifndef INCLUDED_flixel_system_FlxQuadTree
#include <flixel/system/FlxQuadTree.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
namespace flixel{
namespace _system{

Void FlxQuadTree_obj::__construct(Float X,Float Y,Float Width,Float Height,::flixel::_system::FlxQuadTree Parent)
{
HX_STACK_FRAME("flixel.system.FlxQuadTree","new",0xc8d074fc,"flixel.system.FlxQuadTree.new","flixel/system/FlxQuadTree.hx",199,0xb5742814)
HX_STACK_THIS(this)
HX_STACK_ARG(X,"X")
HX_STACK_ARG(Y,"Y")
HX_STACK_ARG(Width,"Width")
HX_STACK_ARG(Height,"Height")
HX_STACK_ARG(Parent,"Parent")
{
	HX_STACK_LINE(200)
	super::__construct(null(),null(),null(),null());
	HX_STACK_LINE(201)
	{
		HX_STACK_LINE(201)
		this->x = X;
		HX_STACK_LINE(201)
		this->y = Y;
		HX_STACK_LINE(201)
		this->width = Width;
		HX_STACK_LINE(201)
		this->height = Height;
		HX_STACK_LINE(201)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(202)
	Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(202)
	Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(202)
	Float tmp2 = Width;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(202)
	Float tmp3 = Height;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(202)
	::flixel::_system::FlxQuadTree tmp4 = Parent;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(202)
	this->reset(tmp,tmp1,tmp2,tmp3,tmp4);
}
;
	return null();
}

//FlxQuadTree_obj::~FlxQuadTree_obj() { }

Dynamic FlxQuadTree_obj::__CreateEmpty() { return  new FlxQuadTree_obj; }
hx::ObjectPtr< FlxQuadTree_obj > FlxQuadTree_obj::__new(Float X,Float Y,Float Width,Float Height,::flixel::_system::FlxQuadTree Parent)
{  hx::ObjectPtr< FlxQuadTree_obj > _result_ = new FlxQuadTree_obj();
	_result_->__construct(X,Y,Width,Height,Parent);
	return _result_;}

Dynamic FlxQuadTree_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxQuadTree_obj > _result_ = new FlxQuadTree_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

Void FlxQuadTree_obj::reset( Float X,Float Y,Float Width,Float Height,::flixel::_system::FlxQuadTree Parent){
{
		HX_STACK_FRAME("flixel.system.FlxQuadTree","reset",0x432c4d6b,"flixel.system.FlxQuadTree.reset","flixel/system/FlxQuadTree.hx",243,0xb5742814)
		HX_STACK_THIS(this)
		HX_STACK_ARG(X,"X")
		HX_STACK_ARG(Y,"Y")
		HX_STACK_ARG(Width,"Width")
		HX_STACK_ARG(Height,"Height")
		HX_STACK_ARG(Parent,"Parent")
		HX_STACK_LINE(244)
		this->exists = true;
		HX_STACK_LINE(246)
		{
			HX_STACK_LINE(246)
			this->x = X;
			HX_STACK_LINE(246)
			this->y = Y;
			HX_STACK_LINE(246)
			this->width = Width;
			HX_STACK_LINE(246)
			this->height = Height;
			HX_STACK_LINE(246)
			hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(248)
		::flixel::_system::FlxLinkedList tmp = ::flixel::_system::FlxLinkedList_obj::recycle();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(248)
		::flixel::_system::FlxLinkedList tmp1 = this->_tailA = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(248)
		this->_headA = tmp1;
		HX_STACK_LINE(249)
		::flixel::_system::FlxLinkedList tmp2 = ::flixel::_system::FlxLinkedList_obj::recycle();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(249)
		::flixel::_system::FlxLinkedList tmp3 = this->_tailB = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(249)
		this->_headB = tmp3;
		HX_STACK_LINE(252)
		bool tmp4 = (Parent != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(252)
		if ((tmp4)){
			HX_STACK_LINE(254)
			::flixel::_system::FlxLinkedList iterator;		HX_STACK_VAR(iterator,"iterator");
			HX_STACK_LINE(255)
			::flixel::_system::FlxLinkedList ot;		HX_STACK_VAR(ot,"ot");
			HX_STACK_LINE(256)
			::flixel::FlxObject tmp5 = Parent->__Field(HX_HCSTRING("_headA","\x62","\x1a","\xa0","\x20"), hx::paccDynamic )->__Field(HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(256)
			bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(256)
			if ((tmp6)){
				HX_STACK_LINE(258)
				iterator = Parent->__Field(HX_HCSTRING("_headA","\x62","\x1a","\xa0","\x20"), hx::paccDynamic );
				HX_STACK_LINE(259)
				while((true)){
					HX_STACK_LINE(259)
					bool tmp7 = (iterator != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(259)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(259)
					if ((tmp8)){
						HX_STACK_LINE(259)
						break;
					}
					HX_STACK_LINE(261)
					::flixel::_system::FlxLinkedList tmp9 = this->_tailA;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(261)
					::flixel::FlxObject tmp10 = tmp9->__Field(HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(261)
					bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(261)
					if ((tmp11)){
						HX_STACK_LINE(263)
						::flixel::_system::FlxLinkedList tmp12 = this->_tailA;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(263)
						ot = tmp12;
						HX_STACK_LINE(264)
						::flixel::_system::FlxLinkedList tmp13 = ::flixel::_system::FlxLinkedList_obj::recycle();		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(264)
						this->_tailA = tmp13;
						HX_STACK_LINE(265)
						::flixel::_system::FlxLinkedList tmp14 = this->_tailA;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(265)
						ot->__FieldRef(HX_HCSTRING("next","\xf3","\x84","\x02","\x49")) = tmp14;
					}
					HX_STACK_LINE(267)
					::flixel::_system::FlxLinkedList tmp12 = this->_tailA;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(267)
					tmp12->__FieldRef(HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15")) = iterator->__Field(HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15"), hx::paccDynamic );
					HX_STACK_LINE(268)
					iterator = iterator->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic );
				}
			}
			HX_STACK_LINE(271)
			::flixel::FlxObject tmp7 = Parent->__Field(HX_HCSTRING("_headB","\x63","\x1a","\xa0","\x20"), hx::paccDynamic )->__Field(HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(271)
			bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(271)
			if ((tmp8)){
				HX_STACK_LINE(273)
				iterator = Parent->__Field(HX_HCSTRING("_headB","\x63","\x1a","\xa0","\x20"), hx::paccDynamic );
				HX_STACK_LINE(274)
				while((true)){
					HX_STACK_LINE(274)
					bool tmp9 = (iterator != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(274)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(274)
					if ((tmp10)){
						HX_STACK_LINE(274)
						break;
					}
					HX_STACK_LINE(276)
					::flixel::_system::FlxLinkedList tmp11 = this->_tailB;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(276)
					::flixel::FlxObject tmp12 = tmp11->__Field(HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(276)
					bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(276)
					if ((tmp13)){
						HX_STACK_LINE(278)
						::flixel::_system::FlxLinkedList tmp14 = this->_tailB;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(278)
						ot = tmp14;
						HX_STACK_LINE(279)
						::flixel::_system::FlxLinkedList tmp15 = ::flixel::_system::FlxLinkedList_obj::recycle();		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(279)
						this->_tailB = tmp15;
						HX_STACK_LINE(280)
						::flixel::_system::FlxLinkedList tmp16 = this->_tailB;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(280)
						ot->__FieldRef(HX_HCSTRING("next","\xf3","\x84","\x02","\x49")) = tmp16;
					}
					HX_STACK_LINE(282)
					::flixel::_system::FlxLinkedList tmp14 = this->_tailB;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(282)
					tmp14->__FieldRef(HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15")) = iterator->__Field(HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15"), hx::paccDynamic );
					HX_STACK_LINE(283)
					iterator = iterator->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic );
				}
			}
		}
		else{
			HX_STACK_LINE(289)
			Float tmp5 = this->width;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(289)
			Float tmp6 = this->height;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(289)
			Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(289)
			int tmp8 = ::flixel::_system::FlxQuadTree_obj::divisions;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(289)
			int tmp9 = ((int)2 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(289)
			Float tmp10 = (Float(tmp7) / Float(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(289)
			int tmp11 = ::Math_obj::floor(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(289)
			::flixel::_system::FlxQuadTree_obj::_min = tmp11;
		}
		HX_STACK_LINE(291)
		Float tmp5 = this->width;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(291)
		int tmp6 = ::flixel::_system::FlxQuadTree_obj::_min;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(291)
		bool tmp7 = (tmp5 > tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(291)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(291)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(291)
		if ((tmp8)){
			HX_STACK_LINE(291)
			Float tmp10 = this->height;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(291)
			Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(291)
			int tmp12 = ::flixel::_system::FlxQuadTree_obj::_min;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(291)
			int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(291)
			tmp9 = (tmp11 > tmp13);
		}
		else{
			HX_STACK_LINE(291)
			tmp9 = true;
		}
		HX_STACK_LINE(291)
		this->_canSubdivide = tmp9;
		HX_STACK_LINE(294)
		this->_northWestTree = null();
		HX_STACK_LINE(295)
		this->_northEastTree = null();
		HX_STACK_LINE(296)
		this->_southEastTree = null();
		HX_STACK_LINE(297)
		this->_southWestTree = null();
		HX_STACK_LINE(298)
		Float tmp10 = this->x;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(298)
		this->_leftEdge = tmp10;
		HX_STACK_LINE(299)
		Float tmp11 = this->x;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(299)
		Float tmp12 = this->width;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(299)
		Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(299)
		this->_rightEdge = tmp13;
		HX_STACK_LINE(300)
		Float tmp14 = this->width;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(300)
		Float tmp15 = (Float(tmp14) / Float((int)2));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(300)
		this->_halfWidth = tmp15;
		HX_STACK_LINE(301)
		Float tmp16 = this->_leftEdge;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(301)
		Float tmp17 = this->_halfWidth;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(301)
		Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(301)
		this->_midpointX = tmp18;
		HX_STACK_LINE(302)
		Float tmp19 = this->y;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(302)
		this->_topEdge = tmp19;
		HX_STACK_LINE(303)
		Float tmp20 = this->y;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(303)
		Float tmp21 = this->height;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(303)
		Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(303)
		this->_bottomEdge = tmp22;
		HX_STACK_LINE(304)
		Float tmp23 = this->height;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(304)
		Float tmp24 = (Float(tmp23) / Float((int)2));		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(304)
		this->_halfHeight = tmp24;
		HX_STACK_LINE(305)
		Float tmp25 = this->_topEdge;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(305)
		Float tmp26 = this->_halfHeight;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(305)
		Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(305)
		this->_midpointY = tmp27;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxQuadTree_obj,reset,(void))

Void FlxQuadTree_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.system.FlxQuadTree","destroy",0x64a74f96,"flixel.system.FlxQuadTree.destroy","flixel/system/FlxQuadTree.hx",312,0xb5742814)
		HX_STACK_THIS(this)
		HX_STACK_LINE(313)
		::flixel::_system::FlxLinkedList tmp = this->_headA;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(313)
		::flixel::_system::FlxLinkedList tmp1 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(313)
		this->_headA = tmp1;
		HX_STACK_LINE(314)
		::flixel::_system::FlxLinkedList tmp2 = this->_headB;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(314)
		::flixel::_system::FlxLinkedList tmp3 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(314)
		this->_headB = tmp3;
		HX_STACK_LINE(316)
		::flixel::_system::FlxLinkedList tmp4 = this->_tailA;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(316)
		::flixel::_system::FlxLinkedList tmp5 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(316)
		this->_tailA = tmp5;
		HX_STACK_LINE(317)
		::flixel::_system::FlxLinkedList tmp6 = this->_tailB;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(317)
		::flixel::_system::FlxLinkedList tmp7 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(317)
		this->_tailB = tmp7;
		HX_STACK_LINE(319)
		::flixel::_system::FlxQuadTree tmp8 = this->_northWestTree;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(319)
		::flixel::_system::FlxQuadTree tmp9 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(319)
		this->_northWestTree = tmp9;
		HX_STACK_LINE(320)
		::flixel::_system::FlxQuadTree tmp10 = this->_northEastTree;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(320)
		::flixel::_system::FlxQuadTree tmp11 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(320)
		this->_northEastTree = tmp11;
		HX_STACK_LINE(322)
		::flixel::_system::FlxQuadTree tmp12 = this->_southWestTree;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(322)
		::flixel::_system::FlxQuadTree tmp13 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(322)
		this->_southWestTree = tmp13;
		HX_STACK_LINE(323)
		::flixel::_system::FlxQuadTree tmp14 = this->_southEastTree;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(323)
		::flixel::_system::FlxQuadTree tmp15 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(323)
		this->_southEastTree = tmp15;
		HX_STACK_LINE(325)
		::flixel::_system::FlxQuadTree_obj::_object = null();
		HX_STACK_LINE(326)
		::flixel::_system::FlxQuadTree_obj::_processingCallback = null();
		HX_STACK_LINE(327)
		::flixel::_system::FlxQuadTree_obj::_notifyCallback = null();
		HX_STACK_LINE(329)
		this->exists = false;
		HX_STACK_LINE(332)
		::flixel::_system::FlxQuadTree tmp16 = ::flixel::_system::FlxQuadTree_obj::_cachedTreesHead;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(332)
		this->next = tmp16;
		HX_STACK_LINE(333)
		::flixel::_system::FlxQuadTree_obj::_cachedTreesHead = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(334)
		(::flixel::_system::FlxQuadTree_obj::_NUM_CACHED_QUAD_TREES)++;
		HX_STACK_LINE(336)
		this->super::destroy();
	}
return null();
}


Void FlxQuadTree_obj::load( ::flixel::FlxBasic ObjectOrGroup1,::flixel::FlxBasic ObjectOrGroup2,Dynamic NotifyCallback,Dynamic ProcessCallback){
{
		HX_STACK_FRAME("flixel.system.FlxQuadTree","load",0xec4afe0a,"flixel.system.FlxQuadTree.load","flixel/system/FlxQuadTree.hx",347,0xb5742814)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ObjectOrGroup1,"ObjectOrGroup1")
		HX_STACK_ARG(ObjectOrGroup2,"ObjectOrGroup2")
		HX_STACK_ARG(NotifyCallback,"NotifyCallback")
		HX_STACK_ARG(ProcessCallback,"ProcessCallback")
		HX_STACK_LINE(348)
		::flixel::FlxBasic tmp = ObjectOrGroup1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(348)
		this->add(tmp,(int)0);
		HX_STACK_LINE(349)
		bool tmp1 = (ObjectOrGroup2 != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(349)
		if ((tmp1)){
			HX_STACK_LINE(351)
			::flixel::FlxBasic tmp2 = ObjectOrGroup2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(351)
			this->add(tmp2,(int)1);
			HX_STACK_LINE(352)
			::flixel::_system::FlxQuadTree_obj::_useBothLists = true;
		}
		else{
			HX_STACK_LINE(356)
			::flixel::_system::FlxQuadTree_obj::_useBothLists = false;
		}
		HX_STACK_LINE(358)
		::flixel::_system::FlxQuadTree_obj::_notifyCallback = NotifyCallback;
		HX_STACK_LINE(359)
		::flixel::_system::FlxQuadTree_obj::_processingCallback = ProcessCallback;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxQuadTree_obj,load,(void))

Void FlxQuadTree_obj::add( ::flixel::FlxBasic ObjectOrGroup,int list){
{
		HX_STACK_FRAME("flixel.system.FlxQuadTree","add",0xc8c696bd,"flixel.system.FlxQuadTree.add","flixel/system/FlxQuadTree.hx",370,0xb5742814)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup")
		HX_STACK_ARG(list,"list")
		HX_STACK_LINE(371)
		::flixel::_system::FlxQuadTree_obj::_list = list;
		HX_STACK_LINE(373)
		::flixel::group::FlxTypedGroup tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(373)
		{
			HX_STACK_LINE(373)
			::flixel::group::FlxTypedGroup group = null();		HX_STACK_VAR(group,"group");
			HX_STACK_LINE(373)
			bool tmp1 = (ObjectOrGroup != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(373)
			if ((tmp1)){
				HX_STACK_LINE(373)
				bool tmp2 = (ObjectOrGroup->flixelType == (int)2);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(373)
				if ((tmp2)){
					HX_STACK_LINE(373)
					group = ((::flixel::group::FlxTypedGroup)(ObjectOrGroup));
				}
				else{
					HX_STACK_LINE(373)
					bool tmp3 = (ObjectOrGroup->flixelType == (int)4);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(373)
					if ((tmp3)){
						HX_STACK_LINE(373)
						::flixel::group::FlxTypedSpriteGroup spriteGroup = ((::flixel::group::FlxTypedSpriteGroup)(ObjectOrGroup));		HX_STACK_VAR(spriteGroup,"spriteGroup");
						HX_STACK_LINE(373)
						group = spriteGroup->group;
					}
				}
			}
			HX_STACK_LINE(373)
			tmp = group;
		}
		HX_STACK_LINE(373)
		::flixel::group::FlxTypedGroup group = tmp;		HX_STACK_VAR(group,"group");
		HX_STACK_LINE(374)
		bool tmp1 = (group != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(374)
		if ((tmp1)){
			HX_STACK_LINE(376)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(377)
			::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
			HX_STACK_LINE(378)
			Array< ::Dynamic > members = group->members;		HX_STACK_VAR(members,"members");
			HX_STACK_LINE(379)
			int l = group->length;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(380)
			while((true)){
				HX_STACK_LINE(380)
				bool tmp2 = (i < l);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(380)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(380)
				if ((tmp3)){
					HX_STACK_LINE(380)
					break;
				}
				HX_STACK_LINE(382)
				int tmp4 = (i)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(382)
				::flixel::FlxBasic tmp5 = members->__get(tmp4).StaticCast< ::flixel::FlxBasic >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(382)
				basic = tmp5;
				HX_STACK_LINE(383)
				bool tmp6 = (basic != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(383)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(383)
				if ((tmp6)){
					HX_STACK_LINE(383)
					tmp7 = basic->exists;
				}
				else{
					HX_STACK_LINE(383)
					tmp7 = false;
				}
				HX_STACK_LINE(383)
				if ((tmp7)){
					HX_STACK_LINE(385)
					::flixel::group::FlxTypedGroup tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(385)
					{
						HX_STACK_LINE(385)
						::flixel::group::FlxTypedGroup group1 = null();		HX_STACK_VAR(group1,"group1");
						HX_STACK_LINE(385)
						bool tmp9 = (basic != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(385)
						if ((tmp9)){
							HX_STACK_LINE(385)
							bool tmp10 = (basic->flixelType == (int)2);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(385)
							if ((tmp10)){
								HX_STACK_LINE(385)
								group1 = ((::flixel::group::FlxTypedGroup)(basic));
							}
							else{
								HX_STACK_LINE(385)
								bool tmp11 = (basic->flixelType == (int)4);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(385)
								if ((tmp11)){
									HX_STACK_LINE(385)
									::flixel::group::FlxTypedSpriteGroup spriteGroup = ((::flixel::group::FlxTypedSpriteGroup)(basic));		HX_STACK_VAR(spriteGroup,"spriteGroup");
									HX_STACK_LINE(385)
									group1 = spriteGroup->group;
								}
							}
						}
						HX_STACK_LINE(385)
						tmp8 = group1;
					}
					HX_STACK_LINE(385)
					group = tmp8;
					HX_STACK_LINE(386)
					bool tmp9 = (group != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(386)
					if ((tmp9)){
						HX_STACK_LINE(388)
						::flixel::group::FlxTypedGroup tmp10 = group;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(388)
						int tmp11 = list;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(388)
						this->add(tmp10,tmp11);
					}
					else{
						HX_STACK_LINE(392)
						::flixel::_system::FlxQuadTree_obj::_object = ((::flixel::FlxObject)(basic));
						HX_STACK_LINE(393)
						::flixel::FlxObject tmp10 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(393)
						bool tmp11 = tmp10->exists;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(393)
						bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(393)
						if ((tmp11)){
							HX_STACK_LINE(393)
							::flixel::FlxObject tmp13 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(393)
							::flixel::FlxObject tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(393)
							int tmp15 = tmp14->allowCollisions;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(393)
							tmp12 = (tmp15 != (int)0);
						}
						else{
							HX_STACK_LINE(393)
							tmp12 = false;
						}
						HX_STACK_LINE(393)
						if ((tmp12)){
							HX_STACK_LINE(395)
							::flixel::FlxObject tmp13 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(395)
							::flixel::_system::FlxQuadTree_obj::_objectLeftEdge = tmp13->x;
							HX_STACK_LINE(396)
							::flixel::FlxObject tmp14 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(396)
							::flixel::_system::FlxQuadTree_obj::_objectTopEdge = tmp14->y;
							HX_STACK_LINE(397)
							::flixel::FlxObject tmp15 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(397)
							Float tmp16 = tmp15->x;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(397)
							::flixel::FlxObject tmp17 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(397)
							Float tmp18 = tmp17->get_width();		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(397)
							Float tmp19 = (tmp16 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(397)
							::flixel::_system::FlxQuadTree_obj::_objectRightEdge = tmp19;
							HX_STACK_LINE(398)
							::flixel::FlxObject tmp20 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(398)
							Float tmp21 = tmp20->y;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(398)
							::flixel::FlxObject tmp22 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(398)
							Float tmp23 = tmp22->get_height();		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(398)
							Float tmp24 = (tmp21 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(398)
							::flixel::_system::FlxQuadTree_obj::_objectBottomEdge = tmp24;
							HX_STACK_LINE(399)
							this->addObject();
						}
					}
				}
			}
		}
		else{
			HX_STACK_LINE(407)
			::flixel::_system::FlxQuadTree_obj::_object = ((::flixel::FlxObject)(ObjectOrGroup));
			HX_STACK_LINE(408)
			::flixel::FlxObject tmp2 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(408)
			bool tmp3 = tmp2->exists;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(408)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(408)
			if ((tmp3)){
				HX_STACK_LINE(408)
				::flixel::FlxObject tmp5 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(408)
				::flixel::FlxObject tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(408)
				int tmp7 = tmp6->allowCollisions;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(408)
				tmp4 = (tmp7 != (int)0);
			}
			else{
				HX_STACK_LINE(408)
				tmp4 = false;
			}
			HX_STACK_LINE(408)
			if ((tmp4)){
				HX_STACK_LINE(410)
				::flixel::FlxObject tmp5 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(410)
				::flixel::_system::FlxQuadTree_obj::_objectLeftEdge = tmp5->x;
				HX_STACK_LINE(411)
				::flixel::FlxObject tmp6 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(411)
				::flixel::_system::FlxQuadTree_obj::_objectTopEdge = tmp6->y;
				HX_STACK_LINE(412)
				::flixel::FlxObject tmp7 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(412)
				Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(412)
				::flixel::FlxObject tmp9 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(412)
				Float tmp10 = tmp9->get_width();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(412)
				Float tmp11 = (tmp8 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(412)
				::flixel::_system::FlxQuadTree_obj::_objectRightEdge = tmp11;
				HX_STACK_LINE(413)
				::flixel::FlxObject tmp12 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(413)
				Float tmp13 = tmp12->y;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(413)
				::flixel::FlxObject tmp14 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(413)
				Float tmp15 = tmp14->get_height();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(413)
				Float tmp16 = (tmp13 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(413)
				::flixel::_system::FlxQuadTree_obj::_objectBottomEdge = tmp16;
				HX_STACK_LINE(414)
				this->addObject();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxQuadTree_obj,add,(void))

Void FlxQuadTree_obj::addObject( ){
{
		HX_STACK_FRAME("flixel.system.FlxQuadTree","addObject",0x3207b55c,"flixel.system.FlxQuadTree.addObject","flixel/system/FlxQuadTree.hx",424,0xb5742814)
		HX_STACK_THIS(this)
		HX_STACK_LINE(426)
		bool tmp = this->_canSubdivide;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(426)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(426)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(426)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(426)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(426)
		if ((tmp3)){
			HX_STACK_LINE(426)
			Float tmp5 = this->_leftEdge;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(426)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(426)
			Float tmp7 = ::flixel::_system::FlxQuadTree_obj::_objectLeftEdge;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(426)
			Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(426)
			bool tmp9 = (tmp6 >= tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(426)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(426)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(426)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(426)
			bool tmp13 = tmp11;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(426)
			if ((tmp13)){
				HX_STACK_LINE(426)
				Float tmp14 = this->_rightEdge;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(426)
				Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(426)
				Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(426)
				Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(426)
				Float tmp18 = ::flixel::_system::FlxQuadTree_obj::_objectRightEdge;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(426)
				Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(426)
				Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(426)
				Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(426)
				bool tmp22 = (tmp17 <= tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(426)
				tmp12 = tmp22;
			}
			else{
				HX_STACK_LINE(426)
				tmp12 = false;
			}
			HX_STACK_LINE(426)
			bool tmp14 = tmp12;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(426)
			bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(426)
			bool tmp16 = tmp14;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(426)
			if ((tmp16)){
				HX_STACK_LINE(426)
				Float tmp17 = this->_topEdge;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(426)
				Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(426)
				Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(426)
				Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(426)
				Float tmp21 = ::flixel::_system::FlxQuadTree_obj::_objectTopEdge;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(426)
				Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(426)
				Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(426)
				Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(426)
				bool tmp25 = (tmp20 >= tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(426)
				tmp15 = tmp25;
			}
			else{
				HX_STACK_LINE(426)
				tmp15 = false;
			}
			HX_STACK_LINE(426)
			bool tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(426)
			if ((tmp17)){
				HX_STACK_LINE(426)
				Float tmp18 = this->_bottomEdge;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(426)
				Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(426)
				Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(426)
				Float tmp21 = ::flixel::_system::FlxQuadTree_obj::_objectBottomEdge;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(426)
				Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(426)
				Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(426)
				tmp4 = (tmp20 <= tmp23);
			}
			else{
				HX_STACK_LINE(426)
				tmp4 = false;
			}
		}
		else{
			HX_STACK_LINE(426)
			tmp4 = true;
		}
		HX_STACK_LINE(426)
		if ((tmp4)){
			HX_STACK_LINE(428)
			this->addToList();
			HX_STACK_LINE(429)
			return null();
		}
		HX_STACK_LINE(433)
		Float tmp5 = ::flixel::_system::FlxQuadTree_obj::_objectLeftEdge;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(433)
		Float tmp6 = this->_leftEdge;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(433)
		bool tmp7 = (tmp5 > tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(433)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(433)
		if ((tmp7)){
			HX_STACK_LINE(433)
			Float tmp9 = ::flixel::_system::FlxQuadTree_obj::_objectRightEdge;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(433)
			Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(433)
			Float tmp11 = this->_midpointX;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(433)
			Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(433)
			tmp8 = (tmp10 < tmp12);
		}
		else{
			HX_STACK_LINE(433)
			tmp8 = false;
		}
		HX_STACK_LINE(433)
		if ((tmp8)){
			HX_STACK_LINE(435)
			Float tmp9 = ::flixel::_system::FlxQuadTree_obj::_objectTopEdge;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(435)
			Float tmp10 = this->_topEdge;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(435)
			bool tmp11 = (tmp9 > tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(435)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(435)
			if ((tmp11)){
				HX_STACK_LINE(435)
				Float tmp13 = ::flixel::_system::FlxQuadTree_obj::_objectBottomEdge;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(435)
				Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(435)
				Float tmp15 = this->_midpointY;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(435)
				Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(435)
				tmp12 = (tmp14 < tmp16);
			}
			else{
				HX_STACK_LINE(435)
				tmp12 = false;
			}
			HX_STACK_LINE(435)
			if ((tmp12)){
				HX_STACK_LINE(437)
				::flixel::_system::FlxQuadTree tmp13 = this->_northWestTree;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(437)
				bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(437)
				if ((tmp14)){
					HX_STACK_LINE(439)
					Float tmp15 = this->_leftEdge;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(439)
					Float tmp16 = this->_topEdge;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(439)
					Float tmp17 = this->_halfWidth;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(439)
					Float tmp18 = this->_halfHeight;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(439)
					::flixel::_system::FlxQuadTree tmp19 = ::flixel::_system::FlxQuadTree_obj::recycle(tmp15,tmp16,tmp17,tmp18,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(439)
					this->_northWestTree = tmp19;
				}
				HX_STACK_LINE(441)
				::flixel::_system::FlxQuadTree tmp15 = this->_northWestTree;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(441)
				tmp15->__Field(HX_HCSTRING("addObject","\xc0","\xb3","\x63","\xcd"), hx::paccDynamic )();
				HX_STACK_LINE(442)
				return null();
			}
			HX_STACK_LINE(444)
			Float tmp13 = ::flixel::_system::FlxQuadTree_obj::_objectTopEdge;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(444)
			Float tmp14 = this->_midpointY;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(444)
			bool tmp15 = (tmp13 > tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(444)
			bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(444)
			if ((tmp15)){
				HX_STACK_LINE(444)
				Float tmp17 = ::flixel::_system::FlxQuadTree_obj::_objectBottomEdge;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(444)
				Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(444)
				Float tmp19 = this->_bottomEdge;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(444)
				Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(444)
				tmp16 = (tmp18 < tmp20);
			}
			else{
				HX_STACK_LINE(444)
				tmp16 = false;
			}
			HX_STACK_LINE(444)
			if ((tmp16)){
				HX_STACK_LINE(446)
				::flixel::_system::FlxQuadTree tmp17 = this->_southWestTree;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(446)
				bool tmp18 = (tmp17 == null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(446)
				if ((tmp18)){
					HX_STACK_LINE(448)
					Float tmp19 = this->_leftEdge;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(448)
					Float tmp20 = this->_midpointY;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(448)
					Float tmp21 = this->_halfWidth;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(448)
					Float tmp22 = this->_halfHeight;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(448)
					::flixel::_system::FlxQuadTree tmp23 = ::flixel::_system::FlxQuadTree_obj::recycle(tmp19,tmp20,tmp21,tmp22,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(448)
					this->_southWestTree = tmp23;
				}
				HX_STACK_LINE(450)
				::flixel::_system::FlxQuadTree tmp19 = this->_southWestTree;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(450)
				tmp19->__Field(HX_HCSTRING("addObject","\xc0","\xb3","\x63","\xcd"), hx::paccDynamic )();
				HX_STACK_LINE(451)
				return null();
			}
		}
		HX_STACK_LINE(454)
		Float tmp9 = ::flixel::_system::FlxQuadTree_obj::_objectLeftEdge;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(454)
		Float tmp10 = this->_midpointX;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(454)
		bool tmp11 = (tmp9 > tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(454)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(454)
		if ((tmp11)){
			HX_STACK_LINE(454)
			Float tmp13 = ::flixel::_system::FlxQuadTree_obj::_objectRightEdge;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(454)
			Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(454)
			Float tmp15 = this->_rightEdge;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(454)
			Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(454)
			tmp12 = (tmp14 < tmp16);
		}
		else{
			HX_STACK_LINE(454)
			tmp12 = false;
		}
		HX_STACK_LINE(454)
		if ((tmp12)){
			HX_STACK_LINE(456)
			Float tmp13 = ::flixel::_system::FlxQuadTree_obj::_objectTopEdge;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(456)
			Float tmp14 = this->_topEdge;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(456)
			bool tmp15 = (tmp13 > tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(456)
			bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(456)
			if ((tmp15)){
				HX_STACK_LINE(456)
				Float tmp17 = ::flixel::_system::FlxQuadTree_obj::_objectBottomEdge;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(456)
				Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(456)
				Float tmp19 = this->_midpointY;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(456)
				Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(456)
				tmp16 = (tmp18 < tmp20);
			}
			else{
				HX_STACK_LINE(456)
				tmp16 = false;
			}
			HX_STACK_LINE(456)
			if ((tmp16)){
				HX_STACK_LINE(458)
				::flixel::_system::FlxQuadTree tmp17 = this->_northEastTree;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(458)
				bool tmp18 = (tmp17 == null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(458)
				if ((tmp18)){
					HX_STACK_LINE(460)
					Float tmp19 = this->_midpointX;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(460)
					Float tmp20 = this->_topEdge;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(460)
					Float tmp21 = this->_halfWidth;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(460)
					Float tmp22 = this->_halfHeight;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(460)
					::flixel::_system::FlxQuadTree tmp23 = ::flixel::_system::FlxQuadTree_obj::recycle(tmp19,tmp20,tmp21,tmp22,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(460)
					this->_northEastTree = tmp23;
				}
				HX_STACK_LINE(462)
				::flixel::_system::FlxQuadTree tmp19 = this->_northEastTree;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(462)
				tmp19->__Field(HX_HCSTRING("addObject","\xc0","\xb3","\x63","\xcd"), hx::paccDynamic )();
				HX_STACK_LINE(463)
				return null();
			}
			HX_STACK_LINE(465)
			Float tmp17 = ::flixel::_system::FlxQuadTree_obj::_objectTopEdge;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(465)
			Float tmp18 = this->_midpointY;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(465)
			bool tmp19 = (tmp17 > tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(465)
			bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(465)
			if ((tmp19)){
				HX_STACK_LINE(465)
				Float tmp21 = ::flixel::_system::FlxQuadTree_obj::_objectBottomEdge;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(465)
				Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(465)
				Float tmp23 = this->_bottomEdge;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(465)
				Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(465)
				tmp20 = (tmp22 < tmp24);
			}
			else{
				HX_STACK_LINE(465)
				tmp20 = false;
			}
			HX_STACK_LINE(465)
			if ((tmp20)){
				HX_STACK_LINE(467)
				::flixel::_system::FlxQuadTree tmp21 = this->_southEastTree;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(467)
				bool tmp22 = (tmp21 == null());		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(467)
				if ((tmp22)){
					HX_STACK_LINE(469)
					Float tmp23 = this->_midpointX;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(469)
					Float tmp24 = this->_midpointY;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(469)
					Float tmp25 = this->_halfWidth;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(469)
					Float tmp26 = this->_halfHeight;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(469)
					::flixel::_system::FlxQuadTree tmp27 = ::flixel::_system::FlxQuadTree_obj::recycle(tmp23,tmp24,tmp25,tmp26,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(469)
					this->_southEastTree = tmp27;
				}
				HX_STACK_LINE(471)
				::flixel::_system::FlxQuadTree tmp23 = this->_southEastTree;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(471)
				tmp23->__Field(HX_HCSTRING("addObject","\xc0","\xb3","\x63","\xcd"), hx::paccDynamic )();
				HX_STACK_LINE(472)
				return null();
			}
		}
		HX_STACK_LINE(477)
		Float tmp13 = ::flixel::_system::FlxQuadTree_obj::_objectRightEdge;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(477)
		Float tmp14 = this->_leftEdge;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(477)
		bool tmp15 = (tmp13 > tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(477)
		bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(477)
		bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(477)
		if ((tmp16)){
			HX_STACK_LINE(477)
			Float tmp18 = ::flixel::_system::FlxQuadTree_obj::_objectLeftEdge;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(477)
			Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(477)
			Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(477)
			Float tmp21 = this->_midpointX;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(477)
			Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(477)
			Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(477)
			tmp17 = (tmp20 < tmp23);
		}
		else{
			HX_STACK_LINE(477)
			tmp17 = false;
		}
		HX_STACK_LINE(477)
		bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(477)
		bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(477)
		if ((tmp18)){
			HX_STACK_LINE(477)
			Float tmp20 = ::flixel::_system::FlxQuadTree_obj::_objectBottomEdge;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(477)
			Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(477)
			Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(477)
			Float tmp23 = this->_topEdge;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(477)
			Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(477)
			Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(477)
			tmp19 = (tmp22 > tmp25);
		}
		else{
			HX_STACK_LINE(477)
			tmp19 = false;
		}
		HX_STACK_LINE(477)
		bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(477)
		if ((tmp19)){
			HX_STACK_LINE(477)
			Float tmp21 = ::flixel::_system::FlxQuadTree_obj::_objectTopEdge;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(477)
			Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(477)
			Float tmp23 = this->_midpointY;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(477)
			Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(477)
			tmp20 = (tmp22 < tmp24);
		}
		else{
			HX_STACK_LINE(477)
			tmp20 = false;
		}
		HX_STACK_LINE(477)
		if ((tmp20)){
			HX_STACK_LINE(479)
			::flixel::_system::FlxQuadTree tmp21 = this->_northWestTree;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(479)
			bool tmp22 = (tmp21 == null());		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(479)
			if ((tmp22)){
				HX_STACK_LINE(481)
				Float tmp23 = this->_leftEdge;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(481)
				Float tmp24 = this->_topEdge;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(481)
				Float tmp25 = this->_halfWidth;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(481)
				Float tmp26 = this->_halfHeight;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(481)
				::flixel::_system::FlxQuadTree tmp27 = ::flixel::_system::FlxQuadTree_obj::recycle(tmp23,tmp24,tmp25,tmp26,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(481)
				this->_northWestTree = tmp27;
			}
			HX_STACK_LINE(483)
			::flixel::_system::FlxQuadTree tmp23 = this->_northWestTree;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(483)
			tmp23->__Field(HX_HCSTRING("addObject","\xc0","\xb3","\x63","\xcd"), hx::paccDynamic )();
		}
		HX_STACK_LINE(485)
		Float tmp21 = ::flixel::_system::FlxQuadTree_obj::_objectRightEdge;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(485)
		Float tmp22 = this->_midpointX;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(485)
		bool tmp23 = (tmp21 > tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(485)
		bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(485)
		bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(485)
		if ((tmp24)){
			HX_STACK_LINE(485)
			Float tmp26 = ::flixel::_system::FlxQuadTree_obj::_objectLeftEdge;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(485)
			Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(485)
			Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(485)
			Float tmp29 = this->_rightEdge;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(485)
			Float tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(485)
			Float tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(485)
			tmp25 = (tmp28 < tmp31);
		}
		else{
			HX_STACK_LINE(485)
			tmp25 = false;
		}
		HX_STACK_LINE(485)
		bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(485)
		bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(485)
		if ((tmp26)){
			HX_STACK_LINE(485)
			Float tmp28 = ::flixel::_system::FlxQuadTree_obj::_objectBottomEdge;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(485)
			Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(485)
			Float tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(485)
			Float tmp31 = this->_topEdge;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(485)
			Float tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(485)
			Float tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(485)
			tmp27 = (tmp30 > tmp33);
		}
		else{
			HX_STACK_LINE(485)
			tmp27 = false;
		}
		HX_STACK_LINE(485)
		bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(485)
		if ((tmp27)){
			HX_STACK_LINE(485)
			Float tmp29 = ::flixel::_system::FlxQuadTree_obj::_objectTopEdge;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(485)
			Float tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(485)
			Float tmp31 = this->_midpointY;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(485)
			Float tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(485)
			tmp28 = (tmp30 < tmp32);
		}
		else{
			HX_STACK_LINE(485)
			tmp28 = false;
		}
		HX_STACK_LINE(485)
		if ((tmp28)){
			HX_STACK_LINE(487)
			::flixel::_system::FlxQuadTree tmp29 = this->_northEastTree;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(487)
			bool tmp30 = (tmp29 == null());		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(487)
			if ((tmp30)){
				HX_STACK_LINE(489)
				Float tmp31 = this->_midpointX;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(489)
				Float tmp32 = this->_topEdge;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(489)
				Float tmp33 = this->_halfWidth;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(489)
				Float tmp34 = this->_halfHeight;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(489)
				::flixel::_system::FlxQuadTree tmp35 = ::flixel::_system::FlxQuadTree_obj::recycle(tmp31,tmp32,tmp33,tmp34,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(489)
				this->_northEastTree = tmp35;
			}
			HX_STACK_LINE(491)
			::flixel::_system::FlxQuadTree tmp31 = this->_northEastTree;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(491)
			tmp31->__Field(HX_HCSTRING("addObject","\xc0","\xb3","\x63","\xcd"), hx::paccDynamic )();
		}
		HX_STACK_LINE(493)
		Float tmp29 = ::flixel::_system::FlxQuadTree_obj::_objectRightEdge;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(493)
		Float tmp30 = this->_midpointX;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(493)
		bool tmp31 = (tmp29 > tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(493)
		bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(493)
		bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(493)
		if ((tmp32)){
			HX_STACK_LINE(493)
			Float tmp34 = ::flixel::_system::FlxQuadTree_obj::_objectLeftEdge;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(493)
			Float tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(493)
			Float tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(493)
			Float tmp37 = this->_rightEdge;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(493)
			Float tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(493)
			Float tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(493)
			tmp33 = (tmp36 < tmp39);
		}
		else{
			HX_STACK_LINE(493)
			tmp33 = false;
		}
		HX_STACK_LINE(493)
		bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(493)
		bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(493)
		if ((tmp34)){
			HX_STACK_LINE(493)
			Float tmp36 = ::flixel::_system::FlxQuadTree_obj::_objectBottomEdge;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(493)
			Float tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(493)
			Float tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(493)
			Float tmp39 = this->_midpointY;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(493)
			Float tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(493)
			Float tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(493)
			tmp35 = (tmp38 > tmp41);
		}
		else{
			HX_STACK_LINE(493)
			tmp35 = false;
		}
		HX_STACK_LINE(493)
		bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(493)
		if ((tmp35)){
			HX_STACK_LINE(493)
			Float tmp37 = ::flixel::_system::FlxQuadTree_obj::_objectTopEdge;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(493)
			Float tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(493)
			Float tmp39 = this->_bottomEdge;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(493)
			Float tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(493)
			tmp36 = (tmp38 < tmp40);
		}
		else{
			HX_STACK_LINE(493)
			tmp36 = false;
		}
		HX_STACK_LINE(493)
		if ((tmp36)){
			HX_STACK_LINE(495)
			::flixel::_system::FlxQuadTree tmp37 = this->_southEastTree;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(495)
			bool tmp38 = (tmp37 == null());		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(495)
			if ((tmp38)){
				HX_STACK_LINE(497)
				Float tmp39 = this->_midpointX;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(497)
				Float tmp40 = this->_midpointY;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(497)
				Float tmp41 = this->_halfWidth;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(497)
				Float tmp42 = this->_halfHeight;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(497)
				::flixel::_system::FlxQuadTree tmp43 = ::flixel::_system::FlxQuadTree_obj::recycle(tmp39,tmp40,tmp41,tmp42,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(497)
				this->_southEastTree = tmp43;
			}
			HX_STACK_LINE(499)
			::flixel::_system::FlxQuadTree tmp39 = this->_southEastTree;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(499)
			tmp39->__Field(HX_HCSTRING("addObject","\xc0","\xb3","\x63","\xcd"), hx::paccDynamic )();
		}
		HX_STACK_LINE(501)
		Float tmp37 = ::flixel::_system::FlxQuadTree_obj::_objectRightEdge;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(501)
		Float tmp38 = this->_leftEdge;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(501)
		bool tmp39 = (tmp37 > tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(501)
		bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(501)
		bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(501)
		if ((tmp40)){
			HX_STACK_LINE(501)
			Float tmp42 = ::flixel::_system::FlxQuadTree_obj::_objectLeftEdge;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(501)
			Float tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(501)
			Float tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(501)
			Float tmp45 = this->_midpointX;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(501)
			Float tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(501)
			Float tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(501)
			tmp41 = (tmp44 < tmp47);
		}
		else{
			HX_STACK_LINE(501)
			tmp41 = false;
		}
		HX_STACK_LINE(501)
		bool tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(501)
		bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(501)
		if ((tmp42)){
			HX_STACK_LINE(501)
			Float tmp44 = ::flixel::_system::FlxQuadTree_obj::_objectBottomEdge;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(501)
			Float tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(501)
			Float tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(501)
			Float tmp47 = this->_midpointY;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(501)
			Float tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(501)
			Float tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(501)
			tmp43 = (tmp46 > tmp49);
		}
		else{
			HX_STACK_LINE(501)
			tmp43 = false;
		}
		HX_STACK_LINE(501)
		bool tmp44;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(501)
		if ((tmp43)){
			HX_STACK_LINE(501)
			Float tmp45 = ::flixel::_system::FlxQuadTree_obj::_objectTopEdge;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(501)
			Float tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(501)
			Float tmp47 = this->_bottomEdge;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(501)
			Float tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(501)
			tmp44 = (tmp46 < tmp48);
		}
		else{
			HX_STACK_LINE(501)
			tmp44 = false;
		}
		HX_STACK_LINE(501)
		if ((tmp44)){
			HX_STACK_LINE(503)
			::flixel::_system::FlxQuadTree tmp45 = this->_southWestTree;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(503)
			bool tmp46 = (tmp45 == null());		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(503)
			if ((tmp46)){
				HX_STACK_LINE(505)
				Float tmp47 = this->_leftEdge;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(505)
				Float tmp48 = this->_midpointY;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(505)
				Float tmp49 = this->_halfWidth;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(505)
				Float tmp50 = this->_halfHeight;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(505)
				::flixel::_system::FlxQuadTree tmp51 = ::flixel::_system::FlxQuadTree_obj::recycle(tmp47,tmp48,tmp49,tmp50,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(505)
				this->_southWestTree = tmp51;
			}
			HX_STACK_LINE(507)
			::flixel::_system::FlxQuadTree tmp47 = this->_southWestTree;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(507)
			tmp47->__Field(HX_HCSTRING("addObject","\xc0","\xb3","\x63","\xcd"), hx::paccDynamic )();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxQuadTree_obj,addObject,(void))

Void FlxQuadTree_obj::addToList( ){
{
		HX_STACK_FRAME("flixel.system.FlxQuadTree","addToList",0x9a34be16,"flixel.system.FlxQuadTree.addToList","flixel/system/FlxQuadTree.hx",515,0xb5742814)
		HX_STACK_THIS(this)
		HX_STACK_LINE(516)
		::flixel::_system::FlxLinkedList ot;		HX_STACK_VAR(ot,"ot");
		HX_STACK_LINE(517)
		int tmp = ::flixel::_system::FlxQuadTree_obj::_list;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(517)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(517)
		if ((tmp1)){
			HX_STACK_LINE(519)
			::flixel::_system::FlxLinkedList tmp2 = this->_tailA;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(519)
			::flixel::FlxObject tmp3 = tmp2->__Field(HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(519)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(519)
			if ((tmp4)){
				HX_STACK_LINE(521)
				::flixel::_system::FlxLinkedList tmp5 = this->_tailA;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(521)
				ot = tmp5;
				HX_STACK_LINE(522)
				::flixel::_system::FlxLinkedList tmp6 = ::flixel::_system::FlxLinkedList_obj::recycle();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(522)
				this->_tailA = tmp6;
				HX_STACK_LINE(523)
				::flixel::_system::FlxLinkedList tmp7 = this->_tailA;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(523)
				ot->__FieldRef(HX_HCSTRING("next","\xf3","\x84","\x02","\x49")) = tmp7;
			}
			HX_STACK_LINE(525)
			::flixel::FlxObject tmp5 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(525)
			::flixel::_system::FlxLinkedList tmp6 = this->_tailA;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(525)
			tmp6->__FieldRef(HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15")) = tmp5;
		}
		else{
			HX_STACK_LINE(529)
			::flixel::_system::FlxLinkedList tmp2 = this->_tailB;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(529)
			::flixel::FlxObject tmp3 = tmp2->__Field(HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(529)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(529)
			if ((tmp4)){
				HX_STACK_LINE(531)
				::flixel::_system::FlxLinkedList tmp5 = this->_tailB;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(531)
				ot = tmp5;
				HX_STACK_LINE(532)
				::flixel::_system::FlxLinkedList tmp6 = ::flixel::_system::FlxLinkedList_obj::recycle();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(532)
				this->_tailB = tmp6;
				HX_STACK_LINE(533)
				::flixel::_system::FlxLinkedList tmp7 = this->_tailB;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(533)
				ot->__FieldRef(HX_HCSTRING("next","\xf3","\x84","\x02","\x49")) = tmp7;
			}
			HX_STACK_LINE(535)
			::flixel::FlxObject tmp5 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(535)
			::flixel::_system::FlxLinkedList tmp6 = this->_tailB;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(535)
			tmp6->__FieldRef(HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15")) = tmp5;
		}
		HX_STACK_LINE(537)
		bool tmp2 = this->_canSubdivide;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(537)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(537)
		if ((tmp3)){
			HX_STACK_LINE(539)
			return null();
		}
		HX_STACK_LINE(541)
		::flixel::_system::FlxQuadTree tmp4 = this->_northWestTree;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(541)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(541)
		if ((tmp5)){
			HX_STACK_LINE(543)
			::flixel::_system::FlxQuadTree tmp6 = this->_northWestTree;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(543)
			tmp6->__Field(HX_HCSTRING("addToList","\x7a","\xbc","\x90","\x35"), hx::paccDynamic )();
		}
		HX_STACK_LINE(545)
		::flixel::_system::FlxQuadTree tmp6 = this->_northEastTree;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(545)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(545)
		if ((tmp7)){
			HX_STACK_LINE(547)
			::flixel::_system::FlxQuadTree tmp8 = this->_northEastTree;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(547)
			tmp8->__Field(HX_HCSTRING("addToList","\x7a","\xbc","\x90","\x35"), hx::paccDynamic )();
		}
		HX_STACK_LINE(549)
		::flixel::_system::FlxQuadTree tmp8 = this->_southEastTree;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(549)
		bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(549)
		if ((tmp9)){
			HX_STACK_LINE(551)
			::flixel::_system::FlxQuadTree tmp10 = this->_southEastTree;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(551)
			tmp10->__Field(HX_HCSTRING("addToList","\x7a","\xbc","\x90","\x35"), hx::paccDynamic )();
		}
		HX_STACK_LINE(553)
		::flixel::_system::FlxQuadTree tmp10 = this->_southWestTree;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(553)
		bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(553)
		if ((tmp11)){
			HX_STACK_LINE(555)
			::flixel::_system::FlxQuadTree tmp12 = this->_southWestTree;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(555)
			tmp12->__Field(HX_HCSTRING("addToList","\x7a","\xbc","\x90","\x35"), hx::paccDynamic )();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxQuadTree_obj,addToList,(void))

bool FlxQuadTree_obj::execute( ){
	HX_STACK_FRAME("flixel.system.FlxQuadTree","execute",0x0c2e2cd1,"flixel.system.FlxQuadTree.execute","flixel/system/FlxQuadTree.hx",565,0xb5742814)
	HX_STACK_THIS(this)
	HX_STACK_LINE(566)
	bool overlapProcessed = false;		HX_STACK_VAR(overlapProcessed,"overlapProcessed");
	HX_STACK_LINE(567)
	::flixel::_system::FlxLinkedList iterator;		HX_STACK_VAR(iterator,"iterator");
	HX_STACK_LINE(569)
	::flixel::_system::FlxLinkedList tmp = this->_headA;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(569)
	::flixel::FlxObject tmp1 = tmp->__Field(HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(569)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(569)
	if ((tmp2)){
		HX_STACK_LINE(571)
		::flixel::_system::FlxLinkedList tmp3 = this->_headA;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(571)
		iterator = tmp3;
		HX_STACK_LINE(572)
		while((true)){
			HX_STACK_LINE(572)
			bool tmp4 = (iterator != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(572)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(572)
			if ((tmp5)){
				HX_STACK_LINE(572)
				break;
			}
			HX_STACK_LINE(574)
			::flixel::_system::FlxQuadTree_obj::_object = iterator->__Field(HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15"), hx::paccDynamic );
			HX_STACK_LINE(575)
			bool tmp6 = ::flixel::_system::FlxQuadTree_obj::_useBothLists;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(575)
			if ((tmp6)){
				HX_STACK_LINE(577)
				::flixel::_system::FlxLinkedList tmp7 = this->_headB;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(577)
				::flixel::_system::FlxQuadTree_obj::_iterator = tmp7;
			}
			else{
				HX_STACK_LINE(581)
				::flixel::_system::FlxQuadTree_obj::_iterator = iterator->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic );
			}
			HX_STACK_LINE(583)
			::flixel::FlxObject tmp7 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(583)
			bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(583)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(583)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(583)
			if ((tmp9)){
				HX_STACK_LINE(583)
				::flixel::FlxObject tmp11 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(583)
				::flixel::FlxObject tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(583)
				::flixel::FlxObject tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(583)
				tmp10 = tmp13->exists;
			}
			else{
				HX_STACK_LINE(583)
				tmp10 = false;
			}
			HX_STACK_LINE(583)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(583)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(583)
			if ((tmp11)){
				HX_STACK_LINE(583)
				::flixel::FlxObject tmp13 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(583)
				::flixel::FlxObject tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(583)
				::flixel::FlxObject tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(583)
				int tmp16 = tmp15->allowCollisions;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(583)
				tmp12 = (tmp16 > (int)0);
			}
			else{
				HX_STACK_LINE(583)
				tmp12 = false;
			}
			HX_STACK_LINE(583)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(583)
			bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(583)
			if ((tmp13)){
				HX_STACK_LINE(584)
				::flixel::_system::FlxLinkedList tmp15 = ::flixel::_system::FlxQuadTree_obj::_iterator;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(584)
				::flixel::_system::FlxLinkedList tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(584)
				::flixel::_system::FlxLinkedList tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(584)
				tmp14 = (tmp17 != null());
			}
			else{
				HX_STACK_LINE(583)
				tmp14 = false;
			}
			HX_STACK_LINE(583)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(583)
			bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(583)
			if ((tmp15)){
				HX_STACK_LINE(584)
				::flixel::_system::FlxLinkedList tmp17 = ::flixel::_system::FlxQuadTree_obj::_iterator;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(584)
				::flixel::_system::FlxLinkedList tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(584)
				::flixel::_system::FlxLinkedList tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(584)
				::flixel::FlxObject tmp20 = tmp19->__Field(HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15"), hx::paccDynamic );		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(584)
				tmp16 = (tmp20 != null());
			}
			else{
				HX_STACK_LINE(583)
				tmp16 = false;
			}
			HX_STACK_LINE(583)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(583)
			if ((tmp16)){
				HX_STACK_LINE(584)
				tmp17 = this->overlapNode();
			}
			else{
				HX_STACK_LINE(583)
				tmp17 = false;
			}
			HX_STACK_LINE(583)
			if ((tmp17)){
				HX_STACK_LINE(586)
				overlapProcessed = true;
			}
			HX_STACK_LINE(588)
			iterator = iterator->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic );
		}
	}
	HX_STACK_LINE(593)
	::flixel::_system::FlxQuadTree tmp3 = this->_northWestTree;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(593)
	bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(593)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(593)
	if ((tmp4)){
		HX_STACK_LINE(593)
		::flixel::_system::FlxQuadTree tmp6 = this->_northWestTree;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(593)
		::flixel::_system::FlxQuadTree tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(593)
		tmp5 = tmp7->__Field(HX_HCSTRING("execute","\x35","\x0a","\x0d","\xcc"), hx::paccDynamic )();
	}
	else{
		HX_STACK_LINE(593)
		tmp5 = false;
	}
	HX_STACK_LINE(593)
	if ((tmp5)){
		HX_STACK_LINE(595)
		overlapProcessed = true;
	}
	HX_STACK_LINE(597)
	::flixel::_system::FlxQuadTree tmp6 = this->_northEastTree;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(597)
	bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(597)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(597)
	if ((tmp7)){
		HX_STACK_LINE(597)
		::flixel::_system::FlxQuadTree tmp9 = this->_northEastTree;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(597)
		::flixel::_system::FlxQuadTree tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(597)
		tmp8 = tmp10->__Field(HX_HCSTRING("execute","\x35","\x0a","\x0d","\xcc"), hx::paccDynamic )();
	}
	else{
		HX_STACK_LINE(597)
		tmp8 = false;
	}
	HX_STACK_LINE(597)
	if ((tmp8)){
		HX_STACK_LINE(599)
		overlapProcessed = true;
	}
	HX_STACK_LINE(601)
	::flixel::_system::FlxQuadTree tmp9 = this->_southEastTree;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(601)
	bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(601)
	bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(601)
	if ((tmp10)){
		HX_STACK_LINE(601)
		::flixel::_system::FlxQuadTree tmp12 = this->_southEastTree;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(601)
		::flixel::_system::FlxQuadTree tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(601)
		tmp11 = tmp13->__Field(HX_HCSTRING("execute","\x35","\x0a","\x0d","\xcc"), hx::paccDynamic )();
	}
	else{
		HX_STACK_LINE(601)
		tmp11 = false;
	}
	HX_STACK_LINE(601)
	if ((tmp11)){
		HX_STACK_LINE(603)
		overlapProcessed = true;
	}
	HX_STACK_LINE(605)
	::flixel::_system::FlxQuadTree tmp12 = this->_southWestTree;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(605)
	bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(605)
	bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(605)
	if ((tmp13)){
		HX_STACK_LINE(605)
		::flixel::_system::FlxQuadTree tmp15 = this->_southWestTree;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(605)
		::flixel::_system::FlxQuadTree tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(605)
		tmp14 = tmp16->__Field(HX_HCSTRING("execute","\x35","\x0a","\x0d","\xcc"), hx::paccDynamic )();
	}
	else{
		HX_STACK_LINE(605)
		tmp14 = false;
	}
	HX_STACK_LINE(605)
	if ((tmp14)){
		HX_STACK_LINE(607)
		overlapProcessed = true;
	}
	HX_STACK_LINE(610)
	bool tmp15 = overlapProcessed;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(610)
	return tmp15;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxQuadTree_obj,execute,return )

bool FlxQuadTree_obj::overlapNode( ){
	HX_STACK_FRAME("flixel.system.FlxQuadTree","overlapNode",0x0fc5e9c5,"flixel.system.FlxQuadTree.overlapNode","flixel/system/FlxQuadTree.hx",618,0xb5742814)
	HX_STACK_THIS(this)
	HX_STACK_LINE(620)
	::flixel::FlxObject tmp = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(620)
	Float tmp1 = tmp->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(620)
	::flixel::FlxObject tmp2 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(620)
	Float tmp3 = tmp2->last->x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(620)
	bool tmp4 = (tmp1 < tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(620)
	Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(620)
	if ((tmp4)){
		HX_STACK_LINE(620)
		::flixel::FlxObject tmp6 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(620)
		tmp5 = tmp6->x;
	}
	else{
		HX_STACK_LINE(620)
		::flixel::FlxObject tmp6 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(620)
		tmp5 = tmp6->last->x;
	}
	HX_STACK_LINE(620)
	::flixel::_system::FlxQuadTree_obj::_objectHullX = tmp5;
	HX_STACK_LINE(621)
	::flixel::FlxObject tmp6 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(621)
	Float tmp7 = tmp6->y;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(621)
	::flixel::FlxObject tmp8 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(621)
	Float tmp9 = tmp8->last->y;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(621)
	bool tmp10 = (tmp7 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(621)
	Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(621)
	if ((tmp10)){
		HX_STACK_LINE(621)
		::flixel::FlxObject tmp12 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(621)
		tmp11 = tmp12->y;
	}
	else{
		HX_STACK_LINE(621)
		::flixel::FlxObject tmp12 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(621)
		tmp11 = tmp12->last->y;
	}
	HX_STACK_LINE(621)
	::flixel::_system::FlxQuadTree_obj::_objectHullY = tmp11;
	HX_STACK_LINE(622)
	::flixel::FlxObject tmp12 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(622)
	Float tmp13 = tmp12->x;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(622)
	::flixel::FlxObject tmp14 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(622)
	Float tmp15 = tmp14->last->x;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(622)
	Float tmp16 = (tmp13 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(622)
	::flixel::_system::FlxQuadTree_obj::_objectHullWidth = tmp16;
	HX_STACK_LINE(623)
	::flixel::FlxObject tmp17 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(623)
	Float tmp18 = tmp17->get_width();		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(623)
	Float tmp19 = ::flixel::_system::FlxQuadTree_obj::_objectHullWidth;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(623)
	bool tmp20 = (tmp19 > (int)0);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(623)
	Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(623)
	if ((tmp20)){
		HX_STACK_LINE(623)
		tmp21 = ::flixel::_system::FlxQuadTree_obj::_objectHullWidth;
	}
	else{
		HX_STACK_LINE(623)
		Float tmp22 = ::flixel::_system::FlxQuadTree_obj::_objectHullWidth;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(623)
		tmp21 = -(tmp22);
	}
	HX_STACK_LINE(623)
	Float tmp22 = (tmp18 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(623)
	::flixel::_system::FlxQuadTree_obj::_objectHullWidth = tmp22;
	HX_STACK_LINE(624)
	::flixel::FlxObject tmp23 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(624)
	Float tmp24 = tmp23->y;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(624)
	::flixel::FlxObject tmp25 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(624)
	Float tmp26 = tmp25->last->y;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(624)
	Float tmp27 = (tmp24 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(624)
	::flixel::_system::FlxQuadTree_obj::_objectHullHeight = tmp27;
	HX_STACK_LINE(625)
	::flixel::FlxObject tmp28 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(625)
	Float tmp29 = tmp28->get_height();		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(625)
	Float tmp30 = ::flixel::_system::FlxQuadTree_obj::_objectHullHeight;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(625)
	bool tmp31 = (tmp30 > (int)0);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(625)
	Float tmp32;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(625)
	if ((tmp31)){
		HX_STACK_LINE(625)
		tmp32 = ::flixel::_system::FlxQuadTree_obj::_objectHullHeight;
	}
	else{
		HX_STACK_LINE(625)
		Float tmp33 = ::flixel::_system::FlxQuadTree_obj::_objectHullHeight;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(625)
		tmp32 = -(tmp33);
	}
	HX_STACK_LINE(625)
	Float tmp33 = (tmp29 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(625)
	::flixel::_system::FlxQuadTree_obj::_objectHullHeight = tmp33;
	HX_STACK_LINE(628)
	bool overlapProcessed = false;		HX_STACK_VAR(overlapProcessed,"overlapProcessed");
	HX_STACK_LINE(629)
	::flixel::FlxObject checkObject;		HX_STACK_VAR(checkObject,"checkObject");
	HX_STACK_LINE(631)
	while((true)){
		HX_STACK_LINE(631)
		::flixel::_system::FlxLinkedList tmp34 = ::flixel::_system::FlxQuadTree_obj::_iterator;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(631)
		bool tmp35 = (tmp34 != null());		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(631)
		bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(631)
		if ((tmp36)){
			HX_STACK_LINE(631)
			break;
		}
		HX_STACK_LINE(633)
		::flixel::_system::FlxLinkedList tmp37 = ::flixel::_system::FlxQuadTree_obj::_iterator;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(633)
		checkObject = tmp37->__Field(HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15"), hx::paccDynamic );
		HX_STACK_LINE(634)
		::flixel::FlxObject tmp38 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(634)
		::flixel::FlxObject tmp39 = checkObject;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(634)
		bool tmp40 = (tmp38 == tmp39);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(634)
		bool tmp41 = !(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(634)
		bool tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(634)
		bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(634)
		if ((tmp42)){
			HX_STACK_LINE(634)
			bool tmp44 = checkObject->exists;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(634)
			bool tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(634)
			bool tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(634)
			tmp43 = !(tmp46);
		}
		else{
			HX_STACK_LINE(634)
			tmp43 = true;
		}
		HX_STACK_LINE(634)
		bool tmp44 = !(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(634)
		bool tmp45;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(634)
		if ((tmp44)){
			HX_STACK_LINE(634)
			tmp45 = (checkObject->allowCollisions <= (int)0);
		}
		else{
			HX_STACK_LINE(634)
			tmp45 = true;
		}
		HX_STACK_LINE(634)
		if ((tmp45)){
			HX_STACK_LINE(636)
			::flixel::_system::FlxLinkedList tmp46 = ::flixel::_system::FlxQuadTree_obj::_iterator;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(636)
			::flixel::_system::FlxQuadTree_obj::_iterator = tmp46->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic );
			HX_STACK_LINE(637)
			continue;
		}
		HX_STACK_LINE(641)
		Float tmp46 = checkObject->x;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(641)
		Float tmp47 = checkObject->last->x;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(641)
		bool tmp48 = (tmp46 < tmp47);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(641)
		Float tmp49;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(641)
		if ((tmp48)){
			HX_STACK_LINE(641)
			tmp49 = checkObject->x;
		}
		else{
			HX_STACK_LINE(641)
			tmp49 = checkObject->last->x;
		}
		HX_STACK_LINE(641)
		::flixel::_system::FlxQuadTree_obj::_checkObjectHullX = tmp49;
		HX_STACK_LINE(642)
		Float tmp50 = checkObject->y;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(642)
		Float tmp51 = checkObject->last->y;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(642)
		bool tmp52 = (tmp50 < tmp51);		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(642)
		Float tmp53;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(642)
		if ((tmp52)){
			HX_STACK_LINE(642)
			tmp53 = checkObject->y;
		}
		else{
			HX_STACK_LINE(642)
			tmp53 = checkObject->last->y;
		}
		HX_STACK_LINE(642)
		::flixel::_system::FlxQuadTree_obj::_checkObjectHullY = tmp53;
		HX_STACK_LINE(643)
		Float tmp54 = checkObject->x;		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(643)
		Float tmp55 = checkObject->last->x;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(643)
		Float tmp56 = (tmp54 - tmp55);		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(643)
		::flixel::_system::FlxQuadTree_obj::_checkObjectHullWidth = tmp56;
		HX_STACK_LINE(644)
		Float tmp57 = checkObject->get_width();		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(644)
		Float tmp58 = ::flixel::_system::FlxQuadTree_obj::_checkObjectHullWidth;		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(644)
		bool tmp59 = (tmp58 > (int)0);		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(644)
		Float tmp60;		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(644)
		if ((tmp59)){
			HX_STACK_LINE(644)
			tmp60 = ::flixel::_system::FlxQuadTree_obj::_checkObjectHullWidth;
		}
		else{
			HX_STACK_LINE(644)
			Float tmp61 = ::flixel::_system::FlxQuadTree_obj::_checkObjectHullWidth;		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(644)
			tmp60 = -(tmp61);
		}
		HX_STACK_LINE(644)
		Float tmp61 = (tmp57 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(644)
		::flixel::_system::FlxQuadTree_obj::_checkObjectHullWidth = tmp61;
		HX_STACK_LINE(645)
		Float tmp62 = checkObject->y;		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(645)
		Float tmp63 = checkObject->last->y;		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(645)
		Float tmp64 = (tmp62 - tmp63);		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(645)
		::flixel::_system::FlxQuadTree_obj::_checkObjectHullHeight = tmp64;
		HX_STACK_LINE(646)
		Float tmp65 = checkObject->get_height();		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(646)
		Float tmp66 = ::flixel::_system::FlxQuadTree_obj::_checkObjectHullHeight;		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(646)
		bool tmp67 = (tmp66 > (int)0);		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(646)
		Float tmp68;		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(646)
		if ((tmp67)){
			HX_STACK_LINE(646)
			tmp68 = ::flixel::_system::FlxQuadTree_obj::_checkObjectHullHeight;
		}
		else{
			HX_STACK_LINE(646)
			Float tmp69 = ::flixel::_system::FlxQuadTree_obj::_checkObjectHullHeight;		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(646)
			tmp68 = -(tmp69);
		}
		HX_STACK_LINE(646)
		Float tmp69 = (tmp65 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(646)
		::flixel::_system::FlxQuadTree_obj::_checkObjectHullHeight = tmp69;
		HX_STACK_LINE(649)
		Float tmp70 = ::flixel::_system::FlxQuadTree_obj::_objectHullX;		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(649)
		Float tmp71 = ::flixel::_system::FlxQuadTree_obj::_objectHullWidth;		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(649)
		Float tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(649)
		Float tmp73 = ::flixel::_system::FlxQuadTree_obj::_checkObjectHullX;		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(649)
		bool tmp74 = (tmp72 > tmp73);		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(649)
		bool tmp75 = tmp74;		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(649)
		bool tmp76;		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(649)
		if ((tmp75)){
			HX_STACK_LINE(650)
			Float tmp77 = ::flixel::_system::FlxQuadTree_obj::_objectHullX;		HX_STACK_VAR(tmp77,"tmp77");
			HX_STACK_LINE(650)
			Float tmp78 = tmp77;		HX_STACK_VAR(tmp78,"tmp78");
			HX_STACK_LINE(650)
			Float tmp79 = tmp78;		HX_STACK_VAR(tmp79,"tmp79");
			HX_STACK_LINE(650)
			Float tmp80 = ::flixel::_system::FlxQuadTree_obj::_checkObjectHullX;		HX_STACK_VAR(tmp80,"tmp80");
			HX_STACK_LINE(650)
			Float tmp81 = tmp80;		HX_STACK_VAR(tmp81,"tmp81");
			HX_STACK_LINE(650)
			Float tmp82 = tmp81;		HX_STACK_VAR(tmp82,"tmp82");
			HX_STACK_LINE(650)
			Float tmp83 = ::flixel::_system::FlxQuadTree_obj::_checkObjectHullWidth;		HX_STACK_VAR(tmp83,"tmp83");
			HX_STACK_LINE(650)
			Float tmp84 = tmp83;		HX_STACK_VAR(tmp84,"tmp84");
			HX_STACK_LINE(650)
			Float tmp85 = tmp84;		HX_STACK_VAR(tmp85,"tmp85");
			HX_STACK_LINE(650)
			Float tmp86 = (tmp82 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
			HX_STACK_LINE(650)
			Float tmp87 = tmp86;		HX_STACK_VAR(tmp87,"tmp87");
			HX_STACK_LINE(650)
			Float tmp88 = tmp87;		HX_STACK_VAR(tmp88,"tmp88");
			HX_STACK_LINE(650)
			tmp76 = (tmp79 < tmp88);
		}
		else{
			HX_STACK_LINE(649)
			tmp76 = false;
		}
		HX_STACK_LINE(649)
		bool tmp77 = tmp76;		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(649)
		bool tmp78;		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(649)
		if ((tmp77)){
			HX_STACK_LINE(651)
			Float tmp79 = ::flixel::_system::FlxQuadTree_obj::_objectHullY;		HX_STACK_VAR(tmp79,"tmp79");
			HX_STACK_LINE(651)
			Float tmp80 = tmp79;		HX_STACK_VAR(tmp80,"tmp80");
			HX_STACK_LINE(651)
			Float tmp81 = tmp80;		HX_STACK_VAR(tmp81,"tmp81");
			HX_STACK_LINE(651)
			Float tmp82 = ::flixel::_system::FlxQuadTree_obj::_objectHullHeight;		HX_STACK_VAR(tmp82,"tmp82");
			HX_STACK_LINE(651)
			Float tmp83 = tmp82;		HX_STACK_VAR(tmp83,"tmp83");
			HX_STACK_LINE(651)
			Float tmp84 = tmp83;		HX_STACK_VAR(tmp84,"tmp84");
			HX_STACK_LINE(651)
			Float tmp85 = (tmp81 + tmp84);		HX_STACK_VAR(tmp85,"tmp85");
			HX_STACK_LINE(651)
			Float tmp86 = tmp85;		HX_STACK_VAR(tmp86,"tmp86");
			HX_STACK_LINE(651)
			Float tmp87 = tmp86;		HX_STACK_VAR(tmp87,"tmp87");
			HX_STACK_LINE(651)
			Float tmp88 = ::flixel::_system::FlxQuadTree_obj::_checkObjectHullY;		HX_STACK_VAR(tmp88,"tmp88");
			HX_STACK_LINE(651)
			Float tmp89 = tmp88;		HX_STACK_VAR(tmp89,"tmp89");
			HX_STACK_LINE(651)
			Float tmp90 = tmp89;		HX_STACK_VAR(tmp90,"tmp90");
			HX_STACK_LINE(651)
			tmp78 = (tmp87 > tmp90);
		}
		else{
			HX_STACK_LINE(649)
			tmp78 = false;
		}
		HX_STACK_LINE(649)
		bool tmp79;		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(649)
		if ((tmp78)){
			HX_STACK_LINE(652)
			Float tmp80 = ::flixel::_system::FlxQuadTree_obj::_objectHullY;		HX_STACK_VAR(tmp80,"tmp80");
			HX_STACK_LINE(652)
			Float tmp81 = tmp80;		HX_STACK_VAR(tmp81,"tmp81");
			HX_STACK_LINE(652)
			Float tmp82 = ::flixel::_system::FlxQuadTree_obj::_checkObjectHullY;		HX_STACK_VAR(tmp82,"tmp82");
			HX_STACK_LINE(652)
			Float tmp83 = tmp82;		HX_STACK_VAR(tmp83,"tmp83");
			HX_STACK_LINE(652)
			Float tmp84 = ::flixel::_system::FlxQuadTree_obj::_checkObjectHullHeight;		HX_STACK_VAR(tmp84,"tmp84");
			HX_STACK_LINE(652)
			Float tmp85 = tmp84;		HX_STACK_VAR(tmp85,"tmp85");
			HX_STACK_LINE(652)
			Float tmp86 = (tmp83 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
			HX_STACK_LINE(652)
			Float tmp87 = tmp86;		HX_STACK_VAR(tmp87,"tmp87");
			HX_STACK_LINE(652)
			tmp79 = (tmp81 < tmp87);
		}
		else{
			HX_STACK_LINE(649)
			tmp79 = false;
		}
		HX_STACK_LINE(649)
		if ((tmp79)){
			HX_STACK_LINE(655)
			Dynamic tmp80 = ::flixel::_system::FlxQuadTree_obj::_processingCallback_dyn();		HX_STACK_VAR(tmp80,"tmp80");
			HX_STACK_LINE(655)
			bool tmp81 = (tmp80 == null());		HX_STACK_VAR(tmp81,"tmp81");
			HX_STACK_LINE(655)
			bool tmp82 = !(tmp81);		HX_STACK_VAR(tmp82,"tmp82");
			HX_STACK_LINE(655)
			bool tmp83;		HX_STACK_VAR(tmp83,"tmp83");
			HX_STACK_LINE(655)
			if ((tmp82)){
				HX_STACK_LINE(655)
				::flixel::FlxObject tmp84 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp84,"tmp84");
				HX_STACK_LINE(655)
				::flixel::FlxObject tmp85 = tmp84;		HX_STACK_VAR(tmp85,"tmp85");
				HX_STACK_LINE(655)
				::flixel::FlxObject tmp86 = checkObject;		HX_STACK_VAR(tmp86,"tmp86");
				HX_STACK_LINE(655)
				::flixel::FlxObject tmp87 = tmp85;		HX_STACK_VAR(tmp87,"tmp87");
				HX_STACK_LINE(655)
				::flixel::FlxObject tmp88 = tmp86;		HX_STACK_VAR(tmp88,"tmp88");
				HX_STACK_LINE(655)
				tmp83 = ::flixel::_system::FlxQuadTree_obj::_processingCallback(tmp87,tmp88);
			}
			else{
				HX_STACK_LINE(655)
				tmp83 = true;
			}
			HX_STACK_LINE(655)
			if ((tmp83)){
				HX_STACK_LINE(657)
				overlapProcessed = true;
				HX_STACK_LINE(658)
				Dynamic tmp84 = ::flixel::_system::FlxQuadTree_obj::_notifyCallback_dyn();		HX_STACK_VAR(tmp84,"tmp84");
				HX_STACK_LINE(658)
				bool tmp85 = (tmp84 != null());		HX_STACK_VAR(tmp85,"tmp85");
				HX_STACK_LINE(658)
				if ((tmp85)){
					HX_STACK_LINE(660)
					::flixel::FlxObject tmp86 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp86,"tmp86");
					HX_STACK_LINE(660)
					::flixel::FlxObject tmp87 = checkObject;		HX_STACK_VAR(tmp87,"tmp87");
					HX_STACK_LINE(660)
					::flixel::_system::FlxQuadTree_obj::_notifyCallback(tmp86,tmp87);
				}
			}
		}
		HX_STACK_LINE(664)
		::flixel::_system::FlxLinkedList tmp80 = ::flixel::_system::FlxQuadTree_obj::_iterator;		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(664)
		bool tmp81 = (tmp80 != null());		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(664)
		if ((tmp81)){
			HX_STACK_LINE(666)
			::flixel::_system::FlxLinkedList tmp82 = ::flixel::_system::FlxQuadTree_obj::_iterator;		HX_STACK_VAR(tmp82,"tmp82");
			HX_STACK_LINE(666)
			::flixel::_system::FlxQuadTree_obj::_iterator = tmp82->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic );
		}
	}
	HX_STACK_LINE(670)
	bool tmp34 = overlapProcessed;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(670)
	return tmp34;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxQuadTree_obj,overlapNode,return )

int FlxQuadTree_obj::A_LIST;

int FlxQuadTree_obj::B_LIST;

int FlxQuadTree_obj::divisions;

int FlxQuadTree_obj::_min;

::flixel::FlxObject FlxQuadTree_obj::_object;

Float FlxQuadTree_obj::_objectLeftEdge;

Float FlxQuadTree_obj::_objectTopEdge;

Float FlxQuadTree_obj::_objectRightEdge;

Float FlxQuadTree_obj::_objectBottomEdge;

int FlxQuadTree_obj::_list;

bool FlxQuadTree_obj::_useBothLists;

Dynamic FlxQuadTree_obj::_processingCallback;

Dynamic FlxQuadTree_obj::_notifyCallback;

::flixel::_system::FlxLinkedList FlxQuadTree_obj::_iterator;

Float FlxQuadTree_obj::_objectHullX;

Float FlxQuadTree_obj::_objectHullY;

Float FlxQuadTree_obj::_objectHullWidth;

Float FlxQuadTree_obj::_objectHullHeight;

Float FlxQuadTree_obj::_checkObjectHullX;

Float FlxQuadTree_obj::_checkObjectHullY;

Float FlxQuadTree_obj::_checkObjectHullWidth;

Float FlxQuadTree_obj::_checkObjectHullHeight;

int FlxQuadTree_obj::_NUM_CACHED_QUAD_TREES;

::flixel::_system::FlxQuadTree FlxQuadTree_obj::_cachedTreesHead;

::flixel::_system::FlxQuadTree FlxQuadTree_obj::recycle( Float X,Float Y,Float Width,Float Height,::flixel::_system::FlxQuadTree Parent){
	HX_STACK_FRAME("flixel.system.FlxQuadTree","recycle",0x77ad32af,"flixel.system.FlxQuadTree.recycle","flixel/system/FlxQuadTree.hx",214,0xb5742814)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
	HX_STACK_ARG(Parent,"Parent")
	HX_STACK_LINE(215)
	::flixel::_system::FlxQuadTree tmp = ::flixel::_system::FlxQuadTree_obj::_cachedTreesHead;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(215)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(215)
	if ((tmp1)){
		HX_STACK_LINE(217)
		::flixel::_system::FlxQuadTree tmp2 = ::flixel::_system::FlxQuadTree_obj::_cachedTreesHead;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(217)
		::flixel::_system::FlxQuadTree cachedTree = tmp2;		HX_STACK_VAR(cachedTree,"cachedTree");
		HX_STACK_LINE(218)
		::flixel::_system::FlxQuadTree tmp3 = ::flixel::_system::FlxQuadTree_obj::_cachedTreesHead;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(218)
		::flixel::_system::FlxQuadTree_obj::_cachedTreesHead = tmp3->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic );
		HX_STACK_LINE(219)
		(::flixel::_system::FlxQuadTree_obj::_NUM_CACHED_QUAD_TREES)--;
		HX_STACK_LINE(221)
		Float tmp4 = X;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(221)
		Float tmp5 = Y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(221)
		Float tmp6 = Width;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(221)
		Float tmp7 = Height;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(221)
		::flixel::_system::FlxQuadTree tmp8 = Parent;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(221)
		cachedTree->__Field(HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"), hx::paccDynamic )(tmp4,tmp5,tmp6,tmp7,tmp8);
		HX_STACK_LINE(222)
		::flixel::_system::FlxQuadTree tmp9 = cachedTree;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(222)
		return tmp9;
	}
	else{
		HX_STACK_LINE(225)
		::flixel::_system::FlxQuadTree tmp2 = ::flixel::_system::FlxQuadTree_obj::__new(X,Y,Width,Height,Parent);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(225)
		return tmp2;
	}
	HX_STACK_LINE(215)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxQuadTree_obj,recycle,return )

Void FlxQuadTree_obj::clearCache( ){
{
		HX_STACK_FRAME("flixel.system.FlxQuadTree","clearCache",0xc0fc4059,"flixel.system.FlxQuadTree.clearCache","flixel/system/FlxQuadTree.hx",231,0xb5742814)
		HX_STACK_LINE(233)
		while((true)){
			HX_STACK_LINE(233)
			::flixel::_system::FlxQuadTree tmp = ::flixel::_system::FlxQuadTree_obj::_cachedTreesHead;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(233)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(233)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(233)
			if ((tmp2)){
				HX_STACK_LINE(233)
				break;
			}
			HX_STACK_LINE(235)
			::flixel::_system::FlxQuadTree tmp3 = ::flixel::_system::FlxQuadTree_obj::_cachedTreesHead;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(235)
			::flixel::_system::FlxQuadTree node = tmp3;		HX_STACK_VAR(node,"node");
			HX_STACK_LINE(236)
			::flixel::_system::FlxQuadTree tmp4 = ::flixel::_system::FlxQuadTree_obj::_cachedTreesHead;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(236)
			::flixel::_system::FlxQuadTree_obj::_cachedTreesHead = tmp4->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic );
			HX_STACK_LINE(237)
			node->__FieldRef(HX_HCSTRING("next","\xf3","\x84","\x02","\x49")) = null();
		}
		HX_STACK_LINE(239)
		::flixel::_system::FlxQuadTree_obj::_NUM_CACHED_QUAD_TREES = (int)0;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxQuadTree_obj,clearCache,(void))


FlxQuadTree_obj::FlxQuadTree_obj()
{
}

void FlxQuadTree_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxQuadTree);
	HX_MARK_MEMBER_NAME(exists,"exists");
	HX_MARK_MEMBER_NAME(_canSubdivide,"_canSubdivide");
	HX_MARK_MEMBER_NAME(_headA,"_headA");
	HX_MARK_MEMBER_NAME(_tailA,"_tailA");
	HX_MARK_MEMBER_NAME(_headB,"_headB");
	HX_MARK_MEMBER_NAME(_tailB,"_tailB");
	HX_MARK_MEMBER_NAME(_northWestTree,"_northWestTree");
	HX_MARK_MEMBER_NAME(_northEastTree,"_northEastTree");
	HX_MARK_MEMBER_NAME(_southEastTree,"_southEastTree");
	HX_MARK_MEMBER_NAME(_southWestTree,"_southWestTree");
	HX_MARK_MEMBER_NAME(_leftEdge,"_leftEdge");
	HX_MARK_MEMBER_NAME(_rightEdge,"_rightEdge");
	HX_MARK_MEMBER_NAME(_topEdge,"_topEdge");
	HX_MARK_MEMBER_NAME(_bottomEdge,"_bottomEdge");
	HX_MARK_MEMBER_NAME(_halfWidth,"_halfWidth");
	HX_MARK_MEMBER_NAME(_halfHeight,"_halfHeight");
	HX_MARK_MEMBER_NAME(_midpointX,"_midpointX");
	HX_MARK_MEMBER_NAME(_midpointY,"_midpointY");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_END_CLASS();
}

void FlxQuadTree_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(exists,"exists");
	HX_VISIT_MEMBER_NAME(_canSubdivide,"_canSubdivide");
	HX_VISIT_MEMBER_NAME(_headA,"_headA");
	HX_VISIT_MEMBER_NAME(_tailA,"_tailA");
	HX_VISIT_MEMBER_NAME(_headB,"_headB");
	HX_VISIT_MEMBER_NAME(_tailB,"_tailB");
	HX_VISIT_MEMBER_NAME(_northWestTree,"_northWestTree");
	HX_VISIT_MEMBER_NAME(_northEastTree,"_northEastTree");
	HX_VISIT_MEMBER_NAME(_southEastTree,"_southEastTree");
	HX_VISIT_MEMBER_NAME(_southWestTree,"_southWestTree");
	HX_VISIT_MEMBER_NAME(_leftEdge,"_leftEdge");
	HX_VISIT_MEMBER_NAME(_rightEdge,"_rightEdge");
	HX_VISIT_MEMBER_NAME(_topEdge,"_topEdge");
	HX_VISIT_MEMBER_NAME(_bottomEdge,"_bottomEdge");
	HX_VISIT_MEMBER_NAME(_halfWidth,"_halfWidth");
	HX_VISIT_MEMBER_NAME(_halfHeight,"_halfHeight");
	HX_VISIT_MEMBER_NAME(_midpointX,"_midpointX");
	HX_VISIT_MEMBER_NAME(_midpointY,"_midpointY");
	HX_VISIT_MEMBER_NAME(next,"next");
}

Dynamic FlxQuadTree_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { return exists; }
		if (HX_FIELD_EQ(inName,"_headA") ) { return _headA; }
		if (HX_FIELD_EQ(inName,"_tailA") ) { return _tailA; }
		if (HX_FIELD_EQ(inName,"_headB") ) { return _headB; }
		if (HX_FIELD_EQ(inName,"_tailB") ) { return _tailB; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"execute") ) { return execute_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_topEdge") ) { return _topEdge; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_leftEdge") ) { return _leftEdge; }
		if (HX_FIELD_EQ(inName,"addObject") ) { return addObject_dyn(); }
		if (HX_FIELD_EQ(inName,"addToList") ) { return addToList_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_rightEdge") ) { return _rightEdge; }
		if (HX_FIELD_EQ(inName,"_halfWidth") ) { return _halfWidth; }
		if (HX_FIELD_EQ(inName,"_midpointX") ) { return _midpointX; }
		if (HX_FIELD_EQ(inName,"_midpointY") ) { return _midpointY; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_bottomEdge") ) { return _bottomEdge; }
		if (HX_FIELD_EQ(inName,"_halfHeight") ) { return _halfHeight; }
		if (HX_FIELD_EQ(inName,"overlapNode") ) { return overlapNode_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_canSubdivide") ) { return _canSubdivide; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_northWestTree") ) { return _northWestTree; }
		if (HX_FIELD_EQ(inName,"_northEastTree") ) { return _northEastTree; }
		if (HX_FIELD_EQ(inName,"_southEastTree") ) { return _southEastTree; }
		if (HX_FIELD_EQ(inName,"_southWestTree") ) { return _southWestTree; }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxQuadTree_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_min") ) { outValue = _min; return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_list") ) { outValue = _list; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_object") ) { outValue = _object; return true;  }
		if (HX_FIELD_EQ(inName,"recycle") ) { outValue = recycle_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"divisions") ) { outValue = divisions; return true;  }
		if (HX_FIELD_EQ(inName,"_iterator") ) { outValue = _iterator; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"clearCache") ) { outValue = clearCache_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_objectHullX") ) { outValue = _objectHullX; return true;  }
		if (HX_FIELD_EQ(inName,"_objectHullY") ) { outValue = _objectHullY; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_useBothLists") ) { outValue = _useBothLists; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_objectTopEdge") ) { outValue = _objectTopEdge; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_objectLeftEdge") ) { outValue = _objectLeftEdge; return true;  }
		if (HX_FIELD_EQ(inName,"_notifyCallback") ) { outValue = _notifyCallback; return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_objectRightEdge") ) { outValue = _objectRightEdge; return true;  }
		if (HX_FIELD_EQ(inName,"_objectHullWidth") ) { outValue = _objectHullWidth; return true;  }
		if (HX_FIELD_EQ(inName,"_cachedTreesHead") ) { outValue = _cachedTreesHead; return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_objectBottomEdge") ) { outValue = _objectBottomEdge; return true;  }
		if (HX_FIELD_EQ(inName,"_objectHullHeight") ) { outValue = _objectHullHeight; return true;  }
		if (HX_FIELD_EQ(inName,"_checkObjectHullX") ) { outValue = _checkObjectHullX; return true;  }
		if (HX_FIELD_EQ(inName,"_checkObjectHullY") ) { outValue = _checkObjectHullY; return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_processingCallback") ) { outValue = _processingCallback; return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_checkObjectHullWidth") ) { outValue = _checkObjectHullWidth; return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_checkObjectHullHeight") ) { outValue = _checkObjectHullHeight; return true;  }
		if (HX_FIELD_EQ(inName,"_NUM_CACHED_QUAD_TREES") ) { outValue = _NUM_CACHED_QUAD_TREES; return true;  }
	}
	return false;
}

Dynamic FlxQuadTree_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::flixel::_system::FlxQuadTree >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { exists=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_headA") ) { _headA=inValue.Cast< ::flixel::_system::FlxLinkedList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tailA") ) { _tailA=inValue.Cast< ::flixel::_system::FlxLinkedList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_headB") ) { _headB=inValue.Cast< ::flixel::_system::FlxLinkedList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tailB") ) { _tailB=inValue.Cast< ::flixel::_system::FlxLinkedList >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_topEdge") ) { _topEdge=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_leftEdge") ) { _leftEdge=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_rightEdge") ) { _rightEdge=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_halfWidth") ) { _halfWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_midpointX") ) { _midpointX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_midpointY") ) { _midpointY=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_bottomEdge") ) { _bottomEdge=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_halfHeight") ) { _halfHeight=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_canSubdivide") ) { _canSubdivide=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_northWestTree") ) { _northWestTree=inValue.Cast< ::flixel::_system::FlxQuadTree >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_northEastTree") ) { _northEastTree=inValue.Cast< ::flixel::_system::FlxQuadTree >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_southEastTree") ) { _southEastTree=inValue.Cast< ::flixel::_system::FlxQuadTree >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_southWestTree") ) { _southWestTree=inValue.Cast< ::flixel::_system::FlxQuadTree >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxQuadTree_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_min") ) { _min=ioValue.Cast< int >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_list") ) { _list=ioValue.Cast< int >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_object") ) { _object=ioValue.Cast< ::flixel::FlxObject >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"divisions") ) { divisions=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"_iterator") ) { _iterator=ioValue.Cast< ::flixel::_system::FlxLinkedList >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_objectHullX") ) { _objectHullX=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"_objectHullY") ) { _objectHullY=ioValue.Cast< Float >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_useBothLists") ) { _useBothLists=ioValue.Cast< bool >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_objectTopEdge") ) { _objectTopEdge=ioValue.Cast< Float >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_objectLeftEdge") ) { _objectLeftEdge=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"_notifyCallback") ) { _notifyCallback=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_objectRightEdge") ) { _objectRightEdge=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"_objectHullWidth") ) { _objectHullWidth=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"_cachedTreesHead") ) { _cachedTreesHead=ioValue.Cast< ::flixel::_system::FlxQuadTree >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_objectBottomEdge") ) { _objectBottomEdge=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"_objectHullHeight") ) { _objectHullHeight=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"_checkObjectHullX") ) { _checkObjectHullX=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"_checkObjectHullY") ) { _checkObjectHullY=ioValue.Cast< Float >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_processingCallback") ) { _processingCallback=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_checkObjectHullWidth") ) { _checkObjectHullWidth=ioValue.Cast< Float >(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_checkObjectHullHeight") ) { _checkObjectHullHeight=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"_NUM_CACHED_QUAD_TREES") ) { _NUM_CACHED_QUAD_TREES=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void FlxQuadTree_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"));
	outFields->push(HX_HCSTRING("_canSubdivide","\xa8","\xf5","\x58","\xf6"));
	outFields->push(HX_HCSTRING("_headA","\x62","\x1a","\xa0","\x20"));
	outFields->push(HX_HCSTRING("_tailA","\xf2","\x4e","\xd0","\x06"));
	outFields->push(HX_HCSTRING("_headB","\x63","\x1a","\xa0","\x20"));
	outFields->push(HX_HCSTRING("_tailB","\xf3","\x4e","\xd0","\x06"));
	outFields->push(HX_HCSTRING("_northWestTree","\x53","\x53","\x64","\xc5"));
	outFields->push(HX_HCSTRING("_northEastTree","\x21","\x72","\x82","\x19"));
	outFields->push(HX_HCSTRING("_southEastTree","\x69","\x27","\xe0","\xf8"));
	outFields->push(HX_HCSTRING("_southWestTree","\x9b","\x08","\xc2","\xa4"));
	outFields->push(HX_HCSTRING("_leftEdge","\x43","\x03","\xa0","\x91"));
	outFields->push(HX_HCSTRING("_rightEdge","\xfa","\x99","\x77","\x09"));
	outFields->push(HX_HCSTRING("_topEdge","\xf3","\x22","\xd8","\x1d"));
	outFields->push(HX_HCSTRING("_bottomEdge","\xe7","\xf9","\x7f","\xfa"));
	outFields->push(HX_HCSTRING("_halfWidth","\x14","\x6f","\xd7","\x6a"));
	outFields->push(HX_HCSTRING("_halfHeight","\x19","\x3b","\xf9","\xc7"));
	outFields->push(HX_HCSTRING("_midpointX","\x51","\x75","\xad","\xd7"));
	outFields->push(HX_HCSTRING("_midpointY","\x52","\x75","\xad","\xd7"));
	outFields->push(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(FlxQuadTree_obj,exists),HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf")},
	{hx::fsBool,(int)offsetof(FlxQuadTree_obj,_canSubdivide),HX_HCSTRING("_canSubdivide","\xa8","\xf5","\x58","\xf6")},
	{hx::fsObject /*::flixel::_system::FlxLinkedList*/ ,(int)offsetof(FlxQuadTree_obj,_headA),HX_HCSTRING("_headA","\x62","\x1a","\xa0","\x20")},
	{hx::fsObject /*::flixel::_system::FlxLinkedList*/ ,(int)offsetof(FlxQuadTree_obj,_tailA),HX_HCSTRING("_tailA","\xf2","\x4e","\xd0","\x06")},
	{hx::fsObject /*::flixel::_system::FlxLinkedList*/ ,(int)offsetof(FlxQuadTree_obj,_headB),HX_HCSTRING("_headB","\x63","\x1a","\xa0","\x20")},
	{hx::fsObject /*::flixel::_system::FlxLinkedList*/ ,(int)offsetof(FlxQuadTree_obj,_tailB),HX_HCSTRING("_tailB","\xf3","\x4e","\xd0","\x06")},
	{hx::fsObject /*::flixel::_system::FlxQuadTree*/ ,(int)offsetof(FlxQuadTree_obj,_northWestTree),HX_HCSTRING("_northWestTree","\x53","\x53","\x64","\xc5")},
	{hx::fsObject /*::flixel::_system::FlxQuadTree*/ ,(int)offsetof(FlxQuadTree_obj,_northEastTree),HX_HCSTRING("_northEastTree","\x21","\x72","\x82","\x19")},
	{hx::fsObject /*::flixel::_system::FlxQuadTree*/ ,(int)offsetof(FlxQuadTree_obj,_southEastTree),HX_HCSTRING("_southEastTree","\x69","\x27","\xe0","\xf8")},
	{hx::fsObject /*::flixel::_system::FlxQuadTree*/ ,(int)offsetof(FlxQuadTree_obj,_southWestTree),HX_HCSTRING("_southWestTree","\x9b","\x08","\xc2","\xa4")},
	{hx::fsFloat,(int)offsetof(FlxQuadTree_obj,_leftEdge),HX_HCSTRING("_leftEdge","\x43","\x03","\xa0","\x91")},
	{hx::fsFloat,(int)offsetof(FlxQuadTree_obj,_rightEdge),HX_HCSTRING("_rightEdge","\xfa","\x99","\x77","\x09")},
	{hx::fsFloat,(int)offsetof(FlxQuadTree_obj,_topEdge),HX_HCSTRING("_topEdge","\xf3","\x22","\xd8","\x1d")},
	{hx::fsFloat,(int)offsetof(FlxQuadTree_obj,_bottomEdge),HX_HCSTRING("_bottomEdge","\xe7","\xf9","\x7f","\xfa")},
	{hx::fsFloat,(int)offsetof(FlxQuadTree_obj,_halfWidth),HX_HCSTRING("_halfWidth","\x14","\x6f","\xd7","\x6a")},
	{hx::fsFloat,(int)offsetof(FlxQuadTree_obj,_halfHeight),HX_HCSTRING("_halfHeight","\x19","\x3b","\xf9","\xc7")},
	{hx::fsFloat,(int)offsetof(FlxQuadTree_obj,_midpointX),HX_HCSTRING("_midpointX","\x51","\x75","\xad","\xd7")},
	{hx::fsFloat,(int)offsetof(FlxQuadTree_obj,_midpointY),HX_HCSTRING("_midpointY","\x52","\x75","\xad","\xd7")},
	{hx::fsObject /*::flixel::_system::FlxQuadTree*/ ,(int)offsetof(FlxQuadTree_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &FlxQuadTree_obj::A_LIST,HX_HCSTRING("A_LIST","\x5c","\x74","\xb7","\xe2")},
	{hx::fsInt,(void *) &FlxQuadTree_obj::B_LIST,HX_HCSTRING("B_LIST","\xbb","\xd0","\x12","\x49")},
	{hx::fsInt,(void *) &FlxQuadTree_obj::divisions,HX_HCSTRING("divisions","\xa6","\x2a","\x2c","\x7f")},
	{hx::fsInt,(void *) &FlxQuadTree_obj::_min,HX_HCSTRING("_min","\x93","\x56","\x1e","\x3f")},
	{hx::fsObject /*::flixel::FlxObject*/ ,(void *) &FlxQuadTree_obj::_object,HX_HCSTRING("_object","\x5e","\x90","\xb6","\x83")},
	{hx::fsFloat,(void *) &FlxQuadTree_obj::_objectLeftEdge,HX_HCSTRING("_objectLeftEdge","\x62","\xe6","\x26","\x8d")},
	{hx::fsFloat,(void *) &FlxQuadTree_obj::_objectTopEdge,HX_HCSTRING("_objectTopEdge","\xb4","\x48","\x32","\x11")},
	{hx::fsFloat,(void *) &FlxQuadTree_obj::_objectRightEdge,HX_HCSTRING("_objectRightEdge","\xfb","\x71","\xf7","\x23")},
	{hx::fsFloat,(void *) &FlxQuadTree_obj::_objectBottomEdge,HX_HCSTRING("_objectBottomEdge","\xc6","\x22","\xdd","\x0f")},
	{hx::fsInt,(void *) &FlxQuadTree_obj::_list,HX_HCSTRING("_list","\x3d","\x38","\xc4","\xfa")},
	{hx::fsBool,(void *) &FlxQuadTree_obj::_useBothLists,HX_HCSTRING("_useBothLists","\xac","\x2f","\x5e","\x54")},
	{hx::fsObject /*Dynamic*/ ,(void *) &FlxQuadTree_obj::_processingCallback,HX_HCSTRING("_processingCallback","\xd7","\xbe","\x42","\x97")},
	{hx::fsObject /*Dynamic*/ ,(void *) &FlxQuadTree_obj::_notifyCallback,HX_HCSTRING("_notifyCallback","\x4d","\xea","\xc6","\x7e")},
	{hx::fsObject /*::flixel::_system::FlxLinkedList*/ ,(void *) &FlxQuadTree_obj::_iterator,HX_HCSTRING("_iterator","\x4d","\x41","\x30","\xdb")},
	{hx::fsFloat,(void *) &FlxQuadTree_obj::_objectHullX,HX_HCSTRING("_objectHullX","\xad","\x67","\x8d","\x04")},
	{hx::fsFloat,(void *) &FlxQuadTree_obj::_objectHullY,HX_HCSTRING("_objectHullY","\xae","\x67","\x8d","\x04")},
	{hx::fsFloat,(void *) &FlxQuadTree_obj::_objectHullWidth,HX_HCSTRING("_objectHullWidth","\xbb","\x5b","\x6c","\x63")},
	{hx::fsFloat,(void *) &FlxQuadTree_obj::_objectHullHeight,HX_HCSTRING("_objectHullHeight","\x92","\x60","\xb3","\x51")},
	{hx::fsFloat,(void *) &FlxQuadTree_obj::_checkObjectHullX,HX_HCSTRING("_checkObjectHullX","\x23","\x4c","\xdf","\xeb")},
	{hx::fsFloat,(void *) &FlxQuadTree_obj::_checkObjectHullY,HX_HCSTRING("_checkObjectHullY","\x24","\x4c","\xdf","\xeb")},
	{hx::fsFloat,(void *) &FlxQuadTree_obj::_checkObjectHullWidth,HX_HCSTRING("_checkObjectHullWidth","\x31","\xb3","\xc8","\x14")},
	{hx::fsFloat,(void *) &FlxQuadTree_obj::_checkObjectHullHeight,HX_HCSTRING("_checkObjectHullHeight","\x5c","\x90","\x23","\xd1")},
	{hx::fsInt,(void *) &FlxQuadTree_obj::_NUM_CACHED_QUAD_TREES,HX_HCSTRING("_NUM_CACHED_QUAD_TREES","\xa2","\x0a","\xd2","\x83")},
	{hx::fsObject /*::flixel::_system::FlxQuadTree*/ ,(void *) &FlxQuadTree_obj::_cachedTreesHead,HX_HCSTRING("_cachedTreesHead","\x54","\x73","\x90","\xd0")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"),
	HX_HCSTRING("_canSubdivide","\xa8","\xf5","\x58","\xf6"),
	HX_HCSTRING("_headA","\x62","\x1a","\xa0","\x20"),
	HX_HCSTRING("_tailA","\xf2","\x4e","\xd0","\x06"),
	HX_HCSTRING("_headB","\x63","\x1a","\xa0","\x20"),
	HX_HCSTRING("_tailB","\xf3","\x4e","\xd0","\x06"),
	HX_HCSTRING("_northWestTree","\x53","\x53","\x64","\xc5"),
	HX_HCSTRING("_northEastTree","\x21","\x72","\x82","\x19"),
	HX_HCSTRING("_southEastTree","\x69","\x27","\xe0","\xf8"),
	HX_HCSTRING("_southWestTree","\x9b","\x08","\xc2","\xa4"),
	HX_HCSTRING("_leftEdge","\x43","\x03","\xa0","\x91"),
	HX_HCSTRING("_rightEdge","\xfa","\x99","\x77","\x09"),
	HX_HCSTRING("_topEdge","\xf3","\x22","\xd8","\x1d"),
	HX_HCSTRING("_bottomEdge","\xe7","\xf9","\x7f","\xfa"),
	HX_HCSTRING("_halfWidth","\x14","\x6f","\xd7","\x6a"),
	HX_HCSTRING("_halfHeight","\x19","\x3b","\xf9","\xc7"),
	HX_HCSTRING("_midpointX","\x51","\x75","\xad","\xd7"),
	HX_HCSTRING("_midpointY","\x52","\x75","\xad","\xd7"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("addObject","\xc0","\xb3","\x63","\xcd"),
	HX_HCSTRING("addToList","\x7a","\xbc","\x90","\x35"),
	HX_HCSTRING("execute","\x35","\x0a","\x0d","\xcc"),
	HX_HCSTRING("overlapNode","\x29","\x49","\xe9","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::A_LIST,"A_LIST");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::B_LIST,"B_LIST");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::divisions,"divisions");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_min,"_min");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_object,"_object");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_objectLeftEdge,"_objectLeftEdge");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_objectTopEdge,"_objectTopEdge");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_objectRightEdge,"_objectRightEdge");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_objectBottomEdge,"_objectBottomEdge");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_list,"_list");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_useBothLists,"_useBothLists");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_processingCallback,"_processingCallback");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_notifyCallback,"_notifyCallback");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_iterator,"_iterator");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_objectHullX,"_objectHullX");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_objectHullY,"_objectHullY");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_objectHullWidth,"_objectHullWidth");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_objectHullHeight,"_objectHullHeight");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_checkObjectHullX,"_checkObjectHullX");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_checkObjectHullY,"_checkObjectHullY");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_checkObjectHullWidth,"_checkObjectHullWidth");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_checkObjectHullHeight,"_checkObjectHullHeight");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_NUM_CACHED_QUAD_TREES,"_NUM_CACHED_QUAD_TREES");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_cachedTreesHead,"_cachedTreesHead");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::A_LIST,"A_LIST");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::B_LIST,"B_LIST");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::divisions,"divisions");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_min,"_min");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_object,"_object");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_objectLeftEdge,"_objectLeftEdge");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_objectTopEdge,"_objectTopEdge");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_objectRightEdge,"_objectRightEdge");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_objectBottomEdge,"_objectBottomEdge");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_list,"_list");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_useBothLists,"_useBothLists");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_processingCallback,"_processingCallback");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_notifyCallback,"_notifyCallback");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_iterator,"_iterator");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_objectHullX,"_objectHullX");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_objectHullY,"_objectHullY");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_objectHullWidth,"_objectHullWidth");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_objectHullHeight,"_objectHullHeight");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_checkObjectHullX,"_checkObjectHullX");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_checkObjectHullY,"_checkObjectHullY");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_checkObjectHullWidth,"_checkObjectHullWidth");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_checkObjectHullHeight,"_checkObjectHullHeight");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_NUM_CACHED_QUAD_TREES,"_NUM_CACHED_QUAD_TREES");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_cachedTreesHead,"_cachedTreesHead");
};

#endif

hx::Class FlxQuadTree_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("A_LIST","\x5c","\x74","\xb7","\xe2"),
	HX_HCSTRING("B_LIST","\xbb","\xd0","\x12","\x49"),
	HX_HCSTRING("divisions","\xa6","\x2a","\x2c","\x7f"),
	HX_HCSTRING("_min","\x93","\x56","\x1e","\x3f"),
	HX_HCSTRING("_object","\x5e","\x90","\xb6","\x83"),
	HX_HCSTRING("_objectLeftEdge","\x62","\xe6","\x26","\x8d"),
	HX_HCSTRING("_objectTopEdge","\xb4","\x48","\x32","\x11"),
	HX_HCSTRING("_objectRightEdge","\xfb","\x71","\xf7","\x23"),
	HX_HCSTRING("_objectBottomEdge","\xc6","\x22","\xdd","\x0f"),
	HX_HCSTRING("_list","\x3d","\x38","\xc4","\xfa"),
	HX_HCSTRING("_useBothLists","\xac","\x2f","\x5e","\x54"),
	HX_HCSTRING("_processingCallback","\xd7","\xbe","\x42","\x97"),
	HX_HCSTRING("_notifyCallback","\x4d","\xea","\xc6","\x7e"),
	HX_HCSTRING("_iterator","\x4d","\x41","\x30","\xdb"),
	HX_HCSTRING("_objectHullX","\xad","\x67","\x8d","\x04"),
	HX_HCSTRING("_objectHullY","\xae","\x67","\x8d","\x04"),
	HX_HCSTRING("_objectHullWidth","\xbb","\x5b","\x6c","\x63"),
	HX_HCSTRING("_objectHullHeight","\x92","\x60","\xb3","\x51"),
	HX_HCSTRING("_checkObjectHullX","\x23","\x4c","\xdf","\xeb"),
	HX_HCSTRING("_checkObjectHullY","\x24","\x4c","\xdf","\xeb"),
	HX_HCSTRING("_checkObjectHullWidth","\x31","\xb3","\xc8","\x14"),
	HX_HCSTRING("_checkObjectHullHeight","\x5c","\x90","\x23","\xd1"),
	HX_HCSTRING("_NUM_CACHED_QUAD_TREES","\xa2","\x0a","\xd2","\x83"),
	HX_HCSTRING("_cachedTreesHead","\x54","\x73","\x90","\xd0"),
	HX_HCSTRING("recycle","\x13","\x10","\x8c","\x37"),
	HX_HCSTRING("clearCache","\x75","\xd9","\x1e","\x16"),
	::String(null()) };

void FlxQuadTree_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.FlxQuadTree","\x0a","\x87","\x43","\xf2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxQuadTree_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxQuadTree_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxQuadTree_obj >;
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

void FlxQuadTree_obj::__boot()
{
	A_LIST= (int)0;
	B_LIST= (int)1;
	_NUM_CACHED_QUAD_TREES= (int)0;
}

} // end namespace flixel
} // end namespace system
