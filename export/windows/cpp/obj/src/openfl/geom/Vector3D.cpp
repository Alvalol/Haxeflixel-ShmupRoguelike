#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_openfl_geom_Vector3D
#include <openfl/geom/Vector3D.h>
#endif
namespace openfl{
namespace geom{

Void Vector3D_obj::__construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_z,hx::Null< Float >  __o_w)
{
HX_STACK_FRAME("openfl.geom.Vector3D","new",0x722c67da,"openfl.geom.Vector3D.new","openfl/geom/Vector3D.hx",19,0xc7821076)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
HX_STACK_ARG(__o_z,"z")
HX_STACK_ARG(__o_w,"w")
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
Float z = __o_z.Default(0);
Float w = __o_w.Default(0);
{
	HX_STACK_LINE(21)
	this->w = w;
	HX_STACK_LINE(22)
	this->x = x;
	HX_STACK_LINE(23)
	this->y = y;
	HX_STACK_LINE(24)
	this->z = z;
}
;
	return null();
}

//Vector3D_obj::~Vector3D_obj() { }

Dynamic Vector3D_obj::__CreateEmpty() { return  new Vector3D_obj; }
hx::ObjectPtr< Vector3D_obj > Vector3D_obj::__new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_z,hx::Null< Float >  __o_w)
{  hx::ObjectPtr< Vector3D_obj > _result_ = new Vector3D_obj();
	_result_->__construct(__o_x,__o_y,__o_z,__o_w);
	return _result_;}

Dynamic Vector3D_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Vector3D_obj > _result_ = new Vector3D_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

::openfl::geom::Vector3D Vector3D_obj::add( ::openfl::geom::Vector3D a){
	HX_STACK_FRAME("openfl.geom.Vector3D","add",0x7222899b,"openfl.geom.Vector3D.add","openfl/geom/Vector3D.hx",29,0xc7821076)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(31)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(31)
	Float tmp1 = a->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(31)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(31)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(31)
	Float tmp4 = a->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(31)
	Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(31)
	Float tmp6 = this->z;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(31)
	Float tmp7 = a->z;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(31)
	Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(31)
	::openfl::geom::Vector3D tmp9 = ::openfl::geom::Vector3D_obj::__new(tmp2,tmp5,tmp8,null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(31)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3D_obj,add,return )

::openfl::geom::Vector3D Vector3D_obj::clone( ){
	HX_STACK_FRAME("openfl.geom.Vector3D","clone",0x532bfd57,"openfl.geom.Vector3D.clone","openfl/geom/Vector3D.hx",59,0xc7821076)
	HX_STACK_THIS(this)
	HX_STACK_LINE(61)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(61)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(61)
	Float tmp2 = this->z;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(61)
	Float tmp3 = this->w;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(61)
	::openfl::geom::Vector3D tmp4 = ::openfl::geom::Vector3D_obj::__new(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(61)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3D_obj,clone,return )

Void Vector3D_obj::copyFrom( ::openfl::geom::Vector3D sourceVector3D){
{
		HX_STACK_FRAME("openfl.geom.Vector3D","copyFrom",0x528f1a05,"openfl.geom.Vector3D.copyFrom","openfl/geom/Vector3D.hx",66,0xc7821076)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceVector3D,"sourceVector3D")
		HX_STACK_LINE(68)
		this->x = sourceVector3D->x;
		HX_STACK_LINE(69)
		this->y = sourceVector3D->y;
		HX_STACK_LINE(70)
		this->z = sourceVector3D->z;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3D_obj,copyFrom,(void))

::openfl::geom::Vector3D Vector3D_obj::crossProduct( ::openfl::geom::Vector3D a){
	HX_STACK_FRAME("openfl.geom.Vector3D","crossProduct",0x872350d5,"openfl.geom.Vector3D.crossProduct","openfl/geom/Vector3D.hx",75,0xc7821076)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(77)
	Float tmp = this->y;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(77)
	Float tmp1 = a->z;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(77)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(77)
	Float tmp3 = this->z;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(77)
	Float tmp4 = a->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(77)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(77)
	Float tmp6 = (tmp2 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(77)
	Float tmp7 = this->z;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(77)
	Float tmp8 = a->x;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(77)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(77)
	Float tmp10 = this->x;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(77)
	Float tmp11 = a->z;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(77)
	Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(77)
	Float tmp13 = (tmp9 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(77)
	Float tmp14 = this->x;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(77)
	Float tmp15 = a->y;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(77)
	Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(77)
	Float tmp17 = this->y;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(77)
	Float tmp18 = a->x;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(77)
	Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(77)
	Float tmp20 = (tmp16 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(77)
	::openfl::geom::Vector3D tmp21 = ::openfl::geom::Vector3D_obj::__new(tmp6,tmp13,tmp20,(int)1);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(77)
	return tmp21;
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3D_obj,crossProduct,return )

Void Vector3D_obj::decrementBy( ::openfl::geom::Vector3D a){
{
		HX_STACK_FRAME("openfl.geom.Vector3D","decrementBy",0xa34dbc44,"openfl.geom.Vector3D.decrementBy","openfl/geom/Vector3D.hx",82,0xc7821076)
		HX_STACK_THIS(this)
		HX_STACK_ARG(a,"a")
		HX_STACK_LINE(84)
		hx::SubEq(this->x,a->x);
		HX_STACK_LINE(85)
		hx::SubEq(this->y,a->y);
		HX_STACK_LINE(86)
		hx::SubEq(this->z,a->z);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3D_obj,decrementBy,(void))

Float Vector3D_obj::dotProduct( ::openfl::geom::Vector3D a){
	HX_STACK_FRAME("openfl.geom.Vector3D","dotProduct",0x3a72d36c,"openfl.geom.Vector3D.dotProduct","openfl/geom/Vector3D.hx",102,0xc7821076)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(104)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(104)
	Float tmp1 = a->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(104)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(104)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(104)
	Float tmp4 = a->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(104)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(104)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(104)
	Float tmp7 = this->z;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(104)
	Float tmp8 = a->z;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(104)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(104)
	Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(104)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3D_obj,dotProduct,return )

bool Vector3D_obj::equals( ::openfl::geom::Vector3D toCompare,hx::Null< bool >  __o_allFour){
bool allFour = __o_allFour.Default(false);
	HX_STACK_FRAME("openfl.geom.Vector3D","equals",0x24f6bf05,"openfl.geom.Vector3D.equals","openfl/geom/Vector3D.hx",109,0xc7821076)
	HX_STACK_THIS(this)
	HX_STACK_ARG(toCompare,"toCompare")
	HX_STACK_ARG(allFour,"allFour")
{
		HX_STACK_LINE(111)
		Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(111)
		Float tmp1 = toCompare->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(111)
		bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(111)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(111)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(111)
		if ((tmp3)){
			HX_STACK_LINE(111)
			Float tmp5 = this->y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(111)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(111)
			Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(111)
			Float tmp8 = toCompare->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(111)
			tmp4 = (tmp7 == tmp8);
		}
		else{
			HX_STACK_LINE(111)
			tmp4 = false;
		}
		HX_STACK_LINE(111)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(111)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(111)
		if ((tmp5)){
			HX_STACK_LINE(111)
			Float tmp7 = this->z;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(111)
			Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(111)
			Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(111)
			Float tmp10 = toCompare->z;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(111)
			tmp6 = (tmp9 == tmp10);
		}
		else{
			HX_STACK_LINE(111)
			tmp6 = false;
		}
		HX_STACK_LINE(111)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(111)
		if ((tmp6)){
			HX_STACK_LINE(111)
			bool tmp8 = allFour;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(111)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(111)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(111)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(111)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(111)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(111)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(111)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(111)
			bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(111)
			if ((tmp16)){
				HX_STACK_LINE(111)
				Float tmp17 = this->w;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(111)
				Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(111)
				Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(111)
				Float tmp20 = toCompare->w;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(111)
				tmp7 = (tmp19 == tmp20);
			}
			else{
				HX_STACK_LINE(111)
				tmp7 = true;
			}
		}
		else{
			HX_STACK_LINE(111)
			tmp7 = false;
		}
		HX_STACK_LINE(111)
		return tmp7;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Vector3D_obj,equals,return )

Void Vector3D_obj::incrementBy( ::openfl::geom::Vector3D a){
{
		HX_STACK_FRAME("openfl.geom.Vector3D","incrementBy",0xea440b60,"openfl.geom.Vector3D.incrementBy","openfl/geom/Vector3D.hx",116,0xc7821076)
		HX_STACK_THIS(this)
		HX_STACK_ARG(a,"a")
		HX_STACK_LINE(118)
		hx::AddEq(this->x,a->x);
		HX_STACK_LINE(119)
		hx::AddEq(this->y,a->y);
		HX_STACK_LINE(120)
		hx::AddEq(this->z,a->z);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3D_obj,incrementBy,(void))

bool Vector3D_obj::nearEquals( ::openfl::geom::Vector3D toCompare,Float tolerance,Dynamic __o_allFour){
Dynamic allFour = __o_allFour.Default(false);
	HX_STACK_FRAME("openfl.geom.Vector3D","nearEquals",0xfaf41d0d,"openfl.geom.Vector3D.nearEquals","openfl/geom/Vector3D.hx",125,0xc7821076)
	HX_STACK_THIS(this)
	HX_STACK_ARG(toCompare,"toCompare")
	HX_STACK_ARG(tolerance,"tolerance")
	HX_STACK_ARG(allFour,"allFour")
{
		HX_STACK_LINE(127)
		Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(127)
		Float tmp1 = toCompare->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(127)
		Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(127)
		Float tmp3 = ::Math_obj::abs(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(127)
		Float tmp4 = tolerance;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(127)
		bool tmp5 = (tmp3 < tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(127)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(127)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(127)
		if ((tmp6)){
			HX_STACK_LINE(127)
			Float tmp8 = this->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(127)
			Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(127)
			Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(127)
			Float tmp11 = toCompare->y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(127)
			Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(127)
			Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(127)
			Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(127)
			Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(127)
			Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(127)
			Float tmp17 = ::Math_obj::abs(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(127)
			Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(127)
			Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(127)
			Float tmp20 = tolerance;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(127)
			tmp7 = (tmp19 < tmp20);
		}
		else{
			HX_STACK_LINE(127)
			tmp7 = false;
		}
		HX_STACK_LINE(127)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(127)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(127)
		if ((tmp8)){
			HX_STACK_LINE(127)
			Float tmp10 = this->z;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(127)
			Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(127)
			Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(127)
			Float tmp13 = toCompare->z;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(127)
			Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(127)
			Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(127)
			Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(127)
			Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(127)
			Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(127)
			Float tmp19 = ::Math_obj::abs(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(127)
			Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(127)
			Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(127)
			Float tmp22 = tolerance;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(127)
			tmp9 = (tmp21 < tmp22);
		}
		else{
			HX_STACK_LINE(127)
			tmp9 = false;
		}
		HX_STACK_LINE(127)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(127)
		if ((tmp9)){
			HX_STACK_LINE(127)
			Dynamic tmp11 = allFour;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(127)
			Dynamic tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(127)
			Dynamic tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(127)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(127)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(127)
			bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(127)
			bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(127)
			bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(127)
			bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(127)
			if ((tmp19)){
				HX_STACK_LINE(127)
				Float tmp20 = this->w;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(127)
				Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(127)
				Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(127)
				Float tmp23 = toCompare->w;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(127)
				Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(127)
				Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(127)
				Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(127)
				Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(127)
				Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(127)
				Float tmp29 = ::Math_obj::abs(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(127)
				Float tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(127)
				Float tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(127)
				Float tmp32 = tolerance;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(127)
				tmp10 = (tmp31 < tmp32);
			}
			else{
				HX_STACK_LINE(127)
				tmp10 = true;
			}
		}
		else{
			HX_STACK_LINE(127)
			tmp10 = false;
		}
		HX_STACK_LINE(127)
		return tmp10;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Vector3D_obj,nearEquals,return )

Void Vector3D_obj::negate( ){
{
		HX_STACK_FRAME("openfl.geom.Vector3D","negate",0xcc1d1288,"openfl.geom.Vector3D.negate","openfl/geom/Vector3D.hx",132,0xc7821076)
		HX_STACK_THIS(this)
		HX_STACK_LINE(134)
		hx::MultEq(this->x,(int)-1);
		HX_STACK_LINE(135)
		hx::MultEq(this->y,(int)-1);
		HX_STACK_LINE(136)
		hx::MultEq(this->z,(int)-1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3D_obj,negate,(void))

Float Vector3D_obj::normalize( ){
	HX_STACK_FRAME("openfl.geom.Vector3D","normalize",0x09bfa687,"openfl.geom.Vector3D.normalize","openfl/geom/Vector3D.hx",141,0xc7821076)
	HX_STACK_THIS(this)
	HX_STACK_LINE(143)
	Float tmp = this->get_length();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(143)
	Float l = tmp;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(145)
	bool tmp1 = (l != (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(145)
	if ((tmp1)){
		HX_STACK_LINE(147)
		hx::DivEq(this->x,l);
		HX_STACK_LINE(148)
		hx::DivEq(this->y,l);
		HX_STACK_LINE(149)
		hx::DivEq(this->z,l);
	}
	HX_STACK_LINE(153)
	Float tmp2 = l;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(153)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3D_obj,normalize,return )

Void Vector3D_obj::project( ){
{
		HX_STACK_FRAME("openfl.geom.Vector3D","project",0xf43def53,"openfl.geom.Vector3D.project","openfl/geom/Vector3D.hx",158,0xc7821076)
		HX_STACK_THIS(this)
		HX_STACK_LINE(160)
		Float tmp = this->w;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(160)
		hx::DivEq(this->x,tmp);
		HX_STACK_LINE(161)
		Float tmp1 = this->w;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(161)
		hx::DivEq(this->y,tmp1);
		HX_STACK_LINE(162)
		Float tmp2 = this->w;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(162)
		hx::DivEq(this->z,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3D_obj,project,(void))

Void Vector3D_obj::scaleBy( Float s){
{
		HX_STACK_FRAME("openfl.geom.Vector3D","scaleBy",0x635a1b7b,"openfl.geom.Vector3D.scaleBy","openfl/geom/Vector3D.hx",167,0xc7821076)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(169)
		hx::MultEq(this->x,s);
		HX_STACK_LINE(170)
		hx::MultEq(this->y,s);
		HX_STACK_LINE(171)
		hx::MultEq(this->z,s);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3D_obj,scaleBy,(void))

Void Vector3D_obj::setTo( Float xa,Float ya,Float za){
{
		HX_STACK_FRAME("openfl.geom.Vector3D","setTo",0x84f87bb7,"openfl.geom.Vector3D.setTo","openfl/geom/Vector3D.hx",176,0xc7821076)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xa,"xa")
		HX_STACK_ARG(ya,"ya")
		HX_STACK_ARG(za,"za")
		HX_STACK_LINE(178)
		this->x = xa;
		HX_STACK_LINE(179)
		this->y = ya;
		HX_STACK_LINE(180)
		this->z = za;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Vector3D_obj,setTo,(void))

::openfl::geom::Vector3D Vector3D_obj::subtract( ::openfl::geom::Vector3D a){
	HX_STACK_FRAME("openfl.geom.Vector3D","subtract",0x823f835a,"openfl.geom.Vector3D.subtract","openfl/geom/Vector3D.hx",185,0xc7821076)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(187)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(187)
	Float tmp1 = a->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(187)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(187)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(187)
	Float tmp4 = a->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(187)
	Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(187)
	Float tmp6 = this->z;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(187)
	Float tmp7 = a->z;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(187)
	Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(187)
	::openfl::geom::Vector3D tmp9 = ::openfl::geom::Vector3D_obj::__new(tmp2,tmp5,tmp8,null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(187)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3D_obj,subtract,return )

::String Vector3D_obj::toString( ){
	HX_STACK_FRAME("openfl.geom.Vector3D","toString",0xc29cdef2,"openfl.geom.Vector3D.toString","openfl/geom/Vector3D.hx",192,0xc7821076)
	HX_STACK_THIS(this)
	HX_STACK_LINE(194)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(194)
	::String tmp1 = (HX_HCSTRING("Vector3D(","\x54","\xb9","\x2e","\x19") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(194)
	::String tmp2 = (tmp1 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(194)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(194)
	::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(194)
	::String tmp5 = (tmp4 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(194)
	Float tmp6 = this->z;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(194)
	::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(194)
	::String tmp8 = (tmp7 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(194)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3D_obj,toString,return )

Float Vector3D_obj::get_length( ){
	HX_STACK_FRAME("openfl.geom.Vector3D","get_length",0x8c11b075,"openfl.geom.Vector3D.get_length","openfl/geom/Vector3D.hx",206,0xc7821076)
	HX_STACK_THIS(this)
	HX_STACK_LINE(208)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(208)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(208)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(208)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(208)
	Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(208)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(208)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(208)
	Float tmp7 = this->z;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(208)
	Float tmp8 = this->z;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(208)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(208)
	Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(208)
	Float tmp11 = ::Math_obj::sqrt(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(208)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3D_obj,get_length,return )

Float Vector3D_obj::get_lengthSquared( ){
	HX_STACK_FRAME("openfl.geom.Vector3D","get_lengthSquared",0xa2b22932,"openfl.geom.Vector3D.get_lengthSquared","openfl/geom/Vector3D.hx",213,0xc7821076)
	HX_STACK_THIS(this)
	HX_STACK_LINE(215)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(215)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(215)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(215)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(215)
	Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(215)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(215)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(215)
	Float tmp7 = this->z;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(215)
	Float tmp8 = this->z;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(215)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(215)
	Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(215)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3D_obj,get_lengthSquared,return )

::openfl::geom::Vector3D Vector3D_obj::X_AXIS;

::openfl::geom::Vector3D Vector3D_obj::Y_AXIS;

::openfl::geom::Vector3D Vector3D_obj::Z_AXIS;

Float Vector3D_obj::angleBetween( ::openfl::geom::Vector3D a,::openfl::geom::Vector3D b){
	HX_STACK_FRAME("openfl.geom.Vector3D","angleBetween",0x8d2e8f7b,"openfl.geom.Vector3D.angleBetween","openfl/geom/Vector3D.hx",36,0xc7821076)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(38)
	Float tmp = a->get_length();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(38)
	Float la = tmp;		HX_STACK_VAR(la,"la");
	HX_STACK_LINE(39)
	Float tmp1 = b->get_length();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(39)
	Float lb = tmp1;		HX_STACK_VAR(lb,"lb");
	HX_STACK_LINE(40)
	::openfl::geom::Vector3D tmp2 = b;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(40)
	Float tmp3 = a->dotProduct(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(40)
	Float dot = tmp3;		HX_STACK_VAR(dot,"dot");
	HX_STACK_LINE(42)
	bool tmp4 = (la != (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(42)
	if ((tmp4)){
		HX_STACK_LINE(44)
		hx::DivEq(dot,la);
	}
	HX_STACK_LINE(48)
	bool tmp5 = (lb != (int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(48)
	if ((tmp5)){
		HX_STACK_LINE(50)
		hx::DivEq(dot,lb);
	}
	HX_STACK_LINE(54)
	Float tmp6 = dot;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(54)
	Float tmp7 = ::Math_obj::acos(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(54)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector3D_obj,angleBetween,return )

Float Vector3D_obj::distance( ::openfl::geom::Vector3D pt1,::openfl::geom::Vector3D pt2){
	HX_STACK_FRAME("openfl.geom.Vector3D","distance",0xf627a17b,"openfl.geom.Vector3D.distance","openfl/geom/Vector3D.hx",91,0xc7821076)
	HX_STACK_ARG(pt1,"pt1")
	HX_STACK_ARG(pt2,"pt2")
	HX_STACK_LINE(93)
	Float tmp = (pt2->x - pt1->x);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(93)
	Float x = tmp;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(94)
	Float tmp1 = (pt2->y - pt1->y);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(94)
	Float y = tmp1;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(95)
	Float tmp2 = (pt2->z - pt1->z);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(95)
	Float z = tmp2;		HX_STACK_VAR(z,"z");
	HX_STACK_LINE(97)
	Float tmp3 = (x * x);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(97)
	Float tmp4 = (y * y);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(97)
	Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(97)
	Float tmp6 = (z * z);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(97)
	Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(97)
	Float tmp8 = ::Math_obj::sqrt(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(97)
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector3D_obj,distance,return )

::openfl::geom::Vector3D Vector3D_obj::get_X_AXIS( ){
	HX_STACK_FRAME("openfl.geom.Vector3D","get_X_AXIS",0xfabcdcb7,"openfl.geom.Vector3D.get_X_AXIS","openfl/geom/Vector3D.hx",220,0xc7821076)
	HX_STACK_LINE(222)
	::openfl::geom::Vector3D tmp = ::openfl::geom::Vector3D_obj::__new((int)1,(int)0,(int)0,null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(222)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Vector3D_obj,get_X_AXIS,return )

::openfl::geom::Vector3D Vector3D_obj::get_Y_AXIS( ){
	HX_STACK_FRAME("openfl.geom.Vector3D","get_Y_AXIS",0x61183916,"openfl.geom.Vector3D.get_Y_AXIS","openfl/geom/Vector3D.hx",227,0xc7821076)
	HX_STACK_LINE(229)
	::openfl::geom::Vector3D tmp = ::openfl::geom::Vector3D_obj::__new((int)0,(int)1,(int)0,null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(229)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Vector3D_obj,get_Y_AXIS,return )

::openfl::geom::Vector3D Vector3D_obj::get_Z_AXIS( ){
	HX_STACK_FRAME("openfl.geom.Vector3D","get_Z_AXIS",0xc7739575,"openfl.geom.Vector3D.get_Z_AXIS","openfl/geom/Vector3D.hx",234,0xc7821076)
	HX_STACK_LINE(236)
	::openfl::geom::Vector3D tmp = ::openfl::geom::Vector3D_obj::__new((int)0,(int)0,(int)1,null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(236)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Vector3D_obj,get_Z_AXIS,return )


Vector3D_obj::Vector3D_obj()
{
}

Dynamic Vector3D_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"w") ) { return w; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"z") ) { return z; }
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
		if (HX_FIELD_EQ(inName,"negate") ) { return negate_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"project") ) { return project_dyn(); }
		if (HX_FIELD_EQ(inName,"scaleBy") ) { return scaleBy_dyn(); }
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
		if (HX_FIELD_EQ(inName,"dotProduct") ) { return dotProduct_dyn(); }
		if (HX_FIELD_EQ(inName,"nearEquals") ) { return nearEquals_dyn(); }
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"decrementBy") ) { return decrementBy_dyn(); }
		if (HX_FIELD_EQ(inName,"incrementBy") ) { return incrementBy_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"crossProduct") ) { return crossProduct_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"lengthSquared") ) { return inCallProp == hx::paccAlways ? get_lengthSquared() : lengthSquared; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_lengthSquared") ) { return get_lengthSquared_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Vector3D_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"X_AXIS") ) { outValue = inCallProp == hx::paccAlways ? get_X_AXIS() : X_AXIS; return true; }
		if (HX_FIELD_EQ(inName,"Y_AXIS") ) { outValue = inCallProp == hx::paccAlways ? get_Y_AXIS() : Y_AXIS; return true; }
		if (HX_FIELD_EQ(inName,"Z_AXIS") ) { outValue = inCallProp == hx::paccAlways ? get_Z_AXIS() : Z_AXIS; return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { outValue = distance_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_X_AXIS") ) { outValue = get_X_AXIS_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_Y_AXIS") ) { outValue = get_Y_AXIS_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_Z_AXIS") ) { outValue = get_Z_AXIS_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"angleBetween") ) { outValue = angleBetween_dyn(); return true;  }
	}
	return false;
}

Dynamic Vector3D_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"w") ) { w=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"z") ) { z=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"lengthSquared") ) { lengthSquared=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Vector3D_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"X_AXIS") ) { X_AXIS=ioValue.Cast< ::openfl::geom::Vector3D >(); return true; }
		if (HX_FIELD_EQ(inName,"Y_AXIS") ) { Y_AXIS=ioValue.Cast< ::openfl::geom::Vector3D >(); return true; }
		if (HX_FIELD_EQ(inName,"Z_AXIS") ) { Z_AXIS=ioValue.Cast< ::openfl::geom::Vector3D >(); return true; }
	}
	return false;
}

void Vector3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("lengthSquared","\xe1","\x24","\x45","\x35"));
	outFields->push(HX_HCSTRING("w","\x77","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("z","\x7a","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Vector3D_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{hx::fsFloat,(int)offsetof(Vector3D_obj,lengthSquared),HX_HCSTRING("lengthSquared","\xe1","\x24","\x45","\x35")},
	{hx::fsFloat,(int)offsetof(Vector3D_obj,w),HX_HCSTRING("w","\x77","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Vector3D_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Vector3D_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Vector3D_obj,z),HX_HCSTRING("z","\x7a","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::openfl::geom::Vector3D*/ ,(void *) &Vector3D_obj::X_AXIS,HX_HCSTRING("X_AXIS","\x28","\xc1","\xb2","\x0d")},
	{hx::fsObject /*::openfl::geom::Vector3D*/ ,(void *) &Vector3D_obj::Y_AXIS,HX_HCSTRING("Y_AXIS","\x87","\x1d","\x0e","\x74")},
	{hx::fsObject /*::openfl::geom::Vector3D*/ ,(void *) &Vector3D_obj::Z_AXIS,HX_HCSTRING("Z_AXIS","\xe6","\x79","\x69","\xda")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("lengthSquared","\xe1","\x24","\x45","\x35"),
	HX_HCSTRING("w","\x77","\x00","\x00","\x00"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("z","\x7a","\x00","\x00","\x00"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("copyFrom","\xbf","\x0b","\x61","\xc8"),
	HX_HCSTRING("crossProduct","\x8f","\xa7","\xc9","\x63"),
	HX_HCSTRING("decrementBy","\xca","\x1a","\x7a","\xad"),
	HX_HCSTRING("dotProduct","\xa6","\x27","\xf0","\x3d"),
	HX_HCSTRING("equals","\x3f","\xee","\xf2","\xbf"),
	HX_HCSTRING("incrementBy","\xe6","\x69","\x70","\xf4"),
	HX_HCSTRING("nearEquals","\x47","\x71","\x71","\xfe"),
	HX_HCSTRING("negate","\xc2","\x41","\x19","\x67"),
	HX_HCSTRING("normalize","\x8d","\x37","\xa1","\xab"),
	HX_HCSTRING("project","\xd9","\x12","\xeb","\xf5"),
	HX_HCSTRING("scaleBy","\x01","\x3f","\x07","\x65"),
	HX_HCSTRING("setTo","\xbd","\x91","\x2f","\x7a"),
	HX_HCSTRING("subtract","\x14","\x75","\x11","\xf8"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("get_lengthSquared","\x38","\x30","\xb5","\x3b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Vector3D_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Vector3D_obj::X_AXIS,"X_AXIS");
	HX_MARK_MEMBER_NAME(Vector3D_obj::Y_AXIS,"Y_AXIS");
	HX_MARK_MEMBER_NAME(Vector3D_obj::Z_AXIS,"Z_AXIS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Vector3D_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Vector3D_obj::X_AXIS,"X_AXIS");
	HX_VISIT_MEMBER_NAME(Vector3D_obj::Y_AXIS,"Y_AXIS");
	HX_VISIT_MEMBER_NAME(Vector3D_obj::Z_AXIS,"Z_AXIS");
};

#endif

hx::Class Vector3D_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("X_AXIS","\x28","\xc1","\xb2","\x0d"),
	HX_HCSTRING("Y_AXIS","\x87","\x1d","\x0e","\x74"),
	HX_HCSTRING("Z_AXIS","\xe6","\x79","\x69","\xda"),
	HX_HCSTRING("angleBetween","\x35","\xe6","\xd4","\x69"),
	HX_HCSTRING("distance","\x35","\x93","\xf9","\x6b"),
	HX_HCSTRING("get_X_AXIS","\xf1","\x30","\x3a","\xfe"),
	HX_HCSTRING("get_Y_AXIS","\x50","\x8d","\x95","\x64"),
	HX_HCSTRING("get_Z_AXIS","\xaf","\xe9","\xf0","\xca"),
	::String(null()) };

void Vector3D_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.geom.Vector3D","\xe8","\x32","\xf9","\x44");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Vector3D_obj::__GetStatic;
	__mClass->mSetStaticField = &Vector3D_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Vector3D_obj >;
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
} // end namespace geom
