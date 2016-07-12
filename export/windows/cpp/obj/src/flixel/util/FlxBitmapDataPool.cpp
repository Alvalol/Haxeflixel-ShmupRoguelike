#include <hxcpp.h>

#ifndef INCLUDED_flixel_util_FlxBitmapDataPool
#include <flixel/util/FlxBitmapDataPool.h>
#endif
#ifndef INCLUDED_flixel_util__FlxBitmapDataPool_FlxBitmapDataPoolNode
#include <flixel/util/_FlxBitmapDataPool/FlxBitmapDataPoolNode.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace flixel{
namespace util{

Void FlxBitmapDataPool_obj::__construct()
{
	return null();
}

//FlxBitmapDataPool_obj::~FlxBitmapDataPool_obj() { }

Dynamic FlxBitmapDataPool_obj::__CreateEmpty() { return  new FlxBitmapDataPool_obj; }
hx::ObjectPtr< FlxBitmapDataPool_obj > FlxBitmapDataPool_obj::__new()
{  hx::ObjectPtr< FlxBitmapDataPool_obj > _result_ = new FlxBitmapDataPool_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxBitmapDataPool_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxBitmapDataPool_obj > _result_ = new FlxBitmapDataPool_obj();
	_result_->__construct();
	return _result_;}

int FlxBitmapDataPool_obj::maxLength;

int FlxBitmapDataPool_obj::length;

::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode FlxBitmapDataPool_obj::_head;

::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode FlxBitmapDataPool_obj::_tail;

::openfl::_legacy::geom::Rectangle FlxBitmapDataPool_obj::_rect;

::openfl::_legacy::display::BitmapData FlxBitmapDataPool_obj::get( int w,int h,hx::Null< bool >  __o_transparent,Dynamic fillColor,Dynamic __o_exactSize){
bool transparent = __o_transparent.Default(true);
Dynamic exactSize = __o_exactSize.Default(false);
	HX_STACK_FRAME("flixel.util.FlxBitmapDataPool","get",0x62a51335,"flixel.util.FlxBitmapDataPool.get","flixel/util/FlxBitmapDataPool.hx",41,0x992b0db1)
	HX_STACK_ARG(w,"w")
	HX_STACK_ARG(h,"h")
	HX_STACK_ARG(transparent,"transparent")
	HX_STACK_ARG(fillColor,"fillColor")
	HX_STACK_ARG(exactSize,"exactSize")
{
		HX_STACK_LINE(42)
		::openfl::_legacy::display::BitmapData res = null();		HX_STACK_VAR(res,"res");
		HX_STACK_LINE(45)
		::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode tmp = ::flixel::util::FlxBitmapDataPool_obj::_head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(45)
		::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode node = tmp;		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(46)
		while((true)){
			HX_STACK_LINE(46)
			bool tmp1 = (node != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(46)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(46)
			if ((tmp2)){
				HX_STACK_LINE(46)
				break;
			}
			HX_STACK_LINE(48)
			::openfl::_legacy::display::BitmapData bmd = node->bmd;		HX_STACK_VAR(bmd,"bmd");
			HX_STACK_LINE(49)
			bool tmp3 = bmd->get_transparent();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(49)
			bool tmp4 = transparent;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(49)
			bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(49)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(49)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(49)
			if ((tmp6)){
				HX_STACK_LINE(49)
				int tmp8 = bmd->get_width();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(49)
				int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(49)
				int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(49)
				int tmp11 = w;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(49)
				tmp7 = (tmp10 >= tmp11);
			}
			else{
				HX_STACK_LINE(49)
				tmp7 = false;
			}
			HX_STACK_LINE(49)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(49)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(49)
			if ((tmp8)){
				HX_STACK_LINE(49)
				int tmp10 = bmd->get_height();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(49)
				int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(49)
				int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(49)
				int tmp13 = h;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(49)
				tmp9 = (tmp12 >= tmp13);
			}
			else{
				HX_STACK_LINE(49)
				tmp9 = false;
			}
			HX_STACK_LINE(49)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(49)
			if ((tmp9)){
				HX_STACK_LINE(50)
				Dynamic tmp11 = exactSize;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(50)
				Dynamic tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(50)
				Dynamic tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(50)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(50)
				bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(50)
				bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(50)
				bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(50)
				bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(50)
				bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(50)
				if ((tmp19)){
					HX_STACK_LINE(50)
					Dynamic tmp20 = exactSize;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(50)
					Dynamic tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(50)
					bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(50)
					Dynamic tmp23 = tmp21;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(50)
					Dynamic tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(50)
					if ((tmp24)){
						HX_STACK_LINE(50)
						int tmp25 = bmd->get_width();		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(50)
						int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(50)
						int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(50)
						int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(50)
						int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(50)
						int tmp30 = w;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(50)
						bool tmp31 = (tmp29 == tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(50)
						bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(50)
						tmp22 = tmp32;
					}
					else{
						HX_STACK_LINE(50)
						tmp22 = false;
					}
					HX_STACK_LINE(50)
					bool tmp25 = tmp22;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(50)
					bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(50)
					if ((tmp26)){
						HX_STACK_LINE(50)
						int tmp27 = bmd->get_height();		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(50)
						int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(50)
						int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(50)
						int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(50)
						int tmp31 = h;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(50)
						tmp10 = (tmp30 == tmp31);
					}
					else{
						HX_STACK_LINE(50)
						tmp10 = false;
					}
				}
				else{
					HX_STACK_LINE(50)
					tmp10 = true;
				}
			}
			else{
				HX_STACK_LINE(49)
				tmp10 = false;
			}
			HX_STACK_LINE(49)
			if ((tmp10)){
				HX_STACK_LINE(52)
				res = bmd;
				HX_STACK_LINE(55)
				bool tmp11 = (node->prev != null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(55)
				if ((tmp11)){
					HX_STACK_LINE(55)
					node->prev->next = node->next;
				}
				HX_STACK_LINE(56)
				bool tmp12 = (node->next != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(56)
				if ((tmp12)){
					HX_STACK_LINE(56)
					node->next->prev = node->prev;
				}
				HX_STACK_LINE(57)
				::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode tmp13 = node;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(57)
				::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode tmp14 = ::flixel::util::FlxBitmapDataPool_obj::_head;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(57)
				bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(57)
				if ((tmp15)){
					HX_STACK_LINE(57)
					::flixel::util::FlxBitmapDataPool_obj::_head = node->next;
				}
				HX_STACK_LINE(58)
				::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode tmp16 = node;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(58)
				::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode tmp17 = ::flixel::util::FlxBitmapDataPool_obj::_tail;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(58)
				bool tmp18 = (tmp16 == tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(58)
				if ((tmp18)){
					HX_STACK_LINE(58)
					::flixel::util::FlxBitmapDataPool_obj::_tail = node->prev;
				}
				HX_STACK_LINE(59)
				node = null();
				HX_STACK_LINE(60)
				(::flixel::util::FlxBitmapDataPool_obj::length)--;
				HX_STACK_LINE(61)
				break;
			}
			HX_STACK_LINE(63)
			node = node->next;
		}
		HX_STACK_LINE(66)
		bool tmp1 = (res != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(66)
		if ((tmp1)){
			HX_STACK_LINE(68)
			bool tmp2 = (fillColor != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(68)
			if ((tmp2)){
				HX_STACK_LINE(70)
				::openfl::_legacy::geom::Rectangle tmp3 = ::flixel::util::FlxBitmapDataPool_obj::_rect;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(70)
				tmp3->x = (int)0;
				HX_STACK_LINE(71)
				::openfl::_legacy::geom::Rectangle tmp4 = ::flixel::util::FlxBitmapDataPool_obj::_rect;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(71)
				tmp4->y = (int)0;
				HX_STACK_LINE(72)
				::openfl::_legacy::geom::Rectangle tmp5 = ::flixel::util::FlxBitmapDataPool_obj::_rect;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(72)
				tmp5->width = w;
				HX_STACK_LINE(73)
				::openfl::_legacy::geom::Rectangle tmp6 = ::flixel::util::FlxBitmapDataPool_obj::_rect;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(73)
				tmp6->height = h;
				HX_STACK_LINE(74)
				::openfl::_legacy::geom::Rectangle tmp7 = ::flixel::util::FlxBitmapDataPool_obj::_rect;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(74)
				Dynamic tmp8 = fillColor;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(74)
				res->fillRect(tmp7,tmp8);
			}
		}
		else{
			HX_STACK_LINE(79)
			int tmp2 = w;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(79)
			int tmp3 = h;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(79)
			bool tmp4 = transparent;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(79)
			bool tmp5 = (fillColor != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(79)
			int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(79)
			if ((tmp5)){
				HX_STACK_LINE(79)
				tmp6 = fillColor;
			}
			else{
				HX_STACK_LINE(79)
				tmp6 = (int)-1;
			}
			HX_STACK_LINE(79)
			::openfl::_legacy::display::BitmapData tmp7 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp2,tmp3,tmp4,tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(79)
			res = tmp7;
		}
		HX_STACK_LINE(82)
		::openfl::_legacy::display::BitmapData tmp2 = res;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(82)
		return tmp2;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxBitmapDataPool_obj,get,return )

Void FlxBitmapDataPool_obj::put( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("flixel.util.FlxBitmapDataPool","put",0x62abf56e,"flixel.util.FlxBitmapDataPool.put","flixel/util/FlxBitmapDataPool.hx",89,0x992b0db1)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(90)
		int tmp = ::flixel::util::FlxBitmapDataPool_obj::length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(90)
		int tmp1 = ::flixel::util::FlxBitmapDataPool_obj::maxLength;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(90)
		bool tmp2 = (tmp >= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(90)
		if ((tmp2)){
			HX_STACK_LINE(92)
			::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode tmp3 = ::flixel::util::FlxBitmapDataPool_obj::_tail;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(92)
			::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode last = tmp3;		HX_STACK_VAR(last,"last");
			HX_STACK_LINE(93)
			last->bmd->dispose();
			HX_STACK_LINE(94)
			bool tmp4 = (last->prev != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(94)
			if ((tmp4)){
				HX_STACK_LINE(96)
				last->prev->next = null();
				HX_STACK_LINE(97)
				::flixel::util::FlxBitmapDataPool_obj::_tail = last->prev;
			}
			HX_STACK_LINE(99)
			last = null();
			HX_STACK_LINE(100)
			(::flixel::util::FlxBitmapDataPool_obj::length)--;
		}
		HX_STACK_LINE(103)
		::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode tmp3 = ::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode_obj::__new(bmd,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(103)
		::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode node = tmp3;		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(104)
		::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode tmp4 = ::flixel::util::FlxBitmapDataPool_obj::_head;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(104)
		node->next = tmp4;
		HX_STACK_LINE(105)
		::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode tmp5 = ::flixel::util::FlxBitmapDataPool_obj::_head;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(105)
		bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(105)
		if ((tmp6)){
			HX_STACK_LINE(107)
			::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode tmp7 = ::flixel::util::FlxBitmapDataPool_obj::_tail = node;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(107)
			::flixel::util::FlxBitmapDataPool_obj::_head = tmp7;
		}
		else{
			HX_STACK_LINE(111)
			::flixel::util::FlxBitmapDataPool_obj::_head = node;
			HX_STACK_LINE(112)
			node->next->prev = node;
		}
		HX_STACK_LINE(114)
		(::flixel::util::FlxBitmapDataPool_obj::length)++;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxBitmapDataPool_obj,put,(void))

Void FlxBitmapDataPool_obj::clear( ){
{
		HX_STACK_FRAME("flixel.util.FlxBitmapDataPool","clear",0xdb7329ec,"flixel.util.FlxBitmapDataPool.clear","flixel/util/FlxBitmapDataPool.hx",121,0x992b0db1)
		HX_STACK_LINE(122)
		::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode tmp = ::flixel::util::FlxBitmapDataPool_obj::_head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(122)
		::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode node = tmp;		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(123)
		while((true)){
			HX_STACK_LINE(123)
			bool tmp1 = (node != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(123)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(123)
			if ((tmp2)){
				HX_STACK_LINE(123)
				break;
			}
			HX_STACK_LINE(125)
			::openfl::_legacy::display::BitmapData bmd = node->bmd;		HX_STACK_VAR(bmd,"bmd");
			HX_STACK_LINE(126)
			bmd->dispose();
			HX_STACK_LINE(127)
			bmd = null();
			HX_STACK_LINE(128)
			node = node->next;
		}
		HX_STACK_LINE(130)
		::flixel::util::FlxBitmapDataPool_obj::length = (int)0;
		HX_STACK_LINE(131)
		::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode tmp1 = ::flixel::util::FlxBitmapDataPool_obj::_tail = null();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(131)
		::flixel::util::FlxBitmapDataPool_obj::_head = tmp1;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxBitmapDataPool_obj,clear,(void))

int FlxBitmapDataPool_obj::set_maxLength( int value){
	HX_STACK_FRAME("flixel.util.FlxBitmapDataPool","set_maxLength",0xa2220bec,"flixel.util.FlxBitmapDataPool.set_maxLength","flixel/util/FlxBitmapDataPool.hx",135,0x992b0db1)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(136)
	int tmp = ::flixel::util::FlxBitmapDataPool_obj::maxLength;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(136)
	int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(136)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(136)
	if ((tmp2)){
		HX_STACK_LINE(138)
		::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode tmp3 = ::flixel::util::FlxBitmapDataPool_obj::_tail;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(138)
		::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode node = tmp3;		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(139)
		while((true)){
			HX_STACK_LINE(139)
			bool tmp4 = (node != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(139)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(139)
			if ((tmp4)){
				HX_STACK_LINE(139)
				int tmp6 = ::flixel::util::FlxBitmapDataPool_obj::length;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(139)
				int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(139)
				int tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(139)
				tmp5 = (tmp7 > tmp8);
			}
			else{
				HX_STACK_LINE(139)
				tmp5 = false;
			}
			HX_STACK_LINE(139)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(139)
			if ((tmp6)){
				HX_STACK_LINE(139)
				break;
			}
			HX_STACK_LINE(141)
			::openfl::_legacy::display::BitmapData bmd = node->bmd;		HX_STACK_VAR(bmd,"bmd");
			HX_STACK_LINE(142)
			bmd->dispose();
			HX_STACK_LINE(143)
			bmd = null();
			HX_STACK_LINE(144)
			node = node->prev;
			HX_STACK_LINE(145)
			(::flixel::util::FlxBitmapDataPool_obj::length)--;
		}
	}
	HX_STACK_LINE(148)
	int tmp3 = ::flixel::util::FlxBitmapDataPool_obj::maxLength = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(148)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxBitmapDataPool_obj,set_maxLength,return )


FlxBitmapDataPool_obj::FlxBitmapDataPool_obj()
{
}

bool FlxBitmapDataPool_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"put") ) { outValue = put_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_head") ) { outValue = _head; return true;  }
		if (HX_FIELD_EQ(inName,"_tail") ) { outValue = _tail; return true;  }
		if (HX_FIELD_EQ(inName,"_rect") ) { outValue = _rect; return true;  }
		if (HX_FIELD_EQ(inName,"clear") ) { outValue = clear_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { outValue = length; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"maxLength") ) { outValue = maxLength; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_maxLength") ) { outValue = set_maxLength_dyn(); return true;  }
	}
	return false;
}

bool FlxBitmapDataPool_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_head") ) { _head=ioValue.Cast< ::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode >(); return true; }
		if (HX_FIELD_EQ(inName,"_tail") ) { _tail=ioValue.Cast< ::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode >(); return true; }
		if (HX_FIELD_EQ(inName,"_rect") ) { _rect=ioValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=ioValue.Cast< int >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"maxLength") ) { if (inCallProp == hx::paccAlways)  ioValue = set_maxLength(ioValue); else maxLength=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &FlxBitmapDataPool_obj::maxLength,HX_HCSTRING("maxLength","\xaa","\xa6","\x92","\xce")},
	{hx::fsInt,(void *) &FlxBitmapDataPool_obj::length,HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{hx::fsObject /*::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode*/ ,(void *) &FlxBitmapDataPool_obj::_head,HX_HCSTRING("_head","\xff","\x44","\x1c","\xf8")},
	{hx::fsObject /*::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode*/ ,(void *) &FlxBitmapDataPool_obj::_tail,HX_HCSTRING("_tail","\x6f","\xd2","\x07","\x00")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(void *) &FlxBitmapDataPool_obj::_rect,HX_HCSTRING("_rect","\x03","\x69","\xb8","\xfe")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxBitmapDataPool_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxBitmapDataPool_obj::maxLength,"maxLength");
	HX_MARK_MEMBER_NAME(FlxBitmapDataPool_obj::length,"length");
	HX_MARK_MEMBER_NAME(FlxBitmapDataPool_obj::_head,"_head");
	HX_MARK_MEMBER_NAME(FlxBitmapDataPool_obj::_tail,"_tail");
	HX_MARK_MEMBER_NAME(FlxBitmapDataPool_obj::_rect,"_rect");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxBitmapDataPool_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxBitmapDataPool_obj::maxLength,"maxLength");
	HX_VISIT_MEMBER_NAME(FlxBitmapDataPool_obj::length,"length");
	HX_VISIT_MEMBER_NAME(FlxBitmapDataPool_obj::_head,"_head");
	HX_VISIT_MEMBER_NAME(FlxBitmapDataPool_obj::_tail,"_tail");
	HX_VISIT_MEMBER_NAME(FlxBitmapDataPool_obj::_rect,"_rect");
};

#endif

hx::Class FlxBitmapDataPool_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("maxLength","\xaa","\xa6","\x92","\xce"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("_head","\xff","\x44","\x1c","\xf8"),
	HX_HCSTRING("_tail","\x6f","\xd2","\x07","\x00"),
	HX_HCSTRING("_rect","\x03","\x69","\xb8","\xfe"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("put","\xcf","\x62","\x55","\x00"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("set_maxLength","\x8d","\x5c","\xfc","\xd4"),
	::String(null()) };

void FlxBitmapDataPool_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.FlxBitmapDataPool","\x8d","\x77","\xe7","\xe5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxBitmapDataPool_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxBitmapDataPool_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlxBitmapDataPool_obj >;
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

void FlxBitmapDataPool_obj::__boot()
{
	maxLength= (int)8;
	length= (int)0;
	_head= null();
	_tail= null();
	_rect= ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());
}

} // end namespace flixel
} // end namespace util
