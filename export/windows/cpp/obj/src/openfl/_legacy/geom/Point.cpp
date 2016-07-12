#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
namespace openfl{
namespace _legacy{
namespace geom{

Void Point_obj::__construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y)
{
HX_STACK_FRAME("openfl._legacy.geom.Point","new",0xbb4757d4,"openfl._legacy.geom.Point.new","openfl/_legacy/geom/Point.hx",12,0x10b884db)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
{
	HX_STACK_LINE(14)
	this->x = x;
	HX_STACK_LINE(15)
	this->y = y;
}
;
	return null();
}

//Point_obj::~Point_obj() { }

Dynamic Point_obj::__CreateEmpty() { return  new Point_obj; }
hx::ObjectPtr< Point_obj > Point_obj::__new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y)
{  hx::ObjectPtr< Point_obj > _result_ = new Point_obj();
	_result_->__construct(__o_x,__o_y);
	return _result_;}

Dynamic Point_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Point_obj > _result_ = new Point_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::openfl::_legacy::geom::Point Point_obj::add( ::openfl::_legacy::geom::Point v){
	HX_STACK_FRAME("openfl._legacy.geom.Point","add",0xbb3d7995,"openfl._legacy.geom.Point.add","openfl/_legacy/geom/Point.hx",20,0x10b884db)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(22)
	Float tmp = v->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(22)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(22)
	Float tmp3 = v->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(22)
	Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(22)
	Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(22)
	::openfl::_legacy::geom::Point tmp6 = ::openfl::_legacy::geom::Point_obj::__new(tmp2,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(22)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,add,return )

::openfl::_legacy::geom::Point Point_obj::clone( ){
	HX_STACK_FRAME("openfl._legacy.geom.Point","clone",0x4cde5fd1,"openfl._legacy.geom.Point.clone","openfl/_legacy/geom/Point.hx",27,0x10b884db)
	HX_STACK_THIS(this)
	HX_STACK_LINE(29)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(29)
	::openfl::_legacy::geom::Point tmp2 = ::openfl::_legacy::geom::Point_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(29)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Point_obj,clone,return )

Void Point_obj::copyFrom( ::openfl::_legacy::geom::Point sourcePoint){
{
		HX_STACK_FRAME("openfl._legacy.geom.Point","copyFrom",0x0ba9ffcb,"openfl._legacy.geom.Point.copyFrom","openfl/_legacy/geom/Point.hx",34,0x10b884db)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourcePoint,"sourcePoint")
		HX_STACK_LINE(36)
		this->x = sourcePoint->x;
		HX_STACK_LINE(37)
		this->y = sourcePoint->y;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,copyFrom,(void))

bool Point_obj::equals( ::openfl::_legacy::geom::Point toCompare){
	HX_STACK_FRAME("openfl._legacy.geom.Point","equals",0xa75a874b,"openfl._legacy.geom.Point.equals","openfl/_legacy/geom/Point.hx",51,0x10b884db)
	HX_STACK_THIS(this)
	HX_STACK_ARG(toCompare,"toCompare")
	HX_STACK_LINE(53)
	Float tmp = toCompare->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(53)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(53)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(53)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(53)
	if ((tmp2)){
		HX_STACK_LINE(53)
		Float tmp4 = toCompare->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(53)
		Float tmp5 = this->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(53)
		Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(53)
		tmp3 = (tmp4 == tmp6);
	}
	else{
		HX_STACK_LINE(53)
		tmp3 = false;
	}
	HX_STACK_LINE(53)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,equals,return )

Void Point_obj::normalize( Float thickness){
{
		HX_STACK_FRAME("openfl._legacy.geom.Point","normalize",0x482dce01,"openfl._legacy.geom.Point.normalize","openfl/_legacy/geom/Point.hx",65,0x10b884db)
		HX_STACK_THIS(this)
		HX_STACK_ARG(thickness,"thickness")
		HX_STACK_LINE(67)
		Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(67)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(67)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(67)
		if ((tmp1)){
			HX_STACK_LINE(67)
			Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(67)
			Float tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(67)
			tmp2 = (tmp4 == (int)0);
		}
		else{
			HX_STACK_LINE(67)
			tmp2 = false;
		}
		HX_STACK_LINE(67)
		if ((tmp2)){
			HX_STACK_LINE(69)
			return null();
		}
		else{
			HX_STACK_LINE(73)
			Float tmp3 = thickness;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(73)
			Float tmp4 = this->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(73)
			Float tmp5 = this->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(73)
			Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(73)
			Float tmp7 = this->y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(73)
			Float tmp8 = this->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(73)
			Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(73)
			Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(73)
			Float tmp11 = ::Math_obj::sqrt(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(73)
			Float tmp12 = (Float(tmp3) / Float(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(73)
			Float norm = tmp12;		HX_STACK_VAR(norm,"norm");
			HX_STACK_LINE(74)
			hx::MultEq(this->x,norm);
			HX_STACK_LINE(75)
			hx::MultEq(this->y,norm);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,normalize,(void))

Void Point_obj::offset( Float dx,Float dy){
{
		HX_STACK_FRAME("openfl._legacy.geom.Point","offset",0x47a7309f,"openfl._legacy.geom.Point.offset","openfl/_legacy/geom/Point.hx",82,0x10b884db)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dx,"dx")
		HX_STACK_ARG(dy,"dy")
		HX_STACK_LINE(84)
		hx::AddEq(this->x,dx);
		HX_STACK_LINE(85)
		hx::AddEq(this->y,dy);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Point_obj,offset,(void))

Void Point_obj::setTo( Float x,Float y){
{
		HX_STACK_FRAME("openfl._legacy.geom.Point","setTo",0x7eaade31,"openfl._legacy.geom.Point.setTo","openfl/_legacy/geom/Point.hx",97,0x10b884db)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(99)
		this->x = x;
		HX_STACK_LINE(100)
		this->y = y;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Point_obj,setTo,(void))

::openfl::_legacy::geom::Point Point_obj::subtract( ::openfl::_legacy::geom::Point v){
	HX_STACK_FRAME("openfl._legacy.geom.Point","subtract",0x3b5a6920,"openfl._legacy.geom.Point.subtract","openfl/_legacy/geom/Point.hx",105,0x10b884db)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(107)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(107)
	Float tmp1 = v->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(107)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(107)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(107)
	Float tmp4 = v->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(107)
	Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(107)
	::openfl::_legacy::geom::Point tmp6 = ::openfl::_legacy::geom::Point_obj::__new(tmp2,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(107)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,subtract,return )

::String Point_obj::toString( ){
	HX_STACK_FRAME("openfl._legacy.geom.Point","toString",0x7bb7c4b8,"openfl._legacy.geom.Point.toString","openfl/_legacy/geom/Point.hx",112,0x10b884db)
	HX_STACK_THIS(this)
	HX_STACK_LINE(114)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(114)
	::String tmp1 = (HX_HCSTRING("(","\x28","\x00","\x00","\x00") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(114)
	::String tmp2 = (tmp1 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(114)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(114)
	::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(114)
	::String tmp5 = (tmp4 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(114)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(Point_obj,toString,return )

Float Point_obj::get_length( ){
	HX_STACK_FRAME("openfl._legacy.geom.Point","get_length",0xee0613bb,"openfl._legacy.geom.Point.get_length","openfl/_legacy/geom/Point.hx",126,0x10b884db)
	HX_STACK_THIS(this)
	HX_STACK_LINE(128)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(128)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(128)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(128)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(128)
	Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(128)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(128)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(128)
	Float tmp7 = ::Math_obj::sqrt(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(128)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(Point_obj,get_length,return )

Float Point_obj::distance( ::openfl::_legacy::geom::Point pt1,::openfl::_legacy::geom::Point pt2){
	HX_STACK_FRAME("openfl._legacy.geom.Point","distance",0xaf428741,"openfl._legacy.geom.Point.distance","openfl/_legacy/geom/Point.hx",42,0x10b884db)
	HX_STACK_ARG(pt1,"pt1")
	HX_STACK_ARG(pt2,"pt2")
	HX_STACK_LINE(44)
	Float tmp = (pt1->x - pt2->x);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	Float dx = tmp;		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(45)
	Float tmp1 = (pt1->y - pt2->y);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(45)
	Float dy = tmp1;		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(46)
	Float tmp2 = (dx * dx);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(46)
	Float tmp3 = (dy * dy);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(46)
	Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(46)
	Float tmp5 = ::Math_obj::sqrt(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(46)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Point_obj,distance,return )

::openfl::_legacy::geom::Point Point_obj::interpolate( ::openfl::_legacy::geom::Point pt1,::openfl::_legacy::geom::Point pt2,Float f){
	HX_STACK_FRAME("openfl._legacy.geom.Point","interpolate",0x68e8f035,"openfl._legacy.geom.Point.interpolate","openfl/_legacy/geom/Point.hx",58,0x10b884db)
	HX_STACK_ARG(pt1,"pt1")
	HX_STACK_ARG(pt2,"pt2")
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(60)
	Float tmp = pt2->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(60)
	Float tmp1 = f;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(60)
	Float tmp2 = (pt1->x - pt2->x);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(60)
	Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(60)
	Float tmp4 = (tmp + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(60)
	Float tmp5 = pt2->y;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(60)
	Float tmp6 = f;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(60)
	Float tmp7 = (pt1->y - pt2->y);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(60)
	Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(60)
	Float tmp9 = (tmp5 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(60)
	::openfl::_legacy::geom::Point tmp10 = ::openfl::_legacy::geom::Point_obj::__new(tmp4,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(60)
	return tmp10;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Point_obj,interpolate,return )

::openfl::_legacy::geom::Point Point_obj::polar( Float len,Float angle){
	HX_STACK_FRAME("openfl._legacy.geom.Point","polar",0xcb0d3c32,"openfl._legacy.geom.Point.polar","openfl/_legacy/geom/Point.hx",90,0x10b884db)
	HX_STACK_ARG(len,"len")
	HX_STACK_ARG(angle,"angle")
	HX_STACK_LINE(92)
	Float tmp = len;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(92)
	Float tmp1 = angle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(92)
	Float tmp2 = ::Math_obj::cos(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(92)
	Float tmp3 = (tmp * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(92)
	Float tmp4 = len;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(92)
	Float tmp5 = angle;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(92)
	Float tmp6 = ::Math_obj::sin(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(92)
	Float tmp7 = (tmp4 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(92)
	::openfl::_legacy::geom::Point tmp8 = ::openfl::_legacy::geom::Point_obj::__new(tmp3,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(92)
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Point_obj,polar,return )


Point_obj::Point_obj()
{
}

Dynamic Point_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"setTo") ) { return setTo_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return inCallProp == hx::paccAlways ? get_length() : length; }
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
		if (HX_FIELD_EQ(inName,"offset") ) { return offset_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"subtract") ) { return subtract_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"normalize") ) { return normalize_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Point_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"polar") ) { outValue = polar_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { outValue = distance_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"interpolate") ) { outValue = interpolate_dyn(); return true;  }
	}
	return false;
}

Dynamic Point_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Point_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Point_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{hx::fsFloat,(int)offsetof(Point_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Point_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("copyFrom","\xbf","\x0b","\x61","\xc8"),
	HX_HCSTRING("equals","\x3f","\xee","\xf2","\xbf"),
	HX_HCSTRING("normalize","\x8d","\x37","\xa1","\xab"),
	HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"),
	HX_HCSTRING("setTo","\xbd","\x91","\x2f","\x7a"),
	HX_HCSTRING("subtract","\x14","\x75","\x11","\xf8"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Point_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Point_obj::__mClass,"__mClass");
};

#endif

hx::Class Point_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("distance","\x35","\x93","\xf9","\x6b"),
	HX_HCSTRING("interpolate","\xc1","\xd4","\x32","\x1f"),
	HX_HCSTRING("polar","\xbe","\xef","\x91","\xc6"),
	::String(null()) };

void Point_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.geom.Point","\xe2","\x1d","\x2a","\x80");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Point_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Point_obj >;
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
