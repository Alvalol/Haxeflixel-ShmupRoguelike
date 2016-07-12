#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_openfl__legacy_geom_Matrix
#include <openfl/_legacy/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Vector3D
#include <openfl/geom/Vector3D.h>
#endif
namespace openfl{
namespace _legacy{
namespace geom{

Void Matrix_obj::__construct(hx::Null< Float >  __o_a,hx::Null< Float >  __o_b,hx::Null< Float >  __o_c,hx::Null< Float >  __o_d,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty)
{
HX_STACK_FRAME("openfl._legacy.geom.Matrix","new",0x800630e1,"openfl._legacy.geom.Matrix.new","openfl/_legacy/geom/Matrix.hx",18,0x35542610)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_a,"a")
HX_STACK_ARG(__o_b,"b")
HX_STACK_ARG(__o_c,"c")
HX_STACK_ARG(__o_d,"d")
HX_STACK_ARG(__o_tx,"tx")
HX_STACK_ARG(__o_ty,"ty")
Float a = __o_a.Default(1);
Float b = __o_b.Default(0);
Float c = __o_c.Default(0);
Float d = __o_d.Default(1);
Float tx = __o_tx.Default(0);
Float ty = __o_ty.Default(0);
{
	HX_STACK_LINE(20)
	this->a = a;
	HX_STACK_LINE(21)
	this->b = b;
	HX_STACK_LINE(22)
	this->c = c;
	HX_STACK_LINE(23)
	this->d = d;
	HX_STACK_LINE(24)
	this->tx = tx;
	HX_STACK_LINE(25)
	this->ty = ty;
}
;
	return null();
}

//Matrix_obj::~Matrix_obj() { }

Dynamic Matrix_obj::__CreateEmpty() { return  new Matrix_obj; }
hx::ObjectPtr< Matrix_obj > Matrix_obj::__new(hx::Null< Float >  __o_a,hx::Null< Float >  __o_b,hx::Null< Float >  __o_c,hx::Null< Float >  __o_d,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty)
{  hx::ObjectPtr< Matrix_obj > _result_ = new Matrix_obj();
	_result_->__construct(__o_a,__o_b,__o_c,__o_d,__o_tx,__o_ty);
	return _result_;}

Dynamic Matrix_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Matrix_obj > _result_ = new Matrix_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _result_;}

::openfl::_legacy::geom::Matrix Matrix_obj::clone( ){
	HX_STACK_FRAME("openfl._legacy.geom.Matrix","clone",0xe1cf561e,"openfl._legacy.geom.Matrix.clone","openfl/_legacy/geom/Matrix.hx",30,0x35542610)
	HX_STACK_THIS(this)
	HX_STACK_LINE(32)
	Float tmp = this->a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	Float tmp1 = this->b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(32)
	Float tmp2 = this->c;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(32)
	Float tmp3 = this->d;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(32)
	Float tmp4 = this->tx;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(32)
	Float tmp5 = this->ty;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(32)
	::openfl::_legacy::geom::Matrix tmp6 = ::openfl::_legacy::geom::Matrix_obj::__new(tmp,tmp1,tmp2,tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(32)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,clone,return )

Void Matrix_obj::concat( ::openfl::_legacy::geom::Matrix m){
{
		HX_STACK_FRAME("openfl._legacy.geom.Matrix","concat",0x6d1e2f33,"openfl._legacy.geom.Matrix.concat","openfl/_legacy/geom/Matrix.hx",37,0x35542610)
		HX_STACK_THIS(this)
		HX_STACK_ARG(m,"m")
		HX_STACK_LINE(39)
		Float tmp = this->a;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(39)
		Float tmp1 = m->a;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(39)
		Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(39)
		Float tmp3 = this->b;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(39)
		Float tmp4 = m->c;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(39)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(39)
		Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(39)
		Float a1 = tmp6;		HX_STACK_VAR(a1,"a1");
		HX_STACK_LINE(40)
		Float tmp7 = this->a;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(40)
		Float tmp8 = m->b;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(40)
		Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(40)
		Float tmp10 = this->b;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(40)
		Float tmp11 = m->d;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(40)
		Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(40)
		Float tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(40)
		this->b = tmp13;
		HX_STACK_LINE(41)
		this->a = a1;
		HX_STACK_LINE(43)
		Float tmp14 = this->c;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(43)
		Float tmp15 = m->a;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(43)
		Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(43)
		Float tmp17 = this->d;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(43)
		Float tmp18 = m->c;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(43)
		Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(43)
		Float tmp20 = (tmp16 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(43)
		Float c1 = tmp20;		HX_STACK_VAR(c1,"c1");
		HX_STACK_LINE(44)
		Float tmp21 = this->c;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(44)
		Float tmp22 = m->b;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(44)
		Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(44)
		Float tmp24 = this->d;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(44)
		Float tmp25 = m->d;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(44)
		Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(44)
		Float tmp27 = (tmp23 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(44)
		this->d = tmp27;
		HX_STACK_LINE(46)
		this->c = c1;
		HX_STACK_LINE(48)
		Float tmp28 = this->tx;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(48)
		Float tmp29 = m->a;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(48)
		Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(48)
		Float tmp31 = this->ty;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(48)
		Float tmp32 = m->c;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(48)
		Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(48)
		Float tmp34 = (tmp30 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(48)
		Float tmp35 = m->tx;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(48)
		Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(48)
		Float tx1 = tmp36;		HX_STACK_VAR(tx1,"tx1");
		HX_STACK_LINE(49)
		Float tmp37 = this->tx;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(49)
		Float tmp38 = m->b;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(49)
		Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(49)
		Float tmp40 = this->ty;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(49)
		Float tmp41 = m->d;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(49)
		Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(49)
		Float tmp43 = (tmp39 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(49)
		Float tmp44 = m->ty;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(49)
		Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(49)
		this->ty = tmp45;
		HX_STACK_LINE(50)
		this->tx = tx1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,concat,(void))

Void Matrix_obj::copyColumnFrom( int column,::openfl::geom::Vector3D vector3D){
{
		HX_STACK_FRAME("openfl._legacy.geom.Matrix","copyColumnFrom",0x3ed57494,"openfl._legacy.geom.Matrix.copyColumnFrom","openfl/_legacy/geom/Matrix.hx",55,0x35542610)
		HX_STACK_THIS(this)
		HX_STACK_ARG(column,"column")
		HX_STACK_ARG(vector3D,"vector3D")
		HX_STACK_LINE(57)
		bool tmp = (column > (int)2);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(57)
		if ((tmp)){
			HX_STACK_LINE(59)
			::String tmp1 = (HX_HCSTRING("Column ","\x6a","\xd4","\xaa","\xc0") + column);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(59)
			::String tmp2 = (tmp1 + HX_HCSTRING(" out of bounds (2)","\xeb","\xc3","\xf0","\xde"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(59)
			HX_STACK_DO_THROW(tmp2);
		}
		else{
			HX_STACK_LINE(61)
			bool tmp1 = (column == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(61)
			if ((tmp1)){
				HX_STACK_LINE(63)
				this->a = vector3D->x;
				HX_STACK_LINE(64)
				this->c = vector3D->y;
			}
			else{
				HX_STACK_LINE(66)
				bool tmp2 = (column == (int)1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(66)
				if ((tmp2)){
					HX_STACK_LINE(68)
					this->b = vector3D->x;
					HX_STACK_LINE(69)
					this->d = vector3D->y;
				}
				else{
					HX_STACK_LINE(73)
					this->tx = vector3D->x;
					HX_STACK_LINE(74)
					this->ty = vector3D->y;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,copyColumnFrom,(void))

Void Matrix_obj::copyColumnTo( int column,::openfl::geom::Vector3D vector3D){
{
		HX_STACK_FRAME("openfl._legacy.geom.Matrix","copyColumnTo",0xc37e3625,"openfl._legacy.geom.Matrix.copyColumnTo","openfl/_legacy/geom/Matrix.hx",81,0x35542610)
		HX_STACK_THIS(this)
		HX_STACK_ARG(column,"column")
		HX_STACK_ARG(vector3D,"vector3D")
		HX_STACK_LINE(83)
		bool tmp = (column > (int)2);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(83)
		if ((tmp)){
			HX_STACK_LINE(85)
			::String tmp1 = (HX_HCSTRING("Column ","\x6a","\xd4","\xaa","\xc0") + column);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(85)
			::String tmp2 = (tmp1 + HX_HCSTRING(" out of bounds (2)","\xeb","\xc3","\xf0","\xde"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(85)
			HX_STACK_DO_THROW(tmp2);
		}
		else{
			HX_STACK_LINE(87)
			bool tmp1 = (column == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(87)
			if ((tmp1)){
				HX_STACK_LINE(89)
				Float tmp2 = this->a;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(89)
				vector3D->x = tmp2;
				HX_STACK_LINE(90)
				Float tmp3 = this->c;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(90)
				vector3D->y = tmp3;
				HX_STACK_LINE(91)
				vector3D->z = (int)0;
			}
			else{
				HX_STACK_LINE(93)
				bool tmp2 = (column == (int)1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(93)
				if ((tmp2)){
					HX_STACK_LINE(95)
					Float tmp3 = this->b;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(95)
					vector3D->x = tmp3;
					HX_STACK_LINE(96)
					Float tmp4 = this->d;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(96)
					vector3D->y = tmp4;
					HX_STACK_LINE(97)
					vector3D->z = (int)0;
				}
				else{
					HX_STACK_LINE(101)
					Float tmp3 = this->tx;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(101)
					vector3D->x = tmp3;
					HX_STACK_LINE(102)
					Float tmp4 = this->ty;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(102)
					vector3D->y = tmp4;
					HX_STACK_LINE(103)
					vector3D->z = (int)1;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,copyColumnTo,(void))

Void Matrix_obj::copyFrom( ::openfl::_legacy::geom::Matrix other){
{
		HX_STACK_FRAME("openfl._legacy.geom.Matrix","copyFrom",0xfa1c379e,"openfl._legacy.geom.Matrix.copyFrom","openfl/_legacy/geom/Matrix.hx",110,0x35542610)
		HX_STACK_THIS(this)
		HX_STACK_ARG(other,"other")
		HX_STACK_LINE(112)
		this->a = other->a;
		HX_STACK_LINE(113)
		this->b = other->b;
		HX_STACK_LINE(114)
		this->c = other->c;
		HX_STACK_LINE(115)
		this->d = other->d;
		HX_STACK_LINE(116)
		this->tx = other->tx;
		HX_STACK_LINE(117)
		this->ty = other->ty;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,copyFrom,(void))

Void Matrix_obj::copyRowFrom( int row,::openfl::geom::Vector3D vector3D){
{
		HX_STACK_FRAME("openfl._legacy.geom.Matrix","copyRowFrom",0x44438ef0,"openfl._legacy.geom.Matrix.copyRowFrom","openfl/_legacy/geom/Matrix.hx",122,0x35542610)
		HX_STACK_THIS(this)
		HX_STACK_ARG(row,"row")
		HX_STACK_ARG(vector3D,"vector3D")
		HX_STACK_LINE(124)
		bool tmp = (row > (int)2);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(124)
		if ((tmp)){
			HX_STACK_LINE(126)
			::String tmp1 = (HX_HCSTRING("Row ","\xe6","\x20","\x88","\x36") + row);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(126)
			::String tmp2 = (tmp1 + HX_HCSTRING(" out of bounds (2)","\xeb","\xc3","\xf0","\xde"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(126)
			HX_STACK_DO_THROW(tmp2);
		}
		else{
			HX_STACK_LINE(128)
			bool tmp1 = (row == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(128)
			if ((tmp1)){
				HX_STACK_LINE(130)
				this->a = vector3D->x;
				HX_STACK_LINE(131)
				this->c = vector3D->y;
			}
			else{
				HX_STACK_LINE(133)
				bool tmp2 = (row == (int)1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(133)
				if ((tmp2)){
					HX_STACK_LINE(135)
					this->b = vector3D->x;
					HX_STACK_LINE(136)
					this->d = vector3D->y;
				}
				else{
					HX_STACK_LINE(140)
					this->tx = vector3D->x;
					HX_STACK_LINE(141)
					this->ty = vector3D->y;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,copyRowFrom,(void))

Void Matrix_obj::copyRowTo( int row,::openfl::geom::Vector3D vector3D){
{
		HX_STACK_FRAME("openfl._legacy.geom.Matrix","copyRowTo",0xc56dc181,"openfl._legacy.geom.Matrix.copyRowTo","openfl/_legacy/geom/Matrix.hx",148,0x35542610)
		HX_STACK_THIS(this)
		HX_STACK_ARG(row,"row")
		HX_STACK_ARG(vector3D,"vector3D")
		HX_STACK_LINE(150)
		bool tmp = (row > (int)2);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(150)
		if ((tmp)){
			HX_STACK_LINE(152)
			::String tmp1 = (HX_HCSTRING("Row ","\xe6","\x20","\x88","\x36") + row);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(152)
			::String tmp2 = (tmp1 + HX_HCSTRING(" out of bounds (2)","\xeb","\xc3","\xf0","\xde"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(152)
			HX_STACK_DO_THROW(tmp2);
		}
		else{
			HX_STACK_LINE(154)
			bool tmp1 = (row == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(154)
			if ((tmp1)){
				HX_STACK_LINE(156)
				Float tmp2 = this->a;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(156)
				vector3D->x = tmp2;
				HX_STACK_LINE(157)
				Float tmp3 = this->b;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(157)
				vector3D->y = tmp3;
				HX_STACK_LINE(158)
				Float tmp4 = this->tx;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(158)
				vector3D->z = tmp4;
			}
			else{
				HX_STACK_LINE(160)
				bool tmp2 = (row == (int)1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(160)
				if ((tmp2)){
					HX_STACK_LINE(162)
					Float tmp3 = this->c;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(162)
					vector3D->x = tmp3;
					HX_STACK_LINE(163)
					Float tmp4 = this->d;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(163)
					vector3D->y = tmp4;
					HX_STACK_LINE(164)
					Float tmp5 = this->ty;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(164)
					vector3D->z = tmp5;
				}
				else{
					HX_STACK_LINE(168)
					vector3D->setTo((int)0,(int)0,(int)1);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,copyRowTo,(void))

Void Matrix_obj::createBox( Float scaleX,Float scaleY,hx::Null< Float >  __o_rotation,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty){
Float rotation = __o_rotation.Default(0);
Float tx = __o_tx.Default(0);
Float ty = __o_ty.Default(0);
	HX_STACK_FRAME("openfl._legacy.geom.Matrix","createBox",0x9be3cbb0,"openfl._legacy.geom.Matrix.createBox","openfl/_legacy/geom/Matrix.hx",175,0x35542610)
	HX_STACK_THIS(this)
	HX_STACK_ARG(scaleX,"scaleX")
	HX_STACK_ARG(scaleY,"scaleY")
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_ARG(tx,"tx")
	HX_STACK_ARG(ty,"ty")
{
		HX_STACK_LINE(182)
		bool tmp = (rotation != (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(182)
		if ((tmp)){
			HX_STACK_LINE(184)
			Float tmp1 = rotation;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(184)
			Float tmp2 = ::Math_obj::cos(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(184)
			Float cos = tmp2;		HX_STACK_VAR(cos,"cos");
			HX_STACK_LINE(185)
			Float tmp3 = rotation;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(185)
			Float tmp4 = ::Math_obj::sin(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(185)
			Float sin = tmp4;		HX_STACK_VAR(sin,"sin");
			HX_STACK_LINE(187)
			Float tmp5 = (cos * scaleX);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(187)
			this->a = tmp5;
			HX_STACK_LINE(188)
			Float tmp6 = (sin * scaleY);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(188)
			this->b = tmp6;
			HX_STACK_LINE(189)
			Float tmp7 = sin;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(189)
			Float tmp8 = -(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(189)
			Float tmp9 = scaleX;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(189)
			Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(189)
			this->c = tmp10;
			HX_STACK_LINE(190)
			Float tmp11 = (cos * scaleY);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(190)
			this->d = tmp11;
		}
		else{
			HX_STACK_LINE(194)
			this->a = scaleX;
			HX_STACK_LINE(195)
			this->b = (int)0;
			HX_STACK_LINE(196)
			this->c = (int)0;
			HX_STACK_LINE(197)
			this->d = scaleY;
		}
		HX_STACK_LINE(201)
		this->tx = tx;
		HX_STACK_LINE(202)
		this->ty = ty;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Matrix_obj,createBox,(void))

Void Matrix_obj::createGradientBox( Float width,Float height,hx::Null< Float >  __o_rotation,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty){
Float rotation = __o_rotation.Default(0);
Float tx = __o_tx.Default(0);
Float ty = __o_ty.Default(0);
	HX_STACK_FRAME("openfl._legacy.geom.Matrix","createGradientBox",0x67a6cca0,"openfl._legacy.geom.Matrix.createGradientBox","openfl/_legacy/geom/Matrix.hx",207,0x35542610)
	HX_STACK_THIS(this)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_ARG(tx,"tx")
	HX_STACK_ARG(ty,"ty")
{
		HX_STACK_LINE(209)
		Float tmp = (Float(width) / Float(((Float)1638.4)));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(209)
		this->a = tmp;
		HX_STACK_LINE(210)
		Float tmp1 = (Float(height) / Float(((Float)1638.4)));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(210)
		this->d = tmp1;
		HX_STACK_LINE(212)
		bool tmp2 = (rotation != ((Float)0.0));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(212)
		if ((tmp2)){
			HX_STACK_LINE(214)
			Float tmp3 = rotation;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(214)
			Float tmp4 = ::Math_obj::cos(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(214)
			Float cos = tmp4;		HX_STACK_VAR(cos,"cos");
			HX_STACK_LINE(215)
			Float tmp5 = rotation;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(215)
			Float tmp6 = ::Math_obj::sin(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(215)
			Float sin = tmp6;		HX_STACK_VAR(sin,"sin");
			HX_STACK_LINE(216)
			Float tmp7 = sin;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(216)
			Float tmp8 = this->d;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(216)
			Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(216)
			this->b = tmp9;
			HX_STACK_LINE(217)
			Float tmp10 = sin;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(217)
			Float tmp11 = -(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(217)
			Float tmp12 = this->a;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(217)
			Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(217)
			this->c = tmp13;
			HX_STACK_LINE(218)
			hx::MultEq(this->a,cos);
			HX_STACK_LINE(219)
			hx::MultEq(this->d,cos);
		}
		else{
			HX_STACK_LINE(223)
			Float tmp3 = this->c = (int)0;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(223)
			this->b = tmp3;
		}
		HX_STACK_LINE(227)
		Float tmp3 = tx;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(227)
		Float tmp4 = (Float(width) / Float((int)2));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(227)
		Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(227)
		this->tx = tmp5;
		HX_STACK_LINE(228)
		Float tmp6 = ty;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(228)
		Float tmp7 = (Float(height) / Float((int)2));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(228)
		Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(228)
		this->ty = tmp8;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Matrix_obj,createGradientBox,(void))

::openfl::_legacy::geom::Point Matrix_obj::deltaTransformPoint( ::openfl::_legacy::geom::Point point){
	HX_STACK_FRAME("openfl._legacy.geom.Matrix","deltaTransformPoint",0x05467fdd,"openfl._legacy.geom.Matrix.deltaTransformPoint","openfl/_legacy/geom/Matrix.hx",233,0x35542610)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(235)
	Float tmp = point->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(235)
	Float tmp1 = this->a;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(235)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(235)
	Float tmp3 = point->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(235)
	Float tmp4 = this->c;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(235)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(235)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(235)
	Float tmp7 = point->x;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(235)
	Float tmp8 = this->b;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(235)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(235)
	Float tmp10 = point->y;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(235)
	Float tmp11 = this->d;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(235)
	Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(235)
	Float tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(235)
	::openfl::_legacy::geom::Point tmp14 = ::openfl::_legacy::geom::Point_obj::__new(tmp6,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(235)
	return tmp14;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,deltaTransformPoint,return )

bool Matrix_obj::equals( Dynamic matrix){
	HX_STACK_FRAME("openfl._legacy.geom.Matrix","equals",0x6541145e,"openfl._legacy.geom.Matrix.equals","openfl/_legacy/geom/Matrix.hx",240,0x35542610)
	HX_STACK_THIS(this)
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_LINE(242)
	bool tmp = (matrix != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(242)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(242)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(242)
	if ((tmp1)){
		HX_STACK_LINE(242)
		Float tmp3 = this->tx;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(242)
		Float tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(242)
		Float tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(242)
		Float tmp6 = matrix->__Field(HX_HCSTRING("tx","\x84","\x65","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(242)
		tmp2 = (tmp5 == tmp6);
	}
	else{
		HX_STACK_LINE(242)
		tmp2 = false;
	}
	HX_STACK_LINE(242)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(242)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(242)
	if ((tmp3)){
		HX_STACK_LINE(242)
		Float tmp5 = this->ty;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(242)
		Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(242)
		Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(242)
		Float tmp8 = matrix->__Field(HX_HCSTRING("ty","\x85","\x65","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(242)
		tmp4 = (tmp7 == tmp8);
	}
	else{
		HX_STACK_LINE(242)
		tmp4 = false;
	}
	HX_STACK_LINE(242)
	bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(242)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(242)
	if ((tmp5)){
		HX_STACK_LINE(242)
		Float tmp7 = this->a;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(242)
		Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(242)
		Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(242)
		Float tmp10 = matrix->__Field(HX_HCSTRING("a","\x61","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(242)
		tmp6 = (tmp9 == tmp10);
	}
	else{
		HX_STACK_LINE(242)
		tmp6 = false;
	}
	HX_STACK_LINE(242)
	bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(242)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(242)
	if ((tmp7)){
		HX_STACK_LINE(242)
		Float tmp9 = this->b;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(242)
		Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(242)
		Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(242)
		Float tmp12 = matrix->__Field(HX_HCSTRING("b","\x62","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(242)
		tmp8 = (tmp11 == tmp12);
	}
	else{
		HX_STACK_LINE(242)
		tmp8 = false;
	}
	HX_STACK_LINE(242)
	bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(242)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(242)
	if ((tmp9)){
		HX_STACK_LINE(242)
		Float tmp11 = this->c;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(242)
		Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(242)
		Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(242)
		Float tmp14 = matrix->__Field(HX_HCSTRING("c","\x63","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(242)
		tmp10 = (tmp13 == tmp14);
	}
	else{
		HX_STACK_LINE(242)
		tmp10 = false;
	}
	HX_STACK_LINE(242)
	bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(242)
	if ((tmp10)){
		HX_STACK_LINE(242)
		Float tmp12 = this->d;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(242)
		Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(242)
		Float tmp14 = matrix->__Field(HX_HCSTRING("d","\x64","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(242)
		tmp11 = (tmp13 == tmp14);
	}
	else{
		HX_STACK_LINE(242)
		tmp11 = false;
	}
	HX_STACK_LINE(242)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,equals,return )

Void Matrix_obj::identity( ){
{
		HX_STACK_FRAME("openfl._legacy.geom.Matrix","identity",0xeaea711d,"openfl._legacy.geom.Matrix.identity","openfl/_legacy/geom/Matrix.hx",247,0x35542610)
		HX_STACK_THIS(this)
		HX_STACK_LINE(249)
		this->a = (int)1;
		HX_STACK_LINE(250)
		this->b = (int)0;
		HX_STACK_LINE(251)
		this->c = (int)0;
		HX_STACK_LINE(252)
		this->d = (int)1;
		HX_STACK_LINE(253)
		this->tx = (int)0;
		HX_STACK_LINE(254)
		this->ty = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,identity,(void))

::openfl::_legacy::geom::Matrix Matrix_obj::invert( ){
	HX_STACK_FRAME("openfl._legacy.geom.Matrix","invert",0x45270d35,"openfl._legacy.geom.Matrix.invert","openfl/_legacy/geom/Matrix.hx",259,0x35542610)
	HX_STACK_THIS(this)
	HX_STACK_LINE(261)
	Float tmp = this->a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(261)
	Float tmp1 = this->d;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(261)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(261)
	Float tmp3 = this->b;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(261)
	Float tmp4 = this->c;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(261)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(261)
	Float tmp6 = (tmp2 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(261)
	Float norm = tmp6;		HX_STACK_VAR(norm,"norm");
	HX_STACK_LINE(263)
	bool tmp7 = (norm == (int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(263)
	if ((tmp7)){
		HX_STACK_LINE(265)
		Float tmp8 = this->d = (int)0;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(265)
		Float tmp9 = this->c = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(265)
		Float tmp10 = this->b = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(265)
		this->a = tmp10;
		HX_STACK_LINE(266)
		Float tmp11 = this->tx;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(266)
		Float tmp12 = -(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(266)
		this->tx = tmp12;
		HX_STACK_LINE(267)
		Float tmp13 = this->ty;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(267)
		Float tmp14 = -(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(267)
		this->ty = tmp14;
	}
	else{
		HX_STACK_LINE(271)
		Float tmp8 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(271)
		norm = tmp8;
		HX_STACK_LINE(272)
		Float tmp9 = this->d;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(272)
		Float tmp10 = norm;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(272)
		Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(272)
		Float a1 = tmp11;		HX_STACK_VAR(a1,"a1");
		HX_STACK_LINE(273)
		Float tmp12 = this->a;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(273)
		Float tmp13 = norm;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(273)
		Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(273)
		this->d = tmp14;
		HX_STACK_LINE(274)
		this->a = a1;
		HX_STACK_LINE(275)
		Float tmp15 = norm;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(275)
		Float tmp16 = -(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(275)
		hx::MultEq(this->b,tmp16);
		HX_STACK_LINE(276)
		Float tmp17 = norm;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(276)
		Float tmp18 = -(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(276)
		hx::MultEq(this->c,tmp18);
		HX_STACK_LINE(278)
		Float tmp19 = this->a;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(278)
		Float tmp20 = -(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(278)
		Float tmp21 = this->tx;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(278)
		Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(278)
		Float tmp23 = this->c;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(278)
		Float tmp24 = this->ty;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(278)
		Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(278)
		Float tmp26 = (tmp22 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(278)
		Float tx1 = tmp26;		HX_STACK_VAR(tx1,"tx1");
		HX_STACK_LINE(279)
		Float tmp27 = this->b;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(279)
		Float tmp28 = -(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(279)
		Float tmp29 = this->tx;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(279)
		Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(279)
		Float tmp31 = this->d;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(279)
		Float tmp32 = this->ty;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(279)
		Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(279)
		Float tmp34 = (tmp30 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(279)
		this->ty = tmp34;
		HX_STACK_LINE(280)
		this->tx = tx1;
	}
	HX_STACK_LINE(284)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,invert,return )

::openfl::_legacy::geom::Matrix Matrix_obj::mult( ::openfl::_legacy::geom::Matrix m){
	HX_STACK_FRAME("openfl._legacy.geom.Matrix","mult",0x84c7784f,"openfl._legacy.geom.Matrix.mult","openfl/_legacy/geom/Matrix.hx",289,0x35542610)
	HX_STACK_THIS(this)
	HX_STACK_ARG(m,"m")
	HX_STACK_LINE(291)
	::openfl::_legacy::geom::Matrix tmp = ::openfl::_legacy::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(291)
	::openfl::_legacy::geom::Matrix result = tmp;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(293)
	Float tmp1 = this->a;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(293)
	Float tmp2 = m->a;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(293)
	Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(293)
	Float tmp4 = this->b;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(293)
	Float tmp5 = m->c;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(293)
	Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(293)
	Float tmp7 = (tmp3 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(293)
	result->a = tmp7;
	HX_STACK_LINE(294)
	Float tmp8 = this->a;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(294)
	Float tmp9 = m->b;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(294)
	Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(294)
	Float tmp11 = this->b;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(294)
	Float tmp12 = m->d;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(294)
	Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(294)
	Float tmp14 = (tmp10 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(294)
	result->b = tmp14;
	HX_STACK_LINE(295)
	Float tmp15 = this->c;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(295)
	Float tmp16 = m->a;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(295)
	Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(295)
	Float tmp18 = this->d;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(295)
	Float tmp19 = m->c;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(295)
	Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(295)
	Float tmp21 = (tmp17 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(295)
	result->c = tmp21;
	HX_STACK_LINE(296)
	Float tmp22 = this->c;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(296)
	Float tmp23 = m->b;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(296)
	Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(296)
	Float tmp25 = this->d;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(296)
	Float tmp26 = m->d;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(296)
	Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(296)
	Float tmp28 = (tmp24 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(296)
	result->d = tmp28;
	HX_STACK_LINE(298)
	Float tmp29 = this->tx;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(298)
	Float tmp30 = m->a;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(298)
	Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(298)
	Float tmp32 = this->ty;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(298)
	Float tmp33 = m->c;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(298)
	Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(298)
	Float tmp35 = (tmp31 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(298)
	Float tmp36 = m->tx;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(298)
	Float tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(298)
	result->tx = tmp37;
	HX_STACK_LINE(299)
	Float tmp38 = this->tx;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(299)
	Float tmp39 = m->b;		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(299)
	Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(299)
	Float tmp41 = this->ty;		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(299)
	Float tmp42 = m->d;		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(299)
	Float tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(299)
	Float tmp44 = (tmp40 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(299)
	Float tmp45 = m->ty;		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(299)
	Float tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(299)
	result->ty = tmp46;
	HX_STACK_LINE(301)
	::openfl::_legacy::geom::Matrix tmp47 = result;		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(301)
	return tmp47;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,mult,return )

Void Matrix_obj::rotate( Float angle){
{
		HX_STACK_FRAME("openfl._legacy.geom.Matrix","rotate",0x706e6c7a,"openfl._legacy.geom.Matrix.rotate","openfl/_legacy/geom/Matrix.hx",306,0x35542610)
		HX_STACK_THIS(this)
		HX_STACK_ARG(angle,"angle")
		HX_STACK_LINE(308)
		Float tmp = angle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(308)
		Float tmp1 = ::Math_obj::cos(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(308)
		Float cos = tmp1;		HX_STACK_VAR(cos,"cos");
		HX_STACK_LINE(309)
		Float tmp2 = angle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(309)
		Float tmp3 = ::Math_obj::sin(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(309)
		Float sin = tmp3;		HX_STACK_VAR(sin,"sin");
		HX_STACK_LINE(311)
		Float tmp4 = this->a;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(311)
		Float tmp5 = cos;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(311)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(311)
		Float tmp7 = this->b;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(311)
		Float tmp8 = sin;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(311)
		Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(311)
		Float tmp10 = (tmp6 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(311)
		Float a1 = tmp10;		HX_STACK_VAR(a1,"a1");
		HX_STACK_LINE(312)
		Float tmp11 = this->a;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(312)
		Float tmp12 = sin;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(312)
		Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(312)
		Float tmp14 = this->b;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(312)
		Float tmp15 = cos;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(312)
		Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(312)
		Float tmp17 = (tmp13 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(312)
		this->b = tmp17;
		HX_STACK_LINE(313)
		this->a = a1;
		HX_STACK_LINE(315)
		Float tmp18 = this->c;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(315)
		Float tmp19 = cos;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(315)
		Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(315)
		Float tmp21 = this->d;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(315)
		Float tmp22 = sin;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(315)
		Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(315)
		Float tmp24 = (tmp20 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(315)
		Float c1 = tmp24;		HX_STACK_VAR(c1,"c1");
		HX_STACK_LINE(316)
		Float tmp25 = this->c;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(316)
		Float tmp26 = sin;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(316)
		Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(316)
		Float tmp28 = this->d;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(316)
		Float tmp29 = cos;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(316)
		Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(316)
		Float tmp31 = (tmp27 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(316)
		this->d = tmp31;
		HX_STACK_LINE(317)
		this->c = c1;
		HX_STACK_LINE(319)
		Float tmp32 = this->tx;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(319)
		Float tmp33 = cos;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(319)
		Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(319)
		Float tmp35 = this->ty;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(319)
		Float tmp36 = sin;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(319)
		Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(319)
		Float tmp38 = (tmp34 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(319)
		Float tx1 = tmp38;		HX_STACK_VAR(tx1,"tx1");
		HX_STACK_LINE(320)
		Float tmp39 = this->tx;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(320)
		Float tmp40 = sin;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(320)
		Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(320)
		Float tmp42 = this->ty;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(320)
		Float tmp43 = cos;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(320)
		Float tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(320)
		Float tmp45 = (tmp41 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(320)
		this->ty = tmp45;
		HX_STACK_LINE(321)
		this->tx = tx1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,rotate,(void))

Void Matrix_obj::scale( Float x,Float y){
{
		HX_STACK_FRAME("openfl._legacy.geom.Matrix","scale",0x123b114b,"openfl._legacy.geom.Matrix.scale","openfl/_legacy/geom/Matrix.hx",326,0x35542610)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(328)
		hx::MultEq(this->a,x);
		HX_STACK_LINE(329)
		hx::MultEq(this->b,y);
		HX_STACK_LINE(331)
		hx::MultEq(this->c,x);
		HX_STACK_LINE(332)
		hx::MultEq(this->d,y);
		HX_STACK_LINE(334)
		hx::MultEq(this->tx,x);
		HX_STACK_LINE(335)
		hx::MultEq(this->ty,y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,scale,(void))

Void Matrix_obj::setRotation( Float angle,hx::Null< Float >  __o_scale){
Float scale = __o_scale.Default(1);
	HX_STACK_FRAME("openfl._legacy.geom.Matrix","setRotation",0x8d9f5081,"openfl._legacy.geom.Matrix.setRotation","openfl/_legacy/geom/Matrix.hx",340,0x35542610)
	HX_STACK_THIS(this)
	HX_STACK_ARG(angle,"angle")
	HX_STACK_ARG(scale,"scale")
{
		HX_STACK_LINE(342)
		Float tmp = angle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(342)
		Float tmp1 = ::Math_obj::cos(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(342)
		Float tmp2 = scale;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(342)
		Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(342)
		this->a = tmp3;
		HX_STACK_LINE(343)
		Float tmp4 = angle;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(343)
		Float tmp5 = ::Math_obj::sin(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(343)
		Float tmp6 = scale;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(343)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(343)
		this->c = tmp7;
		HX_STACK_LINE(344)
		Float tmp8 = this->c;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(344)
		Float tmp9 = -(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(344)
		this->b = tmp9;
		HX_STACK_LINE(345)
		Float tmp10 = this->a;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(345)
		this->d = tmp10;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,setRotation,(void))

Void Matrix_obj::setTo( Float a,Float b,Float c,Float d,Float tx,Float ty){
{
		HX_STACK_FRAME("openfl._legacy.geom.Matrix","setTo",0x139bd47e,"openfl._legacy.geom.Matrix.setTo","openfl/_legacy/geom/Matrix.hx",350,0x35542610)
		HX_STACK_THIS(this)
		HX_STACK_ARG(a,"a")
		HX_STACK_ARG(b,"b")
		HX_STACK_ARG(c,"c")
		HX_STACK_ARG(d,"d")
		HX_STACK_ARG(tx,"tx")
		HX_STACK_ARG(ty,"ty")
		HX_STACK_LINE(352)
		this->a = a;
		HX_STACK_LINE(353)
		this->b = b;
		HX_STACK_LINE(354)
		this->c = c;
		HX_STACK_LINE(355)
		this->d = d;
		HX_STACK_LINE(356)
		this->tx = tx;
		HX_STACK_LINE(357)
		this->ty = ty;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Matrix_obj,setTo,(void))

::String Matrix_obj::toString( ){
	HX_STACK_FRAME("openfl._legacy.geom.Matrix","toString",0x6a29fc8b,"openfl._legacy.geom.Matrix.toString","openfl/_legacy/geom/Matrix.hx",362,0x35542610)
	HX_STACK_THIS(this)
	HX_STACK_LINE(364)
	Float tmp = this->a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(364)
	::String tmp1 = (HX_HCSTRING("(a=","\xe4","\xae","\x1e","\x00") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(364)
	::String tmp2 = (tmp1 + HX_HCSTRING(", b=","\x0f","\x01","\x2e","\x1d"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(364)
	Float tmp3 = this->b;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(364)
	::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(364)
	::String tmp5 = (tmp4 + HX_HCSTRING(", c=","\xee","\x01","\x2e","\x1d"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(364)
	Float tmp6 = this->c;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(364)
	::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(364)
	::String tmp8 = (tmp7 + HX_HCSTRING(", d=","\xcd","\x02","\x2e","\x1d"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(364)
	Float tmp9 = this->d;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(364)
	::String tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(364)
	::String tmp11 = (tmp10 + HX_HCSTRING(", tx=","\x45","\xc8","\x20","\x6b"));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(364)
	Float tmp12 = this->tx;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(364)
	::String tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(364)
	::String tmp14 = (tmp13 + HX_HCSTRING(", ty=","\x24","\xc9","\x20","\x6b"));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(364)
	Float tmp15 = this->ty;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(364)
	::String tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(364)
	::String tmp17 = (tmp16 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(364)
	return tmp17;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,toString,return )

::openfl::_legacy::geom::Point Matrix_obj::transformPoint( ::openfl::_legacy::geom::Point point){
	HX_STACK_FRAME("openfl._legacy.geom.Matrix","transformPoint",0x4131ac63,"openfl._legacy.geom.Matrix.transformPoint","openfl/_legacy/geom/Matrix.hx",369,0x35542610)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(371)
	Float tmp = point->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(371)
	Float tmp1 = this->a;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(371)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(371)
	Float tmp3 = point->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(371)
	Float tmp4 = this->c;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(371)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(371)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(371)
	Float tmp7 = this->tx;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(371)
	Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(371)
	Float tmp9 = point->x;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(371)
	Float tmp10 = this->b;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(371)
	Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(371)
	Float tmp12 = point->y;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(371)
	Float tmp13 = this->d;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(371)
	Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(371)
	Float tmp15 = (tmp11 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(371)
	Float tmp16 = this->ty;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(371)
	Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(371)
	::openfl::_legacy::geom::Point tmp18 = ::openfl::_legacy::geom::Point_obj::__new(tmp8,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(371)
	return tmp18;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,transformPoint,return )

Void Matrix_obj::translate( Float x,Float y){
{
		HX_STACK_FRAME("openfl._legacy.geom.Matrix","translate",0x9b8b0e8f,"openfl._legacy.geom.Matrix.translate","openfl/_legacy/geom/Matrix.hx",376,0x35542610)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(378)
		hx::AddEq(this->tx,x);
		HX_STACK_LINE(379)
		hx::AddEq(this->ty,y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,translate,(void))


Matrix_obj::Matrix_obj()
{
}

Dynamic Matrix_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { return a; }
		if (HX_FIELD_EQ(inName,"b") ) { return b; }
		if (HX_FIELD_EQ(inName,"c") ) { return c; }
		if (HX_FIELD_EQ(inName,"d") ) { return d; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"tx") ) { return tx; }
		if (HX_FIELD_EQ(inName,"ty") ) { return ty; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mult") ) { return mult_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"scale") ) { return scale_dyn(); }
		if (HX_FIELD_EQ(inName,"setTo") ) { return setTo_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"concat") ) { return concat_dyn(); }
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
		if (HX_FIELD_EQ(inName,"invert") ) { return invert_dyn(); }
		if (HX_FIELD_EQ(inName,"rotate") ) { return rotate_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"identity") ) { return identity_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"copyRowTo") ) { return copyRowTo_dyn(); }
		if (HX_FIELD_EQ(inName,"createBox") ) { return createBox_dyn(); }
		if (HX_FIELD_EQ(inName,"translate") ) { return translate_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"copyRowFrom") ) { return copyRowFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"setRotation") ) { return setRotation_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"copyColumnTo") ) { return copyColumnTo_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"copyColumnFrom") ) { return copyColumnFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"transformPoint") ) { return transformPoint_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"createGradientBox") ) { return createGradientBox_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"deltaTransformPoint") ) { return deltaTransformPoint_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Matrix_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"c") ) { c=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"d") ) { d=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"tx") ) { tx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ty") ) { ty=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Matrix_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("a","\x61","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("b","\x62","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("c","\x63","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("d","\x64","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("tx","\x84","\x65","\x00","\x00"));
	outFields->push(HX_HCSTRING("ty","\x85","\x65","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Matrix_obj,a),HX_HCSTRING("a","\x61","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,b),HX_HCSTRING("b","\x62","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,c),HX_HCSTRING("c","\x63","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,d),HX_HCSTRING("d","\x64","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,tx),HX_HCSTRING("tx","\x84","\x65","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,ty),HX_HCSTRING("ty","\x85","\x65","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("a","\x61","\x00","\x00","\x00"),
	HX_HCSTRING("b","\x62","\x00","\x00","\x00"),
	HX_HCSTRING("c","\x63","\x00","\x00","\x00"),
	HX_HCSTRING("d","\x64","\x00","\x00","\x00"),
	HX_HCSTRING("tx","\x84","\x65","\x00","\x00"),
	HX_HCSTRING("ty","\x85","\x65","\x00","\x00"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("concat","\x14","\x09","\xd0","\xc7"),
	HX_HCSTRING("copyColumnFrom","\x75","\x97","\xb5","\x3a"),
	HX_HCSTRING("copyColumnTo","\xc6","\x2e","\xf6","\xf6"),
	HX_HCSTRING("copyFrom","\xbf","\x0b","\x61","\xc8"),
	HX_HCSTRING("copyRowFrom","\x6f","\x45","\x8b","\xef"),
	HX_HCSTRING("copyRowTo","\x40","\x8a","\x62","\x73"),
	HX_HCSTRING("createBox","\x6f","\x94","\xd8","\x49"),
	HX_HCSTRING("createGradientBox","\x5f","\xec","\xc0","\x25"),
	HX_HCSTRING("deltaTransformPoint","\x5c","\x4d","\xf7","\x15"),
	HX_HCSTRING("equals","\x3f","\xee","\xf2","\xbf"),
	HX_HCSTRING("identity","\x3e","\x45","\x2f","\xb9"),
	HX_HCSTRING("invert","\x16","\xe7","\xd8","\x9f"),
	HX_HCSTRING("mult","\xf0","\x67","\x65","\x48"),
	HX_HCSTRING("rotate","\x5b","\x46","\x20","\xcb"),
	HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"),
	HX_HCSTRING("setRotation","\x00","\x07","\xe7","\x38"),
	HX_HCSTRING("setTo","\xbd","\x91","\x2f","\x7a"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("transformPoint","\x44","\xcf","\x11","\x3d"),
	HX_HCSTRING("translate","\x4e","\xd7","\x7f","\x49"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Matrix_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Matrix_obj::__mClass,"__mClass");
};

#endif

hx::Class Matrix_obj::__mClass;

void Matrix_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.geom.Matrix","\x6f","\x2c","\x4a","\x69");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Matrix_obj >;
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
