#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPath
#include <flixel/util/FlxPath.h>
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
namespace util{

Void FlxPath_obj::__construct()
{
HX_STACK_FRAME("flixel.util.FlxPath","new",0x6e30af6f,"flixel.util.FlxPath.new","flixel/util/FlxPath.hx",18,0x22aae741)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(117)
	this->_firstUpdate = false;
	HX_STACK_LINE(115)
	this->_wasObjectImmovable = null();
	HX_STACK_LINE(113)
	this->_autoRotate = false;
	HX_STACK_LINE(109)
	this->_inc = (int)1;
	HX_STACK_LINE(100)
	this->finished = false;
	HX_STACK_LINE(98)
	this->nodeIndex = (int)0;
	HX_STACK_LINE(79)
	this->active = false;
	HX_STACK_LINE(74)
	this->autoCenter = true;
	HX_STACK_LINE(70)
	this->angle = ((Float)0);
	HX_STACK_LINE(66)
	this->speed = ((Float)0);
}
;
	return null();
}

//FlxPath_obj::~FlxPath_obj() { }

Dynamic FlxPath_obj::__CreateEmpty() { return  new FlxPath_obj; }
hx::ObjectPtr< FlxPath_obj > FlxPath_obj::__new()
{  hx::ObjectPtr< FlxPath_obj > _result_ = new FlxPath_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxPath_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxPath_obj > _result_ = new FlxPath_obj();
	_result_->__construct();
	return _result_;}

hx::Object *FlxPath_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

FlxPath_obj::operator ::flixel::util::IFlxDestroyable_obj *()
	{ return new ::flixel::util::IFlxDestroyable_delegate_< FlxPath_obj >(this); }
::flixel::util::FlxPath FlxPath_obj::reset( ){
	HX_STACK_FRAME("flixel.util.FlxPath","reset",0x2ce64a9e,"flixel.util.FlxPath.reset","flixel/util/FlxPath.hx",131,0x22aae741)
	HX_STACK_THIS(this)
	HX_STACK_LINE(136)
	this->autoCenter = true;
	HX_STACK_LINE(137)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPath_obj,reset,return )

::flixel::util::FlxPath FlxPath_obj::start( Array< ::Dynamic > Nodes,hx::Null< Float >  __o_Speed,hx::Null< int >  __o_Mode,hx::Null< bool >  __o_AutoRotate){
Float Speed = __o_Speed.Default(100);
int Mode = __o_Mode.Default(0);
bool AutoRotate = __o_AutoRotate.Default(false);
	HX_STACK_FRAME("flixel.util.FlxPath","start",0xca297531,"flixel.util.FlxPath.start","flixel/util/FlxPath.hx",141,0x22aae741)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Nodes,"Nodes")
	HX_STACK_ARG(Speed,"Speed")
	HX_STACK_ARG(Mode,"Mode")
	HX_STACK_ARG(AutoRotate,"AutoRotate")
{
		HX_STACK_LINE(142)
		this->nodes = Nodes;
		HX_STACK_LINE(143)
		Float tmp = Speed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(143)
		Float tmp1 = ::Math_obj::abs(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(143)
		this->speed = tmp1;
		HX_STACK_LINE(144)
		this->_mode = Mode;
		HX_STACK_LINE(145)
		this->_autoRotate = AutoRotate;
		HX_STACK_LINE(146)
		this->restart();
		HX_STACK_LINE(147)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxPath_obj,start,return )

::flixel::util::FlxPath FlxPath_obj::restart( ){
	HX_STACK_FRAME("flixel.util.FlxPath","restart",0xf4e0da5e,"flixel.util.FlxPath.restart","flixel/util/FlxPath.hx",151,0x22aae741)
	HX_STACK_THIS(this)
	HX_STACK_LINE(152)
	this->finished = false;
	HX_STACK_LINE(153)
	this->active = true;
	HX_STACK_LINE(154)
	this->_firstUpdate = true;
	HX_STACK_LINE(156)
	bool tmp = (this->nodes == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(156)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(156)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(156)
	if ((tmp1)){
		HX_STACK_LINE(156)
		int tmp3 = this->nodes->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(156)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(156)
		tmp2 = (tmp4 <= (int)0);
	}
	else{
		HX_STACK_LINE(156)
		tmp2 = true;
	}
	HX_STACK_LINE(156)
	if ((tmp2)){
		HX_STACK_LINE(158)
		this->active = false;
	}
	HX_STACK_LINE(162)
	int tmp3 = this->_mode;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(162)
	bool tmp4 = (tmp3 == (int)1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(162)
	bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(162)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(162)
	if ((tmp5)){
		HX_STACK_LINE(162)
		int tmp7 = this->_mode;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(162)
		int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(162)
		tmp6 = (tmp8 == (int)256);
	}
	else{
		HX_STACK_LINE(162)
		tmp6 = true;
	}
	HX_STACK_LINE(162)
	if ((tmp6)){
		HX_STACK_LINE(164)
		int tmp7 = this->nodes->length;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(164)
		int tmp8 = (tmp7 - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(164)
		this->nodeIndex = tmp8;
		HX_STACK_LINE(165)
		this->_inc = (int)-1;
	}
	else{
		HX_STACK_LINE(169)
		this->nodeIndex = (int)0;
		HX_STACK_LINE(170)
		this->_inc = (int)1;
	}
	HX_STACK_LINE(173)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPath_obj,restart,return )

Void FlxPath_obj::setNode( int NodeIndex){
{
		HX_STACK_FRAME("flixel.util.FlxPath","setNode",0x98c95d53,"flixel.util.FlxPath.setNode","flixel/util/FlxPath.hx",182,0x22aae741)
		HX_STACK_THIS(this)
		HX_STACK_ARG(NodeIndex,"NodeIndex")
		HX_STACK_LINE(183)
		bool tmp = (NodeIndex < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(183)
		if ((tmp)){
			HX_STACK_LINE(184)
			NodeIndex = (int)0;
		}
		else{
			HX_STACK_LINE(185)
			int tmp1 = NodeIndex;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(185)
			int tmp2 = this->nodes->length;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(185)
			int tmp3 = (tmp2 - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(185)
			bool tmp4 = (tmp1 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(185)
			if ((tmp4)){
				HX_STACK_LINE(186)
				int tmp5 = this->nodes->length;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(186)
				int tmp6 = (tmp5 - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(186)
				NodeIndex = tmp6;
			}
		}
		HX_STACK_LINE(188)
		this->nodeIndex = NodeIndex;
		HX_STACK_LINE(189)
		this->advancePath(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPath_obj,setNode,(void))

Void FlxPath_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.util.FlxPath","update",0x9b283a5a,"flixel.util.FlxPath.update","flixel/util/FlxPath.hx",198,0x22aae741)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(199)
		::flixel::FlxObject tmp = this->object;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(199)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(199)
		if ((tmp1)){
			HX_STACK_LINE(200)
			return null();
		}
		HX_STACK_LINE(202)
		bool tmp2 = this->_firstUpdate;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(202)
		if ((tmp2)){
			HX_STACK_LINE(204)
			::flixel::FlxObject tmp3 = this->object;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(204)
			this->_wasObjectImmovable = tmp3->immovable;
			HX_STACK_LINE(205)
			::flixel::FlxObject tmp4 = this->object;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(205)
			tmp4->set_immovable(true);
			HX_STACK_LINE(206)
			this->_firstUpdate = false;
		}
		HX_STACK_LINE(210)
		::flixel::math::FlxPoint tmp3 = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(210)
		::flixel::FlxObject tmp4 = this->object;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(210)
		Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(210)
		tmp3->set_x(tmp5);
		HX_STACK_LINE(211)
		::flixel::math::FlxPoint tmp6 = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(211)
		::flixel::FlxObject tmp7 = this->object;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(211)
		Float tmp8 = tmp7->y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(211)
		tmp6->set_y(tmp8);
		HX_STACK_LINE(212)
		bool tmp9 = this->autoCenter;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(212)
		if ((tmp9)){
			HX_STACK_LINE(214)
			::flixel::math::FlxPoint tmp10 = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(214)
			::flixel::math::FlxPoint _this = tmp10;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(214)
			::flixel::FlxObject tmp11 = this->object;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(214)
			Float tmp12 = tmp11->get_width();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(214)
			Float tmp13 = (tmp12 * ((Float)0.5));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(214)
			Float X = tmp13;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(214)
			::flixel::FlxObject tmp14 = this->object;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(214)
			Float tmp15 = tmp14->get_height();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(214)
			Float tmp16 = (tmp15 * ((Float)0.5));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(214)
			Float Y = tmp16;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(214)
			{
				HX_STACK_LINE(214)
				::flixel::math::FlxPoint _g = _this;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(214)
				Float tmp17 = (_g->x + X);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(214)
				_g->set_x(tmp17);
			}
			HX_STACK_LINE(214)
			{
				HX_STACK_LINE(214)
				::flixel::math::FlxPoint _g = _this;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(214)
				Float tmp17 = (_g->y + Y);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(214)
				_g->set_y(tmp17);
			}
			HX_STACK_LINE(214)
			_this;
		}
		HX_STACK_LINE(216)
		int tmp10 = this->nodeIndex;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(216)
		::flixel::math::FlxPoint tmp11 = this->nodes->__get(tmp10).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(216)
		::flixel::math::FlxPoint node = tmp11;		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(217)
		Float tmp12 = node->x;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(217)
		::flixel::math::FlxPoint tmp13 = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(217)
		Float tmp14 = tmp13->x;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(217)
		Float tmp15 = (tmp12 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(217)
		Float deltaX = tmp15;		HX_STACK_VAR(deltaX,"deltaX");
		HX_STACK_LINE(218)
		Float tmp16 = node->y;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(218)
		::flixel::math::FlxPoint tmp17 = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(218)
		Float tmp18 = tmp17->y;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(218)
		Float tmp19 = (tmp16 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(218)
		Float deltaY = tmp19;		HX_STACK_VAR(deltaY,"deltaY");
		HX_STACK_LINE(220)
		int tmp20 = this->_mode;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(220)
		int tmp21 = (int(tmp20) & int((int)65536));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(220)
		bool tmp22 = (tmp21 > (int)0);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(220)
		bool horizontalOnly = tmp22;		HX_STACK_VAR(horizontalOnly,"horizontalOnly");
		HX_STACK_LINE(221)
		int tmp23 = this->_mode;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(221)
		int tmp24 = (int(tmp23) & int((int)1048576));		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(221)
		bool tmp25 = (tmp24 > (int)0);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(221)
		bool verticalOnly = tmp25;		HX_STACK_VAR(verticalOnly,"verticalOnly");
		HX_STACK_LINE(223)
		bool tmp26 = horizontalOnly;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(223)
		if ((tmp26)){
			HX_STACK_LINE(225)
			bool tmp27 = (deltaX > (int)0);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(225)
			Float tmp28;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(225)
			if ((tmp27)){
				HX_STACK_LINE(225)
				tmp28 = deltaX;
			}
			else{
				HX_STACK_LINE(225)
				Float tmp29 = deltaX;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(225)
				tmp28 = -(tmp29);
			}
			HX_STACK_LINE(225)
			Float tmp29 = this->speed;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(225)
			Float tmp30 = elapsed;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(225)
			Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(225)
			bool tmp32 = (tmp28 < tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(225)
			if ((tmp32)){
				HX_STACK_LINE(227)
				::flixel::math::FlxPoint tmp33 = this->advancePath(null());		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(227)
				node = tmp33;
			}
		}
		else{
			HX_STACK_LINE(230)
			bool tmp27 = verticalOnly;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(230)
			if ((tmp27)){
				HX_STACK_LINE(232)
				bool tmp28 = (deltaY > (int)0);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(232)
				Float tmp29;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(232)
				if ((tmp28)){
					HX_STACK_LINE(232)
					tmp29 = deltaY;
				}
				else{
					HX_STACK_LINE(232)
					Float tmp30 = deltaY;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(232)
					tmp29 = -(tmp30);
				}
				HX_STACK_LINE(232)
				Float tmp30 = this->speed;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(232)
				Float tmp31 = elapsed;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(232)
				Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(232)
				bool tmp33 = (tmp29 < tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(232)
				if ((tmp33)){
					HX_STACK_LINE(234)
					::flixel::math::FlxPoint tmp34 = this->advancePath(null());		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(234)
					node = tmp34;
				}
			}
			else{
				HX_STACK_LINE(239)
				Float tmp28 = (deltaX * deltaX);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(239)
				Float tmp29 = (deltaY * deltaY);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(239)
				Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(239)
				Float tmp31 = ::Math_obj::sqrt(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(239)
				Float tmp32 = this->speed;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(239)
				Float tmp33 = elapsed;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(239)
				Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(239)
				bool tmp35 = (tmp31 < tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(239)
				if ((tmp35)){
					HX_STACK_LINE(241)
					::flixel::math::FlxPoint tmp36 = this->advancePath(null());		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(241)
					node = tmp36;
				}
			}
		}
		HX_STACK_LINE(246)
		::flixel::FlxObject tmp27 = this->object;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(246)
		bool tmp28 = (tmp27 != null());		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(246)
		bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(246)
		if ((tmp28)){
			HX_STACK_LINE(246)
			Float tmp30 = this->speed;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(246)
			Float tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(246)
			tmp29 = (tmp31 != (int)0);
		}
		else{
			HX_STACK_LINE(246)
			tmp29 = false;
		}
		HX_STACK_LINE(246)
		if ((tmp29)){
			HX_STACK_LINE(249)
			::flixel::math::FlxPoint tmp30 = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(249)
			::flixel::FlxObject tmp31 = this->object;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(249)
			Float tmp32 = tmp31->x;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(249)
			tmp30->set_x(tmp32);
			HX_STACK_LINE(250)
			::flixel::math::FlxPoint tmp33 = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(250)
			::flixel::FlxObject tmp34 = this->object;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(250)
			Float tmp35 = tmp34->y;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(250)
			tmp33->set_y(tmp35);
			HX_STACK_LINE(252)
			bool tmp36 = this->autoCenter;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(252)
			if ((tmp36)){
				HX_STACK_LINE(254)
				::flixel::math::FlxPoint tmp37 = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(254)
				::flixel::math::FlxPoint _this = tmp37;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(254)
				::flixel::FlxObject tmp38 = this->object;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(254)
				Float tmp39 = tmp38->get_width();		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(254)
				Float tmp40 = (tmp39 * ((Float)0.5));		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(254)
				Float X = tmp40;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(254)
				::flixel::FlxObject tmp41 = this->object;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(254)
				Float tmp42 = tmp41->get_height();		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(254)
				Float tmp43 = (tmp42 * ((Float)0.5));		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(254)
				Float Y = tmp43;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(254)
				{
					HX_STACK_LINE(254)
					::flixel::math::FlxPoint _g = _this;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(254)
					Float tmp44 = (_g->x + X);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(254)
					_g->set_x(tmp44);
				}
				HX_STACK_LINE(254)
				{
					HX_STACK_LINE(254)
					::flixel::math::FlxPoint _g = _this;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(254)
					Float tmp44 = (_g->y + Y);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(254)
					_g->set_y(tmp44);
				}
				HX_STACK_LINE(254)
				_this;
			}
			HX_STACK_LINE(257)
			bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(257)
			{
				HX_STACK_LINE(257)
				::flixel::math::FlxPoint tmp38 = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(257)
				::flixel::math::FlxPoint _this = tmp38;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(257)
				bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(257)
				{
					HX_STACK_LINE(257)
					Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
					HX_STACK_LINE(257)
					Float tmp40 = (_this->x - node->x);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(257)
					Float tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(257)
					Float tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(257)
					Float tmp43 = ::Math_obj::abs(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(257)
					Float tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(257)
					Float tmp45 = aDiff;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(257)
					tmp39 = (tmp44 <= tmp45);
				}
				HX_STACK_LINE(257)
				bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(257)
				if ((tmp39)){
					HX_STACK_LINE(257)
					Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
					HX_STACK_LINE(257)
					Float tmp41 = (_this->y - node->y);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(257)
					Float tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(257)
					Float tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(257)
					Float tmp44 = ::Math_obj::abs(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(257)
					Float tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(257)
					Float tmp46 = aDiff;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(257)
					tmp40 = (tmp45 <= tmp46);
				}
				else{
					HX_STACK_LINE(257)
					tmp40 = false;
				}
				HX_STACK_LINE(257)
				bool result = tmp40;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(257)
				{
					HX_STACK_LINE(257)
					bool tmp41 = node->_weak;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(257)
					if ((tmp41)){
						HX_STACK_LINE(257)
						node->put();
					}
				}
				HX_STACK_LINE(257)
				tmp37 = result;
			}
			HX_STACK_LINE(257)
			bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(257)
			if ((tmp38)){
				HX_STACK_LINE(259)
				::flixel::math::FlxPoint tmp39 = node;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(259)
				bool tmp40 = horizontalOnly;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(259)
				bool tmp41 = verticalOnly;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(259)
				this->calculateVelocity(tmp39,tmp40,tmp41);
			}
			else{
				HX_STACK_LINE(263)
				::flixel::FlxObject tmp39 = this->object;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(263)
				tmp39->velocity->set(null(),null());
			}
			HX_STACK_LINE(267)
			bool tmp39 = this->_autoRotate;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(267)
			if ((tmp39)){
				HX_STACK_LINE(269)
				::flixel::FlxObject tmp40 = this->object;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(269)
				tmp40->angularVelocity = (int)0;
				HX_STACK_LINE(270)
				::flixel::FlxObject tmp41 = this->object;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(270)
				tmp41->angularAcceleration = (int)0;
				HX_STACK_LINE(271)
				::flixel::FlxObject tmp42 = this->object;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(271)
				Float tmp43 = this->angle;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(271)
				tmp42->set_angle(tmp43);
			}
			HX_STACK_LINE(274)
			bool tmp40 = this->finished;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(274)
			if ((tmp40)){
				HX_STACK_LINE(276)
				this->cancel();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPath_obj,update,(void))

Void FlxPath_obj::calculateVelocity( ::flixel::math::FlxPoint node,bool horizontalOnly,bool verticalOnly){
{
		HX_STACK_FRAME("flixel.util.FlxPath","calculateVelocity",0x682aa4f2,"flixel.util.FlxPath.calculateVelocity","flixel/util/FlxPath.hx",282,0x22aae741)
		HX_STACK_THIS(this)
		HX_STACK_ARG(node,"node")
		HX_STACK_ARG(horizontalOnly,"horizontalOnly")
		HX_STACK_ARG(verticalOnly,"verticalOnly")
		HX_STACK_LINE(283)
		bool tmp = horizontalOnly;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(283)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(283)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(283)
		if ((tmp1)){
			HX_STACK_LINE(283)
			::flixel::math::FlxPoint tmp3 = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(283)
			::flixel::math::FlxPoint tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(283)
			Float tmp5 = tmp4->y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(283)
			Float tmp6 = node->y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(283)
			tmp2 = (tmp5 == tmp6);
		}
		else{
			HX_STACK_LINE(283)
			tmp2 = true;
		}
		HX_STACK_LINE(283)
		if ((tmp2)){
			HX_STACK_LINE(285)
			::flixel::FlxObject tmp3 = this->object;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(285)
			::flixel::math::FlxPoint tmp4 = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(285)
			Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(285)
			Float tmp6 = node->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(285)
			bool tmp7 = (tmp5 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(285)
			Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(285)
			if ((tmp7)){
				HX_STACK_LINE(285)
				tmp8 = this->speed;
			}
			else{
				HX_STACK_LINE(285)
				Float tmp9 = this->speed;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(285)
				tmp8 = -(tmp9);
			}
			HX_STACK_LINE(285)
			tmp3->velocity->set_x(tmp8);
			HX_STACK_LINE(286)
			::flixel::FlxObject tmp9 = this->object;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(286)
			Float tmp10 = tmp9->velocity->x;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(286)
			bool tmp11 = (tmp10 < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(286)
			Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(286)
			if ((tmp11)){
				HX_STACK_LINE(286)
				tmp12 = (int)-90;
			}
			else{
				HX_STACK_LINE(286)
				tmp12 = (int)90;
			}
			HX_STACK_LINE(286)
			this->angle = tmp12;
			HX_STACK_LINE(288)
			bool tmp13 = horizontalOnly;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(288)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(288)
			if ((tmp14)){
				HX_STACK_LINE(290)
				::flixel::FlxObject tmp15 = this->object;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(290)
				tmp15->velocity->set_y((int)0);
			}
		}
		else{
			HX_STACK_LINE(293)
			bool tmp3 = verticalOnly;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(293)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(293)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(293)
			if ((tmp4)){
				HX_STACK_LINE(293)
				::flixel::math::FlxPoint tmp6 = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(293)
				::flixel::math::FlxPoint tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(293)
				Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(293)
				Float tmp9 = node->x;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(293)
				tmp5 = (tmp8 == tmp9);
			}
			else{
				HX_STACK_LINE(293)
				tmp5 = true;
			}
			HX_STACK_LINE(293)
			if ((tmp5)){
				HX_STACK_LINE(295)
				::flixel::FlxObject tmp6 = this->object;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(295)
				::flixel::math::FlxPoint tmp7 = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(295)
				Float tmp8 = tmp7->y;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(295)
				Float tmp9 = node->y;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(295)
				bool tmp10 = (tmp8 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(295)
				Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(295)
				if ((tmp10)){
					HX_STACK_LINE(295)
					tmp11 = this->speed;
				}
				else{
					HX_STACK_LINE(295)
					Float tmp12 = this->speed;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(295)
					tmp11 = -(tmp12);
				}
				HX_STACK_LINE(295)
				tmp6->velocity->set_y(tmp11);
				HX_STACK_LINE(296)
				::flixel::FlxObject tmp12 = this->object;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(296)
				Float tmp13 = tmp12->velocity->y;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(296)
				bool tmp14 = (tmp13 < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(296)
				Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(296)
				if ((tmp14)){
					HX_STACK_LINE(296)
					tmp15 = (int)0;
				}
				else{
					HX_STACK_LINE(296)
					tmp15 = (int)180;
				}
				HX_STACK_LINE(296)
				this->angle = tmp15;
				HX_STACK_LINE(298)
				bool tmp16 = verticalOnly;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(298)
				bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(298)
				if ((tmp17)){
					HX_STACK_LINE(300)
					::flixel::FlxObject tmp18 = this->object;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(300)
					tmp18->velocity->set_x((int)0);
				}
			}
			else{
				HX_STACK_LINE(305)
				::flixel::FlxObject tmp6 = this->object;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(305)
				::flixel::math::FlxPoint tmp7 = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(305)
				Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(305)
				Float tmp9 = node->x;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(305)
				bool tmp10 = (tmp8 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(305)
				Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(305)
				if ((tmp10)){
					HX_STACK_LINE(305)
					tmp11 = this->speed;
				}
				else{
					HX_STACK_LINE(305)
					Float tmp12 = this->speed;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(305)
					tmp11 = -(tmp12);
				}
				HX_STACK_LINE(305)
				tmp6->velocity->set_x(tmp11);
				HX_STACK_LINE(306)
				::flixel::FlxObject tmp12 = this->object;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(306)
				::flixel::math::FlxPoint tmp13 = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(306)
				Float tmp14 = tmp13->y;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(306)
				Float tmp15 = node->y;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(306)
				bool tmp16 = (tmp14 < tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(306)
				Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(306)
				if ((tmp16)){
					HX_STACK_LINE(306)
					tmp17 = this->speed;
				}
				else{
					HX_STACK_LINE(306)
					Float tmp18 = this->speed;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(306)
					tmp17 = -(tmp18);
				}
				HX_STACK_LINE(306)
				tmp12->velocity->set_y(tmp17);
				HX_STACK_LINE(308)
				::flixel::math::FlxPoint tmp18 = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(308)
				::flixel::math::FlxPoint tmp19 = node;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(308)
				Float tmp20 = tmp18->angleBetween(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(308)
				this->angle = tmp20;
				HX_STACK_LINE(310)
				::flixel::FlxObject tmp21 = this->object;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(310)
				Float tmp22 = this->speed;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(310)
				Float tmp23 = -(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(310)
				tmp21->velocity->set((int)0,tmp23);
				HX_STACK_LINE(311)
				::flixel::FlxObject tmp24 = this->object;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(311)
				::flixel::math::FlxPoint tmp25;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(311)
				{
					HX_STACK_LINE(311)
					::flixel::math::FlxPoint tmp26;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(311)
					{
						HX_STACK_LINE(311)
						::flixel::util::FlxPool_flixel_math_FlxPoint tmp27 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(311)
						::flixel::math::FlxPoint tmp28 = tmp27->get();		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(311)
						::flixel::math::FlxPoint tmp29 = tmp28->set((int)0,(int)0);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(311)
						::flixel::math::FlxPoint point = tmp29;		HX_STACK_VAR(point,"point");
						HX_STACK_LINE(311)
						point->_inPool = false;
						HX_STACK_LINE(311)
						tmp26 = point;
					}
					HX_STACK_LINE(311)
					::flixel::math::FlxPoint point = tmp26;		HX_STACK_VAR(point,"point");
					HX_STACK_LINE(311)
					point->_weak = true;
					HX_STACK_LINE(311)
					tmp25 = point;
				}
				HX_STACK_LINE(311)
				Float tmp26 = this->angle;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(311)
				tmp24->velocity->rotate(tmp25,tmp26);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxPath_obj,calculateVelocity,(void))

::flixel::math::FlxPoint FlxPath_obj::advancePath( hx::Null< bool >  __o_Snap){
bool Snap = __o_Snap.Default(true);
	HX_STACK_FRAME("flixel.util.FlxPath","advancePath",0xf96b8956,"flixel.util.FlxPath.advancePath","flixel/util/FlxPath.hx",321,0x22aae741)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Snap,"Snap")
{
		HX_STACK_LINE(322)
		bool tmp = Snap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(322)
		if ((tmp)){
			HX_STACK_LINE(324)
			int tmp1 = this->nodeIndex;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(324)
			::flixel::math::FlxPoint tmp2 = this->nodes->__get(tmp1).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(324)
			::flixel::math::FlxPoint oldNode = tmp2;		HX_STACK_VAR(oldNode,"oldNode");
			HX_STACK_LINE(325)
			bool tmp3 = (oldNode != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(325)
			if ((tmp3)){
				HX_STACK_LINE(327)
				int tmp4 = this->_mode;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(327)
				int tmp5 = (int(tmp4) & int((int)1048576));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(327)
				bool tmp6 = (tmp5 == (int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(327)
				if ((tmp6)){
					HX_STACK_LINE(329)
					::flixel::FlxObject tmp7 = this->object;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(329)
					Float tmp8 = oldNode->x;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(329)
					tmp7->set_x(tmp8);
					HX_STACK_LINE(330)
					bool tmp9 = this->autoCenter;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(330)
					if ((tmp9)){
						HX_STACK_LINE(331)
						::flixel::FlxObject tmp10 = this->object;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(331)
						::flixel::FlxObject _g = tmp10;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(331)
						Float tmp11 = _g->x;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(331)
						::flixel::FlxObject tmp12 = this->object;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(331)
						Float tmp13 = tmp12->get_width();		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(331)
						Float tmp14 = (tmp13 * ((Float)0.5));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(331)
						Float tmp15 = (tmp11 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(331)
						_g->set_x(tmp15);
					}
				}
				HX_STACK_LINE(333)
				int tmp7 = this->_mode;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(333)
				int tmp8 = (int(tmp7) & int((int)65536));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(333)
				bool tmp9 = (tmp8 == (int)0);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(333)
				if ((tmp9)){
					HX_STACK_LINE(335)
					::flixel::FlxObject tmp10 = this->object;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(335)
					Float tmp11 = oldNode->y;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(335)
					tmp10->set_y(tmp11);
					HX_STACK_LINE(336)
					bool tmp12 = this->autoCenter;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(336)
					if ((tmp12)){
						HX_STACK_LINE(337)
						::flixel::FlxObject tmp13 = this->object;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(337)
						::flixel::FlxObject _g = tmp13;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(337)
						Float tmp14 = _g->y;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(337)
						::flixel::FlxObject tmp15 = this->object;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(337)
						Float tmp16 = tmp15->get_height();		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(337)
						Float tmp17 = (tmp16 * ((Float)0.5));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(337)
						Float tmp18 = (tmp14 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(337)
						_g->set_y(tmp18);
					}
				}
			}
		}
		HX_STACK_LINE(342)
		bool callComplete = false;		HX_STACK_VAR(callComplete,"callComplete");
		HX_STACK_LINE(343)
		int tmp1 = this->_inc;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(343)
		hx::AddEq(this->nodeIndex,tmp1);
		HX_STACK_LINE(345)
		int tmp2 = this->_mode;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(345)
		int tmp3 = (int(tmp2) & int((int)1));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(345)
		bool tmp4 = (tmp3 > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(345)
		if ((tmp4)){
			HX_STACK_LINE(347)
			int tmp5 = this->nodeIndex;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(347)
			bool tmp6 = (tmp5 < (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(347)
			if ((tmp6)){
				HX_STACK_LINE(349)
				this->nodeIndex = (int)0;
				HX_STACK_LINE(350)
				callComplete = true;
				HX_STACK_LINE(351)
				this->onEnd();
			}
		}
		else{
			HX_STACK_LINE(354)
			int tmp5 = this->_mode;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(354)
			int tmp6 = (int(tmp5) & int((int)16));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(354)
			bool tmp7 = (tmp6 > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(354)
			if ((tmp7)){
				HX_STACK_LINE(356)
				int tmp8 = this->nodeIndex;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(356)
				int tmp9 = this->nodes->length;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(356)
				bool tmp10 = (tmp8 >= tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(356)
				if ((tmp10)){
					HX_STACK_LINE(358)
					callComplete = true;
					HX_STACK_LINE(359)
					this->nodeIndex = (int)0;
				}
			}
			else{
				HX_STACK_LINE(362)
				int tmp8 = this->_mode;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(362)
				int tmp9 = (int(tmp8) & int((int)256));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(362)
				bool tmp10 = (tmp9 > (int)0);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(362)
				if ((tmp10)){
					HX_STACK_LINE(364)
					int tmp11 = this->nodeIndex;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(364)
					bool tmp12 = (tmp11 < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(364)
					if ((tmp12)){
						HX_STACK_LINE(366)
						int tmp13 = this->nodes->length;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(366)
						int tmp14 = (tmp13 - (int)1);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(366)
						this->nodeIndex = tmp14;
						HX_STACK_LINE(367)
						callComplete = true;
						HX_STACK_LINE(368)
						int tmp15 = this->nodeIndex;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(368)
						bool tmp16 = (tmp15 < (int)0);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(368)
						if ((tmp16)){
							HX_STACK_LINE(370)
							this->nodeIndex = (int)0;
						}
					}
				}
				else{
					HX_STACK_LINE(374)
					int tmp11 = this->_mode;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(374)
					int tmp12 = (int(tmp11) & int((int)4096));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(374)
					bool tmp13 = (tmp12 > (int)0);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(374)
					if ((tmp13)){
						HX_STACK_LINE(376)
						int tmp14 = this->_inc;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(376)
						bool tmp15 = (tmp14 > (int)0);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(376)
						if ((tmp15)){
							HX_STACK_LINE(378)
							int tmp16 = this->nodeIndex;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(378)
							int tmp17 = this->nodes->length;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(378)
							bool tmp18 = (tmp16 >= tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(378)
							if ((tmp18)){
								HX_STACK_LINE(380)
								int tmp19 = this->nodes->length;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(380)
								int tmp20 = (tmp19 - (int)2);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(380)
								this->nodeIndex = tmp20;
								HX_STACK_LINE(381)
								callComplete = true;
								HX_STACK_LINE(382)
								int tmp21 = this->nodeIndex;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(382)
								bool tmp22 = (tmp21 < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(382)
								if ((tmp22)){
									HX_STACK_LINE(384)
									this->nodeIndex = (int)0;
								}
								HX_STACK_LINE(386)
								int tmp23 = this->_inc;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(386)
								int tmp24 = -(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(386)
								this->_inc = tmp24;
							}
						}
						else{
							HX_STACK_LINE(389)
							int tmp16 = this->nodeIndex;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(389)
							bool tmp17 = (tmp16 < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(389)
							if ((tmp17)){
								HX_STACK_LINE(391)
								this->nodeIndex = (int)1;
								HX_STACK_LINE(392)
								callComplete = true;
								HX_STACK_LINE(393)
								int tmp18 = this->nodeIndex;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(393)
								int tmp19 = this->nodes->length;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(393)
								bool tmp20 = (tmp18 >= tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(393)
								if ((tmp20)){
									HX_STACK_LINE(395)
									int tmp21 = this->nodes->length;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(395)
									int tmp22 = (tmp21 - (int)1);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(395)
									this->nodeIndex = tmp22;
								}
								HX_STACK_LINE(397)
								int tmp21 = this->nodeIndex;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(397)
								bool tmp22 = (tmp21 < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(397)
								if ((tmp22)){
									HX_STACK_LINE(399)
									this->nodeIndex = (int)0;
								}
								HX_STACK_LINE(401)
								int tmp23 = this->_inc;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(401)
								int tmp24 = -(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(401)
								this->_inc = tmp24;
							}
						}
					}
					else{
						HX_STACK_LINE(406)
						int tmp14 = this->nodeIndex;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(406)
						int tmp15 = this->nodes->length;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(406)
						bool tmp16 = (tmp14 >= tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(406)
						if ((tmp16)){
							HX_STACK_LINE(408)
							int tmp17 = this->nodes->length;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(408)
							int tmp18 = (tmp17 - (int)1);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(408)
							this->nodeIndex = tmp18;
							HX_STACK_LINE(409)
							callComplete = true;
							HX_STACK_LINE(410)
							this->onEnd();
						}
					}
				}
			}
		}
		HX_STACK_LINE(414)
		bool tmp5 = callComplete;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(414)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(414)
		if ((tmp5)){
			HX_STACK_LINE(414)
			Dynamic tmp7 = this->onComplete_dyn();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(414)
			Dynamic tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(414)
			tmp6 = (tmp8 != null());
		}
		else{
			HX_STACK_LINE(414)
			tmp6 = false;
		}
		HX_STACK_LINE(414)
		if ((tmp6)){
			HX_STACK_LINE(416)
			this->onComplete(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(419)
		int tmp7 = this->nodeIndex;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(419)
		::flixel::math::FlxPoint tmp8 = this->nodes->__get(tmp7).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(419)
		return tmp8;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPath_obj,advancePath,return )

Void FlxPath_obj::cancel( ){
{
		HX_STACK_FRAME("flixel.util.FlxPath","cancel",0xcc56a1cb,"flixel.util.FlxPath.cancel","flixel/util/FlxPath.hx",426,0x22aae741)
		HX_STACK_THIS(this)
		HX_STACK_LINE(427)
		this->onEnd();
		HX_STACK_LINE(429)
		::flixel::FlxObject tmp = this->object;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(429)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(429)
		if ((tmp1)){
			HX_STACK_LINE(431)
			::flixel::FlxObject tmp2 = this->object;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(431)
			tmp2->velocity->set((int)0,(int)0);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPath_obj,cancel,(void))

Void FlxPath_obj::onEnd( ){
{
		HX_STACK_FRAME("flixel.util.FlxPath","onEnd",0x788298cb,"flixel.util.FlxPath.onEnd","flixel/util/FlxPath.hx",439,0x22aae741)
		HX_STACK_THIS(this)
		HX_STACK_LINE(440)
		this->finished = true;
		HX_STACK_LINE(441)
		this->active = false;
		HX_STACK_LINE(442)
		Dynamic tmp = this->_wasObjectImmovable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(442)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(442)
		if ((tmp1)){
			HX_STACK_LINE(443)
			::flixel::FlxObject tmp2 = this->object;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(443)
			Dynamic tmp3 = this->_wasObjectImmovable;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(443)
			tmp2->set_immovable(tmp3);
		}
		HX_STACK_LINE(444)
		this->_wasObjectImmovable = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPath_obj,onEnd,(void))

Void FlxPath_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.util.FlxPath","destroy",0xaec13f89,"flixel.util.FlxPath.destroy","flixel/util/FlxPath.hx",451,0x22aae741)
		HX_STACK_THIS(this)
		HX_STACK_LINE(452)
		::flixel::util::FlxDestroyUtil_obj::putArray(this->nodes);
		HX_STACK_LINE(453)
		this->nodes = null();
		HX_STACK_LINE(454)
		this->object = null();
		HX_STACK_LINE(455)
		this->onComplete = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPath_obj,destroy,(void))

::flixel::util::FlxPath FlxPath_obj::add( Float X,Float Y){
	HX_STACK_FRAME("flixel.util.FlxPath","add",0x6e26d130,"flixel.util.FlxPath.add","flixel/util/FlxPath.hx",465,0x22aae741)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_LINE(466)
	::flixel::math::FlxPoint tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(466)
	{
		HX_STACK_LINE(466)
		::flixel::util::FlxPool_flixel_math_FlxPoint tmp1 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(466)
		::flixel::math::FlxPoint tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(466)
		Float tmp3 = X;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(466)
		Float tmp4 = Y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(466)
		::flixel::math::FlxPoint tmp5 = tmp2->set(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(466)
		::flixel::math::FlxPoint point = tmp5;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(466)
		point->_inPool = false;
		HX_STACK_LINE(466)
		tmp = point;
	}
	HX_STACK_LINE(466)
	this->nodes->push(tmp);
	HX_STACK_LINE(467)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(FlxPath_obj,add,return )

::flixel::util::FlxPath FlxPath_obj::addAt( Float X,Float Y,int Index){
	HX_STACK_FRAME("flixel.util.FlxPath","addAt",0x6261b643,"flixel.util.FlxPath.addAt","flixel/util/FlxPath.hx",478,0x22aae741)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(Index,"Index")
	HX_STACK_LINE(479)
	bool tmp = (Index < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(479)
	if ((tmp)){
		HX_STACK_LINE(479)
		return hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(480)
	int tmp1 = Index;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(480)
	int tmp2 = this->nodes->length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(480)
	bool tmp3 = (tmp1 > tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(480)
	if ((tmp3)){
		HX_STACK_LINE(482)
		int tmp4 = this->nodes->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(482)
		Index = tmp4;
	}
	HX_STACK_LINE(484)
	int tmp4 = Index;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(484)
	::flixel::math::FlxPoint tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(484)
	{
		HX_STACK_LINE(484)
		::flixel::util::FlxPool_flixel_math_FlxPoint tmp6 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(484)
		::flixel::math::FlxPoint tmp7 = tmp6->get();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(484)
		Float tmp8 = X;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(484)
		Float tmp9 = Y;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(484)
		::flixel::math::FlxPoint tmp10 = tmp7->set(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(484)
		::flixel::math::FlxPoint point = tmp10;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(484)
		point->_inPool = false;
		HX_STACK_LINE(484)
		tmp5 = point;
	}
	HX_STACK_LINE(484)
	this->nodes->insert(tmp4,tmp5);
	HX_STACK_LINE(485)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC3(FlxPath_obj,addAt,return )

::flixel::util::FlxPath FlxPath_obj::addPoint( ::flixel::math::FlxPoint Node,hx::Null< bool >  __o_AsReference){
bool AsReference = __o_AsReference.Default(false);
	HX_STACK_FRAME("flixel.util.FlxPath","addPoint",0xa9620500,"flixel.util.FlxPath.addPoint","flixel/util/FlxPath.hx",497,0x22aae741)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Node,"Node")
	HX_STACK_ARG(AsReference,"AsReference")
{
		HX_STACK_LINE(498)
		bool tmp = AsReference;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(498)
		if ((tmp)){
			HX_STACK_LINE(500)
			::flixel::math::FlxPoint tmp1 = Node;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(500)
			this->nodes->push(tmp1);
		}
		else{
			HX_STACK_LINE(504)
			::flixel::math::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(504)
			{
				HX_STACK_LINE(504)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp2 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(504)
				::flixel::math::FlxPoint tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(504)
				Float tmp4 = Node->x;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(504)
				Float tmp5 = Node->y;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(504)
				::flixel::math::FlxPoint tmp6 = tmp3->set(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(504)
				::flixel::math::FlxPoint point = tmp6;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(504)
				point->_inPool = false;
				HX_STACK_LINE(504)
				tmp1 = point;
			}
			HX_STACK_LINE(504)
			this->nodes->push(tmp1);
		}
		HX_STACK_LINE(506)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxPath_obj,addPoint,return )

::flixel::util::FlxPath FlxPath_obj::addPointAt( ::flixel::math::FlxPoint Node,int Index,hx::Null< bool >  __o_AsReference){
bool AsReference = __o_AsReference.Default(false);
	HX_STACK_FRAME("flixel.util.FlxPath","addPointAt",0x49ad7e13,"flixel.util.FlxPath.addPointAt","flixel/util/FlxPath.hx",519,0x22aae741)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Node,"Node")
	HX_STACK_ARG(Index,"Index")
	HX_STACK_ARG(AsReference,"AsReference")
{
		HX_STACK_LINE(520)
		bool tmp = (Index < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(520)
		if ((tmp)){
			HX_STACK_LINE(520)
			return hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(521)
		int tmp1 = Index;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(521)
		int tmp2 = this->nodes->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(521)
		bool tmp3 = (tmp1 > tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(521)
		if ((tmp3)){
			HX_STACK_LINE(523)
			int tmp4 = this->nodes->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(523)
			Index = tmp4;
		}
		HX_STACK_LINE(525)
		bool tmp4 = AsReference;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(525)
		if ((tmp4)){
			HX_STACK_LINE(527)
			int tmp5 = Index;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(527)
			::flixel::math::FlxPoint tmp6 = Node;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(527)
			this->nodes->insert(tmp5,tmp6);
		}
		else{
			HX_STACK_LINE(531)
			int tmp5 = Index;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(531)
			::flixel::math::FlxPoint tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(531)
			{
				HX_STACK_LINE(531)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp7 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(531)
				::flixel::math::FlxPoint tmp8 = tmp7->get();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(531)
				Float tmp9 = Node->x;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(531)
				Float tmp10 = Node->y;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(531)
				::flixel::math::FlxPoint tmp11 = tmp8->set(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(531)
				::flixel::math::FlxPoint point = tmp11;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(531)
				point->_inPool = false;
				HX_STACK_LINE(531)
				tmp6 = point;
			}
			HX_STACK_LINE(531)
			this->nodes->insert(tmp5,tmp6);
		}
		HX_STACK_LINE(533)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxPath_obj,addPointAt,return )

::flixel::math::FlxPoint FlxPath_obj::remove( ::flixel::math::FlxPoint Node){
	HX_STACK_FRAME("flixel.util.FlxPath","remove",0x18ab5095,"flixel.util.FlxPath.remove","flixel/util/FlxPath.hx",544,0x22aae741)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Node,"Node")
	HX_STACK_LINE(545)
	::flixel::math::FlxPoint tmp = Node;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(545)
	int tmp1 = this->nodes->indexOf(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(545)
	int index = tmp1;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(546)
	bool tmp2 = (index >= (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(546)
	if ((tmp2)){
		HX_STACK_LINE(548)
		int tmp3 = index;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(548)
		::flixel::math::FlxPoint tmp4 = this->nodes->splice(tmp3,(int)1)->__get((int)0).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(548)
		return tmp4;
	}
	else{
		HX_STACK_LINE(552)
		return null();
	}
	HX_STACK_LINE(546)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPath_obj,remove,return )

::flixel::math::FlxPoint FlxPath_obj::removeAt( int Index){
	HX_STACK_FRAME("flixel.util.FlxPath","removeAt",0x169098e8,"flixel.util.FlxPath.removeAt","flixel/util/FlxPath.hx",563,0x22aae741)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Index,"Index")
	HX_STACK_LINE(564)
	int tmp = this->nodes->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(564)
	bool tmp1 = (tmp <= (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(564)
	if ((tmp1)){
		HX_STACK_LINE(566)
		return null();
	}
	HX_STACK_LINE(568)
	int tmp2 = Index;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(568)
	int tmp3 = this->nodes->length;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(568)
	bool tmp4 = (tmp2 >= tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(568)
	if ((tmp4)){
		HX_STACK_LINE(570)
		int tmp5 = this->nodes->length;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(570)
		int tmp6 = (tmp5 - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(570)
		Index = tmp6;
	}
	HX_STACK_LINE(572)
	int tmp5 = Index;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(572)
	::flixel::math::FlxPoint tmp6 = this->nodes->splice(tmp5,(int)1)->__get((int)0).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(572)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPath_obj,removeAt,return )

::flixel::math::FlxPoint FlxPath_obj::head( ){
	HX_STACK_FRAME("flixel.util.FlxPath","head",0xf8717731,"flixel.util.FlxPath.head","flixel/util/FlxPath.hx",581,0x22aae741)
	HX_STACK_THIS(this)
	HX_STACK_LINE(582)
	int tmp = this->nodes->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(582)
	bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(582)
	if ((tmp1)){
		HX_STACK_LINE(584)
		::flixel::math::FlxPoint tmp2 = this->nodes->__get((int)0).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(584)
		return tmp2;
	}
	HX_STACK_LINE(586)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPath_obj,head,return )

::flixel::math::FlxPoint FlxPath_obj::tail( ){
	HX_STACK_FRAME("flixel.util.FlxPath","tail",0x005d04a1,"flixel.util.FlxPath.tail","flixel/util/FlxPath.hx",595,0x22aae741)
	HX_STACK_THIS(this)
	HX_STACK_LINE(596)
	int tmp = this->nodes->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(596)
	bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(596)
	if ((tmp1)){
		HX_STACK_LINE(598)
		int tmp2 = this->nodes->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(598)
		int tmp3 = (tmp2 - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(598)
		::flixel::math::FlxPoint tmp4 = this->nodes->__get(tmp3).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(598)
		return tmp4;
	}
	HX_STACK_LINE(600)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPath_obj,tail,return )

int FlxPath_obj::FORWARD;

int FlxPath_obj::BACKWARD;

int FlxPath_obj::LOOP_FORWARD;

int FlxPath_obj::LOOP_BACKWARD;

int FlxPath_obj::YOYO;

int FlxPath_obj::HORIZONTAL_ONLY;

int FlxPath_obj::VERTICAL_ONLY;

::flixel::math::FlxPoint FlxPath_obj::_point;


FlxPath_obj::FlxPath_obj()
{
}

void FlxPath_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxPath);
	HX_MARK_MEMBER_NAME(nodes,"nodes");
	HX_MARK_MEMBER_NAME(speed,"speed");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(autoCenter,"autoCenter");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(onComplete,"onComplete");
	HX_MARK_MEMBER_NAME(nodeIndex,"nodeIndex");
	HX_MARK_MEMBER_NAME(finished,"finished");
	HX_MARK_MEMBER_NAME(_mode,"_mode");
	HX_MARK_MEMBER_NAME(_inc,"_inc");
	HX_MARK_MEMBER_NAME(_autoRotate,"_autoRotate");
	HX_MARK_MEMBER_NAME(_wasObjectImmovable,"_wasObjectImmovable");
	HX_MARK_MEMBER_NAME(_firstUpdate,"_firstUpdate");
	HX_MARK_MEMBER_NAME(object,"object");
	HX_MARK_END_CLASS();
}

void FlxPath_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(nodes,"nodes");
	HX_VISIT_MEMBER_NAME(speed,"speed");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(autoCenter,"autoCenter");
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(onComplete,"onComplete");
	HX_VISIT_MEMBER_NAME(nodeIndex,"nodeIndex");
	HX_VISIT_MEMBER_NAME(finished,"finished");
	HX_VISIT_MEMBER_NAME(_mode,"_mode");
	HX_VISIT_MEMBER_NAME(_inc,"_inc");
	HX_VISIT_MEMBER_NAME(_autoRotate,"_autoRotate");
	HX_VISIT_MEMBER_NAME(_wasObjectImmovable,"_wasObjectImmovable");
	HX_VISIT_MEMBER_NAME(_firstUpdate,"_firstUpdate");
	HX_VISIT_MEMBER_NAME(object,"object");
}

Dynamic FlxPath_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_inc") ) { return _inc; }
		if (HX_FIELD_EQ(inName,"head") ) { return head_dyn(); }
		if (HX_FIELD_EQ(inName,"tail") ) { return tail_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nodes") ) { return nodes; }
		if (HX_FIELD_EQ(inName,"speed") ) { return speed; }
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		if (HX_FIELD_EQ(inName,"_mode") ) { return _mode; }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		if (HX_FIELD_EQ(inName,"onEnd") ) { return onEnd_dyn(); }
		if (HX_FIELD_EQ(inName,"addAt") ) { return addAt_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		if (HX_FIELD_EQ(inName,"object") ) { return object; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"cancel") ) { return cancel_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"restart") ) { return restart_dyn(); }
		if (HX_FIELD_EQ(inName,"setNode") ) { return setNode_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"finished") ) { return finished; }
		if (HX_FIELD_EQ(inName,"addPoint") ) { return addPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"removeAt") ) { return removeAt_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nodeIndex") ) { return nodeIndex; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"autoCenter") ) { return autoCenter; }
		if (HX_FIELD_EQ(inName,"onComplete") ) { return onComplete; }
		if (HX_FIELD_EQ(inName,"addPointAt") ) { return addPointAt_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_autoRotate") ) { return _autoRotate; }
		if (HX_FIELD_EQ(inName,"advancePath") ) { return advancePath_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_firstUpdate") ) { return _firstUpdate; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"calculateVelocity") ) { return calculateVelocity_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_wasObjectImmovable") ) { return _wasObjectImmovable; }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxPath_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { outValue = _point; return true;  }
	}
	return false;
}

Dynamic FlxPath_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_inc") ) { _inc=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nodes") ) { nodes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_mode") ) { _mode=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"object") ) { object=inValue.Cast< ::flixel::FlxObject >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"finished") ) { finished=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nodeIndex") ) { nodeIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"autoCenter") ) { autoCenter=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onComplete") ) { onComplete=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_autoRotate") ) { _autoRotate=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_firstUpdate") ) { _firstUpdate=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_wasObjectImmovable") ) { _wasObjectImmovable=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxPath_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { _point=ioValue.Cast< ::flixel::math::FlxPoint >(); return true; }
	}
	return false;
}

void FlxPath_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("nodes","\x31","\xb8","\xbe","\x9f"));
	outFields->push(HX_HCSTRING("speed","\x87","\x97","\x69","\x81"));
	outFields->push(HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"));
	outFields->push(HX_HCSTRING("autoCenter","\xa4","\x36","\xa6","\x71"));
	outFields->push(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"));
	outFields->push(HX_HCSTRING("nodeIndex","\xb0","\x79","\x4a","\x62"));
	outFields->push(HX_HCSTRING("finished","\x72","\x93","\x0e","\x95"));
	outFields->push(HX_HCSTRING("_mode","\x42","\xef","\x71","\xfb"));
	outFields->push(HX_HCSTRING("_inc","\xdf","\x51","\x1b","\x3f"));
	outFields->push(HX_HCSTRING("_autoRotate","\x49","\x24","\x75","\x09"));
	outFields->push(HX_HCSTRING("_wasObjectImmovable","\x41","\xd9","\x92","\x98"));
	outFields->push(HX_HCSTRING("_firstUpdate","\x5a","\x64","\xb1","\xd1"));
	outFields->push(HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxPath_obj,nodes),HX_HCSTRING("nodes","\x31","\xb8","\xbe","\x9f")},
	{hx::fsFloat,(int)offsetof(FlxPath_obj,speed),HX_HCSTRING("speed","\x87","\x97","\x69","\x81")},
	{hx::fsFloat,(int)offsetof(FlxPath_obj,angle),HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22")},
	{hx::fsBool,(int)offsetof(FlxPath_obj,autoCenter),HX_HCSTRING("autoCenter","\xa4","\x36","\xa6","\x71")},
	{hx::fsBool,(int)offsetof(FlxPath_obj,active),HX_HCSTRING("active","\xc6","\x41","\x46","\x16")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxPath_obj,onComplete),HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d")},
	{hx::fsInt,(int)offsetof(FlxPath_obj,nodeIndex),HX_HCSTRING("nodeIndex","\xb0","\x79","\x4a","\x62")},
	{hx::fsBool,(int)offsetof(FlxPath_obj,finished),HX_HCSTRING("finished","\x72","\x93","\x0e","\x95")},
	{hx::fsInt,(int)offsetof(FlxPath_obj,_mode),HX_HCSTRING("_mode","\x42","\xef","\x71","\xfb")},
	{hx::fsInt,(int)offsetof(FlxPath_obj,_inc),HX_HCSTRING("_inc","\xdf","\x51","\x1b","\x3f")},
	{hx::fsBool,(int)offsetof(FlxPath_obj,_autoRotate),HX_HCSTRING("_autoRotate","\x49","\x24","\x75","\x09")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxPath_obj,_wasObjectImmovable),HX_HCSTRING("_wasObjectImmovable","\x41","\xd9","\x92","\x98")},
	{hx::fsBool,(int)offsetof(FlxPath_obj,_firstUpdate),HX_HCSTRING("_firstUpdate","\x5a","\x64","\xb1","\xd1")},
	{hx::fsObject /*::flixel::FlxObject*/ ,(int)offsetof(FlxPath_obj,object),HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &FlxPath_obj::FORWARD,HX_HCSTRING("FORWARD","\xa5","\xb5","\x9e","\x65")},
	{hx::fsInt,(void *) &FlxPath_obj::BACKWARD,HX_HCSTRING("BACKWARD","\xe3","\x6b","\x9e","\x80")},
	{hx::fsInt,(void *) &FlxPath_obj::LOOP_FORWARD,HX_HCSTRING("LOOP_FORWARD","\x8a","\x81","\x3a","\x2b")},
	{hx::fsInt,(void *) &FlxPath_obj::LOOP_BACKWARD,HX_HCSTRING("LOOP_BACKWARD","\x5e","\x08","\x55","\xa3")},
	{hx::fsInt,(void *) &FlxPath_obj::YOYO,HX_HCSTRING("YOYO","\x2c","\x3d","\x10","\x3b")},
	{hx::fsInt,(void *) &FlxPath_obj::HORIZONTAL_ONLY,HX_HCSTRING("HORIZONTAL_ONLY","\xe7","\x3d","\x5f","\x9a")},
	{hx::fsInt,(void *) &FlxPath_obj::VERTICAL_ONLY,HX_HCSTRING("VERTICAL_ONLY","\x15","\x31","\x92","\x7f")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(void *) &FlxPath_obj::_point,HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("nodes","\x31","\xb8","\xbe","\x9f"),
	HX_HCSTRING("speed","\x87","\x97","\x69","\x81"),
	HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"),
	HX_HCSTRING("autoCenter","\xa4","\x36","\xa6","\x71"),
	HX_HCSTRING("active","\xc6","\x41","\x46","\x16"),
	HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d"),
	HX_HCSTRING("nodeIndex","\xb0","\x79","\x4a","\x62"),
	HX_HCSTRING("finished","\x72","\x93","\x0e","\x95"),
	HX_HCSTRING("_mode","\x42","\xef","\x71","\xfb"),
	HX_HCSTRING("_inc","\xdf","\x51","\x1b","\x3f"),
	HX_HCSTRING("_autoRotate","\x49","\x24","\x75","\x09"),
	HX_HCSTRING("_wasObjectImmovable","\x41","\xd9","\x92","\x98"),
	HX_HCSTRING("_firstUpdate","\x5a","\x64","\xb1","\xd1"),
	HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("restart","\xcf","\xc7","\xa5","\x6a"),
	HX_HCSTRING("setNode","\xc4","\x4a","\x8e","\x0e"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("calculateVelocity","\xa3","\x29","\x67","\x06"),
	HX_HCSTRING("advancePath","\x47","\x83","\xf2","\xa8"),
	HX_HCSTRING("cancel","\x7a","\xed","\x33","\xb8"),
	HX_HCSTRING("onEnd","\xfc","\x97","\x64","\x32"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("addAt","\x74","\xb5","\x43","\x1c"),
	HX_HCSTRING("addPoint","\x6f","\xda","\xec","\x3f"),
	HX_HCSTRING("addPointAt","\x42","\xcd","\xab","\xb8"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("removeAt","\x57","\x6e","\x1b","\xad"),
	HX_HCSTRING("head","\x20","\x29","\x0b","\x45"),
	HX_HCSTRING("tail","\x90","\xb6","\xf6","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxPath_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxPath_obj::FORWARD,"FORWARD");
	HX_MARK_MEMBER_NAME(FlxPath_obj::BACKWARD,"BACKWARD");
	HX_MARK_MEMBER_NAME(FlxPath_obj::LOOP_FORWARD,"LOOP_FORWARD");
	HX_MARK_MEMBER_NAME(FlxPath_obj::LOOP_BACKWARD,"LOOP_BACKWARD");
	HX_MARK_MEMBER_NAME(FlxPath_obj::YOYO,"YOYO");
	HX_MARK_MEMBER_NAME(FlxPath_obj::HORIZONTAL_ONLY,"HORIZONTAL_ONLY");
	HX_MARK_MEMBER_NAME(FlxPath_obj::VERTICAL_ONLY,"VERTICAL_ONLY");
	HX_MARK_MEMBER_NAME(FlxPath_obj::_point,"_point");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxPath_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxPath_obj::FORWARD,"FORWARD");
	HX_VISIT_MEMBER_NAME(FlxPath_obj::BACKWARD,"BACKWARD");
	HX_VISIT_MEMBER_NAME(FlxPath_obj::LOOP_FORWARD,"LOOP_FORWARD");
	HX_VISIT_MEMBER_NAME(FlxPath_obj::LOOP_BACKWARD,"LOOP_BACKWARD");
	HX_VISIT_MEMBER_NAME(FlxPath_obj::YOYO,"YOYO");
	HX_VISIT_MEMBER_NAME(FlxPath_obj::HORIZONTAL_ONLY,"HORIZONTAL_ONLY");
	HX_VISIT_MEMBER_NAME(FlxPath_obj::VERTICAL_ONLY,"VERTICAL_ONLY");
	HX_VISIT_MEMBER_NAME(FlxPath_obj::_point,"_point");
};

#endif

hx::Class FlxPath_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("FORWARD","\xa5","\xb5","\x9e","\x65"),
	HX_HCSTRING("BACKWARD","\xe3","\x6b","\x9e","\x80"),
	HX_HCSTRING("LOOP_FORWARD","\x8a","\x81","\x3a","\x2b"),
	HX_HCSTRING("LOOP_BACKWARD","\x5e","\x08","\x55","\xa3"),
	HX_HCSTRING("YOYO","\x2c","\x3d","\x10","\x3b"),
	HX_HCSTRING("HORIZONTAL_ONLY","\xe7","\x3d","\x5f","\x9a"),
	HX_HCSTRING("VERTICAL_ONLY","\x15","\x31","\x92","\x7f"),
	HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2"),
	::String(null()) };

void FlxPath_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.FlxPath","\xfd","\xcb","\x52","\xba");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxPath_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxPath_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxPath_obj >;
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

void FlxPath_obj::__boot()
{
	FORWARD= (int)0;
	BACKWARD= (int)1;
	LOOP_FORWARD= (int)16;
	LOOP_BACKWARD= (int)256;
	YOYO= (int)4096;
	HORIZONTAL_ONLY= (int)65536;
	VERTICAL_ONLY= (int)1048576;
struct _Function_0_1{
	inline static ::flixel::math::FlxPoint Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxPath.hx",52,0x22aae741)
		{
			HX_STACK_LINE(52)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(52)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(52)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(52)
			::flixel::math::FlxPoint tmp1 = tmp->get();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(52)
			Float tmp2 = X;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(52)
			Float tmp3 = Y;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(52)
			::flixel::math::FlxPoint tmp4 = tmp1->set(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(52)
			::flixel::math::FlxPoint point = tmp4;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(52)
			point->_inPool = false;
			HX_STACK_LINE(52)
			return point;
		}
		return null();
	}
};
	_point= _Function_0_1::Block();
}

} // end namespace flixel
} // end namespace util
