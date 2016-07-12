#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_geom_Matrix
#include <openfl/_legacy/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace openfl{
namespace _legacy{
namespace geom{

Void Rectangle_obj::__construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height)
{
HX_STACK_FRAME("openfl._legacy.geom.Rectangle","new",0xde610433,"openfl._legacy.geom.Rectangle.new","openfl/_legacy/geom/Rectangle.hx",20,0xcf1e94dc)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
HX_STACK_ARG(__o_width,"width")
HX_STACK_ARG(__o_height,"height")
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
Float width = __o_width.Default(0);
Float height = __o_height.Default(0);
{
	HX_STACK_LINE(22)
	this->x = x;
	HX_STACK_LINE(23)
	this->y = y;
	HX_STACK_LINE(24)
	this->width = width;
	HX_STACK_LINE(25)
	this->height = height;
}
;
	return null();
}

//Rectangle_obj::~Rectangle_obj() { }

Dynamic Rectangle_obj::__CreateEmpty() { return  new Rectangle_obj; }
hx::ObjectPtr< Rectangle_obj > Rectangle_obj::__new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height)
{  hx::ObjectPtr< Rectangle_obj > _result_ = new Rectangle_obj();
	_result_->__construct(__o_x,__o_y,__o_width,__o_height);
	return _result_;}

Dynamic Rectangle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Rectangle_obj > _result_ = new Rectangle_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

::openfl::_legacy::geom::Rectangle Rectangle_obj::clone( ){
	HX_STACK_FRAME("openfl._legacy.geom.Rectangle","clone",0xab0321f0,"openfl._legacy.geom.Rectangle.clone","openfl/_legacy/geom/Rectangle.hx",30,0xcf1e94dc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(32)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(32)
	Float tmp2 = this->width;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(32)
	Float tmp3 = this->height;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(32)
	::openfl::_legacy::geom::Rectangle tmp4 = ::openfl::_legacy::geom::Rectangle_obj::__new(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(32)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,clone,return )

bool Rectangle_obj::contains( Float x,Float y){
	HX_STACK_FRAME("openfl._legacy.geom.Rectangle","contains",0xd002696c,"openfl._legacy.geom.Rectangle.contains","openfl/_legacy/geom/Rectangle.hx",37,0xcf1e94dc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(39)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(39)
	bool tmp2 = (tmp >= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(39)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(39)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(39)
	if ((tmp3)){
		HX_STACK_LINE(39)
		Float tmp5 = y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(39)
		Float tmp6 = this->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(39)
		Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(39)
		Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(39)
		tmp4 = (tmp5 >= tmp8);
	}
	else{
		HX_STACK_LINE(39)
		tmp4 = false;
	}
	HX_STACK_LINE(39)
	bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(39)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(39)
	if ((tmp5)){
		HX_STACK_LINE(39)
		Float tmp7 = x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(39)
		Float tmp8 = this->get_right();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(39)
		Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(39)
		Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(39)
		tmp6 = (tmp7 < tmp10);
	}
	else{
		HX_STACK_LINE(39)
		tmp6 = false;
	}
	HX_STACK_LINE(39)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(39)
	if ((tmp6)){
		HX_STACK_LINE(39)
		Float tmp8 = y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(39)
		Float tmp9 = this->get_bottom();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(39)
		Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(39)
		tmp7 = (tmp8 < tmp10);
	}
	else{
		HX_STACK_LINE(39)
		tmp7 = false;
	}
	HX_STACK_LINE(39)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC2(Rectangle_obj,contains,return )

bool Rectangle_obj::containsPoint( ::openfl::_legacy::geom::Point point){
	HX_STACK_FRAME("openfl._legacy.geom.Rectangle","containsPoint",0xe9e91344,"openfl._legacy.geom.Rectangle.containsPoint","openfl/_legacy/geom/Rectangle.hx",44,0xcf1e94dc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(46)
	Float tmp = point->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(46)
	Float tmp1 = point->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(46)
	bool tmp2 = this->contains(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(46)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,containsPoint,return )

bool Rectangle_obj::containsRect( ::openfl::_legacy::geom::Rectangle rect){
	HX_STACK_FRAME("openfl._legacy.geom.Rectangle","containsRect",0x71b208b0,"openfl._legacy.geom.Rectangle.containsRect","openfl/_legacy/geom/Rectangle.hx",51,0xcf1e94dc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_LINE(53)
	bool tmp = (rect->width <= (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(53)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(53)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(53)
	if ((tmp1)){
		HX_STACK_LINE(53)
		tmp2 = (rect->height <= (int)0);
	}
	else{
		HX_STACK_LINE(53)
		tmp2 = true;
	}
	HX_STACK_LINE(53)
	if ((tmp2)){
		HX_STACK_LINE(55)
		Float tmp3 = rect->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(55)
		Float tmp4 = this->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(55)
		bool tmp5 = (tmp3 > tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(55)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(55)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(55)
		if ((tmp6)){
			HX_STACK_LINE(55)
			Float tmp8 = rect->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(55)
			Float tmp9 = this->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(55)
			Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(55)
			Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(55)
			tmp7 = (tmp8 > tmp11);
		}
		else{
			HX_STACK_LINE(55)
			tmp7 = false;
		}
		HX_STACK_LINE(55)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(55)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(55)
		if ((tmp8)){
			HX_STACK_LINE(55)
			Float tmp10 = rect->get_right();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(55)
			Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(55)
			Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(55)
			Float tmp13 = this->get_right();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(55)
			Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(55)
			Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(55)
			tmp9 = (tmp12 < tmp15);
		}
		else{
			HX_STACK_LINE(55)
			tmp9 = false;
		}
		HX_STACK_LINE(55)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(55)
		if ((tmp9)){
			HX_STACK_LINE(55)
			Float tmp11 = rect->get_bottom();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(55)
			Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(55)
			Float tmp13 = this->get_bottom();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(55)
			Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(55)
			tmp10 = (tmp12 < tmp14);
		}
		else{
			HX_STACK_LINE(55)
			tmp10 = false;
		}
		HX_STACK_LINE(55)
		return tmp10;
	}
	else{
		HX_STACK_LINE(59)
		Float tmp3 = rect->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(59)
		Float tmp4 = this->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(59)
		bool tmp5 = (tmp3 >= tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(59)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(59)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(59)
		if ((tmp6)){
			HX_STACK_LINE(59)
			Float tmp8 = rect->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(59)
			Float tmp9 = this->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(59)
			Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(59)
			Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(59)
			tmp7 = (tmp8 >= tmp11);
		}
		else{
			HX_STACK_LINE(59)
			tmp7 = false;
		}
		HX_STACK_LINE(59)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(59)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(59)
		if ((tmp8)){
			HX_STACK_LINE(59)
			Float tmp10 = rect->get_right();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(59)
			Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(59)
			Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(59)
			Float tmp13 = this->get_right();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(59)
			Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(59)
			Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(59)
			tmp9 = (tmp12 <= tmp15);
		}
		else{
			HX_STACK_LINE(59)
			tmp9 = false;
		}
		HX_STACK_LINE(59)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(59)
		if ((tmp9)){
			HX_STACK_LINE(59)
			Float tmp11 = rect->get_bottom();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(59)
			Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(59)
			Float tmp13 = this->get_bottom();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(59)
			Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(59)
			tmp10 = (tmp12 <= tmp14);
		}
		else{
			HX_STACK_LINE(59)
			tmp10 = false;
		}
		HX_STACK_LINE(59)
		return tmp10;
	}
	HX_STACK_LINE(53)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,containsRect,return )

Void Rectangle_obj::copyFrom( ::openfl::_legacy::geom::Rectangle sourceRect){
{
		HX_STACK_FRAME("openfl._legacy.geom.Rectangle","copyFrom",0x6be81b0c,"openfl._legacy.geom.Rectangle.copyFrom","openfl/_legacy/geom/Rectangle.hx",66,0xcf1e94dc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_LINE(68)
		this->x = sourceRect->x;
		HX_STACK_LINE(69)
		this->y = sourceRect->y;
		HX_STACK_LINE(70)
		this->width = sourceRect->width;
		HX_STACK_LINE(71)
		this->height = sourceRect->height;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,copyFrom,(void))

bool Rectangle_obj::equals( ::openfl::_legacy::geom::Rectangle toCompare){
	HX_STACK_FRAME("openfl._legacy.geom.Rectangle","equals",0xa95fa04c,"openfl._legacy.geom.Rectangle.equals","openfl/_legacy/geom/Rectangle.hx",76,0xcf1e94dc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(toCompare,"toCompare")
	HX_STACK_LINE(78)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(78)
	Float tmp1 = toCompare->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(78)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(78)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(78)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(78)
	if ((tmp3)){
		HX_STACK_LINE(78)
		Float tmp5 = this->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(78)
		Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(78)
		Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(78)
		Float tmp8 = toCompare->y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(78)
		tmp4 = (tmp7 == tmp8);
	}
	else{
		HX_STACK_LINE(78)
		tmp4 = false;
	}
	HX_STACK_LINE(78)
	bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(78)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(78)
	if ((tmp5)){
		HX_STACK_LINE(78)
		Float tmp7 = this->width;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(78)
		Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(78)
		Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(78)
		Float tmp10 = toCompare->width;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(78)
		tmp6 = (tmp9 == tmp10);
	}
	else{
		HX_STACK_LINE(78)
		tmp6 = false;
	}
	HX_STACK_LINE(78)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(78)
	if ((tmp6)){
		HX_STACK_LINE(78)
		Float tmp8 = this->height;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(78)
		Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(78)
		Float tmp10 = toCompare->height;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(78)
		tmp7 = (tmp9 == tmp10);
	}
	else{
		HX_STACK_LINE(78)
		tmp7 = false;
	}
	HX_STACK_LINE(78)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,equals,return )

Void Rectangle_obj::extendBounds( ::openfl::_legacy::geom::Rectangle r){
{
		HX_STACK_FRAME("openfl._legacy.geom.Rectangle","extendBounds",0xec1be5bc,"openfl._legacy.geom.Rectangle.extendBounds","openfl/_legacy/geom/Rectangle.hx",83,0xcf1e94dc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(r,"r")
		HX_STACK_LINE(85)
		Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(85)
		Float tmp1 = r->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(85)
		Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(85)
		Float dx = tmp2;		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(86)
		bool tmp3 = (dx > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(86)
		if ((tmp3)){
			HX_STACK_LINE(88)
			hx::SubEq(this->x,dx);
			HX_STACK_LINE(89)
			hx::AddEq(this->width,dx);
		}
		HX_STACK_LINE(93)
		Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(93)
		Float tmp5 = r->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(93)
		Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(93)
		Float dy = tmp6;		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(94)
		bool tmp7 = (dy > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(94)
		if ((tmp7)){
			HX_STACK_LINE(96)
			hx::SubEq(this->y,dy);
			HX_STACK_LINE(97)
			hx::AddEq(this->height,dy);
		}
		HX_STACK_LINE(101)
		Float tmp8 = r->get_right();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(101)
		Float tmp9 = this->get_right();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(101)
		bool tmp10 = (tmp8 > tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(101)
		if ((tmp10)){
			HX_STACK_LINE(103)
			Float tmp11 = r->get_right();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(103)
			this->set_right(tmp11);
		}
		HX_STACK_LINE(107)
		Float tmp11 = r->get_bottom();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(107)
		Float tmp12 = this->get_bottom();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(107)
		bool tmp13 = (tmp11 > tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(107)
		if ((tmp13)){
			HX_STACK_LINE(109)
			Float tmp14 = r->get_bottom();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(109)
			this->set_bottom(tmp14);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,extendBounds,(void))

Void Rectangle_obj::inflate( Float dx,Float dy){
{
		HX_STACK_FRAME("openfl._legacy.geom.Rectangle","inflate",0x61cab5da,"openfl._legacy.geom.Rectangle.inflate","openfl/_legacy/geom/Rectangle.hx",116,0xcf1e94dc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dx,"dx")
		HX_STACK_ARG(dy,"dy")
		HX_STACK_LINE(118)
		hx::SubEq(this->x,dx);
		HX_STACK_LINE(119)
		hx::SubEq(this->y,dy);
		HX_STACK_LINE(120)
		Float tmp = (dx * (int)2);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(120)
		hx::AddEq(this->width,tmp);
		HX_STACK_LINE(121)
		Float tmp1 = (dy * (int)2);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(121)
		hx::AddEq(this->height,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Rectangle_obj,inflate,(void))

Void Rectangle_obj::inflatePoint( ::openfl::_legacy::geom::Point point){
{
		HX_STACK_FRAME("openfl._legacy.geom.Rectangle","inflatePoint",0xfdcef816,"openfl._legacy.geom.Rectangle.inflatePoint","openfl/_legacy/geom/Rectangle.hx",126,0xcf1e94dc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(point,"point")
		HX_STACK_LINE(128)
		Float tmp = point->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(128)
		Float tmp1 = point->y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(128)
		this->inflate(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,inflatePoint,(void))

::openfl::_legacy::geom::Rectangle Rectangle_obj::intersection( ::openfl::_legacy::geom::Rectangle toIntersect){
	HX_STACK_FRAME("openfl._legacy.geom.Rectangle","intersection",0x53f6dc16,"openfl._legacy.geom.Rectangle.intersection","openfl/_legacy/geom/Rectangle.hx",133,0xcf1e94dc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(toIntersect,"toIntersect")
	HX_STACK_LINE(135)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(135)
	Float tmp1 = toIntersect->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(135)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(135)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(135)
	if ((tmp2)){
		HX_STACK_LINE(135)
		tmp3 = toIntersect->x;
	}
	else{
		HX_STACK_LINE(135)
		tmp3 = this->x;
	}
	HX_STACK_LINE(135)
	Float x0 = tmp3;		HX_STACK_VAR(x0,"x0");
	HX_STACK_LINE(136)
	Float tmp4 = this->get_right();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(136)
	Float tmp5 = toIntersect->get_right();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(136)
	bool tmp6 = (tmp4 > tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(136)
	Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(136)
	if ((tmp6)){
		HX_STACK_LINE(136)
		tmp7 = toIntersect->get_right();
	}
	else{
		HX_STACK_LINE(136)
		tmp7 = this->get_right();
	}
	HX_STACK_LINE(136)
	Float x1 = tmp7;		HX_STACK_VAR(x1,"x1");
	HX_STACK_LINE(137)
	bool tmp8 = (x1 <= x0);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(137)
	if ((tmp8)){
		HX_STACK_LINE(139)
		::openfl::_legacy::geom::Rectangle tmp9 = ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(139)
		return tmp9;
	}
	HX_STACK_LINE(143)
	Float tmp9 = this->y;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(143)
	Float tmp10 = toIntersect->y;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(143)
	bool tmp11 = (tmp9 < tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(143)
	Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(143)
	if ((tmp11)){
		HX_STACK_LINE(143)
		tmp12 = toIntersect->y;
	}
	else{
		HX_STACK_LINE(143)
		tmp12 = this->y;
	}
	HX_STACK_LINE(143)
	Float y0 = tmp12;		HX_STACK_VAR(y0,"y0");
	HX_STACK_LINE(144)
	Float tmp13 = this->get_bottom();		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(144)
	Float tmp14 = toIntersect->get_bottom();		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(144)
	bool tmp15 = (tmp13 > tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(144)
	Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(144)
	if ((tmp15)){
		HX_STACK_LINE(144)
		tmp16 = toIntersect->get_bottom();
	}
	else{
		HX_STACK_LINE(144)
		tmp16 = this->get_bottom();
	}
	HX_STACK_LINE(144)
	Float y1 = tmp16;		HX_STACK_VAR(y1,"y1");
	HX_STACK_LINE(145)
	bool tmp17 = (y1 <= y0);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(145)
	if ((tmp17)){
		HX_STACK_LINE(147)
		::openfl::_legacy::geom::Rectangle tmp18 = ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(147)
		return tmp18;
	}
	HX_STACK_LINE(151)
	Float tmp18 = x0;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(151)
	Float tmp19 = y0;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(151)
	Float tmp20 = (x1 - x0);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(151)
	Float tmp21 = (y1 - y0);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(151)
	::openfl::_legacy::geom::Rectangle tmp22 = ::openfl::_legacy::geom::Rectangle_obj::__new(tmp18,tmp19,tmp20,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(151)
	return tmp22;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,intersection,return )

bool Rectangle_obj::intersects( ::openfl::_legacy::geom::Rectangle toIntersect){
	HX_STACK_FRAME("openfl._legacy.geom.Rectangle","intersects",0xc2ceff41,"openfl._legacy.geom.Rectangle.intersects","openfl/_legacy/geom/Rectangle.hx",156,0xcf1e94dc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(toIntersect,"toIntersect")
	HX_STACK_LINE(158)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(158)
	Float tmp1 = toIntersect->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(158)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(158)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(158)
	if ((tmp2)){
		HX_STACK_LINE(158)
		tmp3 = toIntersect->x;
	}
	else{
		HX_STACK_LINE(158)
		tmp3 = this->x;
	}
	HX_STACK_LINE(158)
	Float x0 = tmp3;		HX_STACK_VAR(x0,"x0");
	HX_STACK_LINE(159)
	Float tmp4 = this->get_right();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(159)
	Float tmp5 = toIntersect->get_right();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(159)
	bool tmp6 = (tmp4 > tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(159)
	Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(159)
	if ((tmp6)){
		HX_STACK_LINE(159)
		tmp7 = toIntersect->get_right();
	}
	else{
		HX_STACK_LINE(159)
		tmp7 = this->get_right();
	}
	HX_STACK_LINE(159)
	Float x1 = tmp7;		HX_STACK_VAR(x1,"x1");
	HX_STACK_LINE(160)
	bool tmp8 = (x1 <= x0);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(160)
	if ((tmp8)){
		HX_STACK_LINE(162)
		return false;
	}
	HX_STACK_LINE(166)
	Float tmp9 = this->y;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(166)
	Float tmp10 = toIntersect->y;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(166)
	bool tmp11 = (tmp9 < tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(166)
	Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(166)
	if ((tmp11)){
		HX_STACK_LINE(166)
		tmp12 = toIntersect->y;
	}
	else{
		HX_STACK_LINE(166)
		tmp12 = this->y;
	}
	HX_STACK_LINE(166)
	Float y0 = tmp12;		HX_STACK_VAR(y0,"y0");
	HX_STACK_LINE(167)
	Float tmp13 = this->get_bottom();		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(167)
	Float tmp14 = toIntersect->get_bottom();		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(167)
	bool tmp15 = (tmp13 > tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(167)
	Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(167)
	if ((tmp15)){
		HX_STACK_LINE(167)
		tmp16 = toIntersect->get_bottom();
	}
	else{
		HX_STACK_LINE(167)
		tmp16 = this->get_bottom();
	}
	HX_STACK_LINE(167)
	Float y1 = tmp16;		HX_STACK_VAR(y1,"y1");
	HX_STACK_LINE(168)
	bool tmp17 = (y1 > y0);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(168)
	return tmp17;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,intersects,return )

bool Rectangle_obj::isEmpty( ){
	HX_STACK_FRAME("openfl._legacy.geom.Rectangle","isEmpty",0x620ef796,"openfl._legacy.geom.Rectangle.isEmpty","openfl/_legacy/geom/Rectangle.hx",173,0xcf1e94dc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(175)
	Float tmp = this->width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(175)
	bool tmp1 = (tmp <= (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(175)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(175)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(175)
	if ((tmp2)){
		HX_STACK_LINE(175)
		Float tmp4 = this->height;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(175)
		Float tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(175)
		tmp3 = (tmp5 <= (int)0);
	}
	else{
		HX_STACK_LINE(175)
		tmp3 = true;
	}
	HX_STACK_LINE(175)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,isEmpty,return )

Void Rectangle_obj::offset( Float dx,Float dy){
{
		HX_STACK_FRAME("openfl._legacy.geom.Rectangle","offset",0x49ac49a0,"openfl._legacy.geom.Rectangle.offset","openfl/_legacy/geom/Rectangle.hx",180,0xcf1e94dc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dx,"dx")
		HX_STACK_ARG(dy,"dy")
		HX_STACK_LINE(182)
		hx::AddEq(this->x,dx);
		HX_STACK_LINE(183)
		hx::AddEq(this->y,dy);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Rectangle_obj,offset,(void))

Void Rectangle_obj::offsetPoint( ::openfl::_legacy::geom::Point point){
{
		HX_STACK_FRAME("openfl._legacy.geom.Rectangle","offsetPoint",0x8701f690,"openfl._legacy.geom.Rectangle.offsetPoint","openfl/_legacy/geom/Rectangle.hx",188,0xcf1e94dc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(point,"point")
		HX_STACK_LINE(190)
		hx::AddEq(this->x,point->x);
		HX_STACK_LINE(191)
		hx::AddEq(this->y,point->y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,offsetPoint,(void))

Void Rectangle_obj::setEmpty( ){
{
		HX_STACK_FRAME("openfl._legacy.geom.Rectangle","setEmpty",0x2195b2d8,"openfl._legacy.geom.Rectangle.setEmpty","openfl/_legacy/geom/Rectangle.hx",196,0xcf1e94dc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(198)
		this->x = (int)0;
		HX_STACK_LINE(199)
		this->y = (int)0;
		HX_STACK_LINE(200)
		this->width = (int)0;
		HX_STACK_LINE(201)
		this->height = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,setEmpty,(void))

Void Rectangle_obj::setTo( Float xa,Float ya,Float widtha,Float heighta){
{
		HX_STACK_FRAME("openfl._legacy.geom.Rectangle","setTo",0xdccfa050,"openfl._legacy.geom.Rectangle.setTo","openfl/_legacy/geom/Rectangle.hx",206,0xcf1e94dc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xa,"xa")
		HX_STACK_ARG(ya,"ya")
		HX_STACK_ARG(widtha,"widtha")
		HX_STACK_ARG(heighta,"heighta")
		HX_STACK_LINE(208)
		this->x = xa;
		HX_STACK_LINE(209)
		this->y = ya;
		HX_STACK_LINE(210)
		this->width = widtha;
		HX_STACK_LINE(211)
		this->height = heighta;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Rectangle_obj,setTo,(void))

::String Rectangle_obj::toString( ){
	HX_STACK_FRAME("openfl._legacy.geom.Rectangle","toString",0xdbf5dff9,"openfl._legacy.geom.Rectangle.toString","openfl/_legacy/geom/Rectangle.hx",216,0xcf1e94dc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(218)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(218)
	::String tmp1 = (HX_HCSTRING("(x=","\xed","\xc2","\x1e","\x00") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(218)
	::String tmp2 = (tmp1 + HX_HCSTRING(", y=","\x18","\x15","\x2e","\x1d"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(218)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(218)
	::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(218)
	::String tmp5 = (tmp4 + HX_HCSTRING(", width=","\xeb","\x04","\x57","\x53"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(218)
	Float tmp6 = this->width;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(218)
	::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(218)
	::String tmp8 = (tmp7 + HX_HCSTRING(", height=","\x82","\x32","\x07","\x68"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(218)
	Float tmp9 = this->height;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(218)
	::String tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(218)
	::String tmp11 = (tmp10 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(218)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,toString,return )

::openfl::_legacy::geom::Rectangle Rectangle_obj::transform( ::openfl::_legacy::geom::Matrix m){
	HX_STACK_FRAME("openfl._legacy.geom.Rectangle","transform",0xb839817f,"openfl._legacy.geom.Rectangle.transform","openfl/_legacy/geom/Rectangle.hx",223,0xcf1e94dc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(m,"m")
	HX_STACK_LINE(225)
	Float tmp = m->a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(225)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(225)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(225)
	Float tmp3 = m->c;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(225)
	Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(225)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(225)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(225)
	Float tx0 = tmp6;		HX_STACK_VAR(tx0,"tx0");
	HX_STACK_LINE(226)
	Float tx1 = tx0;		HX_STACK_VAR(tx1,"tx1");
	HX_STACK_LINE(227)
	Float tmp7 = m->b;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(227)
	Float tmp8 = this->x;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(227)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(227)
	Float tmp10 = m->d;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(227)
	Float tmp11 = this->y;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(227)
	Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(227)
	Float tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(227)
	Float ty0 = tmp13;		HX_STACK_VAR(ty0,"ty0");
	HX_STACK_LINE(228)
	Float ty1 = tx0;		HX_STACK_VAR(ty1,"ty1");
	HX_STACK_LINE(230)
	Float tmp14 = m->a;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(230)
	Float tmp15 = this->x;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(230)
	Float tmp16 = this->width;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(230)
	Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(230)
	Float tmp18 = (tmp14 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(230)
	Float tmp19 = m->c;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(230)
	Float tmp20 = this->y;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(230)
	Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(230)
	Float tmp22 = (tmp18 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(230)
	Float tx = tmp22;		HX_STACK_VAR(tx,"tx");
	HX_STACK_LINE(231)
	Float tmp23 = m->b;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(231)
	Float tmp24 = this->x;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(231)
	Float tmp25 = this->width;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(231)
	Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(231)
	Float tmp27 = (tmp23 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(231)
	Float tmp28 = m->d;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(231)
	Float tmp29 = this->y;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(231)
	Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(231)
	Float tmp31 = (tmp27 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(231)
	Float ty = tmp31;		HX_STACK_VAR(ty,"ty");
	HX_STACK_LINE(232)
	bool tmp32 = (tx < tx0);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(232)
	if ((tmp32)){
		HX_STACK_LINE(232)
		tx0 = tx;
	}
	HX_STACK_LINE(233)
	bool tmp33 = (ty < ty0);		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(233)
	if ((tmp33)){
		HX_STACK_LINE(233)
		ty0 = ty;
	}
	HX_STACK_LINE(234)
	bool tmp34 = (tx > tx1);		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(234)
	if ((tmp34)){
		HX_STACK_LINE(234)
		tx1 = tx;
	}
	HX_STACK_LINE(235)
	bool tmp35 = (ty > ty1);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(235)
	if ((tmp35)){
		HX_STACK_LINE(235)
		ty1 = ty;
	}
	HX_STACK_LINE(237)
	Float tmp36 = m->a;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(237)
	Float tmp37 = this->x;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(237)
	Float tmp38 = this->width;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(237)
	Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(237)
	Float tmp40 = (tmp36 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(237)
	Float tmp41 = m->c;		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(237)
	Float tmp42 = this->y;		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(237)
	Float tmp43 = this->height;		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(237)
	Float tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(237)
	Float tmp45 = (tmp41 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(237)
	Float tmp46 = (tmp40 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(237)
	tx = tmp46;
	HX_STACK_LINE(238)
	Float tmp47 = m->b;		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(238)
	Float tmp48 = this->x;		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(238)
	Float tmp49 = this->width;		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(238)
	Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(238)
	Float tmp51 = (tmp47 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(238)
	Float tmp52 = m->d;		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(238)
	Float tmp53 = this->y;		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(238)
	Float tmp54 = this->height;		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(238)
	Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(238)
	Float tmp56 = (tmp52 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
	HX_STACK_LINE(238)
	Float tmp57 = (tmp51 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
	HX_STACK_LINE(238)
	ty = tmp57;
	HX_STACK_LINE(239)
	bool tmp58 = (tx < tx0);		HX_STACK_VAR(tmp58,"tmp58");
	HX_STACK_LINE(239)
	if ((tmp58)){
		HX_STACK_LINE(239)
		tx0 = tx;
	}
	HX_STACK_LINE(240)
	bool tmp59 = (ty < ty0);		HX_STACK_VAR(tmp59,"tmp59");
	HX_STACK_LINE(240)
	if ((tmp59)){
		HX_STACK_LINE(240)
		ty0 = ty;
	}
	HX_STACK_LINE(241)
	bool tmp60 = (tx > tx1);		HX_STACK_VAR(tmp60,"tmp60");
	HX_STACK_LINE(241)
	if ((tmp60)){
		HX_STACK_LINE(241)
		tx1 = tx;
	}
	HX_STACK_LINE(242)
	bool tmp61 = (ty > ty1);		HX_STACK_VAR(tmp61,"tmp61");
	HX_STACK_LINE(242)
	if ((tmp61)){
		HX_STACK_LINE(242)
		ty1 = ty;
	}
	HX_STACK_LINE(244)
	Float tmp62 = m->a;		HX_STACK_VAR(tmp62,"tmp62");
	HX_STACK_LINE(244)
	Float tmp63 = this->x;		HX_STACK_VAR(tmp63,"tmp63");
	HX_STACK_LINE(244)
	Float tmp64 = (tmp62 * tmp63);		HX_STACK_VAR(tmp64,"tmp64");
	HX_STACK_LINE(244)
	Float tmp65 = m->c;		HX_STACK_VAR(tmp65,"tmp65");
	HX_STACK_LINE(244)
	Float tmp66 = this->y;		HX_STACK_VAR(tmp66,"tmp66");
	HX_STACK_LINE(244)
	Float tmp67 = this->height;		HX_STACK_VAR(tmp67,"tmp67");
	HX_STACK_LINE(244)
	Float tmp68 = (tmp66 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
	HX_STACK_LINE(244)
	Float tmp69 = (tmp65 * tmp68);		HX_STACK_VAR(tmp69,"tmp69");
	HX_STACK_LINE(244)
	Float tmp70 = (tmp64 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
	HX_STACK_LINE(244)
	tx = tmp70;
	HX_STACK_LINE(245)
	Float tmp71 = m->b;		HX_STACK_VAR(tmp71,"tmp71");
	HX_STACK_LINE(245)
	Float tmp72 = this->x;		HX_STACK_VAR(tmp72,"tmp72");
	HX_STACK_LINE(245)
	Float tmp73 = (tmp71 * tmp72);		HX_STACK_VAR(tmp73,"tmp73");
	HX_STACK_LINE(245)
	Float tmp74 = m->d;		HX_STACK_VAR(tmp74,"tmp74");
	HX_STACK_LINE(245)
	Float tmp75 = this->y;		HX_STACK_VAR(tmp75,"tmp75");
	HX_STACK_LINE(245)
	Float tmp76 = this->height;		HX_STACK_VAR(tmp76,"tmp76");
	HX_STACK_LINE(245)
	Float tmp77 = (tmp75 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
	HX_STACK_LINE(245)
	Float tmp78 = (tmp74 * tmp77);		HX_STACK_VAR(tmp78,"tmp78");
	HX_STACK_LINE(245)
	Float tmp79 = (tmp73 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
	HX_STACK_LINE(245)
	ty = tmp79;
	HX_STACK_LINE(246)
	bool tmp80 = (tx < tx0);		HX_STACK_VAR(tmp80,"tmp80");
	HX_STACK_LINE(246)
	if ((tmp80)){
		HX_STACK_LINE(246)
		tx0 = tx;
	}
	HX_STACK_LINE(247)
	bool tmp81 = (ty < ty0);		HX_STACK_VAR(tmp81,"tmp81");
	HX_STACK_LINE(247)
	if ((tmp81)){
		HX_STACK_LINE(247)
		ty0 = ty;
	}
	HX_STACK_LINE(248)
	bool tmp82 = (tx > tx1);		HX_STACK_VAR(tmp82,"tmp82");
	HX_STACK_LINE(248)
	if ((tmp82)){
		HX_STACK_LINE(248)
		tx1 = tx;
	}
	HX_STACK_LINE(249)
	bool tmp83 = (ty > ty1);		HX_STACK_VAR(tmp83,"tmp83");
	HX_STACK_LINE(249)
	if ((tmp83)){
		HX_STACK_LINE(249)
		ty1 = ty;
	}
	HX_STACK_LINE(251)
	Float tmp84 = (tx0 + m->tx);		HX_STACK_VAR(tmp84,"tmp84");
	HX_STACK_LINE(251)
	Float tmp85 = (ty0 + m->ty);		HX_STACK_VAR(tmp85,"tmp85");
	HX_STACK_LINE(251)
	Float tmp86 = (tx1 - tx0);		HX_STACK_VAR(tmp86,"tmp86");
	HX_STACK_LINE(251)
	Float tmp87 = (ty1 - ty0);		HX_STACK_VAR(tmp87,"tmp87");
	HX_STACK_LINE(251)
	::openfl::_legacy::geom::Rectangle tmp88 = ::openfl::_legacy::geom::Rectangle_obj::__new(tmp84,tmp85,tmp86,tmp87);		HX_STACK_VAR(tmp88,"tmp88");
	HX_STACK_LINE(251)
	return tmp88;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,transform,return )

::openfl::_legacy::geom::Rectangle Rectangle_obj::_union( ::openfl::_legacy::geom::Rectangle toUnion){
	HX_STACK_FRAME("openfl._legacy.geom.Rectangle","union",0x098773a2,"openfl._legacy.geom.Rectangle.union","openfl/_legacy/geom/Rectangle.hx",256,0xcf1e94dc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(toUnion,"toUnion")
	HX_STACK_LINE(258)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(258)
	Float tmp1 = toUnion->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(258)
	bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(258)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(258)
	if ((tmp2)){
		HX_STACK_LINE(258)
		tmp3 = toUnion->x;
	}
	else{
		HX_STACK_LINE(258)
		tmp3 = this->x;
	}
	HX_STACK_LINE(258)
	Float x0 = tmp3;		HX_STACK_VAR(x0,"x0");
	HX_STACK_LINE(259)
	Float tmp4 = this->get_right();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(259)
	Float tmp5 = toUnion->get_right();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(259)
	bool tmp6 = (tmp4 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(259)
	Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(259)
	if ((tmp6)){
		HX_STACK_LINE(259)
		tmp7 = toUnion->get_right();
	}
	else{
		HX_STACK_LINE(259)
		tmp7 = this->get_right();
	}
	HX_STACK_LINE(259)
	Float x1 = tmp7;		HX_STACK_VAR(x1,"x1");
	HX_STACK_LINE(260)
	Float tmp8 = this->y;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(260)
	Float tmp9 = toUnion->y;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(260)
	bool tmp10 = (tmp8 > tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(260)
	Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(260)
	if ((tmp10)){
		HX_STACK_LINE(260)
		tmp11 = toUnion->y;
	}
	else{
		HX_STACK_LINE(260)
		tmp11 = this->y;
	}
	HX_STACK_LINE(260)
	Float y0 = tmp11;		HX_STACK_VAR(y0,"y0");
	HX_STACK_LINE(261)
	Float tmp12 = this->get_bottom();		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(261)
	Float tmp13 = toUnion->get_bottom();		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(261)
	bool tmp14 = (tmp12 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(261)
	Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(261)
	if ((tmp14)){
		HX_STACK_LINE(261)
		tmp15 = toUnion->get_bottom();
	}
	else{
		HX_STACK_LINE(261)
		tmp15 = this->get_bottom();
	}
	HX_STACK_LINE(261)
	Float y1 = tmp15;		HX_STACK_VAR(y1,"y1");
	HX_STACK_LINE(262)
	Float tmp16 = x0;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(262)
	Float tmp17 = y0;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(262)
	Float tmp18 = (x1 - x0);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(262)
	Float tmp19 = (y1 - y0);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(262)
	::openfl::_legacy::geom::Rectangle tmp20 = ::openfl::_legacy::geom::Rectangle_obj::__new(tmp16,tmp17,tmp18,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(262)
	return tmp20;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,_union,return )

Float Rectangle_obj::get_bottom( ){
	HX_STACK_FRAME("openfl._legacy.geom.Rectangle","get_bottom",0x34e39341,"openfl._legacy.geom.Rectangle.get_bottom","openfl/_legacy/geom/Rectangle.hx",274,0xcf1e94dc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(274)
	Float tmp = this->y;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(274)
	Float tmp1 = this->height;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(274)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(274)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_bottom,return )

Float Rectangle_obj::set_bottom( Float value){
	HX_STACK_FRAME("openfl._legacy.geom.Rectangle","set_bottom",0x386131b5,"openfl._legacy.geom.Rectangle.set_bottom","openfl/_legacy/geom/Rectangle.hx",275,0xcf1e94dc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(275)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(275)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(275)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(275)
	this->height = tmp2;
	HX_STACK_LINE(275)
	Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(275)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_bottom,return )

::openfl::_legacy::geom::Point Rectangle_obj::get_bottomRight( ){
	HX_STACK_FRAME("openfl._legacy.geom.Rectangle","get_bottomRight",0x240b7cdb,"openfl._legacy.geom.Rectangle.get_bottomRight","openfl/_legacy/geom/Rectangle.hx",276,0xcf1e94dc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(276)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(276)
	Float tmp1 = this->width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(276)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(276)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(276)
	Float tmp4 = this->height;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(276)
	Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(276)
	::openfl::_legacy::geom::Point tmp6 = ::openfl::_legacy::geom::Point_obj::__new(tmp2,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(276)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_bottomRight,return )

::openfl::_legacy::geom::Point Rectangle_obj::set_bottomRight( ::openfl::_legacy::geom::Point value){
	HX_STACK_FRAME("openfl._legacy.geom.Rectangle","set_bottomRight",0x1fd6f9e7,"openfl._legacy.geom.Rectangle.set_bottomRight","openfl/_legacy/geom/Rectangle.hx",277,0xcf1e94dc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(277)
	Float tmp = value->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(277)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(277)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(277)
	this->width = tmp2;
	HX_STACK_LINE(277)
	Float tmp3 = value->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(277)
	Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(277)
	Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(277)
	this->height = tmp5;
	HX_STACK_LINE(277)
	::openfl::_legacy::geom::Point tmp6 = value->clone();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(277)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_bottomRight,return )

Float Rectangle_obj::get_left( ){
	HX_STACK_FRAME("openfl._legacy.geom.Rectangle","get_left",0x6af1d2dd,"openfl._legacy.geom.Rectangle.get_left","openfl/_legacy/geom/Rectangle.hx",278,0xcf1e94dc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(278)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(278)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_left,return )

Float Rectangle_obj::set_left( Float value){
	HX_STACK_FRAME("openfl._legacy.geom.Rectangle","set_left",0x194f2c51,"openfl._legacy.geom.Rectangle.set_left","openfl/_legacy/geom/Rectangle.hx",279,0xcf1e94dc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(279)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(279)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(279)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(279)
	hx::SubEq(this->width,tmp2);
	HX_STACK_LINE(279)
	this->x = value;
	HX_STACK_LINE(279)
	Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(279)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_left,return )

Float Rectangle_obj::get_right( ){
	HX_STACK_FRAME("openfl._legacy.geom.Rectangle","get_right",0x9fb3bc46,"openfl._legacy.geom.Rectangle.get_right","openfl/_legacy/geom/Rectangle.hx",280,0xcf1e94dc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(280)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(280)
	Float tmp1 = this->width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(280)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(280)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_right,return )

Float Rectangle_obj::set_right( Float value){
	HX_STACK_FRAME("openfl._legacy.geom.Rectangle","set_right",0x8304a852,"openfl._legacy.geom.Rectangle.set_right","openfl/_legacy/geom/Rectangle.hx",281,0xcf1e94dc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(281)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(281)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(281)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(281)
	this->width = tmp2;
	HX_STACK_LINE(281)
	Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(281)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_right,return )

::openfl::_legacy::geom::Point Rectangle_obj::get_size( ){
	HX_STACK_FRAME("openfl._legacy.geom.Rectangle","get_size",0x6f956b97,"openfl._legacy.geom.Rectangle.get_size","openfl/_legacy/geom/Rectangle.hx",282,0xcf1e94dc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(282)
	Float tmp = this->width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(282)
	Float tmp1 = this->height;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(282)
	::openfl::_legacy::geom::Point tmp2 = ::openfl::_legacy::geom::Point_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(282)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_size,return )

::openfl::_legacy::geom::Point Rectangle_obj::set_size( ::openfl::_legacy::geom::Point value){
	HX_STACK_FRAME("openfl._legacy.geom.Rectangle","set_size",0x1df2c50b,"openfl._legacy.geom.Rectangle.set_size","openfl/_legacy/geom/Rectangle.hx",283,0xcf1e94dc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(283)
	this->width = value->x;
	HX_STACK_LINE(283)
	this->height = value->y;
	HX_STACK_LINE(283)
	::openfl::_legacy::geom::Point tmp = value->clone();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(283)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_size,return )

Float Rectangle_obj::get_top( ){
	HX_STACK_FRAME("openfl._legacy.geom.Rectangle","get_top",0x7c7c487f,"openfl._legacy.geom.Rectangle.get_top","openfl/_legacy/geom/Rectangle.hx",284,0xcf1e94dc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(284)
	Float tmp = this->y;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(284)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_top,return )

Float Rectangle_obj::set_top( Float value){
	HX_STACK_FRAME("openfl._legacy.geom.Rectangle","set_top",0x6f7dd98b,"openfl._legacy.geom.Rectangle.set_top","openfl/_legacy/geom/Rectangle.hx",285,0xcf1e94dc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(285)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(285)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(285)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(285)
	hx::SubEq(this->height,tmp2);
	HX_STACK_LINE(285)
	this->y = value;
	HX_STACK_LINE(285)
	Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(285)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_top,return )

::openfl::_legacy::geom::Point Rectangle_obj::get_topLeft( ){
	HX_STACK_FRAME("openfl._legacy.geom.Rectangle","get_topLeft",0x96ad2826,"openfl._legacy.geom.Rectangle.get_topLeft","openfl/_legacy/geom/Rectangle.hx",286,0xcf1e94dc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(286)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(286)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(286)
	::openfl::_legacy::geom::Point tmp2 = ::openfl::_legacy::geom::Point_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(286)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_topLeft,return )

::openfl::_legacy::geom::Point Rectangle_obj::set_topLeft( ::openfl::_legacy::geom::Point value){
	HX_STACK_FRAME("openfl._legacy.geom.Rectangle","set_topLeft",0xa11a2f32,"openfl._legacy.geom.Rectangle.set_topLeft","openfl/_legacy/geom/Rectangle.hx",287,0xcf1e94dc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(287)
	this->x = value->x;
	HX_STACK_LINE(287)
	this->y = value->y;
	HX_STACK_LINE(287)
	::openfl::_legacy::geom::Point tmp = value->clone();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(287)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_topLeft,return )


Rectangle_obj::Rectangle_obj()
{
}

Dynamic Rectangle_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { if (inCallProp == hx::paccAlways) return get_top(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { if (inCallProp == hx::paccAlways) return get_left(); }
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == hx::paccAlways) return get_size(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { if (inCallProp == hx::paccAlways) return get_right(); }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"setTo") ) { return setTo_dyn(); }
		if (HX_FIELD_EQ(inName,"union") ) { return _union_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bottom") ) { if (inCallProp == hx::paccAlways) return get_bottom(); }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
		if (HX_FIELD_EQ(inName,"offset") ) { return offset_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"topLeft") ) { if (inCallProp == hx::paccAlways) return get_topLeft(); }
		if (HX_FIELD_EQ(inName,"inflate") ) { return inflate_dyn(); }
		if (HX_FIELD_EQ(inName,"isEmpty") ) { return isEmpty_dyn(); }
		if (HX_FIELD_EQ(inName,"get_top") ) { return get_top_dyn(); }
		if (HX_FIELD_EQ(inName,"set_top") ) { return set_top_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"setEmpty") ) { return setEmpty_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"get_left") ) { return get_left_dyn(); }
		if (HX_FIELD_EQ(inName,"set_left") ) { return set_left_dyn(); }
		if (HX_FIELD_EQ(inName,"get_size") ) { return get_size_dyn(); }
		if (HX_FIELD_EQ(inName,"set_size") ) { return set_size_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"transform") ) { return transform_dyn(); }
		if (HX_FIELD_EQ(inName,"get_right") ) { return get_right_dyn(); }
		if (HX_FIELD_EQ(inName,"set_right") ) { return set_right_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"intersects") ) { return intersects_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bottom") ) { return get_bottom_dyn(); }
		if (HX_FIELD_EQ(inName,"set_bottom") ) { return set_bottom_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bottomRight") ) { if (inCallProp == hx::paccAlways) return get_bottomRight(); }
		if (HX_FIELD_EQ(inName,"offsetPoint") ) { return offsetPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"get_topLeft") ) { return get_topLeft_dyn(); }
		if (HX_FIELD_EQ(inName,"set_topLeft") ) { return set_topLeft_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"containsRect") ) { return containsRect_dyn(); }
		if (HX_FIELD_EQ(inName,"extendBounds") ) { return extendBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"inflatePoint") ) { return inflatePoint_dyn(); }
		if (HX_FIELD_EQ(inName,"intersection") ) { return intersection_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"containsPoint") ) { return containsPoint_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_bottomRight") ) { return get_bottomRight_dyn(); }
		if (HX_FIELD_EQ(inName,"set_bottomRight") ) { return set_bottomRight_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Rectangle_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { if (inCallProp == hx::paccAlways) return set_top(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { if (inCallProp == hx::paccAlways) return set_left(inValue); }
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == hx::paccAlways) return set_size(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { if (inCallProp == hx::paccAlways) return set_right(inValue); }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bottom") ) { if (inCallProp == hx::paccAlways) return set_bottom(inValue); }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"topLeft") ) { if (inCallProp == hx::paccAlways) return set_topLeft(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bottomRight") ) { if (inCallProp == hx::paccAlways) return set_bottomRight(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Rectangle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65"));
	outFields->push(HX_HCSTRING("bottomRight","\xf1","\xa0","\xf4","\x4e"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"));
	outFields->push(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"));
	outFields->push(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"));
	outFields->push(HX_HCSTRING("top","\x95","\x66","\x58","\x00"));
	outFields->push(HX_HCSTRING("topLeft","\x3c","\x09","\xc1","\xe8"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Rectangle_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsFloat,(int)offsetof(Rectangle_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsFloat,(int)offsetof(Rectangle_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Rectangle_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("contains","\x1f","\x5a","\x7b","\x2c"),
	HX_HCSTRING("containsPoint","\xb1","\xb9","\xeb","\x92"),
	HX_HCSTRING("containsRect","\xe3","\xce","\x1c","\xa6"),
	HX_HCSTRING("copyFrom","\xbf","\x0b","\x61","\xc8"),
	HX_HCSTRING("equals","\x3f","\xee","\xf2","\xbf"),
	HX_HCSTRING("extendBounds","\xef","\xab","\x86","\x20"),
	HX_HCSTRING("inflate","\x87","\x9c","\x1b","\x0c"),
	HX_HCSTRING("inflatePoint","\x49","\xbe","\x39","\x32"),
	HX_HCSTRING("intersection","\x49","\xa2","\x61","\x88"),
	HX_HCSTRING("intersects","\xb4","\xc2","\xeb","\xe3"),
	HX_HCSTRING("isEmpty","\x43","\xde","\x5f","\x0c"),
	HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"),
	HX_HCSTRING("offsetPoint","\xbd","\x37","\x10","\x5f"),
	HX_HCSTRING("setEmpty","\x8b","\xa3","\x0e","\x7e"),
	HX_HCSTRING("setTo","\xbd","\x91","\x2f","\x7a"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"),
	HX_HCSTRING("union","\x0f","\x65","\xe7","\xa6"),
	HX_HCSTRING("get_bottom","\xb4","\x56","\x00","\x56"),
	HX_HCSTRING("set_bottom","\x28","\xf5","\x7d","\x59"),
	HX_HCSTRING("get_bottomRight","\x88","\x58","\xd6","\x0f"),
	HX_HCSTRING("set_bottomRight","\x94","\xd5","\xa1","\x0b"),
	HX_HCSTRING("get_left","\x90","\xc3","\x6a","\xc7"),
	HX_HCSTRING("set_left","\x04","\x1d","\xc8","\x75"),
	HX_HCSTRING("get_right","\x33","\x68","\x0d","\x2d"),
	HX_HCSTRING("set_right","\x3f","\x54","\x5e","\x10"),
	HX_HCSTRING("get_size","\x4a","\x5c","\x0e","\xcc"),
	HX_HCSTRING("set_size","\xbe","\xb5","\x6b","\x7a"),
	HX_HCSTRING("get_top","\x2c","\x2f","\xcd","\x26"),
	HX_HCSTRING("set_top","\x38","\xc0","\xce","\x19"),
	HX_HCSTRING("get_topLeft","\x53","\x69","\xbb","\x6e"),
	HX_HCSTRING("set_topLeft","\x5f","\x70","\x28","\x79"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Rectangle_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Rectangle_obj::__mClass,"__mClass");
};

#endif

hx::Class Rectangle_obj::__mClass;

void Rectangle_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.geom.Rectangle","\xc1","\x6e","\x80","\xcb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Rectangle_obj >;
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

} // end namespace openfl
} // end namespace _legacy
} // end namespace geom
