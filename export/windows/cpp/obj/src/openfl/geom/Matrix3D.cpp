#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix3D
#include <openfl/geom/Matrix3D.h>
#endif
#ifndef INCLUDED_openfl_geom_Vector3D
#include <openfl/geom/Vector3D.h>
#endif
namespace openfl{
namespace geom{

Void Matrix3D_obj::__construct(Array< Float > v)
{
HX_STACK_FRAME("openfl.geom.Matrix3D","new",0xe0591fd8,"openfl.geom.Matrix3D.new","openfl/geom/Matrix3D.hx",18,0x3acce238)
HX_STACK_THIS(this)
HX_STACK_ARG(v,"v")
{
	HX_STACK_LINE(20)
	bool tmp = (v != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(20)
	if ((tmp)){
		HX_STACK_LINE(20)
		int tmp2 = v->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(20)
		int tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(20)
		tmp1 = (tmp3 == (int)16);
	}
	else{
		HX_STACK_LINE(20)
		tmp1 = false;
	}
	HX_STACK_LINE(20)
	if ((tmp1)){
		HX_STACK_LINE(22)
		this->rawData = v;
	}
	else{
		HX_STACK_LINE(26)
		this->rawData = Array_obj< Float >::__new().Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0));
	}
}
;
	return null();
}

//Matrix3D_obj::~Matrix3D_obj() { }

Dynamic Matrix3D_obj::__CreateEmpty() { return  new Matrix3D_obj; }
hx::ObjectPtr< Matrix3D_obj > Matrix3D_obj::__new(Array< Float > v)
{  hx::ObjectPtr< Matrix3D_obj > _result_ = new Matrix3D_obj();
	_result_->__construct(v);
	return _result_;}

Dynamic Matrix3D_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Matrix3D_obj > _result_ = new Matrix3D_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Matrix3D_obj::append( ::openfl::geom::Matrix3D lhs){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","append",0x481b8d62,"openfl.geom.Matrix3D.append","openfl/geom/Matrix3D.hx",33,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(lhs,"lhs")
		HX_STACK_LINE(35)
		Array< Float > tmp = this->rawData;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(35)
		Float tmp1 = tmp->__get((int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(35)
		Float m111 = ((Dynamic)(tmp1));		HX_STACK_VAR(m111,"m111");
		HX_STACK_LINE(35)
		Array< Float > tmp2 = this->rawData;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(35)
		Float tmp3 = tmp2->__get((int)4);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(35)
		Float m121 = ((Dynamic)(tmp3));		HX_STACK_VAR(m121,"m121");
		HX_STACK_LINE(35)
		Array< Float > tmp4 = this->rawData;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(35)
		Float tmp5 = tmp4->__get((int)8);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(35)
		Float m131 = ((Dynamic)(tmp5));		HX_STACK_VAR(m131,"m131");
		HX_STACK_LINE(35)
		Array< Float > tmp6 = this->rawData;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(35)
		Float tmp7 = tmp6->__get((int)12);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(35)
		Float m141 = ((Dynamic)(tmp7));		HX_STACK_VAR(m141,"m141");
		HX_STACK_LINE(36)
		Array< Float > tmp8 = this->rawData;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(36)
		Float tmp9 = tmp8->__get((int)1);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(36)
		Float m112 = ((Dynamic)(tmp9));		HX_STACK_VAR(m112,"m112");
		HX_STACK_LINE(36)
		Array< Float > tmp10 = this->rawData;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(36)
		Float tmp11 = tmp10->__get((int)5);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(36)
		Float m122 = ((Dynamic)(tmp11));		HX_STACK_VAR(m122,"m122");
		HX_STACK_LINE(36)
		Array< Float > tmp12 = this->rawData;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(36)
		Float tmp13 = tmp12->__get((int)9);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(36)
		Float m132 = ((Dynamic)(tmp13));		HX_STACK_VAR(m132,"m132");
		HX_STACK_LINE(36)
		Array< Float > tmp14 = this->rawData;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(36)
		Float tmp15 = tmp14->__get((int)13);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(36)
		Float m142 = ((Dynamic)(tmp15));		HX_STACK_VAR(m142,"m142");
		HX_STACK_LINE(37)
		Array< Float > tmp16 = this->rawData;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(37)
		Float tmp17 = tmp16->__get((int)2);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(37)
		Float m113 = ((Dynamic)(tmp17));		HX_STACK_VAR(m113,"m113");
		HX_STACK_LINE(37)
		Array< Float > tmp18 = this->rawData;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(37)
		Float tmp19 = tmp18->__get((int)6);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(37)
		Float m123 = ((Dynamic)(tmp19));		HX_STACK_VAR(m123,"m123");
		HX_STACK_LINE(37)
		Array< Float > tmp20 = this->rawData;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(37)
		Float tmp21 = tmp20->__get((int)10);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(37)
		Float m133 = ((Dynamic)(tmp21));		HX_STACK_VAR(m133,"m133");
		HX_STACK_LINE(37)
		Array< Float > tmp22 = this->rawData;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(37)
		Float tmp23 = tmp22->__get((int)14);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(37)
		Float m143 = ((Dynamic)(tmp23));		HX_STACK_VAR(m143,"m143");
		HX_STACK_LINE(38)
		Array< Float > tmp24 = this->rawData;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(38)
		Float tmp25 = tmp24->__get((int)3);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(38)
		Float m114 = ((Dynamic)(tmp25));		HX_STACK_VAR(m114,"m114");
		HX_STACK_LINE(38)
		Array< Float > tmp26 = this->rawData;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(38)
		Float tmp27 = tmp26->__get((int)7);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(38)
		Float m124 = ((Dynamic)(tmp27));		HX_STACK_VAR(m124,"m124");
		HX_STACK_LINE(38)
		Array< Float > tmp28 = this->rawData;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(38)
		Float tmp29 = tmp28->__get((int)11);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(38)
		Float m134 = ((Dynamic)(tmp29));		HX_STACK_VAR(m134,"m134");
		HX_STACK_LINE(38)
		Array< Float > tmp30 = this->rawData;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(38)
		Float tmp31 = tmp30->__get((int)15);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(38)
		Float m144 = ((Dynamic)(tmp31));		HX_STACK_VAR(m144,"m144");
		HX_STACK_LINE(39)
		Float tmp32 = lhs->rawData->__get((int)0);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(39)
		Float m211 = ((Dynamic)(tmp32));		HX_STACK_VAR(m211,"m211");
		HX_STACK_LINE(39)
		Float tmp33 = lhs->rawData->__get((int)4);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(39)
		Float m221 = ((Dynamic)(tmp33));		HX_STACK_VAR(m221,"m221");
		HX_STACK_LINE(39)
		Float tmp34 = lhs->rawData->__get((int)8);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(39)
		Float m231 = ((Dynamic)(tmp34));		HX_STACK_VAR(m231,"m231");
		HX_STACK_LINE(39)
		Float tmp35 = lhs->rawData->__get((int)12);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(39)
		Float m241 = ((Dynamic)(tmp35));		HX_STACK_VAR(m241,"m241");
		HX_STACK_LINE(40)
		Float tmp36 = lhs->rawData->__get((int)1);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(40)
		Float m212 = ((Dynamic)(tmp36));		HX_STACK_VAR(m212,"m212");
		HX_STACK_LINE(40)
		Float tmp37 = lhs->rawData->__get((int)5);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(40)
		Float m222 = ((Dynamic)(tmp37));		HX_STACK_VAR(m222,"m222");
		HX_STACK_LINE(40)
		Float tmp38 = lhs->rawData->__get((int)9);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(40)
		Float m232 = ((Dynamic)(tmp38));		HX_STACK_VAR(m232,"m232");
		HX_STACK_LINE(40)
		Float tmp39 = lhs->rawData->__get((int)13);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(40)
		Float m242 = ((Dynamic)(tmp39));		HX_STACK_VAR(m242,"m242");
		HX_STACK_LINE(41)
		Float tmp40 = lhs->rawData->__get((int)2);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(41)
		Float m213 = ((Dynamic)(tmp40));		HX_STACK_VAR(m213,"m213");
		HX_STACK_LINE(41)
		Float tmp41 = lhs->rawData->__get((int)6);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(41)
		Float m223 = ((Dynamic)(tmp41));		HX_STACK_VAR(m223,"m223");
		HX_STACK_LINE(41)
		Float tmp42 = lhs->rawData->__get((int)10);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(41)
		Float m233 = ((Dynamic)(tmp42));		HX_STACK_VAR(m233,"m233");
		HX_STACK_LINE(41)
		Float tmp43 = lhs->rawData->__get((int)14);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(41)
		Float m243 = ((Dynamic)(tmp43));		HX_STACK_VAR(m243,"m243");
		HX_STACK_LINE(42)
		Float tmp44 = lhs->rawData->__get((int)3);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(42)
		Float m214 = ((Dynamic)(tmp44));		HX_STACK_VAR(m214,"m214");
		HX_STACK_LINE(42)
		Float tmp45 = lhs->rawData->__get((int)7);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(42)
		Float m224 = ((Dynamic)(tmp45));		HX_STACK_VAR(m224,"m224");
		HX_STACK_LINE(42)
		Float tmp46 = lhs->rawData->__get((int)11);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(42)
		Float m234 = ((Dynamic)(tmp46));		HX_STACK_VAR(m234,"m234");
		HX_STACK_LINE(42)
		Float tmp47 = lhs->rawData->__get((int)15);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(42)
		Float m244 = ((Dynamic)(tmp47));		HX_STACK_VAR(m244,"m244");
		HX_STACK_LINE(44)
		Array< Float > tmp48 = this->rawData;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(44)
		Float tmp49 = (m111 * m211);		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(44)
		Float tmp50 = (m112 * m221);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(44)
		Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(44)
		Float tmp52 = (m113 * m231);		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(44)
		Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(44)
		Float tmp54 = (m114 * m241);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(44)
		Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(44)
		Float tmp56 = tmp48[(int)0] = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(44)
		tmp56;
		HX_STACK_LINE(45)
		Array< Float > tmp57 = this->rawData;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(45)
		Float tmp58 = (m111 * m212);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(45)
		Float tmp59 = (m112 * m222);		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(45)
		Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(45)
		Float tmp61 = (m113 * m232);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(45)
		Float tmp62 = (tmp60 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(45)
		Float tmp63 = (m114 * m242);		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(45)
		Float tmp64 = (tmp62 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(45)
		Float tmp65 = tmp57[(int)1] = tmp64;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(45)
		tmp65;
		HX_STACK_LINE(46)
		Array< Float > tmp66 = this->rawData;		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(46)
		Float tmp67 = (m111 * m213);		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(46)
		Float tmp68 = (m112 * m223);		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(46)
		Float tmp69 = (tmp67 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(46)
		Float tmp70 = (m113 * m233);		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(46)
		Float tmp71 = (tmp69 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(46)
		Float tmp72 = (m114 * m243);		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(46)
		Float tmp73 = (tmp71 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(46)
		Float tmp74 = tmp66[(int)2] = tmp73;		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(46)
		tmp74;
		HX_STACK_LINE(47)
		Array< Float > tmp75 = this->rawData;		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(47)
		Float tmp76 = (m111 * m214);		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(47)
		Float tmp77 = (m112 * m224);		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(47)
		Float tmp78 = (tmp76 + tmp77);		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(47)
		Float tmp79 = (m113 * m234);		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(47)
		Float tmp80 = (tmp78 + tmp79);		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(47)
		Float tmp81 = (m114 * m244);		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(47)
		Float tmp82 = (tmp80 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(47)
		Float tmp83 = tmp75[(int)3] = tmp82;		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(47)
		tmp83;
		HX_STACK_LINE(49)
		Array< Float > tmp84 = this->rawData;		HX_STACK_VAR(tmp84,"tmp84");
		HX_STACK_LINE(49)
		Float tmp85 = (m121 * m211);		HX_STACK_VAR(tmp85,"tmp85");
		HX_STACK_LINE(49)
		Float tmp86 = (m122 * m221);		HX_STACK_VAR(tmp86,"tmp86");
		HX_STACK_LINE(49)
		Float tmp87 = (tmp85 + tmp86);		HX_STACK_VAR(tmp87,"tmp87");
		HX_STACK_LINE(49)
		Float tmp88 = (m123 * m231);		HX_STACK_VAR(tmp88,"tmp88");
		HX_STACK_LINE(49)
		Float tmp89 = (tmp87 + tmp88);		HX_STACK_VAR(tmp89,"tmp89");
		HX_STACK_LINE(49)
		Float tmp90 = (m124 * m241);		HX_STACK_VAR(tmp90,"tmp90");
		HX_STACK_LINE(49)
		Float tmp91 = (tmp89 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
		HX_STACK_LINE(49)
		Float tmp92 = tmp84[(int)4] = tmp91;		HX_STACK_VAR(tmp92,"tmp92");
		HX_STACK_LINE(49)
		tmp92;
		HX_STACK_LINE(50)
		Array< Float > tmp93 = this->rawData;		HX_STACK_VAR(tmp93,"tmp93");
		HX_STACK_LINE(50)
		Float tmp94 = (m121 * m212);		HX_STACK_VAR(tmp94,"tmp94");
		HX_STACK_LINE(50)
		Float tmp95 = (m122 * m222);		HX_STACK_VAR(tmp95,"tmp95");
		HX_STACK_LINE(50)
		Float tmp96 = (tmp94 + tmp95);		HX_STACK_VAR(tmp96,"tmp96");
		HX_STACK_LINE(50)
		Float tmp97 = (m123 * m232);		HX_STACK_VAR(tmp97,"tmp97");
		HX_STACK_LINE(50)
		Float tmp98 = (tmp96 + tmp97);		HX_STACK_VAR(tmp98,"tmp98");
		HX_STACK_LINE(50)
		Float tmp99 = (m124 * m242);		HX_STACK_VAR(tmp99,"tmp99");
		HX_STACK_LINE(50)
		Float tmp100 = (tmp98 + tmp99);		HX_STACK_VAR(tmp100,"tmp100");
		HX_STACK_LINE(50)
		Float tmp101 = tmp93[(int)5] = tmp100;		HX_STACK_VAR(tmp101,"tmp101");
		HX_STACK_LINE(50)
		tmp101;
		HX_STACK_LINE(51)
		Array< Float > tmp102 = this->rawData;		HX_STACK_VAR(tmp102,"tmp102");
		HX_STACK_LINE(51)
		Float tmp103 = (m121 * m213);		HX_STACK_VAR(tmp103,"tmp103");
		HX_STACK_LINE(51)
		Float tmp104 = (m122 * m223);		HX_STACK_VAR(tmp104,"tmp104");
		HX_STACK_LINE(51)
		Float tmp105 = (tmp103 + tmp104);		HX_STACK_VAR(tmp105,"tmp105");
		HX_STACK_LINE(51)
		Float tmp106 = (m123 * m233);		HX_STACK_VAR(tmp106,"tmp106");
		HX_STACK_LINE(51)
		Float tmp107 = (tmp105 + tmp106);		HX_STACK_VAR(tmp107,"tmp107");
		HX_STACK_LINE(51)
		Float tmp108 = (m124 * m243);		HX_STACK_VAR(tmp108,"tmp108");
		HX_STACK_LINE(51)
		Float tmp109 = (tmp107 + tmp108);		HX_STACK_VAR(tmp109,"tmp109");
		HX_STACK_LINE(51)
		Float tmp110 = tmp102[(int)6] = tmp109;		HX_STACK_VAR(tmp110,"tmp110");
		HX_STACK_LINE(51)
		tmp110;
		HX_STACK_LINE(52)
		Array< Float > tmp111 = this->rawData;		HX_STACK_VAR(tmp111,"tmp111");
		HX_STACK_LINE(52)
		Float tmp112 = (m121 * m214);		HX_STACK_VAR(tmp112,"tmp112");
		HX_STACK_LINE(52)
		Float tmp113 = (m122 * m224);		HX_STACK_VAR(tmp113,"tmp113");
		HX_STACK_LINE(52)
		Float tmp114 = (tmp112 + tmp113);		HX_STACK_VAR(tmp114,"tmp114");
		HX_STACK_LINE(52)
		Float tmp115 = (m123 * m234);		HX_STACK_VAR(tmp115,"tmp115");
		HX_STACK_LINE(52)
		Float tmp116 = (tmp114 + tmp115);		HX_STACK_VAR(tmp116,"tmp116");
		HX_STACK_LINE(52)
		Float tmp117 = (m124 * m244);		HX_STACK_VAR(tmp117,"tmp117");
		HX_STACK_LINE(52)
		Float tmp118 = (tmp116 + tmp117);		HX_STACK_VAR(tmp118,"tmp118");
		HX_STACK_LINE(52)
		Float tmp119 = tmp111[(int)7] = tmp118;		HX_STACK_VAR(tmp119,"tmp119");
		HX_STACK_LINE(52)
		tmp119;
		HX_STACK_LINE(54)
		Array< Float > tmp120 = this->rawData;		HX_STACK_VAR(tmp120,"tmp120");
		HX_STACK_LINE(54)
		Float tmp121 = (m131 * m211);		HX_STACK_VAR(tmp121,"tmp121");
		HX_STACK_LINE(54)
		Float tmp122 = (m132 * m221);		HX_STACK_VAR(tmp122,"tmp122");
		HX_STACK_LINE(54)
		Float tmp123 = (tmp121 + tmp122);		HX_STACK_VAR(tmp123,"tmp123");
		HX_STACK_LINE(54)
		Float tmp124 = (m133 * m231);		HX_STACK_VAR(tmp124,"tmp124");
		HX_STACK_LINE(54)
		Float tmp125 = (tmp123 + tmp124);		HX_STACK_VAR(tmp125,"tmp125");
		HX_STACK_LINE(54)
		Float tmp126 = (m134 * m241);		HX_STACK_VAR(tmp126,"tmp126");
		HX_STACK_LINE(54)
		Float tmp127 = (tmp125 + tmp126);		HX_STACK_VAR(tmp127,"tmp127");
		HX_STACK_LINE(54)
		Float tmp128 = tmp120[(int)8] = tmp127;		HX_STACK_VAR(tmp128,"tmp128");
		HX_STACK_LINE(54)
		tmp128;
		HX_STACK_LINE(55)
		Array< Float > tmp129 = this->rawData;		HX_STACK_VAR(tmp129,"tmp129");
		HX_STACK_LINE(55)
		Float tmp130 = (m131 * m212);		HX_STACK_VAR(tmp130,"tmp130");
		HX_STACK_LINE(55)
		Float tmp131 = (m132 * m222);		HX_STACK_VAR(tmp131,"tmp131");
		HX_STACK_LINE(55)
		Float tmp132 = (tmp130 + tmp131);		HX_STACK_VAR(tmp132,"tmp132");
		HX_STACK_LINE(55)
		Float tmp133 = (m133 * m232);		HX_STACK_VAR(tmp133,"tmp133");
		HX_STACK_LINE(55)
		Float tmp134 = (tmp132 + tmp133);		HX_STACK_VAR(tmp134,"tmp134");
		HX_STACK_LINE(55)
		Float tmp135 = (m134 * m242);		HX_STACK_VAR(tmp135,"tmp135");
		HX_STACK_LINE(55)
		Float tmp136 = (tmp134 + tmp135);		HX_STACK_VAR(tmp136,"tmp136");
		HX_STACK_LINE(55)
		Float tmp137 = tmp129[(int)9] = tmp136;		HX_STACK_VAR(tmp137,"tmp137");
		HX_STACK_LINE(55)
		tmp137;
		HX_STACK_LINE(56)
		Array< Float > tmp138 = this->rawData;		HX_STACK_VAR(tmp138,"tmp138");
		HX_STACK_LINE(56)
		Float tmp139 = (m131 * m213);		HX_STACK_VAR(tmp139,"tmp139");
		HX_STACK_LINE(56)
		Float tmp140 = (m132 * m223);		HX_STACK_VAR(tmp140,"tmp140");
		HX_STACK_LINE(56)
		Float tmp141 = (tmp139 + tmp140);		HX_STACK_VAR(tmp141,"tmp141");
		HX_STACK_LINE(56)
		Float tmp142 = (m133 * m233);		HX_STACK_VAR(tmp142,"tmp142");
		HX_STACK_LINE(56)
		Float tmp143 = (tmp141 + tmp142);		HX_STACK_VAR(tmp143,"tmp143");
		HX_STACK_LINE(56)
		Float tmp144 = (m134 * m243);		HX_STACK_VAR(tmp144,"tmp144");
		HX_STACK_LINE(56)
		Float tmp145 = (tmp143 + tmp144);		HX_STACK_VAR(tmp145,"tmp145");
		HX_STACK_LINE(56)
		Float tmp146 = tmp138[(int)10] = tmp145;		HX_STACK_VAR(tmp146,"tmp146");
		HX_STACK_LINE(56)
		tmp146;
		HX_STACK_LINE(57)
		Array< Float > tmp147 = this->rawData;		HX_STACK_VAR(tmp147,"tmp147");
		HX_STACK_LINE(57)
		Float tmp148 = (m131 * m214);		HX_STACK_VAR(tmp148,"tmp148");
		HX_STACK_LINE(57)
		Float tmp149 = (m132 * m224);		HX_STACK_VAR(tmp149,"tmp149");
		HX_STACK_LINE(57)
		Float tmp150 = (tmp148 + tmp149);		HX_STACK_VAR(tmp150,"tmp150");
		HX_STACK_LINE(57)
		Float tmp151 = (m133 * m234);		HX_STACK_VAR(tmp151,"tmp151");
		HX_STACK_LINE(57)
		Float tmp152 = (tmp150 + tmp151);		HX_STACK_VAR(tmp152,"tmp152");
		HX_STACK_LINE(57)
		Float tmp153 = (m134 * m244);		HX_STACK_VAR(tmp153,"tmp153");
		HX_STACK_LINE(57)
		Float tmp154 = (tmp152 + tmp153);		HX_STACK_VAR(tmp154,"tmp154");
		HX_STACK_LINE(57)
		Float tmp155 = tmp147[(int)11] = tmp154;		HX_STACK_VAR(tmp155,"tmp155");
		HX_STACK_LINE(57)
		tmp155;
		HX_STACK_LINE(59)
		Array< Float > tmp156 = this->rawData;		HX_STACK_VAR(tmp156,"tmp156");
		HX_STACK_LINE(59)
		Float tmp157 = (m141 * m211);		HX_STACK_VAR(tmp157,"tmp157");
		HX_STACK_LINE(59)
		Float tmp158 = (m142 * m221);		HX_STACK_VAR(tmp158,"tmp158");
		HX_STACK_LINE(59)
		Float tmp159 = (tmp157 + tmp158);		HX_STACK_VAR(tmp159,"tmp159");
		HX_STACK_LINE(59)
		Float tmp160 = (m143 * m231);		HX_STACK_VAR(tmp160,"tmp160");
		HX_STACK_LINE(59)
		Float tmp161 = (tmp159 + tmp160);		HX_STACK_VAR(tmp161,"tmp161");
		HX_STACK_LINE(59)
		Float tmp162 = (m144 * m241);		HX_STACK_VAR(tmp162,"tmp162");
		HX_STACK_LINE(59)
		Float tmp163 = (tmp161 + tmp162);		HX_STACK_VAR(tmp163,"tmp163");
		HX_STACK_LINE(59)
		Float tmp164 = tmp156[(int)12] = tmp163;		HX_STACK_VAR(tmp164,"tmp164");
		HX_STACK_LINE(59)
		tmp164;
		HX_STACK_LINE(60)
		Array< Float > tmp165 = this->rawData;		HX_STACK_VAR(tmp165,"tmp165");
		HX_STACK_LINE(60)
		Float tmp166 = (m141 * m212);		HX_STACK_VAR(tmp166,"tmp166");
		HX_STACK_LINE(60)
		Float tmp167 = (m142 * m222);		HX_STACK_VAR(tmp167,"tmp167");
		HX_STACK_LINE(60)
		Float tmp168 = (tmp166 + tmp167);		HX_STACK_VAR(tmp168,"tmp168");
		HX_STACK_LINE(60)
		Float tmp169 = (m143 * m232);		HX_STACK_VAR(tmp169,"tmp169");
		HX_STACK_LINE(60)
		Float tmp170 = (tmp168 + tmp169);		HX_STACK_VAR(tmp170,"tmp170");
		HX_STACK_LINE(60)
		Float tmp171 = (m144 * m242);		HX_STACK_VAR(tmp171,"tmp171");
		HX_STACK_LINE(60)
		Float tmp172 = (tmp170 + tmp171);		HX_STACK_VAR(tmp172,"tmp172");
		HX_STACK_LINE(60)
		Float tmp173 = tmp165[(int)13] = tmp172;		HX_STACK_VAR(tmp173,"tmp173");
		HX_STACK_LINE(60)
		tmp173;
		HX_STACK_LINE(61)
		Array< Float > tmp174 = this->rawData;		HX_STACK_VAR(tmp174,"tmp174");
		HX_STACK_LINE(61)
		Float tmp175 = (m141 * m213);		HX_STACK_VAR(tmp175,"tmp175");
		HX_STACK_LINE(61)
		Float tmp176 = (m142 * m223);		HX_STACK_VAR(tmp176,"tmp176");
		HX_STACK_LINE(61)
		Float tmp177 = (tmp175 + tmp176);		HX_STACK_VAR(tmp177,"tmp177");
		HX_STACK_LINE(61)
		Float tmp178 = (m143 * m233);		HX_STACK_VAR(tmp178,"tmp178");
		HX_STACK_LINE(61)
		Float tmp179 = (tmp177 + tmp178);		HX_STACK_VAR(tmp179,"tmp179");
		HX_STACK_LINE(61)
		Float tmp180 = (m144 * m243);		HX_STACK_VAR(tmp180,"tmp180");
		HX_STACK_LINE(61)
		Float tmp181 = (tmp179 + tmp180);		HX_STACK_VAR(tmp181,"tmp181");
		HX_STACK_LINE(61)
		Float tmp182 = tmp174[(int)14] = tmp181;		HX_STACK_VAR(tmp182,"tmp182");
		HX_STACK_LINE(61)
		tmp182;
		HX_STACK_LINE(62)
		Array< Float > tmp183 = this->rawData;		HX_STACK_VAR(tmp183,"tmp183");
		HX_STACK_LINE(62)
		Float tmp184 = (m141 * m214);		HX_STACK_VAR(tmp184,"tmp184");
		HX_STACK_LINE(62)
		Float tmp185 = (m142 * m224);		HX_STACK_VAR(tmp185,"tmp185");
		HX_STACK_LINE(62)
		Float tmp186 = (tmp184 + tmp185);		HX_STACK_VAR(tmp186,"tmp186");
		HX_STACK_LINE(62)
		Float tmp187 = (m143 * m234);		HX_STACK_VAR(tmp187,"tmp187");
		HX_STACK_LINE(62)
		Float tmp188 = (tmp186 + tmp187);		HX_STACK_VAR(tmp188,"tmp188");
		HX_STACK_LINE(62)
		Float tmp189 = (m144 * m244);		HX_STACK_VAR(tmp189,"tmp189");
		HX_STACK_LINE(62)
		Float tmp190 = (tmp188 + tmp189);		HX_STACK_VAR(tmp190,"tmp190");
		HX_STACK_LINE(62)
		Float tmp191 = tmp183[(int)15] = tmp190;		HX_STACK_VAR(tmp191,"tmp191");
		HX_STACK_LINE(62)
		tmp191;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3D_obj,append,(void))

Void Matrix3D_obj::appendRotation( Float degrees,::openfl::geom::Vector3D axis,::openfl::geom::Vector3D pivotPoint){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","appendRotation",0xf492b8c0,"openfl.geom.Matrix3D.appendRotation","openfl/geom/Matrix3D.hx",67,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(degrees,"degrees")
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(pivotPoint,"pivotPoint")
		HX_STACK_LINE(69)
		Float tmp = axis->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(69)
		Float tmp1 = axis->y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(69)
		Float tmp2 = axis->z;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(69)
		Float tmp3 = degrees;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(69)
		::openfl::geom::Matrix3D tmp4 = ::openfl::geom::Matrix3D_obj::__getAxisRotation(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(69)
		::openfl::geom::Matrix3D m = tmp4;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(71)
		bool tmp5 = (pivotPoint != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(71)
		if ((tmp5)){
			HX_STACK_LINE(73)
			::openfl::geom::Vector3D p = pivotPoint;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(74)
			Float tmp6 = p->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(74)
			Float tmp7 = p->y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(74)
			Float tmp8 = p->z;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(74)
			m->appendTranslation(tmp6,tmp7,tmp8);
		}
		HX_STACK_LINE(78)
		::openfl::geom::Matrix3D tmp6 = m;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(78)
		this->append(tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix3D_obj,appendRotation,(void))

Void Matrix3D_obj::appendScale( Float xScale,Float yScale,Float zScale){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","appendScale",0x02daedc8,"openfl.geom.Matrix3D.appendScale","openfl/geom/Matrix3D.hx",83,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xScale,"xScale")
		HX_STACK_ARG(yScale,"yScale")
		HX_STACK_ARG(zScale,"zScale")
		HX_STACK_LINE(85)
		::openfl::geom::Matrix3D tmp = ::openfl::geom::Matrix3D_obj::__new(Array_obj< Float >::__new().Add(xScale).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(yScale).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(zScale).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(85)
		this->append(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix3D_obj,appendScale,(void))

Void Matrix3D_obj::appendTranslation( Float x,Float y,Float z){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","appendTranslation",0x514252af,"openfl.geom.Matrix3D.appendTranslation","openfl/geom/Matrix3D.hx",90,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_LINE(92)
		Array< Float > tmp = this->rawData;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(92)
		Array< Float > tmp1 = this->rawData;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(92)
		Float tmp2 = tmp1->__get((int)12);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(92)
		Dynamic tmp3 = ((Dynamic)(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(92)
		Float tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(92)
		Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(92)
		Float tmp6 = tmp[(int)12] = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(92)
		tmp6;
		HX_STACK_LINE(93)
		Array< Float > tmp7 = this->rawData;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(93)
		Array< Float > tmp8 = this->rawData;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(93)
		Float tmp9 = tmp8->__get((int)13);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(93)
		Dynamic tmp10 = ((Dynamic)(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(93)
		Float tmp11 = y;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(93)
		Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(93)
		Float tmp13 = tmp7[(int)13] = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(93)
		tmp13;
		HX_STACK_LINE(94)
		Array< Float > tmp14 = this->rawData;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(94)
		Array< Float > tmp15 = this->rawData;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(94)
		Float tmp16 = tmp15->__get((int)14);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(94)
		Dynamic tmp17 = ((Dynamic)(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(94)
		Float tmp18 = z;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(94)
		Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(94)
		Float tmp20 = tmp14[(int)14] = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(94)
		tmp20;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix3D_obj,appendTranslation,(void))

::openfl::geom::Matrix3D Matrix3D_obj::clone( ){
	HX_STACK_FRAME("openfl.geom.Matrix3D","clone",0x2ff530d5,"openfl.geom.Matrix3D.clone","openfl/geom/Matrix3D.hx",99,0x3acce238)
	HX_STACK_THIS(this)
	HX_STACK_LINE(101)
	Array< Float > tmp = this->rawData;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(101)
	Array< Float > tmp1 = tmp->copy();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(101)
	::openfl::geom::Matrix3D tmp2 = ::openfl::geom::Matrix3D_obj::__new(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(101)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3D_obj,clone,return )

Void Matrix3D_obj::copyColumnFrom( int column,::openfl::geom::Vector3D vector3D){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","copyColumnFrom",0x63600afd,"openfl.geom.Matrix3D.copyColumnFrom","openfl/geom/Matrix3D.hx",106,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(column,"column")
		HX_STACK_ARG(vector3D,"vector3D")
		HX_STACK_LINE(108)
		int tmp = column;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(108)
		switch( (int)(tmp)){
			case (int)0: {
				HX_STACK_LINE(112)
				Array< Float > tmp1 = this->rawData;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(112)
				Float tmp2 = vector3D->x;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(112)
				Float tmp3 = tmp1[(int)0] = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(112)
				tmp3;
				HX_STACK_LINE(113)
				Array< Float > tmp4 = this->rawData;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(113)
				Float tmp5 = vector3D->y;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(113)
				Float tmp6 = tmp4[(int)1] = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(113)
				tmp6;
				HX_STACK_LINE(114)
				Array< Float > tmp7 = this->rawData;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(114)
				Float tmp8 = vector3D->z;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(114)
				Float tmp9 = tmp7[(int)2] = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(114)
				tmp9;
				HX_STACK_LINE(115)
				Array< Float > tmp10 = this->rawData;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(115)
				Float tmp11 = vector3D->w;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(115)
				Float tmp12 = tmp10[(int)3] = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(115)
				tmp12;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(119)
				Array< Float > tmp1 = this->rawData;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(119)
				Float tmp2 = vector3D->x;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(119)
				Float tmp3 = tmp1[(int)4] = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(119)
				tmp3;
				HX_STACK_LINE(120)
				Array< Float > tmp4 = this->rawData;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(120)
				Float tmp5 = vector3D->y;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(120)
				Float tmp6 = tmp4[(int)5] = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(120)
				tmp6;
				HX_STACK_LINE(121)
				Array< Float > tmp7 = this->rawData;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(121)
				Float tmp8 = vector3D->z;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(121)
				Float tmp9 = tmp7[(int)6] = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(121)
				tmp9;
				HX_STACK_LINE(122)
				Array< Float > tmp10 = this->rawData;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(122)
				Float tmp11 = vector3D->w;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(122)
				Float tmp12 = tmp10[(int)7] = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(122)
				tmp12;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(126)
				Array< Float > tmp1 = this->rawData;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(126)
				Float tmp2 = vector3D->x;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(126)
				Float tmp3 = tmp1[(int)8] = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(126)
				tmp3;
				HX_STACK_LINE(127)
				Array< Float > tmp4 = this->rawData;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(127)
				Float tmp5 = vector3D->y;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(127)
				Float tmp6 = tmp4[(int)9] = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(127)
				tmp6;
				HX_STACK_LINE(128)
				Array< Float > tmp7 = this->rawData;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(128)
				Float tmp8 = vector3D->z;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(128)
				Float tmp9 = tmp7[(int)10] = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(128)
				tmp9;
				HX_STACK_LINE(129)
				Array< Float > tmp10 = this->rawData;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(129)
				Float tmp11 = vector3D->w;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(129)
				Float tmp12 = tmp10[(int)11] = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(129)
				tmp12;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(133)
				Array< Float > tmp1 = this->rawData;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(133)
				Float tmp2 = vector3D->x;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(133)
				Float tmp3 = tmp1[(int)12] = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(133)
				tmp3;
				HX_STACK_LINE(134)
				Array< Float > tmp4 = this->rawData;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(134)
				Float tmp5 = vector3D->y;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(134)
				Float tmp6 = tmp4[(int)13] = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(134)
				tmp6;
				HX_STACK_LINE(135)
				Array< Float > tmp7 = this->rawData;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(135)
				Float tmp8 = vector3D->z;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(135)
				Float tmp9 = tmp7[(int)14] = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(135)
				tmp9;
				HX_STACK_LINE(136)
				Array< Float > tmp10 = this->rawData;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(136)
				Float tmp11 = vector3D->w;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(136)
				Float tmp12 = tmp10[(int)15] = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(136)
				tmp12;
			}
			;break;
			default: {
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3D_obj,copyColumnFrom,(void))

Void Matrix3D_obj::copyColumnTo( int column,::openfl::geom::Vector3D vector3D){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","copyColumnTo",0x8c37304e,"openfl.geom.Matrix3D.copyColumnTo","openfl/geom/Matrix3D.hx",145,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(column,"column")
		HX_STACK_ARG(vector3D,"vector3D")
		HX_STACK_LINE(147)
		int tmp = column;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(147)
		switch( (int)(tmp)){
			case (int)0: {
				HX_STACK_LINE(151)
				Array< Float > tmp1 = this->rawData;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(151)
				Float tmp2 = tmp1->__get((int)0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(151)
				vector3D->x = ((Dynamic)(tmp2));
				HX_STACK_LINE(152)
				Array< Float > tmp3 = this->rawData;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(152)
				Float tmp4 = tmp3->__get((int)1);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(152)
				vector3D->y = ((Dynamic)(tmp4));
				HX_STACK_LINE(153)
				Array< Float > tmp5 = this->rawData;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(153)
				Float tmp6 = tmp5->__get((int)2);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(153)
				vector3D->z = ((Dynamic)(tmp6));
				HX_STACK_LINE(154)
				Array< Float > tmp7 = this->rawData;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(154)
				Float tmp8 = tmp7->__get((int)3);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(154)
				vector3D->w = ((Dynamic)(tmp8));
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(158)
				Array< Float > tmp1 = this->rawData;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(158)
				Float tmp2 = tmp1->__get((int)4);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(158)
				vector3D->x = ((Dynamic)(tmp2));
				HX_STACK_LINE(159)
				Array< Float > tmp3 = this->rawData;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(159)
				Float tmp4 = tmp3->__get((int)5);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(159)
				vector3D->y = ((Dynamic)(tmp4));
				HX_STACK_LINE(160)
				Array< Float > tmp5 = this->rawData;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(160)
				Float tmp6 = tmp5->__get((int)6);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(160)
				vector3D->z = ((Dynamic)(tmp6));
				HX_STACK_LINE(161)
				Array< Float > tmp7 = this->rawData;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(161)
				Float tmp8 = tmp7->__get((int)7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(161)
				vector3D->w = ((Dynamic)(tmp8));
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(165)
				Array< Float > tmp1 = this->rawData;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(165)
				Float tmp2 = tmp1->__get((int)8);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(165)
				vector3D->x = ((Dynamic)(tmp2));
				HX_STACK_LINE(166)
				Array< Float > tmp3 = this->rawData;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(166)
				Float tmp4 = tmp3->__get((int)9);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(166)
				vector3D->y = ((Dynamic)(tmp4));
				HX_STACK_LINE(167)
				Array< Float > tmp5 = this->rawData;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(167)
				Float tmp6 = tmp5->__get((int)10);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(167)
				vector3D->z = ((Dynamic)(tmp6));
				HX_STACK_LINE(168)
				Array< Float > tmp7 = this->rawData;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(168)
				Float tmp8 = tmp7->__get((int)11);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(168)
				vector3D->w = ((Dynamic)(tmp8));
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(172)
				Array< Float > tmp1 = this->rawData;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(172)
				Float tmp2 = tmp1->__get((int)12);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(172)
				vector3D->x = ((Dynamic)(tmp2));
				HX_STACK_LINE(173)
				Array< Float > tmp3 = this->rawData;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(173)
				Float tmp4 = tmp3->__get((int)13);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(173)
				vector3D->y = ((Dynamic)(tmp4));
				HX_STACK_LINE(174)
				Array< Float > tmp5 = this->rawData;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(174)
				Float tmp6 = tmp5->__get((int)14);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(174)
				vector3D->z = ((Dynamic)(tmp6));
				HX_STACK_LINE(175)
				Array< Float > tmp7 = this->rawData;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(175)
				Float tmp8 = tmp7->__get((int)15);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(175)
				vector3D->w = ((Dynamic)(tmp8));
			}
			;break;
			default: {
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3D_obj,copyColumnTo,(void))

Void Matrix3D_obj::copyFrom( ::openfl::geom::Matrix3D other){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","copyFrom",0xe290a947,"openfl.geom.Matrix3D.copyFrom","openfl/geom/Matrix3D.hx",184,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(other,"other")
		HX_STACK_LINE(186)
		Array< Float > tmp = other->rawData->copy();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(186)
		this->rawData = tmp;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3D_obj,copyFrom,(void))

Void Matrix3D_obj::copyRawDataFrom( Array< Float > vector,hx::Null< int >  __o_index,hx::Null< bool >  __o_transpose){
int index = __o_index.Default(0);
bool transpose = __o_transpose.Default(false);
	HX_STACK_FRAME("openfl.geom.Matrix3D","copyRawDataFrom",0x9938207f,"openfl.geom.Matrix3D.copyRawDataFrom","openfl/geom/Matrix3D.hx",191,0x3acce238)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vector,"vector")
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(transpose,"transpose")
{
		HX_STACK_LINE(193)
		bool tmp = transpose;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(193)
		if ((tmp)){
			HX_STACK_LINE(195)
			this->transpose();
		}
		HX_STACK_LINE(199)
		int tmp1 = vector->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(199)
		int tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(199)
		int tmp3 = index;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(199)
		int tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(199)
		int length = tmp4;		HX_STACK_VAR(length,"length");
		HX_STACK_LINE(201)
		{
			HX_STACK_LINE(201)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(201)
			while((true)){
				HX_STACK_LINE(201)
				bool tmp5 = (_g < length);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(201)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(201)
				if ((tmp6)){
					HX_STACK_LINE(201)
					break;
				}
				HX_STACK_LINE(201)
				int tmp7 = (_g)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(201)
				int i = tmp7;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(203)
				Array< Float > tmp8 = this->rawData;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(203)
				int tmp9 = (i + index);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(203)
				int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(203)
				Float tmp11 = vector->__get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(203)
				Dynamic tmp12 = ((Dynamic)(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(203)
				Float tmp13 = tmp8[i] = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(203)
				tmp13;
			}
		}
		HX_STACK_LINE(207)
		bool tmp5 = transpose;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(207)
		if ((tmp5)){
			HX_STACK_LINE(209)
			this->transpose();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix3D_obj,copyRawDataFrom,(void))

Void Matrix3D_obj::copyRawDataTo( Array< Float > vector,hx::Null< int >  __o_index,hx::Null< bool >  __o_transpose){
int index = __o_index.Default(0);
bool transpose = __o_transpose.Default(false);
	HX_STACK_FRAME("openfl.geom.Matrix3D","copyRawDataTo",0xac978150,"openfl.geom.Matrix3D.copyRawDataTo","openfl/geom/Matrix3D.hx",216,0x3acce238)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vector,"vector")
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(transpose,"transpose")
{
		HX_STACK_LINE(218)
		bool tmp = transpose;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(218)
		if ((tmp)){
			HX_STACK_LINE(220)
			this->transpose();
		}
		HX_STACK_LINE(224)
		{
			HX_STACK_LINE(224)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(224)
			Array< Float > tmp1 = this->rawData;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(224)
			int tmp2 = tmp1->length;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(224)
			int _g = tmp2;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(224)
			while((true)){
				HX_STACK_LINE(224)
				bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(224)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(224)
				if ((tmp4)){
					HX_STACK_LINE(224)
					break;
				}
				HX_STACK_LINE(224)
				int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(224)
				int i = tmp5;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(226)
				int tmp6 = (i + index);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(226)
				int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(226)
				Array< Float > tmp8 = this->rawData;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(226)
				Float tmp9 = tmp8->__get(i);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(226)
				Dynamic tmp10 = ((Dynamic)(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(226)
				Float tmp11 = vector[tmp7] = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(226)
				tmp11;
			}
		}
		HX_STACK_LINE(230)
		bool tmp1 = transpose;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(230)
		if ((tmp1)){
			HX_STACK_LINE(232)
			this->transpose();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix3D_obj,copyRawDataTo,(void))

Void Matrix3D_obj::copyRowFrom( int row,::openfl::geom::Vector3D vector3D){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","copyRowFrom",0x3d20cce7,"openfl.geom.Matrix3D.copyRowFrom","openfl/geom/Matrix3D.hx",239,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(row,"row")
		HX_STACK_ARG(vector3D,"vector3D")
		HX_STACK_LINE(241)
		int tmp = row;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(241)
		switch( (int)(tmp)){
			case (int)0: {
				HX_STACK_LINE(245)
				Array< Float > tmp1 = this->rawData;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(245)
				Float tmp2 = vector3D->x;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(245)
				Float tmp3 = tmp1[(int)0] = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(245)
				tmp3;
				HX_STACK_LINE(246)
				Array< Float > tmp4 = this->rawData;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(246)
				Float tmp5 = vector3D->y;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(246)
				Float tmp6 = tmp4[(int)4] = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(246)
				tmp6;
				HX_STACK_LINE(247)
				Array< Float > tmp7 = this->rawData;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(247)
				Float tmp8 = vector3D->z;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(247)
				Float tmp9 = tmp7[(int)8] = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(247)
				tmp9;
				HX_STACK_LINE(248)
				Array< Float > tmp10 = this->rawData;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(248)
				Float tmp11 = vector3D->w;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(248)
				Float tmp12 = tmp10[(int)12] = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(248)
				tmp12;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(252)
				Array< Float > tmp1 = this->rawData;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(252)
				Float tmp2 = vector3D->x;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(252)
				Float tmp3 = tmp1[(int)1] = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(252)
				tmp3;
				HX_STACK_LINE(253)
				Array< Float > tmp4 = this->rawData;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(253)
				Float tmp5 = vector3D->y;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(253)
				Float tmp6 = tmp4[(int)5] = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(253)
				tmp6;
				HX_STACK_LINE(254)
				Array< Float > tmp7 = this->rawData;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(254)
				Float tmp8 = vector3D->z;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(254)
				Float tmp9 = tmp7[(int)9] = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(254)
				tmp9;
				HX_STACK_LINE(255)
				Array< Float > tmp10 = this->rawData;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(255)
				Float tmp11 = vector3D->w;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(255)
				Float tmp12 = tmp10[(int)13] = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(255)
				tmp12;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(259)
				Array< Float > tmp1 = this->rawData;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(259)
				Float tmp2 = vector3D->x;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(259)
				Float tmp3 = tmp1[(int)2] = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(259)
				tmp3;
				HX_STACK_LINE(260)
				Array< Float > tmp4 = this->rawData;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(260)
				Float tmp5 = vector3D->y;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(260)
				Float tmp6 = tmp4[(int)6] = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(260)
				tmp6;
				HX_STACK_LINE(261)
				Array< Float > tmp7 = this->rawData;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(261)
				Float tmp8 = vector3D->z;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(261)
				Float tmp9 = tmp7[(int)10] = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(261)
				tmp9;
				HX_STACK_LINE(262)
				Array< Float > tmp10 = this->rawData;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(262)
				Float tmp11 = vector3D->w;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(262)
				Float tmp12 = tmp10[(int)14] = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(262)
				tmp12;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(266)
				Array< Float > tmp1 = this->rawData;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(266)
				Float tmp2 = vector3D->x;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(266)
				Float tmp3 = tmp1[(int)3] = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(266)
				tmp3;
				HX_STACK_LINE(267)
				Array< Float > tmp4 = this->rawData;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(267)
				Float tmp5 = vector3D->y;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(267)
				Float tmp6 = tmp4[(int)7] = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(267)
				tmp6;
				HX_STACK_LINE(268)
				Array< Float > tmp7 = this->rawData;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(268)
				Float tmp8 = vector3D->z;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(268)
				Float tmp9 = tmp7[(int)11] = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(268)
				tmp9;
				HX_STACK_LINE(269)
				Array< Float > tmp10 = this->rawData;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(269)
				Float tmp11 = vector3D->w;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(269)
				Float tmp12 = tmp10[(int)15] = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(269)
				tmp12;
			}
			;break;
			default: {
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3D_obj,copyRowFrom,(void))

Void Matrix3D_obj::copyRowTo( int row,::openfl::geom::Vector3D vector3D){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","copyRowTo",0x42dcc3b8,"openfl.geom.Matrix3D.copyRowTo","openfl/geom/Matrix3D.hx",278,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(row,"row")
		HX_STACK_ARG(vector3D,"vector3D")
		HX_STACK_LINE(280)
		int tmp = row;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(280)
		switch( (int)(tmp)){
			case (int)0: {
				HX_STACK_LINE(284)
				Array< Float > tmp1 = this->rawData;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(284)
				Float tmp2 = tmp1->__get((int)0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(284)
				vector3D->x = ((Dynamic)(tmp2));
				HX_STACK_LINE(285)
				Array< Float > tmp3 = this->rawData;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(285)
				Float tmp4 = tmp3->__get((int)4);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(285)
				vector3D->y = ((Dynamic)(tmp4));
				HX_STACK_LINE(286)
				Array< Float > tmp5 = this->rawData;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(286)
				Float tmp6 = tmp5->__get((int)8);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(286)
				vector3D->z = ((Dynamic)(tmp6));
				HX_STACK_LINE(287)
				Array< Float > tmp7 = this->rawData;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(287)
				Float tmp8 = tmp7->__get((int)12);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(287)
				vector3D->w = ((Dynamic)(tmp8));
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(291)
				Array< Float > tmp1 = this->rawData;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(291)
				Float tmp2 = tmp1->__get((int)1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(291)
				vector3D->x = ((Dynamic)(tmp2));
				HX_STACK_LINE(292)
				Array< Float > tmp3 = this->rawData;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(292)
				Float tmp4 = tmp3->__get((int)5);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(292)
				vector3D->y = ((Dynamic)(tmp4));
				HX_STACK_LINE(293)
				Array< Float > tmp5 = this->rawData;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(293)
				Float tmp6 = tmp5->__get((int)9);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(293)
				vector3D->z = ((Dynamic)(tmp6));
				HX_STACK_LINE(294)
				Array< Float > tmp7 = this->rawData;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(294)
				Float tmp8 = tmp7->__get((int)13);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(294)
				vector3D->w = ((Dynamic)(tmp8));
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(298)
				Array< Float > tmp1 = this->rawData;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(298)
				Float tmp2 = tmp1->__get((int)2);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(298)
				vector3D->x = ((Dynamic)(tmp2));
				HX_STACK_LINE(299)
				Array< Float > tmp3 = this->rawData;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(299)
				Float tmp4 = tmp3->__get((int)6);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(299)
				vector3D->y = ((Dynamic)(tmp4));
				HX_STACK_LINE(300)
				Array< Float > tmp5 = this->rawData;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(300)
				Float tmp6 = tmp5->__get((int)10);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(300)
				vector3D->z = ((Dynamic)(tmp6));
				HX_STACK_LINE(301)
				Array< Float > tmp7 = this->rawData;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(301)
				Float tmp8 = tmp7->__get((int)14);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(301)
				vector3D->w = ((Dynamic)(tmp8));
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(305)
				Array< Float > tmp1 = this->rawData;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(305)
				Float tmp2 = tmp1->__get((int)3);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(305)
				vector3D->x = ((Dynamic)(tmp2));
				HX_STACK_LINE(306)
				Array< Float > tmp3 = this->rawData;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(306)
				Float tmp4 = tmp3->__get((int)7);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(306)
				vector3D->y = ((Dynamic)(tmp4));
				HX_STACK_LINE(307)
				Array< Float > tmp5 = this->rawData;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(307)
				Float tmp6 = tmp5->__get((int)11);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(307)
				vector3D->z = ((Dynamic)(tmp6));
				HX_STACK_LINE(308)
				Array< Float > tmp7 = this->rawData;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(308)
				Float tmp8 = tmp7->__get((int)15);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(308)
				vector3D->w = ((Dynamic)(tmp8));
			}
			;break;
			default: {
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3D_obj,copyRowTo,(void))

Void Matrix3D_obj::copyToMatrix3D( ::openfl::geom::Matrix3D other){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","copyToMatrix3D",0x2cc9916a,"openfl.geom.Matrix3D.copyToMatrix3D","openfl/geom/Matrix3D.hx",317,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(other,"other")
		HX_STACK_LINE(319)
		Array< Float > tmp = this->rawData;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(319)
		Array< Float > tmp1 = tmp->copy();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(319)
		other->rawData = tmp1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3D_obj,copyToMatrix3D,(void))

Array< ::Dynamic > Matrix3D_obj::decompose( Dynamic orientationStyle){
	HX_STACK_FRAME("openfl.geom.Matrix3D","decompose",0x4a21fd29,"openfl.geom.Matrix3D.decompose","openfl/geom/Matrix3D.hx",353,0x3acce238)
	HX_STACK_THIS(this)
	HX_STACK_ARG(orientationStyle,"orientationStyle")
	HX_STACK_LINE(355)
	bool tmp = (orientationStyle == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(355)
	if ((tmp)){
		HX_STACK_LINE(357)
		orientationStyle = ((Dynamic)((int)1));
	}
	HX_STACK_LINE(361)
	Array< ::Dynamic > tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(361)
	{
		HX_STACK_LINE(361)
		Array< ::Dynamic > this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(361)
		this1 = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(361)
		this1->__SetSizeExact(null());
		HX_STACK_LINE(361)
		tmp1 = this1;
	}
	HX_STACK_LINE(361)
	Array< ::Dynamic > vec = tmp1;		HX_STACK_VAR(vec,"vec");
	HX_STACK_LINE(362)
	::openfl::geom::Matrix3D tmp2 = this->clone();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(362)
	::openfl::geom::Matrix3D m = tmp2;		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(363)
	Array< Float > tmp3 = m->rawData->copy();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(363)
	Array< Float > mr = tmp3;		HX_STACK_VAR(mr,"mr");
	HX_STACK_LINE(365)
	Float tmp4 = mr->__get((int)12);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(365)
	Dynamic tmp5 = ((Dynamic)(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(365)
	Float tmp6 = mr->__get((int)13);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(365)
	Dynamic tmp7 = ((Dynamic)(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(365)
	Float tmp8 = mr->__get((int)14);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(365)
	Dynamic tmp9 = ((Dynamic)(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(365)
	::openfl::geom::Vector3D tmp10 = ::openfl::geom::Vector3D_obj::__new(tmp5,tmp7,tmp9,null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(365)
	::openfl::geom::Vector3D pos = tmp10;		HX_STACK_VAR(pos,"pos");
	HX_STACK_LINE(366)
	Float tmp11 = mr[(int)12] = (int)0;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(366)
	tmp11;
	HX_STACK_LINE(367)
	Float tmp12 = mr[(int)13] = (int)0;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(367)
	tmp12;
	HX_STACK_LINE(368)
	Float tmp13 = mr[(int)14] = (int)0;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(368)
	tmp13;
	HX_STACK_LINE(370)
	::openfl::geom::Vector3D tmp14 = ::openfl::geom::Vector3D_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(370)
	::openfl::geom::Vector3D scale = tmp14;		HX_STACK_VAR(scale,"scale");
	HX_STACK_LINE(372)
	Float tmp15 = mr->__get((int)0);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(372)
	Dynamic tmp16 = ((Dynamic)(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(372)
	Float tmp17 = mr->__get((int)0);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(372)
	Dynamic tmp18 = ((Dynamic)(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(372)
	Float tmp19 = (tmp16 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(372)
	Float tmp20 = mr->__get((int)1);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(372)
	Dynamic tmp21 = ((Dynamic)(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(372)
	Float tmp22 = mr->__get((int)1);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(372)
	Dynamic tmp23 = ((Dynamic)(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(372)
	Float tmp24 = (tmp21 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(372)
	Float tmp25 = (tmp19 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(372)
	Float tmp26 = mr->__get((int)2);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(372)
	Dynamic tmp27 = ((Dynamic)(tmp26));		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(372)
	Float tmp28 = mr->__get((int)2);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(372)
	Dynamic tmp29 = ((Dynamic)(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(372)
	Float tmp30 = (tmp27 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(372)
	Float tmp31 = (tmp25 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(372)
	Float tmp32 = ::Math_obj::sqrt(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(372)
	scale->x = tmp32;
	HX_STACK_LINE(373)
	Float tmp33 = mr->__get((int)4);		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(373)
	Dynamic tmp34 = ((Dynamic)(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(373)
	Float tmp35 = mr->__get((int)4);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(373)
	Dynamic tmp36 = ((Dynamic)(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(373)
	Float tmp37 = (tmp34 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(373)
	Float tmp38 = mr->__get((int)5);		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(373)
	Dynamic tmp39 = ((Dynamic)(tmp38));		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(373)
	Float tmp40 = mr->__get((int)5);		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(373)
	Dynamic tmp41 = ((Dynamic)(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(373)
	Float tmp42 = (tmp39 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(373)
	Float tmp43 = (tmp37 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(373)
	Float tmp44 = mr->__get((int)6);		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(373)
	Dynamic tmp45 = ((Dynamic)(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(373)
	Float tmp46 = mr->__get((int)6);		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(373)
	Dynamic tmp47 = ((Dynamic)(tmp46));		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(373)
	Float tmp48 = (tmp45 * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(373)
	Float tmp49 = (tmp43 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(373)
	Float tmp50 = ::Math_obj::sqrt(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(373)
	scale->y = tmp50;
	HX_STACK_LINE(374)
	Float tmp51 = mr->__get((int)8);		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(374)
	Dynamic tmp52 = ((Dynamic)(tmp51));		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(374)
	Float tmp53 = mr->__get((int)8);		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(374)
	Dynamic tmp54 = ((Dynamic)(tmp53));		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(374)
	Float tmp55 = (tmp52 * tmp54);		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(374)
	Float tmp56 = mr->__get((int)9);		HX_STACK_VAR(tmp56,"tmp56");
	HX_STACK_LINE(374)
	Dynamic tmp57 = ((Dynamic)(tmp56));		HX_STACK_VAR(tmp57,"tmp57");
	HX_STACK_LINE(374)
	Float tmp58 = mr->__get((int)9);		HX_STACK_VAR(tmp58,"tmp58");
	HX_STACK_LINE(374)
	Dynamic tmp59 = ((Dynamic)(tmp58));		HX_STACK_VAR(tmp59,"tmp59");
	HX_STACK_LINE(374)
	Float tmp60 = (tmp57 * tmp59);		HX_STACK_VAR(tmp60,"tmp60");
	HX_STACK_LINE(374)
	Float tmp61 = (tmp55 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
	HX_STACK_LINE(374)
	Float tmp62 = mr->__get((int)10);		HX_STACK_VAR(tmp62,"tmp62");
	HX_STACK_LINE(374)
	Dynamic tmp63 = ((Dynamic)(tmp62));		HX_STACK_VAR(tmp63,"tmp63");
	HX_STACK_LINE(374)
	Float tmp64 = mr->__get((int)10);		HX_STACK_VAR(tmp64,"tmp64");
	HX_STACK_LINE(374)
	Dynamic tmp65 = ((Dynamic)(tmp64));		HX_STACK_VAR(tmp65,"tmp65");
	HX_STACK_LINE(374)
	Float tmp66 = (tmp63 * tmp65);		HX_STACK_VAR(tmp66,"tmp66");
	HX_STACK_LINE(374)
	Float tmp67 = (tmp61 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
	HX_STACK_LINE(374)
	Float tmp68 = ::Math_obj::sqrt(tmp67);		HX_STACK_VAR(tmp68,"tmp68");
	HX_STACK_LINE(374)
	scale->z = tmp68;
	HX_STACK_LINE(376)
	Float tmp69 = mr->__get((int)0);		HX_STACK_VAR(tmp69,"tmp69");
	HX_STACK_LINE(376)
	Dynamic tmp70 = ((Dynamic)(tmp69));		HX_STACK_VAR(tmp70,"tmp70");
	HX_STACK_LINE(376)
	Float tmp71 = mr->__get((int)5);		HX_STACK_VAR(tmp71,"tmp71");
	HX_STACK_LINE(376)
	Dynamic tmp72 = ((Dynamic)(tmp71));		HX_STACK_VAR(tmp72,"tmp72");
	HX_STACK_LINE(376)
	Float tmp73 = mr->__get((int)10);		HX_STACK_VAR(tmp73,"tmp73");
	HX_STACK_LINE(376)
	Dynamic tmp74 = ((Dynamic)(tmp73));		HX_STACK_VAR(tmp74,"tmp74");
	HX_STACK_LINE(376)
	Float tmp75 = (tmp72 * tmp74);		HX_STACK_VAR(tmp75,"tmp75");
	HX_STACK_LINE(376)
	Float tmp76 = mr->__get((int)6);		HX_STACK_VAR(tmp76,"tmp76");
	HX_STACK_LINE(376)
	Dynamic tmp77 = ((Dynamic)(tmp76));		HX_STACK_VAR(tmp77,"tmp77");
	HX_STACK_LINE(376)
	Float tmp78 = mr->__get((int)9);		HX_STACK_VAR(tmp78,"tmp78");
	HX_STACK_LINE(376)
	Dynamic tmp79 = ((Dynamic)(tmp78));		HX_STACK_VAR(tmp79,"tmp79");
	HX_STACK_LINE(376)
	Float tmp80 = (tmp77 * tmp79);		HX_STACK_VAR(tmp80,"tmp80");
	HX_STACK_LINE(376)
	Float tmp81 = (tmp75 - tmp80);		HX_STACK_VAR(tmp81,"tmp81");
	HX_STACK_LINE(376)
	Float tmp82 = (tmp70 * tmp81);		HX_STACK_VAR(tmp82,"tmp82");
	HX_STACK_LINE(376)
	Float tmp83 = mr->__get((int)1);		HX_STACK_VAR(tmp83,"tmp83");
	HX_STACK_LINE(376)
	Dynamic tmp84 = ((Dynamic)(tmp83));		HX_STACK_VAR(tmp84,"tmp84");
	HX_STACK_LINE(376)
	Float tmp85 = mr->__get((int)4);		HX_STACK_VAR(tmp85,"tmp85");
	HX_STACK_LINE(376)
	Dynamic tmp86 = ((Dynamic)(tmp85));		HX_STACK_VAR(tmp86,"tmp86");
	HX_STACK_LINE(376)
	Float tmp87 = mr->__get((int)10);		HX_STACK_VAR(tmp87,"tmp87");
	HX_STACK_LINE(376)
	Dynamic tmp88 = ((Dynamic)(tmp87));		HX_STACK_VAR(tmp88,"tmp88");
	HX_STACK_LINE(376)
	Float tmp89 = (tmp86 * tmp88);		HX_STACK_VAR(tmp89,"tmp89");
	HX_STACK_LINE(376)
	Float tmp90 = mr->__get((int)6);		HX_STACK_VAR(tmp90,"tmp90");
	HX_STACK_LINE(376)
	Dynamic tmp91 = ((Dynamic)(tmp90));		HX_STACK_VAR(tmp91,"tmp91");
	HX_STACK_LINE(376)
	Float tmp92 = mr->__get((int)8);		HX_STACK_VAR(tmp92,"tmp92");
	HX_STACK_LINE(376)
	Dynamic tmp93 = ((Dynamic)(tmp92));		HX_STACK_VAR(tmp93,"tmp93");
	HX_STACK_LINE(376)
	Float tmp94 = (tmp91 * tmp93);		HX_STACK_VAR(tmp94,"tmp94");
	HX_STACK_LINE(376)
	Float tmp95 = (tmp89 - tmp94);		HX_STACK_VAR(tmp95,"tmp95");
	HX_STACK_LINE(376)
	Float tmp96 = (tmp84 * tmp95);		HX_STACK_VAR(tmp96,"tmp96");
	HX_STACK_LINE(376)
	Float tmp97 = (tmp82 - tmp96);		HX_STACK_VAR(tmp97,"tmp97");
	HX_STACK_LINE(376)
	Float tmp98 = mr->__get((int)2);		HX_STACK_VAR(tmp98,"tmp98");
	HX_STACK_LINE(376)
	Dynamic tmp99 = ((Dynamic)(tmp98));		HX_STACK_VAR(tmp99,"tmp99");
	HX_STACK_LINE(376)
	Float tmp100 = mr->__get((int)4);		HX_STACK_VAR(tmp100,"tmp100");
	HX_STACK_LINE(376)
	Dynamic tmp101 = ((Dynamic)(tmp100));		HX_STACK_VAR(tmp101,"tmp101");
	HX_STACK_LINE(376)
	Float tmp102 = mr->__get((int)9);		HX_STACK_VAR(tmp102,"tmp102");
	HX_STACK_LINE(376)
	Dynamic tmp103 = ((Dynamic)(tmp102));		HX_STACK_VAR(tmp103,"tmp103");
	HX_STACK_LINE(376)
	Float tmp104 = (tmp101 * tmp103);		HX_STACK_VAR(tmp104,"tmp104");
	HX_STACK_LINE(376)
	Float tmp105 = mr->__get((int)5);		HX_STACK_VAR(tmp105,"tmp105");
	HX_STACK_LINE(376)
	Dynamic tmp106 = ((Dynamic)(tmp105));		HX_STACK_VAR(tmp106,"tmp106");
	HX_STACK_LINE(376)
	Float tmp107 = mr->__get((int)8);		HX_STACK_VAR(tmp107,"tmp107");
	HX_STACK_LINE(376)
	Dynamic tmp108 = ((Dynamic)(tmp107));		HX_STACK_VAR(tmp108,"tmp108");
	HX_STACK_LINE(376)
	Float tmp109 = (tmp106 * tmp108);		HX_STACK_VAR(tmp109,"tmp109");
	HX_STACK_LINE(376)
	Float tmp110 = (tmp104 - tmp109);		HX_STACK_VAR(tmp110,"tmp110");
	HX_STACK_LINE(376)
	Float tmp111 = (tmp99 * tmp110);		HX_STACK_VAR(tmp111,"tmp111");
	HX_STACK_LINE(376)
	Float tmp112 = (tmp97 + tmp111);		HX_STACK_VAR(tmp112,"tmp112");
	HX_STACK_LINE(376)
	bool tmp113 = (tmp112 < (int)0);		HX_STACK_VAR(tmp113,"tmp113");
	HX_STACK_LINE(376)
	if ((tmp113)){
		HX_STACK_LINE(378)
		Float tmp114 = scale->z;		HX_STACK_VAR(tmp114,"tmp114");
		HX_STACK_LINE(378)
		Float tmp115 = -(tmp114);		HX_STACK_VAR(tmp115,"tmp115");
		HX_STACK_LINE(378)
		scale->z = tmp115;
	}
	HX_STACK_LINE(382)
	Float tmp114 = mr->__get((int)0);		HX_STACK_VAR(tmp114,"tmp114");
	HX_STACK_LINE(382)
	Dynamic tmp115 = ((Dynamic)(tmp114));		HX_STACK_VAR(tmp115,"tmp115");
	HX_STACK_LINE(382)
	Float tmp116 = scale->x;		HX_STACK_VAR(tmp116,"tmp116");
	HX_STACK_LINE(382)
	Float tmp117 = (Float(tmp115) / Float(tmp116));		HX_STACK_VAR(tmp117,"tmp117");
	HX_STACK_LINE(382)
	Float tmp118 = mr[(int)0] = tmp117;		HX_STACK_VAR(tmp118,"tmp118");
	HX_STACK_LINE(382)
	tmp118;
	HX_STACK_LINE(383)
	Float tmp119 = mr->__get((int)1);		HX_STACK_VAR(tmp119,"tmp119");
	HX_STACK_LINE(383)
	Dynamic tmp120 = ((Dynamic)(tmp119));		HX_STACK_VAR(tmp120,"tmp120");
	HX_STACK_LINE(383)
	Float tmp121 = scale->x;		HX_STACK_VAR(tmp121,"tmp121");
	HX_STACK_LINE(383)
	Float tmp122 = (Float(tmp120) / Float(tmp121));		HX_STACK_VAR(tmp122,"tmp122");
	HX_STACK_LINE(383)
	Float tmp123 = mr[(int)1] = tmp122;		HX_STACK_VAR(tmp123,"tmp123");
	HX_STACK_LINE(383)
	tmp123;
	HX_STACK_LINE(384)
	Float tmp124 = mr->__get((int)2);		HX_STACK_VAR(tmp124,"tmp124");
	HX_STACK_LINE(384)
	Dynamic tmp125 = ((Dynamic)(tmp124));		HX_STACK_VAR(tmp125,"tmp125");
	HX_STACK_LINE(384)
	Float tmp126 = scale->x;		HX_STACK_VAR(tmp126,"tmp126");
	HX_STACK_LINE(384)
	Float tmp127 = (Float(tmp125) / Float(tmp126));		HX_STACK_VAR(tmp127,"tmp127");
	HX_STACK_LINE(384)
	Float tmp128 = mr[(int)2] = tmp127;		HX_STACK_VAR(tmp128,"tmp128");
	HX_STACK_LINE(384)
	tmp128;
	HX_STACK_LINE(385)
	Float tmp129 = mr->__get((int)4);		HX_STACK_VAR(tmp129,"tmp129");
	HX_STACK_LINE(385)
	Dynamic tmp130 = ((Dynamic)(tmp129));		HX_STACK_VAR(tmp130,"tmp130");
	HX_STACK_LINE(385)
	Float tmp131 = scale->y;		HX_STACK_VAR(tmp131,"tmp131");
	HX_STACK_LINE(385)
	Float tmp132 = (Float(tmp130) / Float(tmp131));		HX_STACK_VAR(tmp132,"tmp132");
	HX_STACK_LINE(385)
	Float tmp133 = mr[(int)4] = tmp132;		HX_STACK_VAR(tmp133,"tmp133");
	HX_STACK_LINE(385)
	tmp133;
	HX_STACK_LINE(386)
	Float tmp134 = mr->__get((int)5);		HX_STACK_VAR(tmp134,"tmp134");
	HX_STACK_LINE(386)
	Dynamic tmp135 = ((Dynamic)(tmp134));		HX_STACK_VAR(tmp135,"tmp135");
	HX_STACK_LINE(386)
	Float tmp136 = scale->y;		HX_STACK_VAR(tmp136,"tmp136");
	HX_STACK_LINE(386)
	Float tmp137 = (Float(tmp135) / Float(tmp136));		HX_STACK_VAR(tmp137,"tmp137");
	HX_STACK_LINE(386)
	Float tmp138 = mr[(int)5] = tmp137;		HX_STACK_VAR(tmp138,"tmp138");
	HX_STACK_LINE(386)
	tmp138;
	HX_STACK_LINE(387)
	Float tmp139 = mr->__get((int)6);		HX_STACK_VAR(tmp139,"tmp139");
	HX_STACK_LINE(387)
	Dynamic tmp140 = ((Dynamic)(tmp139));		HX_STACK_VAR(tmp140,"tmp140");
	HX_STACK_LINE(387)
	Float tmp141 = scale->y;		HX_STACK_VAR(tmp141,"tmp141");
	HX_STACK_LINE(387)
	Float tmp142 = (Float(tmp140) / Float(tmp141));		HX_STACK_VAR(tmp142,"tmp142");
	HX_STACK_LINE(387)
	Float tmp143 = mr[(int)6] = tmp142;		HX_STACK_VAR(tmp143,"tmp143");
	HX_STACK_LINE(387)
	tmp143;
	HX_STACK_LINE(388)
	Float tmp144 = mr->__get((int)8);		HX_STACK_VAR(tmp144,"tmp144");
	HX_STACK_LINE(388)
	Dynamic tmp145 = ((Dynamic)(tmp144));		HX_STACK_VAR(tmp145,"tmp145");
	HX_STACK_LINE(388)
	Float tmp146 = scale->z;		HX_STACK_VAR(tmp146,"tmp146");
	HX_STACK_LINE(388)
	Float tmp147 = (Float(tmp145) / Float(tmp146));		HX_STACK_VAR(tmp147,"tmp147");
	HX_STACK_LINE(388)
	Float tmp148 = mr[(int)8] = tmp147;		HX_STACK_VAR(tmp148,"tmp148");
	HX_STACK_LINE(388)
	tmp148;
	HX_STACK_LINE(389)
	Float tmp149 = mr->__get((int)9);		HX_STACK_VAR(tmp149,"tmp149");
	HX_STACK_LINE(389)
	Dynamic tmp150 = ((Dynamic)(tmp149));		HX_STACK_VAR(tmp150,"tmp150");
	HX_STACK_LINE(389)
	Float tmp151 = scale->z;		HX_STACK_VAR(tmp151,"tmp151");
	HX_STACK_LINE(389)
	Float tmp152 = (Float(tmp150) / Float(tmp151));		HX_STACK_VAR(tmp152,"tmp152");
	HX_STACK_LINE(389)
	Float tmp153 = mr[(int)9] = tmp152;		HX_STACK_VAR(tmp153,"tmp153");
	HX_STACK_LINE(389)
	tmp153;
	HX_STACK_LINE(390)
	Float tmp154 = mr->__get((int)10);		HX_STACK_VAR(tmp154,"tmp154");
	HX_STACK_LINE(390)
	Dynamic tmp155 = ((Dynamic)(tmp154));		HX_STACK_VAR(tmp155,"tmp155");
	HX_STACK_LINE(390)
	Float tmp156 = scale->z;		HX_STACK_VAR(tmp156,"tmp156");
	HX_STACK_LINE(390)
	Float tmp157 = (Float(tmp155) / Float(tmp156));		HX_STACK_VAR(tmp157,"tmp157");
	HX_STACK_LINE(390)
	Float tmp158 = mr[(int)10] = tmp157;		HX_STACK_VAR(tmp158,"tmp158");
	HX_STACK_LINE(390)
	tmp158;
	HX_STACK_LINE(392)
	::openfl::geom::Vector3D tmp159 = ::openfl::geom::Vector3D_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp159,"tmp159");
	HX_STACK_LINE(392)
	::openfl::geom::Vector3D rot = tmp159;		HX_STACK_VAR(rot,"rot");
	HX_STACK_LINE(394)
	bool tmp160 = (orientationStyle != null());		HX_STACK_VAR(tmp160,"tmp160");
	HX_STACK_LINE(394)
	if ((tmp160)){
		HX_STACK_LINE(394)
		Dynamic tmp161 = orientationStyle;		HX_STACK_VAR(tmp161,"tmp161");
		HX_STACK_LINE(394)
		switch( (int)(tmp161)){
			case (int)0: {
				HX_STACK_LINE(398)
				Float tmp162 = mr->__get((int)0);		HX_STACK_VAR(tmp162,"tmp162");
				HX_STACK_LINE(398)
				Dynamic tmp163 = ((Dynamic)(tmp162));		HX_STACK_VAR(tmp163,"tmp163");
				HX_STACK_LINE(398)
				Float tmp164 = mr->__get((int)5);		HX_STACK_VAR(tmp164,"tmp164");
				HX_STACK_LINE(398)
				Dynamic tmp165 = ((Dynamic)(tmp164));		HX_STACK_VAR(tmp165,"tmp165");
				HX_STACK_LINE(398)
				Float tmp166 = (tmp163 + tmp165);		HX_STACK_VAR(tmp166,"tmp166");
				HX_STACK_LINE(398)
				Float tmp167 = mr->__get((int)10);		HX_STACK_VAR(tmp167,"tmp167");
				HX_STACK_LINE(398)
				Dynamic tmp168 = ((Dynamic)(tmp167));		HX_STACK_VAR(tmp168,"tmp168");
				HX_STACK_LINE(398)
				Float tmp169 = (tmp166 + tmp168);		HX_STACK_VAR(tmp169,"tmp169");
				HX_STACK_LINE(398)
				Float tmp170 = (tmp169 - (int)1);		HX_STACK_VAR(tmp170,"tmp170");
				HX_STACK_LINE(398)
				Float tmp171 = (Float(tmp170) / Float((int)2));		HX_STACK_VAR(tmp171,"tmp171");
				HX_STACK_LINE(398)
				Float tmp172 = ::Math_obj::acos(tmp171);		HX_STACK_VAR(tmp172,"tmp172");
				HX_STACK_LINE(398)
				rot->w = tmp172;
				HX_STACK_LINE(400)
				Float tmp173 = mr->__get((int)6);		HX_STACK_VAR(tmp173,"tmp173");
				HX_STACK_LINE(400)
				Dynamic tmp174 = ((Dynamic)(tmp173));		HX_STACK_VAR(tmp174,"tmp174");
				HX_STACK_LINE(400)
				Float tmp175 = mr->__get((int)9);		HX_STACK_VAR(tmp175,"tmp175");
				HX_STACK_LINE(400)
				Dynamic tmp176 = ((Dynamic)(tmp175));		HX_STACK_VAR(tmp176,"tmp176");
				HX_STACK_LINE(400)
				Float tmp177 = (tmp174 - tmp176);		HX_STACK_VAR(tmp177,"tmp177");
				HX_STACK_LINE(400)
				Float tmp178 = mr->__get((int)6);		HX_STACK_VAR(tmp178,"tmp178");
				HX_STACK_LINE(400)
				Dynamic tmp179 = ((Dynamic)(tmp178));		HX_STACK_VAR(tmp179,"tmp179");
				HX_STACK_LINE(400)
				Float tmp180 = mr->__get((int)9);		HX_STACK_VAR(tmp180,"tmp180");
				HX_STACK_LINE(400)
				Dynamic tmp181 = ((Dynamic)(tmp180));		HX_STACK_VAR(tmp181,"tmp181");
				HX_STACK_LINE(400)
				Float tmp182 = (tmp179 - tmp181);		HX_STACK_VAR(tmp182,"tmp182");
				HX_STACK_LINE(400)
				Float tmp183 = (tmp177 * tmp182);		HX_STACK_VAR(tmp183,"tmp183");
				HX_STACK_LINE(400)
				Float tmp184 = mr->__get((int)8);		HX_STACK_VAR(tmp184,"tmp184");
				HX_STACK_LINE(400)
				Dynamic tmp185 = ((Dynamic)(tmp184));		HX_STACK_VAR(tmp185,"tmp185");
				HX_STACK_LINE(400)
				Float tmp186 = mr->__get((int)2);		HX_STACK_VAR(tmp186,"tmp186");
				HX_STACK_LINE(400)
				Dynamic tmp187 = ((Dynamic)(tmp186));		HX_STACK_VAR(tmp187,"tmp187");
				HX_STACK_LINE(400)
				Float tmp188 = (tmp185 - tmp187);		HX_STACK_VAR(tmp188,"tmp188");
				HX_STACK_LINE(400)
				Float tmp189 = mr->__get((int)8);		HX_STACK_VAR(tmp189,"tmp189");
				HX_STACK_LINE(400)
				Dynamic tmp190 = ((Dynamic)(tmp189));		HX_STACK_VAR(tmp190,"tmp190");
				HX_STACK_LINE(400)
				Float tmp191 = mr->__get((int)2);		HX_STACK_VAR(tmp191,"tmp191");
				HX_STACK_LINE(400)
				Dynamic tmp192 = ((Dynamic)(tmp191));		HX_STACK_VAR(tmp192,"tmp192");
				HX_STACK_LINE(400)
				Float tmp193 = (tmp190 - tmp192);		HX_STACK_VAR(tmp193,"tmp193");
				HX_STACK_LINE(400)
				Float tmp194 = (tmp188 * tmp193);		HX_STACK_VAR(tmp194,"tmp194");
				HX_STACK_LINE(400)
				Float tmp195 = (tmp183 + tmp194);		HX_STACK_VAR(tmp195,"tmp195");
				HX_STACK_LINE(400)
				Float tmp196 = mr->__get((int)1);		HX_STACK_VAR(tmp196,"tmp196");
				HX_STACK_LINE(400)
				Dynamic tmp197 = ((Dynamic)(tmp196));		HX_STACK_VAR(tmp197,"tmp197");
				HX_STACK_LINE(400)
				Float tmp198 = mr->__get((int)4);		HX_STACK_VAR(tmp198,"tmp198");
				HX_STACK_LINE(400)
				Dynamic tmp199 = ((Dynamic)(tmp198));		HX_STACK_VAR(tmp199,"tmp199");
				HX_STACK_LINE(400)
				Float tmp200 = (tmp197 - tmp199);		HX_STACK_VAR(tmp200,"tmp200");
				HX_STACK_LINE(400)
				Float tmp201 = mr->__get((int)1);		HX_STACK_VAR(tmp201,"tmp201");
				HX_STACK_LINE(400)
				Dynamic tmp202 = ((Dynamic)(tmp201));		HX_STACK_VAR(tmp202,"tmp202");
				HX_STACK_LINE(400)
				Float tmp203 = mr->__get((int)4);		HX_STACK_VAR(tmp203,"tmp203");
				HX_STACK_LINE(400)
				Dynamic tmp204 = ((Dynamic)(tmp203));		HX_STACK_VAR(tmp204,"tmp204");
				HX_STACK_LINE(400)
				Float tmp205 = (tmp202 - tmp204);		HX_STACK_VAR(tmp205,"tmp205");
				HX_STACK_LINE(400)
				Float tmp206 = (tmp200 * tmp205);		HX_STACK_VAR(tmp206,"tmp206");
				HX_STACK_LINE(400)
				Float tmp207 = (tmp195 + tmp206);		HX_STACK_VAR(tmp207,"tmp207");
				HX_STACK_LINE(400)
				Float tmp208 = ::Math_obj::sqrt(tmp207);		HX_STACK_VAR(tmp208,"tmp208");
				HX_STACK_LINE(400)
				Float len = tmp208;		HX_STACK_VAR(len,"len");
				HX_STACK_LINE(402)
				bool tmp209 = (len != (int)0);		HX_STACK_VAR(tmp209,"tmp209");
				HX_STACK_LINE(402)
				if ((tmp209)){
					HX_STACK_LINE(404)
					Float tmp210 = mr->__get((int)6);		HX_STACK_VAR(tmp210,"tmp210");
					HX_STACK_LINE(404)
					Dynamic tmp211 = ((Dynamic)(tmp210));		HX_STACK_VAR(tmp211,"tmp211");
					HX_STACK_LINE(404)
					Float tmp212 = mr->__get((int)9);		HX_STACK_VAR(tmp212,"tmp212");
					HX_STACK_LINE(404)
					Dynamic tmp213 = ((Dynamic)(tmp212));		HX_STACK_VAR(tmp213,"tmp213");
					HX_STACK_LINE(404)
					Float tmp214 = (tmp211 - tmp213);		HX_STACK_VAR(tmp214,"tmp214");
					HX_STACK_LINE(404)
					Float tmp215 = len;		HX_STACK_VAR(tmp215,"tmp215");
					HX_STACK_LINE(404)
					Float tmp216 = (Float(tmp214) / Float(tmp215));		HX_STACK_VAR(tmp216,"tmp216");
					HX_STACK_LINE(404)
					rot->x = tmp216;
					HX_STACK_LINE(405)
					Float tmp217 = mr->__get((int)8);		HX_STACK_VAR(tmp217,"tmp217");
					HX_STACK_LINE(405)
					Dynamic tmp218 = ((Dynamic)(tmp217));		HX_STACK_VAR(tmp218,"tmp218");
					HX_STACK_LINE(405)
					Float tmp219 = mr->__get((int)2);		HX_STACK_VAR(tmp219,"tmp219");
					HX_STACK_LINE(405)
					Dynamic tmp220 = ((Dynamic)(tmp219));		HX_STACK_VAR(tmp220,"tmp220");
					HX_STACK_LINE(405)
					Float tmp221 = (tmp218 - tmp220);		HX_STACK_VAR(tmp221,"tmp221");
					HX_STACK_LINE(405)
					Float tmp222 = len;		HX_STACK_VAR(tmp222,"tmp222");
					HX_STACK_LINE(405)
					Float tmp223 = (Float(tmp221) / Float(tmp222));		HX_STACK_VAR(tmp223,"tmp223");
					HX_STACK_LINE(405)
					rot->y = tmp223;
					HX_STACK_LINE(406)
					Float tmp224 = mr->__get((int)1);		HX_STACK_VAR(tmp224,"tmp224");
					HX_STACK_LINE(406)
					Dynamic tmp225 = ((Dynamic)(tmp224));		HX_STACK_VAR(tmp225,"tmp225");
					HX_STACK_LINE(406)
					Float tmp226 = mr->__get((int)4);		HX_STACK_VAR(tmp226,"tmp226");
					HX_STACK_LINE(406)
					Dynamic tmp227 = ((Dynamic)(tmp226));		HX_STACK_VAR(tmp227,"tmp227");
					HX_STACK_LINE(406)
					Float tmp228 = (tmp225 - tmp227);		HX_STACK_VAR(tmp228,"tmp228");
					HX_STACK_LINE(406)
					Float tmp229 = len;		HX_STACK_VAR(tmp229,"tmp229");
					HX_STACK_LINE(406)
					Float tmp230 = (Float(tmp228) / Float(tmp229));		HX_STACK_VAR(tmp230,"tmp230");
					HX_STACK_LINE(406)
					rot->z = tmp230;
				}
				else{
					HX_STACK_LINE(410)
					Float tmp210 = rot->z = (int)0;		HX_STACK_VAR(tmp210,"tmp210");
					HX_STACK_LINE(410)
					Float tmp211 = rot->y = tmp210;		HX_STACK_VAR(tmp211,"tmp211");
					HX_STACK_LINE(410)
					rot->x = tmp211;
				}
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(416)
				Float tmp162 = mr->__get((int)0);		HX_STACK_VAR(tmp162,"tmp162");
				HX_STACK_LINE(416)
				Dynamic tmp163 = ((Dynamic)(tmp162));		HX_STACK_VAR(tmp163,"tmp163");
				HX_STACK_LINE(416)
				Float tmp164 = mr->__get((int)5);		HX_STACK_VAR(tmp164,"tmp164");
				HX_STACK_LINE(416)
				Dynamic tmp165 = ((Dynamic)(tmp164));		HX_STACK_VAR(tmp165,"tmp165");
				HX_STACK_LINE(416)
				Float tmp166 = (tmp163 + tmp165);		HX_STACK_VAR(tmp166,"tmp166");
				HX_STACK_LINE(416)
				Float tmp167 = mr->__get((int)10);		HX_STACK_VAR(tmp167,"tmp167");
				HX_STACK_LINE(416)
				Dynamic tmp168 = ((Dynamic)(tmp167));		HX_STACK_VAR(tmp168,"tmp168");
				HX_STACK_LINE(416)
				Float tmp169 = (tmp166 + tmp168);		HX_STACK_VAR(tmp169,"tmp169");
				HX_STACK_LINE(416)
				Float tr = tmp169;		HX_STACK_VAR(tr,"tr");
				HX_STACK_LINE(418)
				bool tmp170 = (tr > (int)0);		HX_STACK_VAR(tmp170,"tmp170");
				HX_STACK_LINE(418)
				if ((tmp170)){
					HX_STACK_LINE(420)
					Float tmp171 = ((int)1 + tr);		HX_STACK_VAR(tmp171,"tmp171");
					HX_STACK_LINE(420)
					Float tmp172 = ::Math_obj::sqrt(tmp171);		HX_STACK_VAR(tmp172,"tmp172");
					HX_STACK_LINE(420)
					Float tmp173 = (Float(tmp172) / Float((int)2));		HX_STACK_VAR(tmp173,"tmp173");
					HX_STACK_LINE(420)
					rot->w = tmp173;
					HX_STACK_LINE(422)
					Float tmp174 = mr->__get((int)6);		HX_STACK_VAR(tmp174,"tmp174");
					HX_STACK_LINE(422)
					Dynamic tmp175 = ((Dynamic)(tmp174));		HX_STACK_VAR(tmp175,"tmp175");
					HX_STACK_LINE(422)
					Float tmp176 = mr->__get((int)9);		HX_STACK_VAR(tmp176,"tmp176");
					HX_STACK_LINE(422)
					Dynamic tmp177 = ((Dynamic)(tmp176));		HX_STACK_VAR(tmp177,"tmp177");
					HX_STACK_LINE(422)
					Float tmp178 = (tmp175 - tmp177);		HX_STACK_VAR(tmp178,"tmp178");
					HX_STACK_LINE(422)
					Float tmp179 = ((int)4 * rot->w);		HX_STACK_VAR(tmp179,"tmp179");
					HX_STACK_LINE(422)
					Float tmp180 = (Float(tmp178) / Float(tmp179));		HX_STACK_VAR(tmp180,"tmp180");
					HX_STACK_LINE(422)
					rot->x = tmp180;
					HX_STACK_LINE(423)
					Float tmp181 = mr->__get((int)8);		HX_STACK_VAR(tmp181,"tmp181");
					HX_STACK_LINE(423)
					Dynamic tmp182 = ((Dynamic)(tmp181));		HX_STACK_VAR(tmp182,"tmp182");
					HX_STACK_LINE(423)
					Float tmp183 = mr->__get((int)2);		HX_STACK_VAR(tmp183,"tmp183");
					HX_STACK_LINE(423)
					Dynamic tmp184 = ((Dynamic)(tmp183));		HX_STACK_VAR(tmp184,"tmp184");
					HX_STACK_LINE(423)
					Float tmp185 = (tmp182 - tmp184);		HX_STACK_VAR(tmp185,"tmp185");
					HX_STACK_LINE(423)
					Float tmp186 = ((int)4 * rot->w);		HX_STACK_VAR(tmp186,"tmp186");
					HX_STACK_LINE(423)
					Float tmp187 = (Float(tmp185) / Float(tmp186));		HX_STACK_VAR(tmp187,"tmp187");
					HX_STACK_LINE(423)
					rot->y = tmp187;
					HX_STACK_LINE(424)
					Float tmp188 = mr->__get((int)1);		HX_STACK_VAR(tmp188,"tmp188");
					HX_STACK_LINE(424)
					Dynamic tmp189 = ((Dynamic)(tmp188));		HX_STACK_VAR(tmp189,"tmp189");
					HX_STACK_LINE(424)
					Float tmp190 = mr->__get((int)4);		HX_STACK_VAR(tmp190,"tmp190");
					HX_STACK_LINE(424)
					Dynamic tmp191 = ((Dynamic)(tmp190));		HX_STACK_VAR(tmp191,"tmp191");
					HX_STACK_LINE(424)
					Float tmp192 = (tmp189 - tmp191);		HX_STACK_VAR(tmp192,"tmp192");
					HX_STACK_LINE(424)
					Float tmp193 = ((int)4 * rot->w);		HX_STACK_VAR(tmp193,"tmp193");
					HX_STACK_LINE(424)
					Float tmp194 = (Float(tmp192) / Float(tmp193));		HX_STACK_VAR(tmp194,"tmp194");
					HX_STACK_LINE(424)
					rot->z = tmp194;
				}
				else{
					HX_STACK_LINE(426)
					Float tmp171 = mr->__get((int)0);		HX_STACK_VAR(tmp171,"tmp171");
					HX_STACK_LINE(426)
					Dynamic tmp172 = ((Dynamic)(tmp171));		HX_STACK_VAR(tmp172,"tmp172");
					HX_STACK_LINE(426)
					Float tmp173 = mr->__get((int)5);		HX_STACK_VAR(tmp173,"tmp173");
					HX_STACK_LINE(426)
					Dynamic tmp174 = ((Dynamic)(tmp173));		HX_STACK_VAR(tmp174,"tmp174");
					HX_STACK_LINE(426)
					bool tmp175 = (tmp172 > tmp174);		HX_STACK_VAR(tmp175,"tmp175");
					HX_STACK_LINE(426)
					bool tmp176;		HX_STACK_VAR(tmp176,"tmp176");
					HX_STACK_LINE(426)
					if ((tmp175)){
						HX_STACK_LINE(426)
						Float tmp177 = mr->__get((int)0);		HX_STACK_VAR(tmp177,"tmp177");
						HX_STACK_LINE(426)
						Float tmp178 = tmp177;		HX_STACK_VAR(tmp178,"tmp178");
						HX_STACK_LINE(426)
						Dynamic tmp179 = ((Dynamic)(tmp178));		HX_STACK_VAR(tmp179,"tmp179");
						HX_STACK_LINE(426)
						Float tmp180 = mr->__get((int)10);		HX_STACK_VAR(tmp180,"tmp180");
						HX_STACK_LINE(426)
						Float tmp181 = tmp180;		HX_STACK_VAR(tmp181,"tmp181");
						HX_STACK_LINE(426)
						Dynamic tmp182 = ((Dynamic)(tmp181));		HX_STACK_VAR(tmp182,"tmp182");
						HX_STACK_LINE(426)
						tmp176 = (tmp179 > tmp182);
					}
					else{
						HX_STACK_LINE(426)
						tmp176 = false;
					}
					HX_STACK_LINE(426)
					if ((tmp176)){
						HX_STACK_LINE(428)
						Float tmp177 = mr->__get((int)0);		HX_STACK_VAR(tmp177,"tmp177");
						HX_STACK_LINE(428)
						Dynamic tmp178 = ((Dynamic)(tmp177));		HX_STACK_VAR(tmp178,"tmp178");
						HX_STACK_LINE(428)
						Float tmp179 = ((int)1 + tmp178);		HX_STACK_VAR(tmp179,"tmp179");
						HX_STACK_LINE(428)
						Float tmp180 = mr->__get((int)5);		HX_STACK_VAR(tmp180,"tmp180");
						HX_STACK_LINE(428)
						Dynamic tmp181 = ((Dynamic)(tmp180));		HX_STACK_VAR(tmp181,"tmp181");
						HX_STACK_LINE(428)
						Float tmp182 = (tmp179 - tmp181);		HX_STACK_VAR(tmp182,"tmp182");
						HX_STACK_LINE(428)
						Float tmp183 = mr->__get((int)10);		HX_STACK_VAR(tmp183,"tmp183");
						HX_STACK_LINE(428)
						Dynamic tmp184 = ((Dynamic)(tmp183));		HX_STACK_VAR(tmp184,"tmp184");
						HX_STACK_LINE(428)
						Float tmp185 = (tmp182 - tmp184);		HX_STACK_VAR(tmp185,"tmp185");
						HX_STACK_LINE(428)
						Float tmp186 = ::Math_obj::sqrt(tmp185);		HX_STACK_VAR(tmp186,"tmp186");
						HX_STACK_LINE(428)
						Float tmp187 = (Float(tmp186) / Float((int)2));		HX_STACK_VAR(tmp187,"tmp187");
						HX_STACK_LINE(428)
						rot->x = tmp187;
						HX_STACK_LINE(430)
						Float tmp188 = mr->__get((int)6);		HX_STACK_VAR(tmp188,"tmp188");
						HX_STACK_LINE(430)
						Dynamic tmp189 = ((Dynamic)(tmp188));		HX_STACK_VAR(tmp189,"tmp189");
						HX_STACK_LINE(430)
						Float tmp190 = mr->__get((int)9);		HX_STACK_VAR(tmp190,"tmp190");
						HX_STACK_LINE(430)
						Dynamic tmp191 = ((Dynamic)(tmp190));		HX_STACK_VAR(tmp191,"tmp191");
						HX_STACK_LINE(430)
						Float tmp192 = (tmp189 - tmp191);		HX_STACK_VAR(tmp192,"tmp192");
						HX_STACK_LINE(430)
						Float tmp193 = ((int)4 * rot->x);		HX_STACK_VAR(tmp193,"tmp193");
						HX_STACK_LINE(430)
						Float tmp194 = (Float(tmp192) / Float(tmp193));		HX_STACK_VAR(tmp194,"tmp194");
						HX_STACK_LINE(430)
						rot->w = tmp194;
						HX_STACK_LINE(431)
						Float tmp195 = mr->__get((int)1);		HX_STACK_VAR(tmp195,"tmp195");
						HX_STACK_LINE(431)
						Dynamic tmp196 = ((Dynamic)(tmp195));		HX_STACK_VAR(tmp196,"tmp196");
						HX_STACK_LINE(431)
						Float tmp197 = mr->__get((int)4);		HX_STACK_VAR(tmp197,"tmp197");
						HX_STACK_LINE(431)
						Dynamic tmp198 = ((Dynamic)(tmp197));		HX_STACK_VAR(tmp198,"tmp198");
						HX_STACK_LINE(431)
						Float tmp199 = (tmp196 + tmp198);		HX_STACK_VAR(tmp199,"tmp199");
						HX_STACK_LINE(431)
						Float tmp200 = ((int)4 * rot->x);		HX_STACK_VAR(tmp200,"tmp200");
						HX_STACK_LINE(431)
						Float tmp201 = (Float(tmp199) / Float(tmp200));		HX_STACK_VAR(tmp201,"tmp201");
						HX_STACK_LINE(431)
						rot->y = tmp201;
						HX_STACK_LINE(432)
						Float tmp202 = mr->__get((int)8);		HX_STACK_VAR(tmp202,"tmp202");
						HX_STACK_LINE(432)
						Dynamic tmp203 = ((Dynamic)(tmp202));		HX_STACK_VAR(tmp203,"tmp203");
						HX_STACK_LINE(432)
						Float tmp204 = mr->__get((int)2);		HX_STACK_VAR(tmp204,"tmp204");
						HX_STACK_LINE(432)
						Dynamic tmp205 = ((Dynamic)(tmp204));		HX_STACK_VAR(tmp205,"tmp205");
						HX_STACK_LINE(432)
						Float tmp206 = (tmp203 + tmp205);		HX_STACK_VAR(tmp206,"tmp206");
						HX_STACK_LINE(432)
						Float tmp207 = ((int)4 * rot->x);		HX_STACK_VAR(tmp207,"tmp207");
						HX_STACK_LINE(432)
						Float tmp208 = (Float(tmp206) / Float(tmp207));		HX_STACK_VAR(tmp208,"tmp208");
						HX_STACK_LINE(432)
						rot->z = tmp208;
					}
					else{
						HX_STACK_LINE(434)
						Float tmp177 = mr->__get((int)5);		HX_STACK_VAR(tmp177,"tmp177");
						HX_STACK_LINE(434)
						Dynamic tmp178 = ((Dynamic)(tmp177));		HX_STACK_VAR(tmp178,"tmp178");
						HX_STACK_LINE(434)
						Float tmp179 = mr->__get((int)10);		HX_STACK_VAR(tmp179,"tmp179");
						HX_STACK_LINE(434)
						Dynamic tmp180 = ((Dynamic)(tmp179));		HX_STACK_VAR(tmp180,"tmp180");
						HX_STACK_LINE(434)
						bool tmp181 = (tmp178 > tmp180);		HX_STACK_VAR(tmp181,"tmp181");
						HX_STACK_LINE(434)
						if ((tmp181)){
							HX_STACK_LINE(436)
							Float tmp182 = mr->__get((int)5);		HX_STACK_VAR(tmp182,"tmp182");
							HX_STACK_LINE(436)
							Dynamic tmp183 = ((Dynamic)(tmp182));		HX_STACK_VAR(tmp183,"tmp183");
							HX_STACK_LINE(436)
							Float tmp184 = ((int)1 + tmp183);		HX_STACK_VAR(tmp184,"tmp184");
							HX_STACK_LINE(436)
							Float tmp185 = mr->__get((int)0);		HX_STACK_VAR(tmp185,"tmp185");
							HX_STACK_LINE(436)
							Dynamic tmp186 = ((Dynamic)(tmp185));		HX_STACK_VAR(tmp186,"tmp186");
							HX_STACK_LINE(436)
							Float tmp187 = (tmp184 - tmp186);		HX_STACK_VAR(tmp187,"tmp187");
							HX_STACK_LINE(436)
							Float tmp188 = mr->__get((int)10);		HX_STACK_VAR(tmp188,"tmp188");
							HX_STACK_LINE(436)
							Dynamic tmp189 = ((Dynamic)(tmp188));		HX_STACK_VAR(tmp189,"tmp189");
							HX_STACK_LINE(436)
							Float tmp190 = (tmp187 - tmp189);		HX_STACK_VAR(tmp190,"tmp190");
							HX_STACK_LINE(436)
							Float tmp191 = ::Math_obj::sqrt(tmp190);		HX_STACK_VAR(tmp191,"tmp191");
							HX_STACK_LINE(436)
							Float tmp192 = (Float(tmp191) / Float((int)2));		HX_STACK_VAR(tmp192,"tmp192");
							HX_STACK_LINE(436)
							rot->y = tmp192;
							HX_STACK_LINE(438)
							Float tmp193 = mr->__get((int)1);		HX_STACK_VAR(tmp193,"tmp193");
							HX_STACK_LINE(438)
							Dynamic tmp194 = ((Dynamic)(tmp193));		HX_STACK_VAR(tmp194,"tmp194");
							HX_STACK_LINE(438)
							Float tmp195 = mr->__get((int)4);		HX_STACK_VAR(tmp195,"tmp195");
							HX_STACK_LINE(438)
							Dynamic tmp196 = ((Dynamic)(tmp195));		HX_STACK_VAR(tmp196,"tmp196");
							HX_STACK_LINE(438)
							Float tmp197 = (tmp194 + tmp196);		HX_STACK_VAR(tmp197,"tmp197");
							HX_STACK_LINE(438)
							Float tmp198 = ((int)4 * rot->y);		HX_STACK_VAR(tmp198,"tmp198");
							HX_STACK_LINE(438)
							Float tmp199 = (Float(tmp197) / Float(tmp198));		HX_STACK_VAR(tmp199,"tmp199");
							HX_STACK_LINE(438)
							rot->x = tmp199;
							HX_STACK_LINE(439)
							Float tmp200 = mr->__get((int)8);		HX_STACK_VAR(tmp200,"tmp200");
							HX_STACK_LINE(439)
							Dynamic tmp201 = ((Dynamic)(tmp200));		HX_STACK_VAR(tmp201,"tmp201");
							HX_STACK_LINE(439)
							Float tmp202 = mr->__get((int)2);		HX_STACK_VAR(tmp202,"tmp202");
							HX_STACK_LINE(439)
							Dynamic tmp203 = ((Dynamic)(tmp202));		HX_STACK_VAR(tmp203,"tmp203");
							HX_STACK_LINE(439)
							Float tmp204 = (tmp201 - tmp203);		HX_STACK_VAR(tmp204,"tmp204");
							HX_STACK_LINE(439)
							Float tmp205 = ((int)4 * rot->y);		HX_STACK_VAR(tmp205,"tmp205");
							HX_STACK_LINE(439)
							Float tmp206 = (Float(tmp204) / Float(tmp205));		HX_STACK_VAR(tmp206,"tmp206");
							HX_STACK_LINE(439)
							rot->w = tmp206;
							HX_STACK_LINE(440)
							Float tmp207 = mr->__get((int)6);		HX_STACK_VAR(tmp207,"tmp207");
							HX_STACK_LINE(440)
							Dynamic tmp208 = ((Dynamic)(tmp207));		HX_STACK_VAR(tmp208,"tmp208");
							HX_STACK_LINE(440)
							Float tmp209 = mr->__get((int)9);		HX_STACK_VAR(tmp209,"tmp209");
							HX_STACK_LINE(440)
							Dynamic tmp210 = ((Dynamic)(tmp209));		HX_STACK_VAR(tmp210,"tmp210");
							HX_STACK_LINE(440)
							Float tmp211 = (tmp208 + tmp210);		HX_STACK_VAR(tmp211,"tmp211");
							HX_STACK_LINE(440)
							Float tmp212 = ((int)4 * rot->y);		HX_STACK_VAR(tmp212,"tmp212");
							HX_STACK_LINE(440)
							Float tmp213 = (Float(tmp211) / Float(tmp212));		HX_STACK_VAR(tmp213,"tmp213");
							HX_STACK_LINE(440)
							rot->z = tmp213;
						}
						else{
							HX_STACK_LINE(444)
							Float tmp182 = mr->__get((int)10);		HX_STACK_VAR(tmp182,"tmp182");
							HX_STACK_LINE(444)
							Dynamic tmp183 = ((Dynamic)(tmp182));		HX_STACK_VAR(tmp183,"tmp183");
							HX_STACK_LINE(444)
							Float tmp184 = ((int)1 + tmp183);		HX_STACK_VAR(tmp184,"tmp184");
							HX_STACK_LINE(444)
							Float tmp185 = mr->__get((int)0);		HX_STACK_VAR(tmp185,"tmp185");
							HX_STACK_LINE(444)
							Dynamic tmp186 = ((Dynamic)(tmp185));		HX_STACK_VAR(tmp186,"tmp186");
							HX_STACK_LINE(444)
							Float tmp187 = (tmp184 - tmp186);		HX_STACK_VAR(tmp187,"tmp187");
							HX_STACK_LINE(444)
							Float tmp188 = mr->__get((int)5);		HX_STACK_VAR(tmp188,"tmp188");
							HX_STACK_LINE(444)
							Dynamic tmp189 = ((Dynamic)(tmp188));		HX_STACK_VAR(tmp189,"tmp189");
							HX_STACK_LINE(444)
							Float tmp190 = (tmp187 - tmp189);		HX_STACK_VAR(tmp190,"tmp190");
							HX_STACK_LINE(444)
							Float tmp191 = ::Math_obj::sqrt(tmp190);		HX_STACK_VAR(tmp191,"tmp191");
							HX_STACK_LINE(444)
							Float tmp192 = (Float(tmp191) / Float((int)2));		HX_STACK_VAR(tmp192,"tmp192");
							HX_STACK_LINE(444)
							rot->z = tmp192;
							HX_STACK_LINE(446)
							Float tmp193 = mr->__get((int)8);		HX_STACK_VAR(tmp193,"tmp193");
							HX_STACK_LINE(446)
							Dynamic tmp194 = ((Dynamic)(tmp193));		HX_STACK_VAR(tmp194,"tmp194");
							HX_STACK_LINE(446)
							Float tmp195 = mr->__get((int)2);		HX_STACK_VAR(tmp195,"tmp195");
							HX_STACK_LINE(446)
							Dynamic tmp196 = ((Dynamic)(tmp195));		HX_STACK_VAR(tmp196,"tmp196");
							HX_STACK_LINE(446)
							Float tmp197 = (tmp194 + tmp196);		HX_STACK_VAR(tmp197,"tmp197");
							HX_STACK_LINE(446)
							Float tmp198 = ((int)4 * rot->z);		HX_STACK_VAR(tmp198,"tmp198");
							HX_STACK_LINE(446)
							Float tmp199 = (Float(tmp197) / Float(tmp198));		HX_STACK_VAR(tmp199,"tmp199");
							HX_STACK_LINE(446)
							rot->x = tmp199;
							HX_STACK_LINE(447)
							Float tmp200 = mr->__get((int)6);		HX_STACK_VAR(tmp200,"tmp200");
							HX_STACK_LINE(447)
							Dynamic tmp201 = ((Dynamic)(tmp200));		HX_STACK_VAR(tmp201,"tmp201");
							HX_STACK_LINE(447)
							Float tmp202 = mr->__get((int)9);		HX_STACK_VAR(tmp202,"tmp202");
							HX_STACK_LINE(447)
							Dynamic tmp203 = ((Dynamic)(tmp202));		HX_STACK_VAR(tmp203,"tmp203");
							HX_STACK_LINE(447)
							Float tmp204 = (tmp201 + tmp203);		HX_STACK_VAR(tmp204,"tmp204");
							HX_STACK_LINE(447)
							Float tmp205 = ((int)4 * rot->z);		HX_STACK_VAR(tmp205,"tmp205");
							HX_STACK_LINE(447)
							Float tmp206 = (Float(tmp204) / Float(tmp205));		HX_STACK_VAR(tmp206,"tmp206");
							HX_STACK_LINE(447)
							rot->y = tmp206;
							HX_STACK_LINE(448)
							Float tmp207 = mr->__get((int)1);		HX_STACK_VAR(tmp207,"tmp207");
							HX_STACK_LINE(448)
							Dynamic tmp208 = ((Dynamic)(tmp207));		HX_STACK_VAR(tmp208,"tmp208");
							HX_STACK_LINE(448)
							Float tmp209 = mr->__get((int)4);		HX_STACK_VAR(tmp209,"tmp209");
							HX_STACK_LINE(448)
							Dynamic tmp210 = ((Dynamic)(tmp209));		HX_STACK_VAR(tmp210,"tmp210");
							HX_STACK_LINE(448)
							Float tmp211 = (tmp208 - tmp210);		HX_STACK_VAR(tmp211,"tmp211");
							HX_STACK_LINE(448)
							Float tmp212 = ((int)4 * rot->z);		HX_STACK_VAR(tmp212,"tmp212");
							HX_STACK_LINE(448)
							Float tmp213 = (Float(tmp211) / Float(tmp212));		HX_STACK_VAR(tmp213,"tmp213");
							HX_STACK_LINE(448)
							rot->w = tmp213;
						}
					}
				}
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(454)
				Float tmp162 = mr->__get((int)2);		HX_STACK_VAR(tmp162,"tmp162");
				HX_STACK_LINE(454)
				Dynamic tmp163 = ((Dynamic)(tmp162));		HX_STACK_VAR(tmp163,"tmp163");
				HX_STACK_LINE(454)
				Float tmp164 = -(tmp163);		HX_STACK_VAR(tmp164,"tmp164");
				HX_STACK_LINE(454)
				Float tmp165 = ::Math_obj::asin(tmp164);		HX_STACK_VAR(tmp165,"tmp165");
				HX_STACK_LINE(454)
				rot->y = tmp165;
				HX_STACK_LINE(456)
				Float tmp166 = mr->__get((int)2);		HX_STACK_VAR(tmp166,"tmp166");
				HX_STACK_LINE(456)
				Dynamic tmp167 = ((Dynamic)(tmp166));		HX_STACK_VAR(tmp167,"tmp167");
				HX_STACK_LINE(456)
				bool tmp168 = (tmp167 != (int)1);		HX_STACK_VAR(tmp168,"tmp168");
				HX_STACK_LINE(456)
				bool tmp169;		HX_STACK_VAR(tmp169,"tmp169");
				HX_STACK_LINE(456)
				if ((tmp168)){
					HX_STACK_LINE(456)
					Float tmp170 = mr->__get((int)2);		HX_STACK_VAR(tmp170,"tmp170");
					HX_STACK_LINE(456)
					Float tmp171 = tmp170;		HX_STACK_VAR(tmp171,"tmp171");
					HX_STACK_LINE(456)
					Dynamic tmp172 = ((Dynamic)(tmp171));		HX_STACK_VAR(tmp172,"tmp172");
					HX_STACK_LINE(456)
					tmp169 = (tmp172 != (int)-1);
				}
				else{
					HX_STACK_LINE(456)
					tmp169 = false;
				}
				HX_STACK_LINE(456)
				if ((tmp169)){
					HX_STACK_LINE(458)
					Float tmp170 = mr->__get((int)6);		HX_STACK_VAR(tmp170,"tmp170");
					HX_STACK_LINE(458)
					Dynamic tmp171 = ((Dynamic)(tmp170));		HX_STACK_VAR(tmp171,"tmp171");
					HX_STACK_LINE(458)
					Float tmp172 = mr->__get((int)10);		HX_STACK_VAR(tmp172,"tmp172");
					HX_STACK_LINE(458)
					Dynamic tmp173 = ((Dynamic)(tmp172));		HX_STACK_VAR(tmp173,"tmp173");
					HX_STACK_LINE(458)
					Float tmp174 = ::Math_obj::atan2(tmp171,tmp173);		HX_STACK_VAR(tmp174,"tmp174");
					HX_STACK_LINE(458)
					rot->x = tmp174;
					HX_STACK_LINE(459)
					Float tmp175 = mr->__get((int)1);		HX_STACK_VAR(tmp175,"tmp175");
					HX_STACK_LINE(459)
					Dynamic tmp176 = ((Dynamic)(tmp175));		HX_STACK_VAR(tmp176,"tmp176");
					HX_STACK_LINE(459)
					Float tmp177 = mr->__get((int)0);		HX_STACK_VAR(tmp177,"tmp177");
					HX_STACK_LINE(459)
					Dynamic tmp178 = ((Dynamic)(tmp177));		HX_STACK_VAR(tmp178,"tmp178");
					HX_STACK_LINE(459)
					Float tmp179 = ::Math_obj::atan2(tmp176,tmp178);		HX_STACK_VAR(tmp179,"tmp179");
					HX_STACK_LINE(459)
					rot->z = tmp179;
				}
				else{
					HX_STACK_LINE(463)
					rot->z = (int)0;
					HX_STACK_LINE(464)
					Float tmp170 = mr->__get((int)4);		HX_STACK_VAR(tmp170,"tmp170");
					HX_STACK_LINE(464)
					Dynamic tmp171 = ((Dynamic)(tmp170));		HX_STACK_VAR(tmp171,"tmp171");
					HX_STACK_LINE(464)
					Float tmp172 = mr->__get((int)5);		HX_STACK_VAR(tmp172,"tmp172");
					HX_STACK_LINE(464)
					Dynamic tmp173 = ((Dynamic)(tmp172));		HX_STACK_VAR(tmp173,"tmp173");
					HX_STACK_LINE(464)
					Float tmp174 = ::Math_obj::atan2(tmp171,tmp173);		HX_STACK_VAR(tmp174,"tmp174");
					HX_STACK_LINE(464)
					rot->x = tmp174;
				}
			}
			;break;
		}
	}
	HX_STACK_LINE(470)
	::openfl::geom::Vector3D tmp161 = pos;		HX_STACK_VAR(tmp161,"tmp161");
	HX_STACK_LINE(470)
	vec->push(tmp161);
	HX_STACK_LINE(471)
	::openfl::geom::Vector3D tmp162 = rot;		HX_STACK_VAR(tmp162,"tmp162");
	HX_STACK_LINE(471)
	vec->push(tmp162);
	HX_STACK_LINE(472)
	::openfl::geom::Vector3D tmp163 = scale;		HX_STACK_VAR(tmp163,"tmp163");
	HX_STACK_LINE(472)
	vec->push(tmp163);
	HX_STACK_LINE(474)
	Array< ::Dynamic > tmp164 = vec;		HX_STACK_VAR(tmp164,"tmp164");
	HX_STACK_LINE(474)
	return tmp164;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3D_obj,decompose,return )

::openfl::geom::Vector3D Matrix3D_obj::deltaTransformVector( ::openfl::geom::Vector3D v){
	HX_STACK_FRAME("openfl.geom.Matrix3D","deltaTransformVector",0x0285cbbf,"openfl.geom.Matrix3D.deltaTransformVector","openfl/geom/Matrix3D.hx",479,0x3acce238)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(481)
	Float x = v->x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(481)
	Float y = v->y;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(481)
	Float z = v->z;		HX_STACK_VAR(z,"z");
	HX_STACK_LINE(483)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(483)
	Array< Float > tmp1 = this->rawData;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(483)
	Float tmp2 = tmp1->__get((int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(483)
	Dynamic tmp3 = ((Dynamic)(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(483)
	Float tmp4 = (tmp * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(483)
	Float tmp5 = y;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(483)
	Array< Float > tmp6 = this->rawData;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(483)
	Float tmp7 = tmp6->__get((int)4);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(483)
	Dynamic tmp8 = ((Dynamic)(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(483)
	Float tmp9 = (tmp5 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(483)
	Float tmp10 = (tmp4 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(483)
	Float tmp11 = z;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(483)
	Array< Float > tmp12 = this->rawData;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(483)
	Float tmp13 = tmp12->__get((int)8);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(483)
	Dynamic tmp14 = ((Dynamic)(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(483)
	Float tmp15 = (tmp11 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(483)
	Float tmp16 = (tmp10 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(483)
	Array< Float > tmp17 = this->rawData;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(483)
	Float tmp18 = tmp17->__get((int)3);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(483)
	Dynamic tmp19 = ((Dynamic)(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(483)
	Float tmp20 = (tmp16 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(483)
	Float tmp21 = x;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(483)
	Array< Float > tmp22 = this->rawData;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(483)
	Float tmp23 = tmp22->__get((int)1);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(483)
	Dynamic tmp24 = ((Dynamic)(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(483)
	Float tmp25 = (tmp21 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(483)
	Float tmp26 = y;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(483)
	Array< Float > tmp27 = this->rawData;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(483)
	Float tmp28 = tmp27->__get((int)5);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(483)
	Dynamic tmp29 = ((Dynamic)(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(483)
	Float tmp30 = (tmp26 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(483)
	Float tmp31 = (tmp25 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(483)
	Float tmp32 = z;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(483)
	Array< Float > tmp33 = this->rawData;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(483)
	Float tmp34 = tmp33->__get((int)9);		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(483)
	Dynamic tmp35 = ((Dynamic)(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(483)
	Float tmp36 = (tmp32 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(483)
	Float tmp37 = (tmp31 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(483)
	Array< Float > tmp38 = this->rawData;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(483)
	Float tmp39 = tmp38->__get((int)7);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(483)
	Dynamic tmp40 = ((Dynamic)(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(483)
	Float tmp41 = (tmp37 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(483)
	Float tmp42 = x;		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(483)
	Array< Float > tmp43 = this->rawData;		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(483)
	Float tmp44 = tmp43->__get((int)2);		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(483)
	Dynamic tmp45 = ((Dynamic)(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(483)
	Float tmp46 = (tmp42 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(483)
	Float tmp47 = y;		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(483)
	Array< Float > tmp48 = this->rawData;		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(483)
	Float tmp49 = tmp48->__get((int)6);		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(483)
	Dynamic tmp50 = ((Dynamic)(tmp49));		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(483)
	Float tmp51 = (tmp47 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(483)
	Float tmp52 = (tmp46 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(483)
	Float tmp53 = z;		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(483)
	Array< Float > tmp54 = this->rawData;		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(483)
	Float tmp55 = tmp54->__get((int)10);		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(483)
	Dynamic tmp56 = ((Dynamic)(tmp55));		HX_STACK_VAR(tmp56,"tmp56");
	HX_STACK_LINE(483)
	Float tmp57 = (tmp53 * tmp56);		HX_STACK_VAR(tmp57,"tmp57");
	HX_STACK_LINE(483)
	Float tmp58 = (tmp52 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
	HX_STACK_LINE(483)
	Array< Float > tmp59 = this->rawData;		HX_STACK_VAR(tmp59,"tmp59");
	HX_STACK_LINE(483)
	Float tmp60 = tmp59->__get((int)11);		HX_STACK_VAR(tmp60,"tmp60");
	HX_STACK_LINE(483)
	Dynamic tmp61 = ((Dynamic)(tmp60));		HX_STACK_VAR(tmp61,"tmp61");
	HX_STACK_LINE(483)
	Float tmp62 = (tmp58 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
	HX_STACK_LINE(483)
	::openfl::geom::Vector3D tmp63 = ::openfl::geom::Vector3D_obj::__new(tmp20,tmp41,tmp62,(int)0);		HX_STACK_VAR(tmp63,"tmp63");
	HX_STACK_LINE(483)
	return tmp63;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3D_obj,deltaTransformVector,return )

Void Matrix3D_obj::identity( ){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","identity",0xd35ee2c6,"openfl.geom.Matrix3D.identity","openfl/geom/Matrix3D.hx",490,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_LINE(490)
		this->rawData = Array_obj< Float >::__new().Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3D_obj,identity,(void))

Void Matrix3D_obj::interpolateTo( ::openfl::geom::Matrix3D toMat,Float percent){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","interpolateTo",0x74c2e614,"openfl.geom.Matrix3D.interpolateTo","openfl/geom/Matrix3D.hx",512,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(toMat,"toMat")
		HX_STACK_ARG(percent,"percent")
		HX_STACK_LINE(512)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(512)
		while((true)){
			HX_STACK_LINE(512)
			bool tmp = (_g < (int)16);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(512)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(512)
			if ((tmp1)){
				HX_STACK_LINE(512)
				break;
			}
			HX_STACK_LINE(512)
			int tmp2 = (_g)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(512)
			int i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(514)
			Array< Float > tmp3 = this->rawData;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(514)
			Array< Float > tmp4 = this->rawData;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(514)
			Float tmp5 = tmp4->__get(i);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(514)
			Dynamic tmp6 = ((Dynamic)(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(514)
			Float tmp7 = toMat->rawData->__get(i);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(514)
			Dynamic tmp8 = ((Dynamic)(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(514)
			Array< Float > tmp9 = this->rawData;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(514)
			Float tmp10 = tmp9->__get(i);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(514)
			Dynamic tmp11 = ((Dynamic)(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(514)
			Float tmp12 = (tmp8 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(514)
			Float tmp13 = percent;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(514)
			Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(514)
			Float tmp15 = (tmp6 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(514)
			Float tmp16 = tmp3[i] = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(514)
			tmp16;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3D_obj,interpolateTo,(void))

bool Matrix3D_obj::invert( ){
	HX_STACK_FRAME("openfl.geom.Matrix3D","invert",0x5820929e,"openfl.geom.Matrix3D.invert","openfl/geom/Matrix3D.hx",521,0x3acce238)
	HX_STACK_THIS(this)
	HX_STACK_LINE(523)
	Float tmp = this->get_determinant();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(523)
	Float d = tmp;		HX_STACK_VAR(d,"d");
	HX_STACK_LINE(524)
	Float tmp1 = d;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(524)
	Float tmp2 = ::Math_obj::abs(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(524)
	bool tmp3 = (tmp2 > ((Float)0.00000000001));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(524)
	bool invertable = tmp3;		HX_STACK_VAR(invertable,"invertable");
	HX_STACK_LINE(526)
	bool tmp4 = invertable;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(526)
	if ((tmp4)){
		HX_STACK_LINE(528)
		Float tmp5 = (Float((int)1) / Float(d));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(528)
		d = tmp5;
		HX_STACK_LINE(530)
		Array< Float > tmp6 = this->rawData;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(530)
		Float tmp7 = tmp6->__get((int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(530)
		Float m11 = ((Dynamic)(tmp7));		HX_STACK_VAR(m11,"m11");
		HX_STACK_LINE(530)
		Array< Float > tmp8 = this->rawData;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(530)
		Float tmp9 = tmp8->__get((int)4);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(530)
		Float m21 = ((Dynamic)(tmp9));		HX_STACK_VAR(m21,"m21");
		HX_STACK_LINE(530)
		Array< Float > tmp10 = this->rawData;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(530)
		Float tmp11 = tmp10->__get((int)8);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(530)
		Float m31 = ((Dynamic)(tmp11));		HX_STACK_VAR(m31,"m31");
		HX_STACK_LINE(530)
		Array< Float > tmp12 = this->rawData;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(530)
		Float tmp13 = tmp12->__get((int)12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(530)
		Float m41 = ((Dynamic)(tmp13));		HX_STACK_VAR(m41,"m41");
		HX_STACK_LINE(531)
		Array< Float > tmp14 = this->rawData;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(531)
		Float tmp15 = tmp14->__get((int)1);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(531)
		Float m12 = ((Dynamic)(tmp15));		HX_STACK_VAR(m12,"m12");
		HX_STACK_LINE(531)
		Array< Float > tmp16 = this->rawData;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(531)
		Float tmp17 = tmp16->__get((int)5);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(531)
		Float m22 = ((Dynamic)(tmp17));		HX_STACK_VAR(m22,"m22");
		HX_STACK_LINE(531)
		Array< Float > tmp18 = this->rawData;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(531)
		Float tmp19 = tmp18->__get((int)9);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(531)
		Float m32 = ((Dynamic)(tmp19));		HX_STACK_VAR(m32,"m32");
		HX_STACK_LINE(531)
		Array< Float > tmp20 = this->rawData;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(531)
		Float tmp21 = tmp20->__get((int)13);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(531)
		Float m42 = ((Dynamic)(tmp21));		HX_STACK_VAR(m42,"m42");
		HX_STACK_LINE(532)
		Array< Float > tmp22 = this->rawData;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(532)
		Float tmp23 = tmp22->__get((int)2);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(532)
		Float m13 = ((Dynamic)(tmp23));		HX_STACK_VAR(m13,"m13");
		HX_STACK_LINE(532)
		Array< Float > tmp24 = this->rawData;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(532)
		Float tmp25 = tmp24->__get((int)6);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(532)
		Float m23 = ((Dynamic)(tmp25));		HX_STACK_VAR(m23,"m23");
		HX_STACK_LINE(532)
		Array< Float > tmp26 = this->rawData;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(532)
		Float tmp27 = tmp26->__get((int)10);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(532)
		Float m33 = ((Dynamic)(tmp27));		HX_STACK_VAR(m33,"m33");
		HX_STACK_LINE(532)
		Array< Float > tmp28 = this->rawData;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(532)
		Float tmp29 = tmp28->__get((int)14);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(532)
		Float m43 = ((Dynamic)(tmp29));		HX_STACK_VAR(m43,"m43");
		HX_STACK_LINE(533)
		Array< Float > tmp30 = this->rawData;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(533)
		Float tmp31 = tmp30->__get((int)3);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(533)
		Float m14 = ((Dynamic)(tmp31));		HX_STACK_VAR(m14,"m14");
		HX_STACK_LINE(533)
		Array< Float > tmp32 = this->rawData;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(533)
		Float tmp33 = tmp32->__get((int)7);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(533)
		Float m24 = ((Dynamic)(tmp33));		HX_STACK_VAR(m24,"m24");
		HX_STACK_LINE(533)
		Array< Float > tmp34 = this->rawData;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(533)
		Float tmp35 = tmp34->__get((int)11);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(533)
		Float m34 = ((Dynamic)(tmp35));		HX_STACK_VAR(m34,"m34");
		HX_STACK_LINE(533)
		Array< Float > tmp36 = this->rawData;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(533)
		Float tmp37 = tmp36->__get((int)15);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(533)
		Float m44 = ((Dynamic)(tmp37));		HX_STACK_VAR(m44,"m44");
		HX_STACK_LINE(535)
		Array< Float > tmp38 = this->rawData;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(535)
		Float tmp39 = d;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(535)
		Float tmp40 = m22;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(535)
		Float tmp41 = (m33 * m44);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(535)
		Float tmp42 = (m43 * m34);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(535)
		Float tmp43 = (tmp41 - tmp42);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(535)
		Float tmp44 = (tmp40 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(535)
		Float tmp45 = m32;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(535)
		Float tmp46 = (m23 * m44);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(535)
		Float tmp47 = (m43 * m24);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(535)
		Float tmp48 = (tmp46 - tmp47);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(535)
		Float tmp49 = (tmp45 * tmp48);		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(535)
		Float tmp50 = (tmp44 - tmp49);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(535)
		Float tmp51 = m42;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(535)
		Float tmp52 = (m23 * m34);		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(535)
		Float tmp53 = (m33 * m24);		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(535)
		Float tmp54 = (tmp52 - tmp53);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(535)
		Float tmp55 = (tmp51 * tmp54);		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(535)
		Float tmp56 = (tmp50 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(535)
		Float tmp57 = (tmp39 * tmp56);		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(535)
		Float tmp58 = tmp38[(int)0] = tmp57;		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(535)
		tmp58;
		HX_STACK_LINE(536)
		Array< Float > tmp59 = this->rawData;		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(536)
		Float tmp60 = d;		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(536)
		Float tmp61 = -(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(536)
		Float tmp62 = m12;		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(536)
		Float tmp63 = (m33 * m44);		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(536)
		Float tmp64 = (m43 * m34);		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(536)
		Float tmp65 = (tmp63 - tmp64);		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(536)
		Float tmp66 = (tmp62 * tmp65);		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(536)
		Float tmp67 = m32;		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(536)
		Float tmp68 = (m13 * m44);		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(536)
		Float tmp69 = (m43 * m14);		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(536)
		Float tmp70 = (tmp68 - tmp69);		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(536)
		Float tmp71 = (tmp67 * tmp70);		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(536)
		Float tmp72 = (tmp66 - tmp71);		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(536)
		Float tmp73 = m42;		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(536)
		Float tmp74 = (m13 * m34);		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(536)
		Float tmp75 = (m33 * m14);		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(536)
		Float tmp76 = (tmp74 - tmp75);		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(536)
		Float tmp77 = (tmp73 * tmp76);		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(536)
		Float tmp78 = (tmp72 + tmp77);		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(536)
		Float tmp79 = (tmp61 * tmp78);		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(536)
		Float tmp80 = tmp59[(int)1] = tmp79;		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(536)
		tmp80;
		HX_STACK_LINE(537)
		Array< Float > tmp81 = this->rawData;		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(537)
		Float tmp82 = d;		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(537)
		Float tmp83 = m12;		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(537)
		Float tmp84 = (m23 * m44);		HX_STACK_VAR(tmp84,"tmp84");
		HX_STACK_LINE(537)
		Float tmp85 = (m43 * m24);		HX_STACK_VAR(tmp85,"tmp85");
		HX_STACK_LINE(537)
		Float tmp86 = (tmp84 - tmp85);		HX_STACK_VAR(tmp86,"tmp86");
		HX_STACK_LINE(537)
		Float tmp87 = (tmp83 * tmp86);		HX_STACK_VAR(tmp87,"tmp87");
		HX_STACK_LINE(537)
		Float tmp88 = m22;		HX_STACK_VAR(tmp88,"tmp88");
		HX_STACK_LINE(537)
		Float tmp89 = (m13 * m44);		HX_STACK_VAR(tmp89,"tmp89");
		HX_STACK_LINE(537)
		Float tmp90 = (m43 * m14);		HX_STACK_VAR(tmp90,"tmp90");
		HX_STACK_LINE(537)
		Float tmp91 = (tmp89 - tmp90);		HX_STACK_VAR(tmp91,"tmp91");
		HX_STACK_LINE(537)
		Float tmp92 = (tmp88 * tmp91);		HX_STACK_VAR(tmp92,"tmp92");
		HX_STACK_LINE(537)
		Float tmp93 = (tmp87 - tmp92);		HX_STACK_VAR(tmp93,"tmp93");
		HX_STACK_LINE(537)
		Float tmp94 = m42;		HX_STACK_VAR(tmp94,"tmp94");
		HX_STACK_LINE(537)
		Float tmp95 = (m13 * m24);		HX_STACK_VAR(tmp95,"tmp95");
		HX_STACK_LINE(537)
		Float tmp96 = (m23 * m14);		HX_STACK_VAR(tmp96,"tmp96");
		HX_STACK_LINE(537)
		Float tmp97 = (tmp95 - tmp96);		HX_STACK_VAR(tmp97,"tmp97");
		HX_STACK_LINE(537)
		Float tmp98 = (tmp94 * tmp97);		HX_STACK_VAR(tmp98,"tmp98");
		HX_STACK_LINE(537)
		Float tmp99 = (tmp93 + tmp98);		HX_STACK_VAR(tmp99,"tmp99");
		HX_STACK_LINE(537)
		Float tmp100 = (tmp82 * tmp99);		HX_STACK_VAR(tmp100,"tmp100");
		HX_STACK_LINE(537)
		Float tmp101 = tmp81[(int)2] = tmp100;		HX_STACK_VAR(tmp101,"tmp101");
		HX_STACK_LINE(537)
		tmp101;
		HX_STACK_LINE(538)
		Array< Float > tmp102 = this->rawData;		HX_STACK_VAR(tmp102,"tmp102");
		HX_STACK_LINE(538)
		Float tmp103 = d;		HX_STACK_VAR(tmp103,"tmp103");
		HX_STACK_LINE(538)
		Float tmp104 = -(tmp103);		HX_STACK_VAR(tmp104,"tmp104");
		HX_STACK_LINE(538)
		Float tmp105 = m12;		HX_STACK_VAR(tmp105,"tmp105");
		HX_STACK_LINE(538)
		Float tmp106 = (m23 * m34);		HX_STACK_VAR(tmp106,"tmp106");
		HX_STACK_LINE(538)
		Float tmp107 = (m33 * m24);		HX_STACK_VAR(tmp107,"tmp107");
		HX_STACK_LINE(538)
		Float tmp108 = (tmp106 - tmp107);		HX_STACK_VAR(tmp108,"tmp108");
		HX_STACK_LINE(538)
		Float tmp109 = (tmp105 * tmp108);		HX_STACK_VAR(tmp109,"tmp109");
		HX_STACK_LINE(538)
		Float tmp110 = m22;		HX_STACK_VAR(tmp110,"tmp110");
		HX_STACK_LINE(538)
		Float tmp111 = (m13 * m34);		HX_STACK_VAR(tmp111,"tmp111");
		HX_STACK_LINE(538)
		Float tmp112 = (m33 * m14);		HX_STACK_VAR(tmp112,"tmp112");
		HX_STACK_LINE(538)
		Float tmp113 = (tmp111 - tmp112);		HX_STACK_VAR(tmp113,"tmp113");
		HX_STACK_LINE(538)
		Float tmp114 = (tmp110 * tmp113);		HX_STACK_VAR(tmp114,"tmp114");
		HX_STACK_LINE(538)
		Float tmp115 = (tmp109 - tmp114);		HX_STACK_VAR(tmp115,"tmp115");
		HX_STACK_LINE(538)
		Float tmp116 = m32;		HX_STACK_VAR(tmp116,"tmp116");
		HX_STACK_LINE(538)
		Float tmp117 = (m13 * m24);		HX_STACK_VAR(tmp117,"tmp117");
		HX_STACK_LINE(538)
		Float tmp118 = (m23 * m14);		HX_STACK_VAR(tmp118,"tmp118");
		HX_STACK_LINE(538)
		Float tmp119 = (tmp117 - tmp118);		HX_STACK_VAR(tmp119,"tmp119");
		HX_STACK_LINE(538)
		Float tmp120 = (tmp116 * tmp119);		HX_STACK_VAR(tmp120,"tmp120");
		HX_STACK_LINE(538)
		Float tmp121 = (tmp115 + tmp120);		HX_STACK_VAR(tmp121,"tmp121");
		HX_STACK_LINE(538)
		Float tmp122 = (tmp104 * tmp121);		HX_STACK_VAR(tmp122,"tmp122");
		HX_STACK_LINE(538)
		Float tmp123 = tmp102[(int)3] = tmp122;		HX_STACK_VAR(tmp123,"tmp123");
		HX_STACK_LINE(538)
		tmp123;
		HX_STACK_LINE(539)
		Array< Float > tmp124 = this->rawData;		HX_STACK_VAR(tmp124,"tmp124");
		HX_STACK_LINE(539)
		Float tmp125 = d;		HX_STACK_VAR(tmp125,"tmp125");
		HX_STACK_LINE(539)
		Float tmp126 = -(tmp125);		HX_STACK_VAR(tmp126,"tmp126");
		HX_STACK_LINE(539)
		Float tmp127 = m21;		HX_STACK_VAR(tmp127,"tmp127");
		HX_STACK_LINE(539)
		Float tmp128 = (m33 * m44);		HX_STACK_VAR(tmp128,"tmp128");
		HX_STACK_LINE(539)
		Float tmp129 = (m43 * m34);		HX_STACK_VAR(tmp129,"tmp129");
		HX_STACK_LINE(539)
		Float tmp130 = (tmp128 - tmp129);		HX_STACK_VAR(tmp130,"tmp130");
		HX_STACK_LINE(539)
		Float tmp131 = (tmp127 * tmp130);		HX_STACK_VAR(tmp131,"tmp131");
		HX_STACK_LINE(539)
		Float tmp132 = m31;		HX_STACK_VAR(tmp132,"tmp132");
		HX_STACK_LINE(539)
		Float tmp133 = (m23 * m44);		HX_STACK_VAR(tmp133,"tmp133");
		HX_STACK_LINE(539)
		Float tmp134 = (m43 * m24);		HX_STACK_VAR(tmp134,"tmp134");
		HX_STACK_LINE(539)
		Float tmp135 = (tmp133 - tmp134);		HX_STACK_VAR(tmp135,"tmp135");
		HX_STACK_LINE(539)
		Float tmp136 = (tmp132 * tmp135);		HX_STACK_VAR(tmp136,"tmp136");
		HX_STACK_LINE(539)
		Float tmp137 = (tmp131 - tmp136);		HX_STACK_VAR(tmp137,"tmp137");
		HX_STACK_LINE(539)
		Float tmp138 = m41;		HX_STACK_VAR(tmp138,"tmp138");
		HX_STACK_LINE(539)
		Float tmp139 = (m23 * m34);		HX_STACK_VAR(tmp139,"tmp139");
		HX_STACK_LINE(539)
		Float tmp140 = (m33 * m24);		HX_STACK_VAR(tmp140,"tmp140");
		HX_STACK_LINE(539)
		Float tmp141 = (tmp139 - tmp140);		HX_STACK_VAR(tmp141,"tmp141");
		HX_STACK_LINE(539)
		Float tmp142 = (tmp138 * tmp141);		HX_STACK_VAR(tmp142,"tmp142");
		HX_STACK_LINE(539)
		Float tmp143 = (tmp137 + tmp142);		HX_STACK_VAR(tmp143,"tmp143");
		HX_STACK_LINE(539)
		Float tmp144 = (tmp126 * tmp143);		HX_STACK_VAR(tmp144,"tmp144");
		HX_STACK_LINE(539)
		Float tmp145 = tmp124[(int)4] = tmp144;		HX_STACK_VAR(tmp145,"tmp145");
		HX_STACK_LINE(539)
		tmp145;
		HX_STACK_LINE(540)
		Array< Float > tmp146 = this->rawData;		HX_STACK_VAR(tmp146,"tmp146");
		HX_STACK_LINE(540)
		Float tmp147 = d;		HX_STACK_VAR(tmp147,"tmp147");
		HX_STACK_LINE(540)
		Float tmp148 = m11;		HX_STACK_VAR(tmp148,"tmp148");
		HX_STACK_LINE(540)
		Float tmp149 = (m33 * m44);		HX_STACK_VAR(tmp149,"tmp149");
		HX_STACK_LINE(540)
		Float tmp150 = (m43 * m34);		HX_STACK_VAR(tmp150,"tmp150");
		HX_STACK_LINE(540)
		Float tmp151 = (tmp149 - tmp150);		HX_STACK_VAR(tmp151,"tmp151");
		HX_STACK_LINE(540)
		Float tmp152 = (tmp148 * tmp151);		HX_STACK_VAR(tmp152,"tmp152");
		HX_STACK_LINE(540)
		Float tmp153 = m31;		HX_STACK_VAR(tmp153,"tmp153");
		HX_STACK_LINE(540)
		Float tmp154 = (m13 * m44);		HX_STACK_VAR(tmp154,"tmp154");
		HX_STACK_LINE(540)
		Float tmp155 = (m43 * m14);		HX_STACK_VAR(tmp155,"tmp155");
		HX_STACK_LINE(540)
		Float tmp156 = (tmp154 - tmp155);		HX_STACK_VAR(tmp156,"tmp156");
		HX_STACK_LINE(540)
		Float tmp157 = (tmp153 * tmp156);		HX_STACK_VAR(tmp157,"tmp157");
		HX_STACK_LINE(540)
		Float tmp158 = (tmp152 - tmp157);		HX_STACK_VAR(tmp158,"tmp158");
		HX_STACK_LINE(540)
		Float tmp159 = m41;		HX_STACK_VAR(tmp159,"tmp159");
		HX_STACK_LINE(540)
		Float tmp160 = (m13 * m34);		HX_STACK_VAR(tmp160,"tmp160");
		HX_STACK_LINE(540)
		Float tmp161 = (m33 * m14);		HX_STACK_VAR(tmp161,"tmp161");
		HX_STACK_LINE(540)
		Float tmp162 = (tmp160 - tmp161);		HX_STACK_VAR(tmp162,"tmp162");
		HX_STACK_LINE(540)
		Float tmp163 = (tmp159 * tmp162);		HX_STACK_VAR(tmp163,"tmp163");
		HX_STACK_LINE(540)
		Float tmp164 = (tmp158 + tmp163);		HX_STACK_VAR(tmp164,"tmp164");
		HX_STACK_LINE(540)
		Float tmp165 = (tmp147 * tmp164);		HX_STACK_VAR(tmp165,"tmp165");
		HX_STACK_LINE(540)
		Float tmp166 = tmp146[(int)5] = tmp165;		HX_STACK_VAR(tmp166,"tmp166");
		HX_STACK_LINE(540)
		tmp166;
		HX_STACK_LINE(541)
		Array< Float > tmp167 = this->rawData;		HX_STACK_VAR(tmp167,"tmp167");
		HX_STACK_LINE(541)
		Float tmp168 = d;		HX_STACK_VAR(tmp168,"tmp168");
		HX_STACK_LINE(541)
		Float tmp169 = -(tmp168);		HX_STACK_VAR(tmp169,"tmp169");
		HX_STACK_LINE(541)
		Float tmp170 = m11;		HX_STACK_VAR(tmp170,"tmp170");
		HX_STACK_LINE(541)
		Float tmp171 = (m23 * m44);		HX_STACK_VAR(tmp171,"tmp171");
		HX_STACK_LINE(541)
		Float tmp172 = (m43 * m24);		HX_STACK_VAR(tmp172,"tmp172");
		HX_STACK_LINE(541)
		Float tmp173 = (tmp171 - tmp172);		HX_STACK_VAR(tmp173,"tmp173");
		HX_STACK_LINE(541)
		Float tmp174 = (tmp170 * tmp173);		HX_STACK_VAR(tmp174,"tmp174");
		HX_STACK_LINE(541)
		Float tmp175 = m21;		HX_STACK_VAR(tmp175,"tmp175");
		HX_STACK_LINE(541)
		Float tmp176 = (m13 * m44);		HX_STACK_VAR(tmp176,"tmp176");
		HX_STACK_LINE(541)
		Float tmp177 = (m43 * m14);		HX_STACK_VAR(tmp177,"tmp177");
		HX_STACK_LINE(541)
		Float tmp178 = (tmp176 - tmp177);		HX_STACK_VAR(tmp178,"tmp178");
		HX_STACK_LINE(541)
		Float tmp179 = (tmp175 * tmp178);		HX_STACK_VAR(tmp179,"tmp179");
		HX_STACK_LINE(541)
		Float tmp180 = (tmp174 - tmp179);		HX_STACK_VAR(tmp180,"tmp180");
		HX_STACK_LINE(541)
		Float tmp181 = m41;		HX_STACK_VAR(tmp181,"tmp181");
		HX_STACK_LINE(541)
		Float tmp182 = (m13 * m24);		HX_STACK_VAR(tmp182,"tmp182");
		HX_STACK_LINE(541)
		Float tmp183 = (m23 * m14);		HX_STACK_VAR(tmp183,"tmp183");
		HX_STACK_LINE(541)
		Float tmp184 = (tmp182 - tmp183);		HX_STACK_VAR(tmp184,"tmp184");
		HX_STACK_LINE(541)
		Float tmp185 = (tmp181 * tmp184);		HX_STACK_VAR(tmp185,"tmp185");
		HX_STACK_LINE(541)
		Float tmp186 = (tmp180 + tmp185);		HX_STACK_VAR(tmp186,"tmp186");
		HX_STACK_LINE(541)
		Float tmp187 = (tmp169 * tmp186);		HX_STACK_VAR(tmp187,"tmp187");
		HX_STACK_LINE(541)
		Float tmp188 = tmp167[(int)6] = tmp187;		HX_STACK_VAR(tmp188,"tmp188");
		HX_STACK_LINE(541)
		tmp188;
		HX_STACK_LINE(542)
		Array< Float > tmp189 = this->rawData;		HX_STACK_VAR(tmp189,"tmp189");
		HX_STACK_LINE(542)
		Float tmp190 = d;		HX_STACK_VAR(tmp190,"tmp190");
		HX_STACK_LINE(542)
		Float tmp191 = m11;		HX_STACK_VAR(tmp191,"tmp191");
		HX_STACK_LINE(542)
		Float tmp192 = (m23 * m34);		HX_STACK_VAR(tmp192,"tmp192");
		HX_STACK_LINE(542)
		Float tmp193 = (m33 * m24);		HX_STACK_VAR(tmp193,"tmp193");
		HX_STACK_LINE(542)
		Float tmp194 = (tmp192 - tmp193);		HX_STACK_VAR(tmp194,"tmp194");
		HX_STACK_LINE(542)
		Float tmp195 = (tmp191 * tmp194);		HX_STACK_VAR(tmp195,"tmp195");
		HX_STACK_LINE(542)
		Float tmp196 = m21;		HX_STACK_VAR(tmp196,"tmp196");
		HX_STACK_LINE(542)
		Float tmp197 = (m13 * m34);		HX_STACK_VAR(tmp197,"tmp197");
		HX_STACK_LINE(542)
		Float tmp198 = (m33 * m14);		HX_STACK_VAR(tmp198,"tmp198");
		HX_STACK_LINE(542)
		Float tmp199 = (tmp197 - tmp198);		HX_STACK_VAR(tmp199,"tmp199");
		HX_STACK_LINE(542)
		Float tmp200 = (tmp196 * tmp199);		HX_STACK_VAR(tmp200,"tmp200");
		HX_STACK_LINE(542)
		Float tmp201 = (tmp195 - tmp200);		HX_STACK_VAR(tmp201,"tmp201");
		HX_STACK_LINE(542)
		Float tmp202 = m31;		HX_STACK_VAR(tmp202,"tmp202");
		HX_STACK_LINE(542)
		Float tmp203 = (m13 * m24);		HX_STACK_VAR(tmp203,"tmp203");
		HX_STACK_LINE(542)
		Float tmp204 = (m23 * m14);		HX_STACK_VAR(tmp204,"tmp204");
		HX_STACK_LINE(542)
		Float tmp205 = (tmp203 - tmp204);		HX_STACK_VAR(tmp205,"tmp205");
		HX_STACK_LINE(542)
		Float tmp206 = (tmp202 * tmp205);		HX_STACK_VAR(tmp206,"tmp206");
		HX_STACK_LINE(542)
		Float tmp207 = (tmp201 + tmp206);		HX_STACK_VAR(tmp207,"tmp207");
		HX_STACK_LINE(542)
		Float tmp208 = (tmp190 * tmp207);		HX_STACK_VAR(tmp208,"tmp208");
		HX_STACK_LINE(542)
		Float tmp209 = tmp189[(int)7] = tmp208;		HX_STACK_VAR(tmp209,"tmp209");
		HX_STACK_LINE(542)
		tmp209;
		HX_STACK_LINE(543)
		Array< Float > tmp210 = this->rawData;		HX_STACK_VAR(tmp210,"tmp210");
		HX_STACK_LINE(543)
		Float tmp211 = d;		HX_STACK_VAR(tmp211,"tmp211");
		HX_STACK_LINE(543)
		Float tmp212 = m21;		HX_STACK_VAR(tmp212,"tmp212");
		HX_STACK_LINE(543)
		Float tmp213 = (m32 * m44);		HX_STACK_VAR(tmp213,"tmp213");
		HX_STACK_LINE(543)
		Float tmp214 = (m42 * m34);		HX_STACK_VAR(tmp214,"tmp214");
		HX_STACK_LINE(543)
		Float tmp215 = (tmp213 - tmp214);		HX_STACK_VAR(tmp215,"tmp215");
		HX_STACK_LINE(543)
		Float tmp216 = (tmp212 * tmp215);		HX_STACK_VAR(tmp216,"tmp216");
		HX_STACK_LINE(543)
		Float tmp217 = m31;		HX_STACK_VAR(tmp217,"tmp217");
		HX_STACK_LINE(543)
		Float tmp218 = (m22 * m44);		HX_STACK_VAR(tmp218,"tmp218");
		HX_STACK_LINE(543)
		Float tmp219 = (m42 * m24);		HX_STACK_VAR(tmp219,"tmp219");
		HX_STACK_LINE(543)
		Float tmp220 = (tmp218 - tmp219);		HX_STACK_VAR(tmp220,"tmp220");
		HX_STACK_LINE(543)
		Float tmp221 = (tmp217 * tmp220);		HX_STACK_VAR(tmp221,"tmp221");
		HX_STACK_LINE(543)
		Float tmp222 = (tmp216 - tmp221);		HX_STACK_VAR(tmp222,"tmp222");
		HX_STACK_LINE(543)
		Float tmp223 = m41;		HX_STACK_VAR(tmp223,"tmp223");
		HX_STACK_LINE(543)
		Float tmp224 = (m22 * m34);		HX_STACK_VAR(tmp224,"tmp224");
		HX_STACK_LINE(543)
		Float tmp225 = (m32 * m24);		HX_STACK_VAR(tmp225,"tmp225");
		HX_STACK_LINE(543)
		Float tmp226 = (tmp224 - tmp225);		HX_STACK_VAR(tmp226,"tmp226");
		HX_STACK_LINE(543)
		Float tmp227 = (tmp223 * tmp226);		HX_STACK_VAR(tmp227,"tmp227");
		HX_STACK_LINE(543)
		Float tmp228 = (tmp222 + tmp227);		HX_STACK_VAR(tmp228,"tmp228");
		HX_STACK_LINE(543)
		Float tmp229 = (tmp211 * tmp228);		HX_STACK_VAR(tmp229,"tmp229");
		HX_STACK_LINE(543)
		Float tmp230 = tmp210[(int)8] = tmp229;		HX_STACK_VAR(tmp230,"tmp230");
		HX_STACK_LINE(543)
		tmp230;
		HX_STACK_LINE(544)
		Array< Float > tmp231 = this->rawData;		HX_STACK_VAR(tmp231,"tmp231");
		HX_STACK_LINE(544)
		Float tmp232 = d;		HX_STACK_VAR(tmp232,"tmp232");
		HX_STACK_LINE(544)
		Float tmp233 = -(tmp232);		HX_STACK_VAR(tmp233,"tmp233");
		HX_STACK_LINE(544)
		Float tmp234 = m11;		HX_STACK_VAR(tmp234,"tmp234");
		HX_STACK_LINE(544)
		Float tmp235 = (m32 * m44);		HX_STACK_VAR(tmp235,"tmp235");
		HX_STACK_LINE(544)
		Float tmp236 = (m42 * m34);		HX_STACK_VAR(tmp236,"tmp236");
		HX_STACK_LINE(544)
		Float tmp237 = (tmp235 - tmp236);		HX_STACK_VAR(tmp237,"tmp237");
		HX_STACK_LINE(544)
		Float tmp238 = (tmp234 * tmp237);		HX_STACK_VAR(tmp238,"tmp238");
		HX_STACK_LINE(544)
		Float tmp239 = m31;		HX_STACK_VAR(tmp239,"tmp239");
		HX_STACK_LINE(544)
		Float tmp240 = (m12 * m44);		HX_STACK_VAR(tmp240,"tmp240");
		HX_STACK_LINE(544)
		Float tmp241 = (m42 * m14);		HX_STACK_VAR(tmp241,"tmp241");
		HX_STACK_LINE(544)
		Float tmp242 = (tmp240 - tmp241);		HX_STACK_VAR(tmp242,"tmp242");
		HX_STACK_LINE(544)
		Float tmp243 = (tmp239 * tmp242);		HX_STACK_VAR(tmp243,"tmp243");
		HX_STACK_LINE(544)
		Float tmp244 = (tmp238 - tmp243);		HX_STACK_VAR(tmp244,"tmp244");
		HX_STACK_LINE(544)
		Float tmp245 = m41;		HX_STACK_VAR(tmp245,"tmp245");
		HX_STACK_LINE(544)
		Float tmp246 = (m12 * m34);		HX_STACK_VAR(tmp246,"tmp246");
		HX_STACK_LINE(544)
		Float tmp247 = (m32 * m14);		HX_STACK_VAR(tmp247,"tmp247");
		HX_STACK_LINE(544)
		Float tmp248 = (tmp246 - tmp247);		HX_STACK_VAR(tmp248,"tmp248");
		HX_STACK_LINE(544)
		Float tmp249 = (tmp245 * tmp248);		HX_STACK_VAR(tmp249,"tmp249");
		HX_STACK_LINE(544)
		Float tmp250 = (tmp244 + tmp249);		HX_STACK_VAR(tmp250,"tmp250");
		HX_STACK_LINE(544)
		Float tmp251 = (tmp233 * tmp250);		HX_STACK_VAR(tmp251,"tmp251");
		HX_STACK_LINE(544)
		Float tmp252 = tmp231[(int)9] = tmp251;		HX_STACK_VAR(tmp252,"tmp252");
		HX_STACK_LINE(544)
		tmp252;
		HX_STACK_LINE(545)
		Array< Float > tmp253 = this->rawData;		HX_STACK_VAR(tmp253,"tmp253");
		HX_STACK_LINE(545)
		Float tmp254 = d;		HX_STACK_VAR(tmp254,"tmp254");
		HX_STACK_LINE(545)
		Float tmp255 = m11;		HX_STACK_VAR(tmp255,"tmp255");
		HX_STACK_LINE(545)
		Float tmp256 = (m22 * m44);		HX_STACK_VAR(tmp256,"tmp256");
		HX_STACK_LINE(545)
		Float tmp257 = (m42 * m24);		HX_STACK_VAR(tmp257,"tmp257");
		HX_STACK_LINE(545)
		Float tmp258 = (tmp256 - tmp257);		HX_STACK_VAR(tmp258,"tmp258");
		HX_STACK_LINE(545)
		Float tmp259 = (tmp255 * tmp258);		HX_STACK_VAR(tmp259,"tmp259");
		HX_STACK_LINE(545)
		Float tmp260 = m21;		HX_STACK_VAR(tmp260,"tmp260");
		HX_STACK_LINE(545)
		Float tmp261 = (m12 * m44);		HX_STACK_VAR(tmp261,"tmp261");
		HX_STACK_LINE(545)
		Float tmp262 = (m42 * m14);		HX_STACK_VAR(tmp262,"tmp262");
		HX_STACK_LINE(545)
		Float tmp263 = (tmp261 - tmp262);		HX_STACK_VAR(tmp263,"tmp263");
		HX_STACK_LINE(545)
		Float tmp264 = (tmp260 * tmp263);		HX_STACK_VAR(tmp264,"tmp264");
		HX_STACK_LINE(545)
		Float tmp265 = (tmp259 - tmp264);		HX_STACK_VAR(tmp265,"tmp265");
		HX_STACK_LINE(545)
		Float tmp266 = m41;		HX_STACK_VAR(tmp266,"tmp266");
		HX_STACK_LINE(545)
		Float tmp267 = (m12 * m24);		HX_STACK_VAR(tmp267,"tmp267");
		HX_STACK_LINE(545)
		Float tmp268 = (m22 * m14);		HX_STACK_VAR(tmp268,"tmp268");
		HX_STACK_LINE(545)
		Float tmp269 = (tmp267 - tmp268);		HX_STACK_VAR(tmp269,"tmp269");
		HX_STACK_LINE(545)
		Float tmp270 = (tmp266 * tmp269);		HX_STACK_VAR(tmp270,"tmp270");
		HX_STACK_LINE(545)
		Float tmp271 = (tmp265 + tmp270);		HX_STACK_VAR(tmp271,"tmp271");
		HX_STACK_LINE(545)
		Float tmp272 = (tmp254 * tmp271);		HX_STACK_VAR(tmp272,"tmp272");
		HX_STACK_LINE(545)
		Float tmp273 = tmp253[(int)10] = tmp272;		HX_STACK_VAR(tmp273,"tmp273");
		HX_STACK_LINE(545)
		tmp273;
		HX_STACK_LINE(546)
		Array< Float > tmp274 = this->rawData;		HX_STACK_VAR(tmp274,"tmp274");
		HX_STACK_LINE(546)
		Float tmp275 = d;		HX_STACK_VAR(tmp275,"tmp275");
		HX_STACK_LINE(546)
		Float tmp276 = -(tmp275);		HX_STACK_VAR(tmp276,"tmp276");
		HX_STACK_LINE(546)
		Float tmp277 = m11;		HX_STACK_VAR(tmp277,"tmp277");
		HX_STACK_LINE(546)
		Float tmp278 = (m22 * m34);		HX_STACK_VAR(tmp278,"tmp278");
		HX_STACK_LINE(546)
		Float tmp279 = (m32 * m24);		HX_STACK_VAR(tmp279,"tmp279");
		HX_STACK_LINE(546)
		Float tmp280 = (tmp278 - tmp279);		HX_STACK_VAR(tmp280,"tmp280");
		HX_STACK_LINE(546)
		Float tmp281 = (tmp277 * tmp280);		HX_STACK_VAR(tmp281,"tmp281");
		HX_STACK_LINE(546)
		Float tmp282 = m21;		HX_STACK_VAR(tmp282,"tmp282");
		HX_STACK_LINE(546)
		Float tmp283 = (m12 * m34);		HX_STACK_VAR(tmp283,"tmp283");
		HX_STACK_LINE(546)
		Float tmp284 = (m32 * m14);		HX_STACK_VAR(tmp284,"tmp284");
		HX_STACK_LINE(546)
		Float tmp285 = (tmp283 - tmp284);		HX_STACK_VAR(tmp285,"tmp285");
		HX_STACK_LINE(546)
		Float tmp286 = (tmp282 * tmp285);		HX_STACK_VAR(tmp286,"tmp286");
		HX_STACK_LINE(546)
		Float tmp287 = (tmp281 - tmp286);		HX_STACK_VAR(tmp287,"tmp287");
		HX_STACK_LINE(546)
		Float tmp288 = m31;		HX_STACK_VAR(tmp288,"tmp288");
		HX_STACK_LINE(546)
		Float tmp289 = (m12 * m24);		HX_STACK_VAR(tmp289,"tmp289");
		HX_STACK_LINE(546)
		Float tmp290 = (m22 * m14);		HX_STACK_VAR(tmp290,"tmp290");
		HX_STACK_LINE(546)
		Float tmp291 = (tmp289 - tmp290);		HX_STACK_VAR(tmp291,"tmp291");
		HX_STACK_LINE(546)
		Float tmp292 = (tmp288 * tmp291);		HX_STACK_VAR(tmp292,"tmp292");
		HX_STACK_LINE(546)
		Float tmp293 = (tmp287 + tmp292);		HX_STACK_VAR(tmp293,"tmp293");
		HX_STACK_LINE(546)
		Float tmp294 = (tmp276 * tmp293);		HX_STACK_VAR(tmp294,"tmp294");
		HX_STACK_LINE(546)
		Float tmp295 = tmp274[(int)11] = tmp294;		HX_STACK_VAR(tmp295,"tmp295");
		HX_STACK_LINE(546)
		tmp295;
		HX_STACK_LINE(547)
		Array< Float > tmp296 = this->rawData;		HX_STACK_VAR(tmp296,"tmp296");
		HX_STACK_LINE(547)
		Float tmp297 = d;		HX_STACK_VAR(tmp297,"tmp297");
		HX_STACK_LINE(547)
		Float tmp298 = -(tmp297);		HX_STACK_VAR(tmp298,"tmp298");
		HX_STACK_LINE(547)
		Float tmp299 = m21;		HX_STACK_VAR(tmp299,"tmp299");
		HX_STACK_LINE(547)
		Float tmp300 = (m32 * m43);		HX_STACK_VAR(tmp300,"tmp300");
		HX_STACK_LINE(547)
		Float tmp301 = (m42 * m33);		HX_STACK_VAR(tmp301,"tmp301");
		HX_STACK_LINE(547)
		Float tmp302 = (tmp300 - tmp301);		HX_STACK_VAR(tmp302,"tmp302");
		HX_STACK_LINE(547)
		Float tmp303 = (tmp299 * tmp302);		HX_STACK_VAR(tmp303,"tmp303");
		HX_STACK_LINE(547)
		Float tmp304 = m31;		HX_STACK_VAR(tmp304,"tmp304");
		HX_STACK_LINE(547)
		Float tmp305 = (m22 * m43);		HX_STACK_VAR(tmp305,"tmp305");
		HX_STACK_LINE(547)
		Float tmp306 = (m42 * m23);		HX_STACK_VAR(tmp306,"tmp306");
		HX_STACK_LINE(547)
		Float tmp307 = (tmp305 - tmp306);		HX_STACK_VAR(tmp307,"tmp307");
		HX_STACK_LINE(547)
		Float tmp308 = (tmp304 * tmp307);		HX_STACK_VAR(tmp308,"tmp308");
		HX_STACK_LINE(547)
		Float tmp309 = (tmp303 - tmp308);		HX_STACK_VAR(tmp309,"tmp309");
		HX_STACK_LINE(547)
		Float tmp310 = m41;		HX_STACK_VAR(tmp310,"tmp310");
		HX_STACK_LINE(547)
		Float tmp311 = (m22 * m33);		HX_STACK_VAR(tmp311,"tmp311");
		HX_STACK_LINE(547)
		Float tmp312 = (m32 * m23);		HX_STACK_VAR(tmp312,"tmp312");
		HX_STACK_LINE(547)
		Float tmp313 = (tmp311 - tmp312);		HX_STACK_VAR(tmp313,"tmp313");
		HX_STACK_LINE(547)
		Float tmp314 = (tmp310 * tmp313);		HX_STACK_VAR(tmp314,"tmp314");
		HX_STACK_LINE(547)
		Float tmp315 = (tmp309 + tmp314);		HX_STACK_VAR(tmp315,"tmp315");
		HX_STACK_LINE(547)
		Float tmp316 = (tmp298 * tmp315);		HX_STACK_VAR(tmp316,"tmp316");
		HX_STACK_LINE(547)
		Float tmp317 = tmp296[(int)12] = tmp316;		HX_STACK_VAR(tmp317,"tmp317");
		HX_STACK_LINE(547)
		tmp317;
		HX_STACK_LINE(548)
		Array< Float > tmp318 = this->rawData;		HX_STACK_VAR(tmp318,"tmp318");
		HX_STACK_LINE(548)
		Float tmp319 = d;		HX_STACK_VAR(tmp319,"tmp319");
		HX_STACK_LINE(548)
		Float tmp320 = m11;		HX_STACK_VAR(tmp320,"tmp320");
		HX_STACK_LINE(548)
		Float tmp321 = (m32 * m43);		HX_STACK_VAR(tmp321,"tmp321");
		HX_STACK_LINE(548)
		Float tmp322 = (m42 * m33);		HX_STACK_VAR(tmp322,"tmp322");
		HX_STACK_LINE(548)
		Float tmp323 = (tmp321 - tmp322);		HX_STACK_VAR(tmp323,"tmp323");
		HX_STACK_LINE(548)
		Float tmp324 = (tmp320 * tmp323);		HX_STACK_VAR(tmp324,"tmp324");
		HX_STACK_LINE(548)
		Float tmp325 = m31;		HX_STACK_VAR(tmp325,"tmp325");
		HX_STACK_LINE(548)
		Float tmp326 = (m12 * m43);		HX_STACK_VAR(tmp326,"tmp326");
		HX_STACK_LINE(548)
		Float tmp327 = (m42 * m13);		HX_STACK_VAR(tmp327,"tmp327");
		HX_STACK_LINE(548)
		Float tmp328 = (tmp326 - tmp327);		HX_STACK_VAR(tmp328,"tmp328");
		HX_STACK_LINE(548)
		Float tmp329 = (tmp325 * tmp328);		HX_STACK_VAR(tmp329,"tmp329");
		HX_STACK_LINE(548)
		Float tmp330 = (tmp324 - tmp329);		HX_STACK_VAR(tmp330,"tmp330");
		HX_STACK_LINE(548)
		Float tmp331 = m41;		HX_STACK_VAR(tmp331,"tmp331");
		HX_STACK_LINE(548)
		Float tmp332 = (m12 * m33);		HX_STACK_VAR(tmp332,"tmp332");
		HX_STACK_LINE(548)
		Float tmp333 = (m32 * m13);		HX_STACK_VAR(tmp333,"tmp333");
		HX_STACK_LINE(548)
		Float tmp334 = (tmp332 - tmp333);		HX_STACK_VAR(tmp334,"tmp334");
		HX_STACK_LINE(548)
		Float tmp335 = (tmp331 * tmp334);		HX_STACK_VAR(tmp335,"tmp335");
		HX_STACK_LINE(548)
		Float tmp336 = (tmp330 + tmp335);		HX_STACK_VAR(tmp336,"tmp336");
		HX_STACK_LINE(548)
		Float tmp337 = (tmp319 * tmp336);		HX_STACK_VAR(tmp337,"tmp337");
		HX_STACK_LINE(548)
		Float tmp338 = tmp318[(int)13] = tmp337;		HX_STACK_VAR(tmp338,"tmp338");
		HX_STACK_LINE(548)
		tmp338;
		HX_STACK_LINE(549)
		Array< Float > tmp339 = this->rawData;		HX_STACK_VAR(tmp339,"tmp339");
		HX_STACK_LINE(549)
		Float tmp340 = d;		HX_STACK_VAR(tmp340,"tmp340");
		HX_STACK_LINE(549)
		Float tmp341 = -(tmp340);		HX_STACK_VAR(tmp341,"tmp341");
		HX_STACK_LINE(549)
		Float tmp342 = m11;		HX_STACK_VAR(tmp342,"tmp342");
		HX_STACK_LINE(549)
		Float tmp343 = (m22 * m43);		HX_STACK_VAR(tmp343,"tmp343");
		HX_STACK_LINE(549)
		Float tmp344 = (m42 * m23);		HX_STACK_VAR(tmp344,"tmp344");
		HX_STACK_LINE(549)
		Float tmp345 = (tmp343 - tmp344);		HX_STACK_VAR(tmp345,"tmp345");
		HX_STACK_LINE(549)
		Float tmp346 = (tmp342 * tmp345);		HX_STACK_VAR(tmp346,"tmp346");
		HX_STACK_LINE(549)
		Float tmp347 = m21;		HX_STACK_VAR(tmp347,"tmp347");
		HX_STACK_LINE(549)
		Float tmp348 = (m12 * m43);		HX_STACK_VAR(tmp348,"tmp348");
		HX_STACK_LINE(549)
		Float tmp349 = (m42 * m13);		HX_STACK_VAR(tmp349,"tmp349");
		HX_STACK_LINE(549)
		Float tmp350 = (tmp348 - tmp349);		HX_STACK_VAR(tmp350,"tmp350");
		HX_STACK_LINE(549)
		Float tmp351 = (tmp347 * tmp350);		HX_STACK_VAR(tmp351,"tmp351");
		HX_STACK_LINE(549)
		Float tmp352 = (tmp346 - tmp351);		HX_STACK_VAR(tmp352,"tmp352");
		HX_STACK_LINE(549)
		Float tmp353 = m41;		HX_STACK_VAR(tmp353,"tmp353");
		HX_STACK_LINE(549)
		Float tmp354 = (m12 * m23);		HX_STACK_VAR(tmp354,"tmp354");
		HX_STACK_LINE(549)
		Float tmp355 = (m22 * m13);		HX_STACK_VAR(tmp355,"tmp355");
		HX_STACK_LINE(549)
		Float tmp356 = (tmp354 - tmp355);		HX_STACK_VAR(tmp356,"tmp356");
		HX_STACK_LINE(549)
		Float tmp357 = (tmp353 * tmp356);		HX_STACK_VAR(tmp357,"tmp357");
		HX_STACK_LINE(549)
		Float tmp358 = (tmp352 + tmp357);		HX_STACK_VAR(tmp358,"tmp358");
		HX_STACK_LINE(549)
		Float tmp359 = (tmp341 * tmp358);		HX_STACK_VAR(tmp359,"tmp359");
		HX_STACK_LINE(549)
		Float tmp360 = tmp339[(int)14] = tmp359;		HX_STACK_VAR(tmp360,"tmp360");
		HX_STACK_LINE(549)
		tmp360;
		HX_STACK_LINE(550)
		Array< Float > tmp361 = this->rawData;		HX_STACK_VAR(tmp361,"tmp361");
		HX_STACK_LINE(550)
		Float tmp362 = d;		HX_STACK_VAR(tmp362,"tmp362");
		HX_STACK_LINE(550)
		Float tmp363 = m11;		HX_STACK_VAR(tmp363,"tmp363");
		HX_STACK_LINE(550)
		Float tmp364 = (m22 * m33);		HX_STACK_VAR(tmp364,"tmp364");
		HX_STACK_LINE(550)
		Float tmp365 = (m32 * m23);		HX_STACK_VAR(tmp365,"tmp365");
		HX_STACK_LINE(550)
		Float tmp366 = (tmp364 - tmp365);		HX_STACK_VAR(tmp366,"tmp366");
		HX_STACK_LINE(550)
		Float tmp367 = (tmp363 * tmp366);		HX_STACK_VAR(tmp367,"tmp367");
		HX_STACK_LINE(550)
		Float tmp368 = m21;		HX_STACK_VAR(tmp368,"tmp368");
		HX_STACK_LINE(550)
		Float tmp369 = (m12 * m33);		HX_STACK_VAR(tmp369,"tmp369");
		HX_STACK_LINE(550)
		Float tmp370 = (m32 * m13);		HX_STACK_VAR(tmp370,"tmp370");
		HX_STACK_LINE(550)
		Float tmp371 = (tmp369 - tmp370);		HX_STACK_VAR(tmp371,"tmp371");
		HX_STACK_LINE(550)
		Float tmp372 = (tmp368 * tmp371);		HX_STACK_VAR(tmp372,"tmp372");
		HX_STACK_LINE(550)
		Float tmp373 = (tmp367 - tmp372);		HX_STACK_VAR(tmp373,"tmp373");
		HX_STACK_LINE(550)
		Float tmp374 = m31;		HX_STACK_VAR(tmp374,"tmp374");
		HX_STACK_LINE(550)
		Float tmp375 = (m12 * m23);		HX_STACK_VAR(tmp375,"tmp375");
		HX_STACK_LINE(550)
		Float tmp376 = (m22 * m13);		HX_STACK_VAR(tmp376,"tmp376");
		HX_STACK_LINE(550)
		Float tmp377 = (tmp375 - tmp376);		HX_STACK_VAR(tmp377,"tmp377");
		HX_STACK_LINE(550)
		Float tmp378 = (tmp374 * tmp377);		HX_STACK_VAR(tmp378,"tmp378");
		HX_STACK_LINE(550)
		Float tmp379 = (tmp373 + tmp378);		HX_STACK_VAR(tmp379,"tmp379");
		HX_STACK_LINE(550)
		Float tmp380 = (tmp362 * tmp379);		HX_STACK_VAR(tmp380,"tmp380");
		HX_STACK_LINE(550)
		Float tmp381 = tmp361[(int)15] = tmp380;		HX_STACK_VAR(tmp381,"tmp381");
		HX_STACK_LINE(550)
		tmp381;
	}
	HX_STACK_LINE(554)
	bool tmp5 = invertable;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(554)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3D_obj,invert,return )

Void Matrix3D_obj::pointAt( ::openfl::geom::Vector3D pos,::openfl::geom::Vector3D at,::openfl::geom::Vector3D up){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","pointAt",0xd7900cdb,"openfl.geom.Matrix3D.pointAt","openfl/geom/Matrix3D.hx",559,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(pos,"pos")
		HX_STACK_ARG(at,"at")
		HX_STACK_ARG(up,"up")
		HX_STACK_LINE(561)
		bool tmp = (at == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(561)
		if ((tmp)){
			HX_STACK_LINE(563)
			::openfl::geom::Vector3D tmp1 = ::openfl::geom::Vector3D_obj::__new((int)0,(int)0,(int)-1,null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(563)
			at = tmp1;
		}
		HX_STACK_LINE(567)
		bool tmp1 = (up == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(567)
		if ((tmp1)){
			HX_STACK_LINE(569)
			::openfl::geom::Vector3D tmp2 = ::openfl::geom::Vector3D_obj::__new((int)0,(int)-1,(int)0,null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(569)
			up = tmp2;
		}
		HX_STACK_LINE(573)
		::openfl::geom::Vector3D tmp2 = pos;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(573)
		::openfl::geom::Vector3D tmp3 = at->subtract(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(573)
		::openfl::geom::Vector3D dir = tmp3;		HX_STACK_VAR(dir,"dir");
		HX_STACK_LINE(574)
		::openfl::geom::Vector3D tmp4 = up->clone();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(574)
		::openfl::geom::Vector3D vup = tmp4;		HX_STACK_VAR(vup,"vup");
		HX_STACK_LINE(575)
		::openfl::geom::Vector3D right;		HX_STACK_VAR(right,"right");
		HX_STACK_LINE(577)
		dir->normalize();
		HX_STACK_LINE(578)
		vup->normalize();
		HX_STACK_LINE(580)
		::openfl::geom::Vector3D tmp5 = dir->clone();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(580)
		::openfl::geom::Vector3D dir2 = tmp5;		HX_STACK_VAR(dir2,"dir2");
		HX_STACK_LINE(581)
		::openfl::geom::Vector3D tmp6 = dir;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(581)
		Float tmp7 = vup->dotProduct(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(581)
		dir2->scaleBy(tmp7);
		HX_STACK_LINE(583)
		::openfl::geom::Vector3D tmp8 = dir2;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(583)
		::openfl::geom::Vector3D tmp9 = vup->subtract(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(583)
		vup = tmp9;
		HX_STACK_LINE(585)
		Float tmp10 = vup->get_length();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(585)
		bool tmp11 = (tmp10 > (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(585)
		if ((tmp11)){
			HX_STACK_LINE(587)
			vup->normalize();
		}
		else{
			HX_STACK_LINE(591)
			bool tmp12 = (dir->x != (int)0);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(591)
			if ((tmp12)){
				HX_STACK_LINE(593)
				Float tmp13 = dir->y;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(593)
				Float tmp14 = -(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(593)
				Float tmp15 = dir->x;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(593)
				::openfl::geom::Vector3D tmp16 = ::openfl::geom::Vector3D_obj::__new(tmp14,tmp15,(int)0,null());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(593)
				vup = tmp16;
			}
			else{
				HX_STACK_LINE(597)
				::openfl::geom::Vector3D tmp13 = ::openfl::geom::Vector3D_obj::__new((int)1,(int)0,(int)0,null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(597)
				vup = tmp13;
			}
		}
		HX_STACK_LINE(603)
		::openfl::geom::Vector3D tmp12 = dir;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(603)
		::openfl::geom::Vector3D tmp13 = vup->crossProduct(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(603)
		right = tmp13;
		HX_STACK_LINE(604)
		right->normalize();
		HX_STACK_LINE(606)
		Array< Float > tmp14 = this->rawData;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(606)
		Float tmp15 = right->x;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(606)
		Float tmp16 = tmp14[(int)0] = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(606)
		tmp16;
		HX_STACK_LINE(607)
		Array< Float > tmp17 = this->rawData;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(607)
		Float tmp18 = right->y;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(607)
		Float tmp19 = tmp17[(int)4] = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(607)
		tmp19;
		HX_STACK_LINE(608)
		Array< Float > tmp20 = this->rawData;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(608)
		Float tmp21 = right->z;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(608)
		Float tmp22 = tmp20[(int)8] = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(608)
		tmp22;
		HX_STACK_LINE(609)
		Array< Float > tmp23 = this->rawData;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(609)
		Float tmp24 = tmp23[(int)12] = ((Float)0.0);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(609)
		tmp24;
		HX_STACK_LINE(610)
		Array< Float > tmp25 = this->rawData;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(610)
		Float tmp26 = vup->x;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(610)
		Float tmp27 = tmp25[(int)1] = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(610)
		tmp27;
		HX_STACK_LINE(611)
		Array< Float > tmp28 = this->rawData;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(611)
		Float tmp29 = vup->y;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(611)
		Float tmp30 = tmp28[(int)5] = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(611)
		tmp30;
		HX_STACK_LINE(612)
		Array< Float > tmp31 = this->rawData;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(612)
		Float tmp32 = vup->z;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(612)
		Float tmp33 = tmp31[(int)9] = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(612)
		tmp33;
		HX_STACK_LINE(613)
		Array< Float > tmp34 = this->rawData;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(613)
		Float tmp35 = tmp34[(int)13] = ((Float)0.0);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(613)
		tmp35;
		HX_STACK_LINE(614)
		Array< Float > tmp36 = this->rawData;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(614)
		Float tmp37 = dir->x;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(614)
		Float tmp38 = tmp36[(int)2] = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(614)
		tmp38;
		HX_STACK_LINE(615)
		Array< Float > tmp39 = this->rawData;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(615)
		Float tmp40 = dir->y;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(615)
		Float tmp41 = tmp39[(int)6] = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(615)
		tmp41;
		HX_STACK_LINE(616)
		Array< Float > tmp42 = this->rawData;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(616)
		Float tmp43 = dir->z;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(616)
		Float tmp44 = tmp42[(int)10] = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(616)
		tmp44;
		HX_STACK_LINE(617)
		Array< Float > tmp45 = this->rawData;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(617)
		Float tmp46 = tmp45[(int)14] = ((Float)0.0);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(617)
		tmp46;
		HX_STACK_LINE(618)
		Array< Float > tmp47 = this->rawData;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(618)
		Float tmp48 = pos->x;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(618)
		Float tmp49 = tmp47[(int)3] = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(618)
		tmp49;
		HX_STACK_LINE(619)
		Array< Float > tmp50 = this->rawData;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(619)
		Float tmp51 = pos->y;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(619)
		Float tmp52 = tmp50[(int)7] = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(619)
		tmp52;
		HX_STACK_LINE(620)
		Array< Float > tmp53 = this->rawData;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(620)
		Float tmp54 = pos->z;		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(620)
		Float tmp55 = tmp53[(int)11] = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(620)
		tmp55;
		HX_STACK_LINE(621)
		Array< Float > tmp56 = this->rawData;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(621)
		Float tmp57 = tmp56[(int)15] = ((Float)1.0);		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(621)
		tmp57;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix3D_obj,pointAt,(void))

Void Matrix3D_obj::prepend( ::openfl::geom::Matrix3D rhs){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","prepend",0xbe4f0286,"openfl.geom.Matrix3D.prepend","openfl/geom/Matrix3D.hx",626,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rhs,"rhs")
		HX_STACK_LINE(628)
		Float tmp = rhs->rawData->__get((int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(628)
		Float m111 = ((Dynamic)(tmp));		HX_STACK_VAR(m111,"m111");
		HX_STACK_LINE(628)
		Float tmp1 = rhs->rawData->__get((int)4);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(628)
		Float m121 = ((Dynamic)(tmp1));		HX_STACK_VAR(m121,"m121");
		HX_STACK_LINE(628)
		Float tmp2 = rhs->rawData->__get((int)8);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(628)
		Float m131 = ((Dynamic)(tmp2));		HX_STACK_VAR(m131,"m131");
		HX_STACK_LINE(628)
		Float tmp3 = rhs->rawData->__get((int)12);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(628)
		Float m141 = ((Dynamic)(tmp3));		HX_STACK_VAR(m141,"m141");
		HX_STACK_LINE(629)
		Float tmp4 = rhs->rawData->__get((int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(629)
		Float m112 = ((Dynamic)(tmp4));		HX_STACK_VAR(m112,"m112");
		HX_STACK_LINE(629)
		Float tmp5 = rhs->rawData->__get((int)5);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(629)
		Float m122 = ((Dynamic)(tmp5));		HX_STACK_VAR(m122,"m122");
		HX_STACK_LINE(629)
		Float tmp6 = rhs->rawData->__get((int)9);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(629)
		Float m132 = ((Dynamic)(tmp6));		HX_STACK_VAR(m132,"m132");
		HX_STACK_LINE(629)
		Float tmp7 = rhs->rawData->__get((int)13);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(629)
		Float m142 = ((Dynamic)(tmp7));		HX_STACK_VAR(m142,"m142");
		HX_STACK_LINE(630)
		Float tmp8 = rhs->rawData->__get((int)2);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(630)
		Float m113 = ((Dynamic)(tmp8));		HX_STACK_VAR(m113,"m113");
		HX_STACK_LINE(630)
		Float tmp9 = rhs->rawData->__get((int)6);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(630)
		Float m123 = ((Dynamic)(tmp9));		HX_STACK_VAR(m123,"m123");
		HX_STACK_LINE(630)
		Float tmp10 = rhs->rawData->__get((int)10);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(630)
		Float m133 = ((Dynamic)(tmp10));		HX_STACK_VAR(m133,"m133");
		HX_STACK_LINE(630)
		Float tmp11 = rhs->rawData->__get((int)14);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(630)
		Float m143 = ((Dynamic)(tmp11));		HX_STACK_VAR(m143,"m143");
		HX_STACK_LINE(631)
		Float tmp12 = rhs->rawData->__get((int)3);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(631)
		Float m114 = ((Dynamic)(tmp12));		HX_STACK_VAR(m114,"m114");
		HX_STACK_LINE(631)
		Float tmp13 = rhs->rawData->__get((int)7);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(631)
		Float m124 = ((Dynamic)(tmp13));		HX_STACK_VAR(m124,"m124");
		HX_STACK_LINE(631)
		Float tmp14 = rhs->rawData->__get((int)11);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(631)
		Float m134 = ((Dynamic)(tmp14));		HX_STACK_VAR(m134,"m134");
		HX_STACK_LINE(631)
		Float tmp15 = rhs->rawData->__get((int)15);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(631)
		Float m144 = ((Dynamic)(tmp15));		HX_STACK_VAR(m144,"m144");
		HX_STACK_LINE(632)
		Array< Float > tmp16 = this->rawData;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(632)
		Float tmp17 = tmp16->__get((int)0);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(632)
		Float m211 = ((Dynamic)(tmp17));		HX_STACK_VAR(m211,"m211");
		HX_STACK_LINE(632)
		Array< Float > tmp18 = this->rawData;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(632)
		Float tmp19 = tmp18->__get((int)4);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(632)
		Float m221 = ((Dynamic)(tmp19));		HX_STACK_VAR(m221,"m221");
		HX_STACK_LINE(632)
		Array< Float > tmp20 = this->rawData;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(632)
		Float tmp21 = tmp20->__get((int)8);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(632)
		Float m231 = ((Dynamic)(tmp21));		HX_STACK_VAR(m231,"m231");
		HX_STACK_LINE(632)
		Array< Float > tmp22 = this->rawData;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(632)
		Float tmp23 = tmp22->__get((int)12);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(632)
		Float m241 = ((Dynamic)(tmp23));		HX_STACK_VAR(m241,"m241");
		HX_STACK_LINE(633)
		Array< Float > tmp24 = this->rawData;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(633)
		Float tmp25 = tmp24->__get((int)1);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(633)
		Float m212 = ((Dynamic)(tmp25));		HX_STACK_VAR(m212,"m212");
		HX_STACK_LINE(633)
		Array< Float > tmp26 = this->rawData;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(633)
		Float tmp27 = tmp26->__get((int)5);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(633)
		Float m222 = ((Dynamic)(tmp27));		HX_STACK_VAR(m222,"m222");
		HX_STACK_LINE(633)
		Array< Float > tmp28 = this->rawData;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(633)
		Float tmp29 = tmp28->__get((int)9);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(633)
		Float m232 = ((Dynamic)(tmp29));		HX_STACK_VAR(m232,"m232");
		HX_STACK_LINE(633)
		Array< Float > tmp30 = this->rawData;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(633)
		Float tmp31 = tmp30->__get((int)13);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(633)
		Float m242 = ((Dynamic)(tmp31));		HX_STACK_VAR(m242,"m242");
		HX_STACK_LINE(634)
		Array< Float > tmp32 = this->rawData;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(634)
		Float tmp33 = tmp32->__get((int)2);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(634)
		Float m213 = ((Dynamic)(tmp33));		HX_STACK_VAR(m213,"m213");
		HX_STACK_LINE(634)
		Array< Float > tmp34 = this->rawData;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(634)
		Float tmp35 = tmp34->__get((int)6);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(634)
		Float m223 = ((Dynamic)(tmp35));		HX_STACK_VAR(m223,"m223");
		HX_STACK_LINE(634)
		Array< Float > tmp36 = this->rawData;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(634)
		Float tmp37 = tmp36->__get((int)10);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(634)
		Float m233 = ((Dynamic)(tmp37));		HX_STACK_VAR(m233,"m233");
		HX_STACK_LINE(634)
		Array< Float > tmp38 = this->rawData;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(634)
		Float tmp39 = tmp38->__get((int)14);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(634)
		Float m243 = ((Dynamic)(tmp39));		HX_STACK_VAR(m243,"m243");
		HX_STACK_LINE(635)
		Array< Float > tmp40 = this->rawData;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(635)
		Float tmp41 = tmp40->__get((int)3);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(635)
		Float m214 = ((Dynamic)(tmp41));		HX_STACK_VAR(m214,"m214");
		HX_STACK_LINE(635)
		Array< Float > tmp42 = this->rawData;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(635)
		Float tmp43 = tmp42->__get((int)7);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(635)
		Float m224 = ((Dynamic)(tmp43));		HX_STACK_VAR(m224,"m224");
		HX_STACK_LINE(635)
		Array< Float > tmp44 = this->rawData;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(635)
		Float tmp45 = tmp44->__get((int)11);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(635)
		Float m234 = ((Dynamic)(tmp45));		HX_STACK_VAR(m234,"m234");
		HX_STACK_LINE(635)
		Array< Float > tmp46 = this->rawData;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(635)
		Float tmp47 = tmp46->__get((int)15);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(635)
		Float m244 = ((Dynamic)(tmp47));		HX_STACK_VAR(m244,"m244");
		HX_STACK_LINE(637)
		Array< Float > tmp48 = this->rawData;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(637)
		Float tmp49 = (m111 * m211);		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(637)
		Float tmp50 = (m112 * m221);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(637)
		Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(637)
		Float tmp52 = (m113 * m231);		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(637)
		Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(637)
		Float tmp54 = (m114 * m241);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(637)
		Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(637)
		Float tmp56 = tmp48[(int)0] = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(637)
		tmp56;
		HX_STACK_LINE(638)
		Array< Float > tmp57 = this->rawData;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(638)
		Float tmp58 = (m111 * m212);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(638)
		Float tmp59 = (m112 * m222);		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(638)
		Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(638)
		Float tmp61 = (m113 * m232);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(638)
		Float tmp62 = (tmp60 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(638)
		Float tmp63 = (m114 * m242);		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(638)
		Float tmp64 = (tmp62 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(638)
		Float tmp65 = tmp57[(int)1] = tmp64;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(638)
		tmp65;
		HX_STACK_LINE(639)
		Array< Float > tmp66 = this->rawData;		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(639)
		Float tmp67 = (m111 * m213);		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(639)
		Float tmp68 = (m112 * m223);		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(639)
		Float tmp69 = (tmp67 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(639)
		Float tmp70 = (m113 * m233);		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(639)
		Float tmp71 = (tmp69 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(639)
		Float tmp72 = (m114 * m243);		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(639)
		Float tmp73 = (tmp71 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(639)
		Float tmp74 = tmp66[(int)2] = tmp73;		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(639)
		tmp74;
		HX_STACK_LINE(640)
		Array< Float > tmp75 = this->rawData;		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(640)
		Float tmp76 = (m111 * m214);		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(640)
		Float tmp77 = (m112 * m224);		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(640)
		Float tmp78 = (tmp76 + tmp77);		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(640)
		Float tmp79 = (m113 * m234);		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(640)
		Float tmp80 = (tmp78 + tmp79);		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(640)
		Float tmp81 = (m114 * m244);		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(640)
		Float tmp82 = (tmp80 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(640)
		Float tmp83 = tmp75[(int)3] = tmp82;		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(640)
		tmp83;
		HX_STACK_LINE(642)
		Array< Float > tmp84 = this->rawData;		HX_STACK_VAR(tmp84,"tmp84");
		HX_STACK_LINE(642)
		Float tmp85 = (m121 * m211);		HX_STACK_VAR(tmp85,"tmp85");
		HX_STACK_LINE(642)
		Float tmp86 = (m122 * m221);		HX_STACK_VAR(tmp86,"tmp86");
		HX_STACK_LINE(642)
		Float tmp87 = (tmp85 + tmp86);		HX_STACK_VAR(tmp87,"tmp87");
		HX_STACK_LINE(642)
		Float tmp88 = (m123 * m231);		HX_STACK_VAR(tmp88,"tmp88");
		HX_STACK_LINE(642)
		Float tmp89 = (tmp87 + tmp88);		HX_STACK_VAR(tmp89,"tmp89");
		HX_STACK_LINE(642)
		Float tmp90 = (m124 * m241);		HX_STACK_VAR(tmp90,"tmp90");
		HX_STACK_LINE(642)
		Float tmp91 = (tmp89 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
		HX_STACK_LINE(642)
		Float tmp92 = tmp84[(int)4] = tmp91;		HX_STACK_VAR(tmp92,"tmp92");
		HX_STACK_LINE(642)
		tmp92;
		HX_STACK_LINE(643)
		Array< Float > tmp93 = this->rawData;		HX_STACK_VAR(tmp93,"tmp93");
		HX_STACK_LINE(643)
		Float tmp94 = (m121 * m212);		HX_STACK_VAR(tmp94,"tmp94");
		HX_STACK_LINE(643)
		Float tmp95 = (m122 * m222);		HX_STACK_VAR(tmp95,"tmp95");
		HX_STACK_LINE(643)
		Float tmp96 = (tmp94 + tmp95);		HX_STACK_VAR(tmp96,"tmp96");
		HX_STACK_LINE(643)
		Float tmp97 = (m123 * m232);		HX_STACK_VAR(tmp97,"tmp97");
		HX_STACK_LINE(643)
		Float tmp98 = (tmp96 + tmp97);		HX_STACK_VAR(tmp98,"tmp98");
		HX_STACK_LINE(643)
		Float tmp99 = (m124 * m242);		HX_STACK_VAR(tmp99,"tmp99");
		HX_STACK_LINE(643)
		Float tmp100 = (tmp98 + tmp99);		HX_STACK_VAR(tmp100,"tmp100");
		HX_STACK_LINE(643)
		Float tmp101 = tmp93[(int)5] = tmp100;		HX_STACK_VAR(tmp101,"tmp101");
		HX_STACK_LINE(643)
		tmp101;
		HX_STACK_LINE(644)
		Array< Float > tmp102 = this->rawData;		HX_STACK_VAR(tmp102,"tmp102");
		HX_STACK_LINE(644)
		Float tmp103 = (m121 * m213);		HX_STACK_VAR(tmp103,"tmp103");
		HX_STACK_LINE(644)
		Float tmp104 = (m122 * m223);		HX_STACK_VAR(tmp104,"tmp104");
		HX_STACK_LINE(644)
		Float tmp105 = (tmp103 + tmp104);		HX_STACK_VAR(tmp105,"tmp105");
		HX_STACK_LINE(644)
		Float tmp106 = (m123 * m233);		HX_STACK_VAR(tmp106,"tmp106");
		HX_STACK_LINE(644)
		Float tmp107 = (tmp105 + tmp106);		HX_STACK_VAR(tmp107,"tmp107");
		HX_STACK_LINE(644)
		Float tmp108 = (m124 * m243);		HX_STACK_VAR(tmp108,"tmp108");
		HX_STACK_LINE(644)
		Float tmp109 = (tmp107 + tmp108);		HX_STACK_VAR(tmp109,"tmp109");
		HX_STACK_LINE(644)
		Float tmp110 = tmp102[(int)6] = tmp109;		HX_STACK_VAR(tmp110,"tmp110");
		HX_STACK_LINE(644)
		tmp110;
		HX_STACK_LINE(645)
		Array< Float > tmp111 = this->rawData;		HX_STACK_VAR(tmp111,"tmp111");
		HX_STACK_LINE(645)
		Float tmp112 = (m121 * m214);		HX_STACK_VAR(tmp112,"tmp112");
		HX_STACK_LINE(645)
		Float tmp113 = (m122 * m224);		HX_STACK_VAR(tmp113,"tmp113");
		HX_STACK_LINE(645)
		Float tmp114 = (tmp112 + tmp113);		HX_STACK_VAR(tmp114,"tmp114");
		HX_STACK_LINE(645)
		Float tmp115 = (m123 * m234);		HX_STACK_VAR(tmp115,"tmp115");
		HX_STACK_LINE(645)
		Float tmp116 = (tmp114 + tmp115);		HX_STACK_VAR(tmp116,"tmp116");
		HX_STACK_LINE(645)
		Float tmp117 = (m124 * m244);		HX_STACK_VAR(tmp117,"tmp117");
		HX_STACK_LINE(645)
		Float tmp118 = (tmp116 + tmp117);		HX_STACK_VAR(tmp118,"tmp118");
		HX_STACK_LINE(645)
		Float tmp119 = tmp111[(int)7] = tmp118;		HX_STACK_VAR(tmp119,"tmp119");
		HX_STACK_LINE(645)
		tmp119;
		HX_STACK_LINE(647)
		Array< Float > tmp120 = this->rawData;		HX_STACK_VAR(tmp120,"tmp120");
		HX_STACK_LINE(647)
		Float tmp121 = (m131 * m211);		HX_STACK_VAR(tmp121,"tmp121");
		HX_STACK_LINE(647)
		Float tmp122 = (m132 * m221);		HX_STACK_VAR(tmp122,"tmp122");
		HX_STACK_LINE(647)
		Float tmp123 = (tmp121 + tmp122);		HX_STACK_VAR(tmp123,"tmp123");
		HX_STACK_LINE(647)
		Float tmp124 = (m133 * m231);		HX_STACK_VAR(tmp124,"tmp124");
		HX_STACK_LINE(647)
		Float tmp125 = (tmp123 + tmp124);		HX_STACK_VAR(tmp125,"tmp125");
		HX_STACK_LINE(647)
		Float tmp126 = (m134 * m241);		HX_STACK_VAR(tmp126,"tmp126");
		HX_STACK_LINE(647)
		Float tmp127 = (tmp125 + tmp126);		HX_STACK_VAR(tmp127,"tmp127");
		HX_STACK_LINE(647)
		Float tmp128 = tmp120[(int)8] = tmp127;		HX_STACK_VAR(tmp128,"tmp128");
		HX_STACK_LINE(647)
		tmp128;
		HX_STACK_LINE(648)
		Array< Float > tmp129 = this->rawData;		HX_STACK_VAR(tmp129,"tmp129");
		HX_STACK_LINE(648)
		Float tmp130 = (m131 * m212);		HX_STACK_VAR(tmp130,"tmp130");
		HX_STACK_LINE(648)
		Float tmp131 = (m132 * m222);		HX_STACK_VAR(tmp131,"tmp131");
		HX_STACK_LINE(648)
		Float tmp132 = (tmp130 + tmp131);		HX_STACK_VAR(tmp132,"tmp132");
		HX_STACK_LINE(648)
		Float tmp133 = (m133 * m232);		HX_STACK_VAR(tmp133,"tmp133");
		HX_STACK_LINE(648)
		Float tmp134 = (tmp132 + tmp133);		HX_STACK_VAR(tmp134,"tmp134");
		HX_STACK_LINE(648)
		Float tmp135 = (m134 * m242);		HX_STACK_VAR(tmp135,"tmp135");
		HX_STACK_LINE(648)
		Float tmp136 = (tmp134 + tmp135);		HX_STACK_VAR(tmp136,"tmp136");
		HX_STACK_LINE(648)
		Float tmp137 = tmp129[(int)9] = tmp136;		HX_STACK_VAR(tmp137,"tmp137");
		HX_STACK_LINE(648)
		tmp137;
		HX_STACK_LINE(649)
		Array< Float > tmp138 = this->rawData;		HX_STACK_VAR(tmp138,"tmp138");
		HX_STACK_LINE(649)
		Float tmp139 = (m131 * m213);		HX_STACK_VAR(tmp139,"tmp139");
		HX_STACK_LINE(649)
		Float tmp140 = (m132 * m223);		HX_STACK_VAR(tmp140,"tmp140");
		HX_STACK_LINE(649)
		Float tmp141 = (tmp139 + tmp140);		HX_STACK_VAR(tmp141,"tmp141");
		HX_STACK_LINE(649)
		Float tmp142 = (m133 * m233);		HX_STACK_VAR(tmp142,"tmp142");
		HX_STACK_LINE(649)
		Float tmp143 = (tmp141 + tmp142);		HX_STACK_VAR(tmp143,"tmp143");
		HX_STACK_LINE(649)
		Float tmp144 = (m134 * m243);		HX_STACK_VAR(tmp144,"tmp144");
		HX_STACK_LINE(649)
		Float tmp145 = (tmp143 + tmp144);		HX_STACK_VAR(tmp145,"tmp145");
		HX_STACK_LINE(649)
		Float tmp146 = tmp138[(int)10] = tmp145;		HX_STACK_VAR(tmp146,"tmp146");
		HX_STACK_LINE(649)
		tmp146;
		HX_STACK_LINE(650)
		Array< Float > tmp147 = this->rawData;		HX_STACK_VAR(tmp147,"tmp147");
		HX_STACK_LINE(650)
		Float tmp148 = (m131 * m214);		HX_STACK_VAR(tmp148,"tmp148");
		HX_STACK_LINE(650)
		Float tmp149 = (m132 * m224);		HX_STACK_VAR(tmp149,"tmp149");
		HX_STACK_LINE(650)
		Float tmp150 = (tmp148 + tmp149);		HX_STACK_VAR(tmp150,"tmp150");
		HX_STACK_LINE(650)
		Float tmp151 = (m133 * m234);		HX_STACK_VAR(tmp151,"tmp151");
		HX_STACK_LINE(650)
		Float tmp152 = (tmp150 + tmp151);		HX_STACK_VAR(tmp152,"tmp152");
		HX_STACK_LINE(650)
		Float tmp153 = (m134 * m244);		HX_STACK_VAR(tmp153,"tmp153");
		HX_STACK_LINE(650)
		Float tmp154 = (tmp152 + tmp153);		HX_STACK_VAR(tmp154,"tmp154");
		HX_STACK_LINE(650)
		Float tmp155 = tmp147[(int)11] = tmp154;		HX_STACK_VAR(tmp155,"tmp155");
		HX_STACK_LINE(650)
		tmp155;
		HX_STACK_LINE(652)
		Array< Float > tmp156 = this->rawData;		HX_STACK_VAR(tmp156,"tmp156");
		HX_STACK_LINE(652)
		Float tmp157 = (m141 * m211);		HX_STACK_VAR(tmp157,"tmp157");
		HX_STACK_LINE(652)
		Float tmp158 = (m142 * m221);		HX_STACK_VAR(tmp158,"tmp158");
		HX_STACK_LINE(652)
		Float tmp159 = (tmp157 + tmp158);		HX_STACK_VAR(tmp159,"tmp159");
		HX_STACK_LINE(652)
		Float tmp160 = (m143 * m231);		HX_STACK_VAR(tmp160,"tmp160");
		HX_STACK_LINE(652)
		Float tmp161 = (tmp159 + tmp160);		HX_STACK_VAR(tmp161,"tmp161");
		HX_STACK_LINE(652)
		Float tmp162 = (m144 * m241);		HX_STACK_VAR(tmp162,"tmp162");
		HX_STACK_LINE(652)
		Float tmp163 = (tmp161 + tmp162);		HX_STACK_VAR(tmp163,"tmp163");
		HX_STACK_LINE(652)
		Float tmp164 = tmp156[(int)12] = tmp163;		HX_STACK_VAR(tmp164,"tmp164");
		HX_STACK_LINE(652)
		tmp164;
		HX_STACK_LINE(653)
		Array< Float > tmp165 = this->rawData;		HX_STACK_VAR(tmp165,"tmp165");
		HX_STACK_LINE(653)
		Float tmp166 = (m141 * m212);		HX_STACK_VAR(tmp166,"tmp166");
		HX_STACK_LINE(653)
		Float tmp167 = (m142 * m222);		HX_STACK_VAR(tmp167,"tmp167");
		HX_STACK_LINE(653)
		Float tmp168 = (tmp166 + tmp167);		HX_STACK_VAR(tmp168,"tmp168");
		HX_STACK_LINE(653)
		Float tmp169 = (m143 * m232);		HX_STACK_VAR(tmp169,"tmp169");
		HX_STACK_LINE(653)
		Float tmp170 = (tmp168 + tmp169);		HX_STACK_VAR(tmp170,"tmp170");
		HX_STACK_LINE(653)
		Float tmp171 = (m144 * m242);		HX_STACK_VAR(tmp171,"tmp171");
		HX_STACK_LINE(653)
		Float tmp172 = (tmp170 + tmp171);		HX_STACK_VAR(tmp172,"tmp172");
		HX_STACK_LINE(653)
		Float tmp173 = tmp165[(int)13] = tmp172;		HX_STACK_VAR(tmp173,"tmp173");
		HX_STACK_LINE(653)
		tmp173;
		HX_STACK_LINE(654)
		Array< Float > tmp174 = this->rawData;		HX_STACK_VAR(tmp174,"tmp174");
		HX_STACK_LINE(654)
		Float tmp175 = (m141 * m213);		HX_STACK_VAR(tmp175,"tmp175");
		HX_STACK_LINE(654)
		Float tmp176 = (m142 * m223);		HX_STACK_VAR(tmp176,"tmp176");
		HX_STACK_LINE(654)
		Float tmp177 = (tmp175 + tmp176);		HX_STACK_VAR(tmp177,"tmp177");
		HX_STACK_LINE(654)
		Float tmp178 = (m143 * m233);		HX_STACK_VAR(tmp178,"tmp178");
		HX_STACK_LINE(654)
		Float tmp179 = (tmp177 + tmp178);		HX_STACK_VAR(tmp179,"tmp179");
		HX_STACK_LINE(654)
		Float tmp180 = (m144 * m243);		HX_STACK_VAR(tmp180,"tmp180");
		HX_STACK_LINE(654)
		Float tmp181 = (tmp179 + tmp180);		HX_STACK_VAR(tmp181,"tmp181");
		HX_STACK_LINE(654)
		Float tmp182 = tmp174[(int)14] = tmp181;		HX_STACK_VAR(tmp182,"tmp182");
		HX_STACK_LINE(654)
		tmp182;
		HX_STACK_LINE(655)
		Array< Float > tmp183 = this->rawData;		HX_STACK_VAR(tmp183,"tmp183");
		HX_STACK_LINE(655)
		Float tmp184 = (m141 * m214);		HX_STACK_VAR(tmp184,"tmp184");
		HX_STACK_LINE(655)
		Float tmp185 = (m142 * m224);		HX_STACK_VAR(tmp185,"tmp185");
		HX_STACK_LINE(655)
		Float tmp186 = (tmp184 + tmp185);		HX_STACK_VAR(tmp186,"tmp186");
		HX_STACK_LINE(655)
		Float tmp187 = (m143 * m234);		HX_STACK_VAR(tmp187,"tmp187");
		HX_STACK_LINE(655)
		Float tmp188 = (tmp186 + tmp187);		HX_STACK_VAR(tmp188,"tmp188");
		HX_STACK_LINE(655)
		Float tmp189 = (m144 * m244);		HX_STACK_VAR(tmp189,"tmp189");
		HX_STACK_LINE(655)
		Float tmp190 = (tmp188 + tmp189);		HX_STACK_VAR(tmp190,"tmp190");
		HX_STACK_LINE(655)
		Float tmp191 = tmp183[(int)15] = tmp190;		HX_STACK_VAR(tmp191,"tmp191");
		HX_STACK_LINE(655)
		tmp191;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3D_obj,prepend,(void))

Void Matrix3D_obj::prependRotation( Float degrees,::openfl::geom::Vector3D axis,::openfl::geom::Vector3D pivotPoint){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","prependRotation",0x54b5f1e4,"openfl.geom.Matrix3D.prependRotation","openfl/geom/Matrix3D.hx",660,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(degrees,"degrees")
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(pivotPoint,"pivotPoint")
		HX_STACK_LINE(662)
		Float tmp = axis->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(662)
		Float tmp1 = axis->y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(662)
		Float tmp2 = axis->z;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(662)
		Float tmp3 = degrees;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(662)
		::openfl::geom::Matrix3D tmp4 = ::openfl::geom::Matrix3D_obj::__getAxisRotation(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(662)
		::openfl::geom::Matrix3D m = tmp4;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(664)
		bool tmp5 = (pivotPoint != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(664)
		if ((tmp5)){
			HX_STACK_LINE(666)
			::openfl::geom::Vector3D p = pivotPoint;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(667)
			Float tmp6 = p->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(667)
			Float tmp7 = p->y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(667)
			Float tmp8 = p->z;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(667)
			m->appendTranslation(tmp6,tmp7,tmp8);
		}
		HX_STACK_LINE(671)
		::openfl::geom::Matrix3D tmp6 = m;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(671)
		this->prepend(tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix3D_obj,prependRotation,(void))

Void Matrix3D_obj::prependScale( Float xScale,Float yScale,Float zScale){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","prependScale",0x59d85624,"openfl.geom.Matrix3D.prependScale","openfl/geom/Matrix3D.hx",676,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xScale,"xScale")
		HX_STACK_ARG(yScale,"yScale")
		HX_STACK_ARG(zScale,"zScale")
		HX_STACK_LINE(678)
		::openfl::geom::Matrix3D tmp = ::openfl::geom::Matrix3D_obj::__new(Array_obj< Float >::__new().Add(xScale).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(yScale).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(zScale).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(678)
		this->prepend(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix3D_obj,prependScale,(void))

Void Matrix3D_obj::prependTranslation( Float x,Float y,Float z){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","prependTranslation",0x2df4680b,"openfl.geom.Matrix3D.prependTranslation","openfl/geom/Matrix3D.hx",683,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_LINE(685)
		::openfl::geom::Matrix3D tmp = ::openfl::geom::Matrix3D_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(685)
		::openfl::geom::Matrix3D m = tmp;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(686)
		::openfl::geom::Vector3D tmp1 = ::openfl::geom::Vector3D_obj::__new(x,y,z,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(686)
		m->set_position(tmp1);
		HX_STACK_LINE(687)
		::openfl::geom::Matrix3D tmp2 = m;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(687)
		this->prepend(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix3D_obj,prependTranslation,(void))

bool Matrix3D_obj::recompose( Array< ::Dynamic > components,Dynamic orientationStyle){
	HX_STACK_FRAME("openfl.geom.Matrix3D","recompose",0xd355bb37,"openfl.geom.Matrix3D.recompose","openfl/geom/Matrix3D.hx",692,0x3acce238)
	HX_STACK_THIS(this)
	HX_STACK_ARG(components,"components")
	HX_STACK_ARG(orientationStyle,"orientationStyle")
	HX_STACK_LINE(694)
	int tmp = components->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(694)
	bool tmp1 = (tmp < (int)3);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(694)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(694)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(694)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(694)
	if ((tmp3)){
		HX_STACK_LINE(694)
		::openfl::geom::Vector3D tmp5 = components->__get((int)2).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(694)
		::openfl::geom::Vector3D tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(694)
		::openfl::geom::Vector3D tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(694)
		Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(694)
		Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(694)
		Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(694)
		tmp4 = (tmp10 == (int)0);
	}
	else{
		HX_STACK_LINE(694)
		tmp4 = true;
	}
	HX_STACK_LINE(694)
	bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(694)
	bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(694)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(694)
	if ((tmp6)){
		HX_STACK_LINE(694)
		::openfl::geom::Vector3D tmp8 = components->__get((int)2).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(694)
		::openfl::geom::Vector3D tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(694)
		::openfl::geom::Vector3D tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(694)
		Float tmp11 = tmp10->y;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(694)
		Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(694)
		Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(694)
		tmp7 = (tmp13 == (int)0);
	}
	else{
		HX_STACK_LINE(694)
		tmp7 = true;
	}
	HX_STACK_LINE(694)
	bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(694)
	bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(694)
	if ((tmp8)){
		HX_STACK_LINE(694)
		::openfl::geom::Vector3D tmp10 = components->__get((int)2).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(694)
		::openfl::geom::Vector3D tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(694)
		Float tmp12 = tmp11->z;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(694)
		Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(694)
		tmp9 = (tmp13 == (int)0);
	}
	else{
		HX_STACK_LINE(694)
		tmp9 = true;
	}
	HX_STACK_LINE(694)
	if ((tmp9)){
		HX_STACK_LINE(696)
		return false;
	}
	HX_STACK_LINE(700)
	bool tmp10 = (orientationStyle == null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(700)
	if ((tmp10)){
		HX_STACK_LINE(702)
		orientationStyle = ((Dynamic)((int)1));
	}
	HX_STACK_LINE(706)
	this->identity();
	HX_STACK_LINE(708)
	Array< Float > scale = Array_obj< Float >::__new();		HX_STACK_VAR(scale,"scale");
	HX_STACK_LINE(709)
	::openfl::geom::Vector3D tmp11 = components->__get((int)2).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(709)
	Float tmp12 = tmp11->x;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(709)
	Float tmp13 = scale[(int)2] = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(709)
	Float tmp14 = scale[(int)1] = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(709)
	scale[(int)0] = tmp14;
	HX_STACK_LINE(710)
	::openfl::geom::Vector3D tmp15 = components->__get((int)2).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(710)
	Float tmp16 = tmp15->y;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(710)
	Float tmp17 = scale[(int)6] = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(710)
	Float tmp18 = scale[(int)5] = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(710)
	scale[(int)4] = tmp18;
	HX_STACK_LINE(711)
	::openfl::geom::Vector3D tmp19 = components->__get((int)2).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(711)
	Float tmp20 = tmp19->z;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(711)
	Float tmp21 = scale[(int)10] = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(711)
	Float tmp22 = scale[(int)9] = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(711)
	scale[(int)8] = tmp22;
	HX_STACK_LINE(713)
	bool tmp23 = (orientationStyle != null());		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(713)
	if ((tmp23)){
		HX_STACK_LINE(713)
		Dynamic tmp24 = orientationStyle;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(713)
		switch( (int)(tmp24)){
			case (int)1: {
				HX_STACK_LINE(717)
				::openfl::geom::Vector3D tmp25 = components->__get((int)1).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(717)
				Float tmp26 = tmp25->x;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(717)
				Float tmp27 = ::Math_obj::cos(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(717)
				Float cx = tmp27;		HX_STACK_VAR(cx,"cx");
				HX_STACK_LINE(718)
				::openfl::geom::Vector3D tmp28 = components->__get((int)1).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(718)
				Float tmp29 = tmp28->y;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(718)
				Float tmp30 = ::Math_obj::cos(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(718)
				Float cy = tmp30;		HX_STACK_VAR(cy,"cy");
				HX_STACK_LINE(719)
				::openfl::geom::Vector3D tmp31 = components->__get((int)1).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(719)
				Float tmp32 = tmp31->z;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(719)
				Float tmp33 = ::Math_obj::cos(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(719)
				Float cz = tmp33;		HX_STACK_VAR(cz,"cz");
				HX_STACK_LINE(720)
				::openfl::geom::Vector3D tmp34 = components->__get((int)1).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(720)
				Float tmp35 = tmp34->x;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(720)
				Float tmp36 = ::Math_obj::sin(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(720)
				Float sx = tmp36;		HX_STACK_VAR(sx,"sx");
				HX_STACK_LINE(721)
				::openfl::geom::Vector3D tmp37 = components->__get((int)1).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(721)
				Float tmp38 = tmp37->y;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(721)
				Float tmp39 = ::Math_obj::sin(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(721)
				Float sy = tmp39;		HX_STACK_VAR(sy,"sy");
				HX_STACK_LINE(722)
				::openfl::geom::Vector3D tmp40 = components->__get((int)1).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(722)
				Float tmp41 = tmp40->z;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(722)
				Float tmp42 = ::Math_obj::sin(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(722)
				Float sz = tmp42;		HX_STACK_VAR(sz,"sz");
				HX_STACK_LINE(724)
				Array< Float > tmp43 = this->rawData;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(724)
				Float tmp44 = (cy * cz);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(724)
				Float tmp45 = scale->__get((int)0);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(724)
				Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(724)
				Float tmp47 = tmp43[(int)0] = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(724)
				tmp47;
				HX_STACK_LINE(725)
				Array< Float > tmp48 = this->rawData;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(725)
				Float tmp49 = (cy * sz);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(725)
				Float tmp50 = scale->__get((int)1);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(725)
				Float tmp51 = (tmp49 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(725)
				Float tmp52 = tmp48[(int)1] = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(725)
				tmp52;
				HX_STACK_LINE(726)
				Array< Float > tmp53 = this->rawData;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(726)
				Float tmp54 = sy;		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(726)
				Float tmp55 = -(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(726)
				Float tmp56 = scale->__get((int)2);		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(726)
				Float tmp57 = (tmp55 * tmp56);		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(726)
				Float tmp58 = tmp53[(int)2] = tmp57;		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(726)
				tmp58;
				HX_STACK_LINE(727)
				Array< Float > tmp59 = this->rawData;		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(727)
				Float tmp60 = tmp59[(int)3] = (int)0;		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(727)
				tmp60;
				HX_STACK_LINE(728)
				Array< Float > tmp61 = this->rawData;		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(728)
				Float tmp62 = (sx * sy);		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(728)
				Float tmp63 = cz;		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(728)
				Float tmp64 = (tmp62 * tmp63);		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(728)
				Float tmp65 = (cx * sz);		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(728)
				Float tmp66 = (tmp64 - tmp65);		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(728)
				Float tmp67 = scale->__get((int)4);		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(728)
				Float tmp68 = (tmp66 * tmp67);		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(728)
				Float tmp69 = tmp61[(int)4] = tmp68;		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(728)
				tmp69;
				HX_STACK_LINE(729)
				Array< Float > tmp70 = this->rawData;		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(729)
				Float tmp71 = (sx * sy);		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(729)
				Float tmp72 = sz;		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(729)
				Float tmp73 = (tmp71 * tmp72);		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(729)
				Float tmp74 = (cx * cz);		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(729)
				Float tmp75 = (tmp73 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
				HX_STACK_LINE(729)
				Float tmp76 = scale->__get((int)5);		HX_STACK_VAR(tmp76,"tmp76");
				HX_STACK_LINE(729)
				Float tmp77 = (tmp75 * tmp76);		HX_STACK_VAR(tmp77,"tmp77");
				HX_STACK_LINE(729)
				Float tmp78 = tmp70[(int)5] = tmp77;		HX_STACK_VAR(tmp78,"tmp78");
				HX_STACK_LINE(729)
				tmp78;
				HX_STACK_LINE(730)
				Array< Float > tmp79 = this->rawData;		HX_STACK_VAR(tmp79,"tmp79");
				HX_STACK_LINE(730)
				Float tmp80 = (sx * cy);		HX_STACK_VAR(tmp80,"tmp80");
				HX_STACK_LINE(730)
				Float tmp81 = scale->__get((int)6);		HX_STACK_VAR(tmp81,"tmp81");
				HX_STACK_LINE(730)
				Float tmp82 = (tmp80 * tmp81);		HX_STACK_VAR(tmp82,"tmp82");
				HX_STACK_LINE(730)
				Float tmp83 = tmp79[(int)6] = tmp82;		HX_STACK_VAR(tmp83,"tmp83");
				HX_STACK_LINE(730)
				tmp83;
				HX_STACK_LINE(731)
				Array< Float > tmp84 = this->rawData;		HX_STACK_VAR(tmp84,"tmp84");
				HX_STACK_LINE(731)
				Float tmp85 = tmp84[(int)7] = (int)0;		HX_STACK_VAR(tmp85,"tmp85");
				HX_STACK_LINE(731)
				tmp85;
				HX_STACK_LINE(732)
				Array< Float > tmp86 = this->rawData;		HX_STACK_VAR(tmp86,"tmp86");
				HX_STACK_LINE(732)
				Float tmp87 = (cx * sy);		HX_STACK_VAR(tmp87,"tmp87");
				HX_STACK_LINE(732)
				Float tmp88 = cz;		HX_STACK_VAR(tmp88,"tmp88");
				HX_STACK_LINE(732)
				Float tmp89 = (tmp87 * tmp88);		HX_STACK_VAR(tmp89,"tmp89");
				HX_STACK_LINE(732)
				Float tmp90 = (sx * sz);		HX_STACK_VAR(tmp90,"tmp90");
				HX_STACK_LINE(732)
				Float tmp91 = (tmp89 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
				HX_STACK_LINE(732)
				Float tmp92 = scale->__get((int)8);		HX_STACK_VAR(tmp92,"tmp92");
				HX_STACK_LINE(732)
				Float tmp93 = (tmp91 * tmp92);		HX_STACK_VAR(tmp93,"tmp93");
				HX_STACK_LINE(732)
				Float tmp94 = tmp86[(int)8] = tmp93;		HX_STACK_VAR(tmp94,"tmp94");
				HX_STACK_LINE(732)
				tmp94;
				HX_STACK_LINE(733)
				Array< Float > tmp95 = this->rawData;		HX_STACK_VAR(tmp95,"tmp95");
				HX_STACK_LINE(733)
				Float tmp96 = (cx * sy);		HX_STACK_VAR(tmp96,"tmp96");
				HX_STACK_LINE(733)
				Float tmp97 = sz;		HX_STACK_VAR(tmp97,"tmp97");
				HX_STACK_LINE(733)
				Float tmp98 = (tmp96 * tmp97);		HX_STACK_VAR(tmp98,"tmp98");
				HX_STACK_LINE(733)
				Float tmp99 = (sx * cz);		HX_STACK_VAR(tmp99,"tmp99");
				HX_STACK_LINE(733)
				Float tmp100 = (tmp98 - tmp99);		HX_STACK_VAR(tmp100,"tmp100");
				HX_STACK_LINE(733)
				Float tmp101 = scale->__get((int)9);		HX_STACK_VAR(tmp101,"tmp101");
				HX_STACK_LINE(733)
				Float tmp102 = (tmp100 * tmp101);		HX_STACK_VAR(tmp102,"tmp102");
				HX_STACK_LINE(733)
				Float tmp103 = tmp95[(int)9] = tmp102;		HX_STACK_VAR(tmp103,"tmp103");
				HX_STACK_LINE(733)
				tmp103;
				HX_STACK_LINE(734)
				Array< Float > tmp104 = this->rawData;		HX_STACK_VAR(tmp104,"tmp104");
				HX_STACK_LINE(734)
				Float tmp105 = (cx * cy);		HX_STACK_VAR(tmp105,"tmp105");
				HX_STACK_LINE(734)
				Float tmp106 = scale->__get((int)10);		HX_STACK_VAR(tmp106,"tmp106");
				HX_STACK_LINE(734)
				Float tmp107 = (tmp105 * tmp106);		HX_STACK_VAR(tmp107,"tmp107");
				HX_STACK_LINE(734)
				Float tmp108 = tmp104[(int)10] = tmp107;		HX_STACK_VAR(tmp108,"tmp108");
				HX_STACK_LINE(734)
				tmp108;
				HX_STACK_LINE(735)
				Array< Float > tmp109 = this->rawData;		HX_STACK_VAR(tmp109,"tmp109");
				HX_STACK_LINE(735)
				Float tmp110 = tmp109[(int)11] = (int)0;		HX_STACK_VAR(tmp110,"tmp110");
				HX_STACK_LINE(735)
				tmp110;
				HX_STACK_LINE(736)
				Array< Float > tmp111 = this->rawData;		HX_STACK_VAR(tmp111,"tmp111");
				HX_STACK_LINE(736)
				::openfl::geom::Vector3D tmp112 = components->__get((int)0).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp112,"tmp112");
				HX_STACK_LINE(736)
				Float tmp113 = tmp112->x;		HX_STACK_VAR(tmp113,"tmp113");
				HX_STACK_LINE(736)
				Float tmp114 = tmp111[(int)12] = tmp113;		HX_STACK_VAR(tmp114,"tmp114");
				HX_STACK_LINE(736)
				tmp114;
				HX_STACK_LINE(737)
				Array< Float > tmp115 = this->rawData;		HX_STACK_VAR(tmp115,"tmp115");
				HX_STACK_LINE(737)
				::openfl::geom::Vector3D tmp116 = components->__get((int)0).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp116,"tmp116");
				HX_STACK_LINE(737)
				Float tmp117 = tmp116->y;		HX_STACK_VAR(tmp117,"tmp117");
				HX_STACK_LINE(737)
				Float tmp118 = tmp115[(int)13] = tmp117;		HX_STACK_VAR(tmp118,"tmp118");
				HX_STACK_LINE(737)
				tmp118;
				HX_STACK_LINE(738)
				Array< Float > tmp119 = this->rawData;		HX_STACK_VAR(tmp119,"tmp119");
				HX_STACK_LINE(738)
				::openfl::geom::Vector3D tmp120 = components->__get((int)0).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp120,"tmp120");
				HX_STACK_LINE(738)
				Float tmp121 = tmp120->z;		HX_STACK_VAR(tmp121,"tmp121");
				HX_STACK_LINE(738)
				Float tmp122 = tmp119[(int)14] = tmp121;		HX_STACK_VAR(tmp122,"tmp122");
				HX_STACK_LINE(738)
				tmp122;
				HX_STACK_LINE(739)
				Array< Float > tmp123 = this->rawData;		HX_STACK_VAR(tmp123,"tmp123");
				HX_STACK_LINE(739)
				Float tmp124 = tmp123[(int)15] = (int)1;		HX_STACK_VAR(tmp124,"tmp124");
				HX_STACK_LINE(739)
				tmp124;
			}
			;break;
			default: {
				HX_STACK_LINE(743)
				::openfl::geom::Vector3D tmp25 = components->__get((int)1).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(743)
				Float tmp26 = tmp25->x;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(743)
				Float x = tmp26;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(744)
				::openfl::geom::Vector3D tmp27 = components->__get((int)1).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(744)
				Float tmp28 = tmp27->y;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(744)
				Float y = tmp28;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(745)
				::openfl::geom::Vector3D tmp29 = components->__get((int)1).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(745)
				Float tmp30 = tmp29->z;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(745)
				Float z = tmp30;		HX_STACK_VAR(z,"z");
				HX_STACK_LINE(746)
				::openfl::geom::Vector3D tmp31 = components->__get((int)1).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(746)
				Float tmp32 = tmp31->w;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(746)
				Float w = tmp32;		HX_STACK_VAR(w,"w");
				HX_STACK_LINE(748)
				Dynamic tmp33 = orientationStyle;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(748)
				bool tmp34 = ::Type_obj::enumEq(tmp33,((Dynamic)((int)0)));		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(748)
				if ((tmp34)){
					HX_STACK_LINE(750)
					Float tmp35 = (Float(w) / Float((int)2));		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(750)
					Float tmp36 = ::Math_obj::sin(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(750)
					hx::MultEq(x,tmp36);
					HX_STACK_LINE(751)
					Float tmp37 = (Float(w) / Float((int)2));		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(751)
					Float tmp38 = ::Math_obj::sin(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(751)
					hx::MultEq(y,tmp38);
					HX_STACK_LINE(752)
					Float tmp39 = (Float(w) / Float((int)2));		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(752)
					Float tmp40 = ::Math_obj::sin(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(752)
					hx::MultEq(z,tmp40);
					HX_STACK_LINE(753)
					Float tmp41 = (Float(w) / Float((int)2));		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(753)
					Float tmp42 = ::Math_obj::cos(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(753)
					w = tmp42;
				}
				HX_STACK_LINE(757)
				Array< Float > tmp35 = this->rawData;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(757)
				Float tmp36 = ((int)2 * y);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(757)
				Float tmp37 = y;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(757)
				Float tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(757)
				Float tmp39 = ((int)1 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(757)
				Float tmp40 = ((int)2 * z);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(757)
				Float tmp41 = z;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(757)
				Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(757)
				Float tmp43 = (tmp39 - tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(757)
				Float tmp44 = scale->__get((int)0);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(757)
				Float tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(757)
				Float tmp46 = tmp35[(int)0] = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(757)
				tmp46;
				HX_STACK_LINE(758)
				Array< Float > tmp47 = this->rawData;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(758)
				Float tmp48 = ((int)2 * x);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(758)
				Float tmp49 = y;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(758)
				Float tmp50 = (tmp48 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(758)
				Float tmp51 = ((int)2 * w);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(758)
				Float tmp52 = z;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(758)
				Float tmp53 = (tmp51 * tmp52);		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(758)
				Float tmp54 = (tmp50 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(758)
				Float tmp55 = scale->__get((int)1);		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(758)
				Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(758)
				Float tmp57 = tmp47[(int)1] = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(758)
				tmp57;
				HX_STACK_LINE(759)
				Array< Float > tmp58 = this->rawData;		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(759)
				Float tmp59 = ((int)2 * x);		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(759)
				Float tmp60 = z;		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(759)
				Float tmp61 = (tmp59 * tmp60);		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(759)
				Float tmp62 = ((int)2 * w);		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(759)
				Float tmp63 = y;		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(759)
				Float tmp64 = (tmp62 * tmp63);		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(759)
				Float tmp65 = (tmp61 - tmp64);		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(759)
				Float tmp66 = scale->__get((int)2);		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(759)
				Float tmp67 = (tmp65 * tmp66);		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(759)
				Float tmp68 = tmp58[(int)2] = tmp67;		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(759)
				tmp68;
				HX_STACK_LINE(760)
				Array< Float > tmp69 = this->rawData;		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(760)
				Float tmp70 = tmp69[(int)3] = (int)0;		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(760)
				tmp70;
				HX_STACK_LINE(761)
				Array< Float > tmp71 = this->rawData;		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(761)
				Float tmp72 = ((int)2 * x);		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(761)
				Float tmp73 = y;		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(761)
				Float tmp74 = (tmp72 * tmp73);		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(761)
				Float tmp75 = ((int)2 * w);		HX_STACK_VAR(tmp75,"tmp75");
				HX_STACK_LINE(761)
				Float tmp76 = z;		HX_STACK_VAR(tmp76,"tmp76");
				HX_STACK_LINE(761)
				Float tmp77 = (tmp75 * tmp76);		HX_STACK_VAR(tmp77,"tmp77");
				HX_STACK_LINE(761)
				Float tmp78 = (tmp74 - tmp77);		HX_STACK_VAR(tmp78,"tmp78");
				HX_STACK_LINE(761)
				Float tmp79 = scale->__get((int)4);		HX_STACK_VAR(tmp79,"tmp79");
				HX_STACK_LINE(761)
				Float tmp80 = (tmp78 * tmp79);		HX_STACK_VAR(tmp80,"tmp80");
				HX_STACK_LINE(761)
				Float tmp81 = tmp71[(int)4] = tmp80;		HX_STACK_VAR(tmp81,"tmp81");
				HX_STACK_LINE(761)
				tmp81;
				HX_STACK_LINE(762)
				Array< Float > tmp82 = this->rawData;		HX_STACK_VAR(tmp82,"tmp82");
				HX_STACK_LINE(762)
				Float tmp83 = ((int)2 * x);		HX_STACK_VAR(tmp83,"tmp83");
				HX_STACK_LINE(762)
				Float tmp84 = x;		HX_STACK_VAR(tmp84,"tmp84");
				HX_STACK_LINE(762)
				Float tmp85 = (tmp83 * tmp84);		HX_STACK_VAR(tmp85,"tmp85");
				HX_STACK_LINE(762)
				Float tmp86 = ((int)1 - tmp85);		HX_STACK_VAR(tmp86,"tmp86");
				HX_STACK_LINE(762)
				Float tmp87 = ((int)2 * z);		HX_STACK_VAR(tmp87,"tmp87");
				HX_STACK_LINE(762)
				Float tmp88 = z;		HX_STACK_VAR(tmp88,"tmp88");
				HX_STACK_LINE(762)
				Float tmp89 = (tmp87 * tmp88);		HX_STACK_VAR(tmp89,"tmp89");
				HX_STACK_LINE(762)
				Float tmp90 = (tmp86 - tmp89);		HX_STACK_VAR(tmp90,"tmp90");
				HX_STACK_LINE(762)
				Float tmp91 = scale->__get((int)5);		HX_STACK_VAR(tmp91,"tmp91");
				HX_STACK_LINE(762)
				Float tmp92 = (tmp90 * tmp91);		HX_STACK_VAR(tmp92,"tmp92");
				HX_STACK_LINE(762)
				Float tmp93 = tmp82[(int)5] = tmp92;		HX_STACK_VAR(tmp93,"tmp93");
				HX_STACK_LINE(762)
				tmp93;
				HX_STACK_LINE(763)
				Array< Float > tmp94 = this->rawData;		HX_STACK_VAR(tmp94,"tmp94");
				HX_STACK_LINE(763)
				Float tmp95 = ((int)2 * y);		HX_STACK_VAR(tmp95,"tmp95");
				HX_STACK_LINE(763)
				Float tmp96 = z;		HX_STACK_VAR(tmp96,"tmp96");
				HX_STACK_LINE(763)
				Float tmp97 = (tmp95 * tmp96);		HX_STACK_VAR(tmp97,"tmp97");
				HX_STACK_LINE(763)
				Float tmp98 = ((int)2 * w);		HX_STACK_VAR(tmp98,"tmp98");
				HX_STACK_LINE(763)
				Float tmp99 = x;		HX_STACK_VAR(tmp99,"tmp99");
				HX_STACK_LINE(763)
				Float tmp100 = (tmp98 * tmp99);		HX_STACK_VAR(tmp100,"tmp100");
				HX_STACK_LINE(763)
				Float tmp101 = (tmp97 + tmp100);		HX_STACK_VAR(tmp101,"tmp101");
				HX_STACK_LINE(763)
				Float tmp102 = scale->__get((int)6);		HX_STACK_VAR(tmp102,"tmp102");
				HX_STACK_LINE(763)
				Float tmp103 = (tmp101 * tmp102);		HX_STACK_VAR(tmp103,"tmp103");
				HX_STACK_LINE(763)
				Float tmp104 = tmp94[(int)6] = tmp103;		HX_STACK_VAR(tmp104,"tmp104");
				HX_STACK_LINE(763)
				tmp104;
				HX_STACK_LINE(764)
				Array< Float > tmp105 = this->rawData;		HX_STACK_VAR(tmp105,"tmp105");
				HX_STACK_LINE(764)
				Float tmp106 = tmp105[(int)7] = (int)0;		HX_STACK_VAR(tmp106,"tmp106");
				HX_STACK_LINE(764)
				tmp106;
				HX_STACK_LINE(765)
				Array< Float > tmp107 = this->rawData;		HX_STACK_VAR(tmp107,"tmp107");
				HX_STACK_LINE(765)
				Float tmp108 = ((int)2 * x);		HX_STACK_VAR(tmp108,"tmp108");
				HX_STACK_LINE(765)
				Float tmp109 = z;		HX_STACK_VAR(tmp109,"tmp109");
				HX_STACK_LINE(765)
				Float tmp110 = (tmp108 * tmp109);		HX_STACK_VAR(tmp110,"tmp110");
				HX_STACK_LINE(765)
				Float tmp111 = ((int)2 * w);		HX_STACK_VAR(tmp111,"tmp111");
				HX_STACK_LINE(765)
				Float tmp112 = y;		HX_STACK_VAR(tmp112,"tmp112");
				HX_STACK_LINE(765)
				Float tmp113 = (tmp111 * tmp112);		HX_STACK_VAR(tmp113,"tmp113");
				HX_STACK_LINE(765)
				Float tmp114 = (tmp110 + tmp113);		HX_STACK_VAR(tmp114,"tmp114");
				HX_STACK_LINE(765)
				Float tmp115 = scale->__get((int)8);		HX_STACK_VAR(tmp115,"tmp115");
				HX_STACK_LINE(765)
				Float tmp116 = (tmp114 * tmp115);		HX_STACK_VAR(tmp116,"tmp116");
				HX_STACK_LINE(765)
				Float tmp117 = tmp107[(int)8] = tmp116;		HX_STACK_VAR(tmp117,"tmp117");
				HX_STACK_LINE(765)
				tmp117;
				HX_STACK_LINE(766)
				Array< Float > tmp118 = this->rawData;		HX_STACK_VAR(tmp118,"tmp118");
				HX_STACK_LINE(766)
				Float tmp119 = ((int)2 * y);		HX_STACK_VAR(tmp119,"tmp119");
				HX_STACK_LINE(766)
				Float tmp120 = z;		HX_STACK_VAR(tmp120,"tmp120");
				HX_STACK_LINE(766)
				Float tmp121 = (tmp119 * tmp120);		HX_STACK_VAR(tmp121,"tmp121");
				HX_STACK_LINE(766)
				Float tmp122 = ((int)2 * w);		HX_STACK_VAR(tmp122,"tmp122");
				HX_STACK_LINE(766)
				Float tmp123 = x;		HX_STACK_VAR(tmp123,"tmp123");
				HX_STACK_LINE(766)
				Float tmp124 = (tmp122 * tmp123);		HX_STACK_VAR(tmp124,"tmp124");
				HX_STACK_LINE(766)
				Float tmp125 = (tmp121 - tmp124);		HX_STACK_VAR(tmp125,"tmp125");
				HX_STACK_LINE(766)
				Float tmp126 = scale->__get((int)9);		HX_STACK_VAR(tmp126,"tmp126");
				HX_STACK_LINE(766)
				Float tmp127 = (tmp125 * tmp126);		HX_STACK_VAR(tmp127,"tmp127");
				HX_STACK_LINE(766)
				Float tmp128 = tmp118[(int)9] = tmp127;		HX_STACK_VAR(tmp128,"tmp128");
				HX_STACK_LINE(766)
				tmp128;
				HX_STACK_LINE(767)
				Array< Float > tmp129 = this->rawData;		HX_STACK_VAR(tmp129,"tmp129");
				HX_STACK_LINE(767)
				Float tmp130 = ((int)2 * x);		HX_STACK_VAR(tmp130,"tmp130");
				HX_STACK_LINE(767)
				Float tmp131 = x;		HX_STACK_VAR(tmp131,"tmp131");
				HX_STACK_LINE(767)
				Float tmp132 = (tmp130 * tmp131);		HX_STACK_VAR(tmp132,"tmp132");
				HX_STACK_LINE(767)
				Float tmp133 = ((int)1 - tmp132);		HX_STACK_VAR(tmp133,"tmp133");
				HX_STACK_LINE(767)
				Float tmp134 = ((int)2 * y);		HX_STACK_VAR(tmp134,"tmp134");
				HX_STACK_LINE(767)
				Float tmp135 = y;		HX_STACK_VAR(tmp135,"tmp135");
				HX_STACK_LINE(767)
				Float tmp136 = (tmp134 * tmp135);		HX_STACK_VAR(tmp136,"tmp136");
				HX_STACK_LINE(767)
				Float tmp137 = (tmp133 - tmp136);		HX_STACK_VAR(tmp137,"tmp137");
				HX_STACK_LINE(767)
				Float tmp138 = scale->__get((int)10);		HX_STACK_VAR(tmp138,"tmp138");
				HX_STACK_LINE(767)
				Float tmp139 = (tmp137 * tmp138);		HX_STACK_VAR(tmp139,"tmp139");
				HX_STACK_LINE(767)
				Float tmp140 = tmp129[(int)10] = tmp139;		HX_STACK_VAR(tmp140,"tmp140");
				HX_STACK_LINE(767)
				tmp140;
				HX_STACK_LINE(768)
				Array< Float > tmp141 = this->rawData;		HX_STACK_VAR(tmp141,"tmp141");
				HX_STACK_LINE(768)
				Float tmp142 = tmp141[(int)11] = (int)0;		HX_STACK_VAR(tmp142,"tmp142");
				HX_STACK_LINE(768)
				tmp142;
				HX_STACK_LINE(769)
				Array< Float > tmp143 = this->rawData;		HX_STACK_VAR(tmp143,"tmp143");
				HX_STACK_LINE(769)
				::openfl::geom::Vector3D tmp144 = components->__get((int)0).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp144,"tmp144");
				HX_STACK_LINE(769)
				Float tmp145 = tmp144->x;		HX_STACK_VAR(tmp145,"tmp145");
				HX_STACK_LINE(769)
				Float tmp146 = tmp143[(int)12] = tmp145;		HX_STACK_VAR(tmp146,"tmp146");
				HX_STACK_LINE(769)
				tmp146;
				HX_STACK_LINE(770)
				Array< Float > tmp147 = this->rawData;		HX_STACK_VAR(tmp147,"tmp147");
				HX_STACK_LINE(770)
				::openfl::geom::Vector3D tmp148 = components->__get((int)0).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp148,"tmp148");
				HX_STACK_LINE(770)
				Float tmp149 = tmp148->y;		HX_STACK_VAR(tmp149,"tmp149");
				HX_STACK_LINE(770)
				Float tmp150 = tmp147[(int)13] = tmp149;		HX_STACK_VAR(tmp150,"tmp150");
				HX_STACK_LINE(770)
				tmp150;
				HX_STACK_LINE(771)
				Array< Float > tmp151 = this->rawData;		HX_STACK_VAR(tmp151,"tmp151");
				HX_STACK_LINE(771)
				::openfl::geom::Vector3D tmp152 = components->__get((int)0).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp152,"tmp152");
				HX_STACK_LINE(771)
				Float tmp153 = tmp152->z;		HX_STACK_VAR(tmp153,"tmp153");
				HX_STACK_LINE(771)
				Float tmp154 = tmp151[(int)14] = tmp153;		HX_STACK_VAR(tmp154,"tmp154");
				HX_STACK_LINE(771)
				tmp154;
				HX_STACK_LINE(772)
				Array< Float > tmp155 = this->rawData;		HX_STACK_VAR(tmp155,"tmp155");
				HX_STACK_LINE(772)
				Float tmp156 = tmp155[(int)15] = (int)1;		HX_STACK_VAR(tmp156,"tmp156");
				HX_STACK_LINE(772)
				tmp156;
			}
		}
	}
	else{
		HX_STACK_LINE(743)
		::openfl::geom::Vector3D tmp24 = components->__get((int)1).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(743)
		Float tmp25 = tmp24->x;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(743)
		Float x = tmp25;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(744)
		::openfl::geom::Vector3D tmp26 = components->__get((int)1).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(744)
		Float tmp27 = tmp26->y;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(744)
		Float y = tmp27;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(745)
		::openfl::geom::Vector3D tmp28 = components->__get((int)1).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(745)
		Float tmp29 = tmp28->z;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(745)
		Float z = tmp29;		HX_STACK_VAR(z,"z");
		HX_STACK_LINE(746)
		::openfl::geom::Vector3D tmp30 = components->__get((int)1).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(746)
		Float tmp31 = tmp30->w;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(746)
		Float w = tmp31;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(748)
		Dynamic tmp32 = orientationStyle;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(748)
		bool tmp33 = ::Type_obj::enumEq(tmp32,((Dynamic)((int)0)));		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(748)
		if ((tmp33)){
			HX_STACK_LINE(750)
			Float tmp34 = (Float(w) / Float((int)2));		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(750)
			Float tmp35 = ::Math_obj::sin(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(750)
			hx::MultEq(x,tmp35);
			HX_STACK_LINE(751)
			Float tmp36 = (Float(w) / Float((int)2));		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(751)
			Float tmp37 = ::Math_obj::sin(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(751)
			hx::MultEq(y,tmp37);
			HX_STACK_LINE(752)
			Float tmp38 = (Float(w) / Float((int)2));		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(752)
			Float tmp39 = ::Math_obj::sin(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(752)
			hx::MultEq(z,tmp39);
			HX_STACK_LINE(753)
			Float tmp40 = (Float(w) / Float((int)2));		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(753)
			Float tmp41 = ::Math_obj::cos(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(753)
			w = tmp41;
		}
		HX_STACK_LINE(757)
		Array< Float > tmp34 = this->rawData;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(757)
		Float tmp35 = ((int)2 * y);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(757)
		Float tmp36 = y;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(757)
		Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(757)
		Float tmp38 = ((int)1 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(757)
		Float tmp39 = ((int)2 * z);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(757)
		Float tmp40 = z;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(757)
		Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(757)
		Float tmp42 = (tmp38 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(757)
		Float tmp43 = scale->__get((int)0);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(757)
		Float tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(757)
		Float tmp45 = tmp34[(int)0] = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(757)
		tmp45;
		HX_STACK_LINE(758)
		Array< Float > tmp46 = this->rawData;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(758)
		Float tmp47 = ((int)2 * x);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(758)
		Float tmp48 = y;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(758)
		Float tmp49 = (tmp47 * tmp48);		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(758)
		Float tmp50 = ((int)2 * w);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(758)
		Float tmp51 = z;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(758)
		Float tmp52 = (tmp50 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(758)
		Float tmp53 = (tmp49 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(758)
		Float tmp54 = scale->__get((int)1);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(758)
		Float tmp55 = (tmp53 * tmp54);		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(758)
		Float tmp56 = tmp46[(int)1] = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(758)
		tmp56;
		HX_STACK_LINE(759)
		Array< Float > tmp57 = this->rawData;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(759)
		Float tmp58 = ((int)2 * x);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(759)
		Float tmp59 = z;		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(759)
		Float tmp60 = (tmp58 * tmp59);		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(759)
		Float tmp61 = ((int)2 * w);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(759)
		Float tmp62 = y;		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(759)
		Float tmp63 = (tmp61 * tmp62);		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(759)
		Float tmp64 = (tmp60 - tmp63);		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(759)
		Float tmp65 = scale->__get((int)2);		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(759)
		Float tmp66 = (tmp64 * tmp65);		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(759)
		Float tmp67 = tmp57[(int)2] = tmp66;		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(759)
		tmp67;
		HX_STACK_LINE(760)
		Array< Float > tmp68 = this->rawData;		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(760)
		Float tmp69 = tmp68[(int)3] = (int)0;		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(760)
		tmp69;
		HX_STACK_LINE(761)
		Array< Float > tmp70 = this->rawData;		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(761)
		Float tmp71 = ((int)2 * x);		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(761)
		Float tmp72 = y;		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(761)
		Float tmp73 = (tmp71 * tmp72);		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(761)
		Float tmp74 = ((int)2 * w);		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(761)
		Float tmp75 = z;		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(761)
		Float tmp76 = (tmp74 * tmp75);		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(761)
		Float tmp77 = (tmp73 - tmp76);		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(761)
		Float tmp78 = scale->__get((int)4);		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(761)
		Float tmp79 = (tmp77 * tmp78);		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(761)
		Float tmp80 = tmp70[(int)4] = tmp79;		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(761)
		tmp80;
		HX_STACK_LINE(762)
		Array< Float > tmp81 = this->rawData;		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(762)
		Float tmp82 = ((int)2 * x);		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(762)
		Float tmp83 = x;		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(762)
		Float tmp84 = (tmp82 * tmp83);		HX_STACK_VAR(tmp84,"tmp84");
		HX_STACK_LINE(762)
		Float tmp85 = ((int)1 - tmp84);		HX_STACK_VAR(tmp85,"tmp85");
		HX_STACK_LINE(762)
		Float tmp86 = ((int)2 * z);		HX_STACK_VAR(tmp86,"tmp86");
		HX_STACK_LINE(762)
		Float tmp87 = z;		HX_STACK_VAR(tmp87,"tmp87");
		HX_STACK_LINE(762)
		Float tmp88 = (tmp86 * tmp87);		HX_STACK_VAR(tmp88,"tmp88");
		HX_STACK_LINE(762)
		Float tmp89 = (tmp85 - tmp88);		HX_STACK_VAR(tmp89,"tmp89");
		HX_STACK_LINE(762)
		Float tmp90 = scale->__get((int)5);		HX_STACK_VAR(tmp90,"tmp90");
		HX_STACK_LINE(762)
		Float tmp91 = (tmp89 * tmp90);		HX_STACK_VAR(tmp91,"tmp91");
		HX_STACK_LINE(762)
		Float tmp92 = tmp81[(int)5] = tmp91;		HX_STACK_VAR(tmp92,"tmp92");
		HX_STACK_LINE(762)
		tmp92;
		HX_STACK_LINE(763)
		Array< Float > tmp93 = this->rawData;		HX_STACK_VAR(tmp93,"tmp93");
		HX_STACK_LINE(763)
		Float tmp94 = ((int)2 * y);		HX_STACK_VAR(tmp94,"tmp94");
		HX_STACK_LINE(763)
		Float tmp95 = z;		HX_STACK_VAR(tmp95,"tmp95");
		HX_STACK_LINE(763)
		Float tmp96 = (tmp94 * tmp95);		HX_STACK_VAR(tmp96,"tmp96");
		HX_STACK_LINE(763)
		Float tmp97 = ((int)2 * w);		HX_STACK_VAR(tmp97,"tmp97");
		HX_STACK_LINE(763)
		Float tmp98 = x;		HX_STACK_VAR(tmp98,"tmp98");
		HX_STACK_LINE(763)
		Float tmp99 = (tmp97 * tmp98);		HX_STACK_VAR(tmp99,"tmp99");
		HX_STACK_LINE(763)
		Float tmp100 = (tmp96 + tmp99);		HX_STACK_VAR(tmp100,"tmp100");
		HX_STACK_LINE(763)
		Float tmp101 = scale->__get((int)6);		HX_STACK_VAR(tmp101,"tmp101");
		HX_STACK_LINE(763)
		Float tmp102 = (tmp100 * tmp101);		HX_STACK_VAR(tmp102,"tmp102");
		HX_STACK_LINE(763)
		Float tmp103 = tmp93[(int)6] = tmp102;		HX_STACK_VAR(tmp103,"tmp103");
		HX_STACK_LINE(763)
		tmp103;
		HX_STACK_LINE(764)
		Array< Float > tmp104 = this->rawData;		HX_STACK_VAR(tmp104,"tmp104");
		HX_STACK_LINE(764)
		Float tmp105 = tmp104[(int)7] = (int)0;		HX_STACK_VAR(tmp105,"tmp105");
		HX_STACK_LINE(764)
		tmp105;
		HX_STACK_LINE(765)
		Array< Float > tmp106 = this->rawData;		HX_STACK_VAR(tmp106,"tmp106");
		HX_STACK_LINE(765)
		Float tmp107 = ((int)2 * x);		HX_STACK_VAR(tmp107,"tmp107");
		HX_STACK_LINE(765)
		Float tmp108 = z;		HX_STACK_VAR(tmp108,"tmp108");
		HX_STACK_LINE(765)
		Float tmp109 = (tmp107 * tmp108);		HX_STACK_VAR(tmp109,"tmp109");
		HX_STACK_LINE(765)
		Float tmp110 = ((int)2 * w);		HX_STACK_VAR(tmp110,"tmp110");
		HX_STACK_LINE(765)
		Float tmp111 = y;		HX_STACK_VAR(tmp111,"tmp111");
		HX_STACK_LINE(765)
		Float tmp112 = (tmp110 * tmp111);		HX_STACK_VAR(tmp112,"tmp112");
		HX_STACK_LINE(765)
		Float tmp113 = (tmp109 + tmp112);		HX_STACK_VAR(tmp113,"tmp113");
		HX_STACK_LINE(765)
		Float tmp114 = scale->__get((int)8);		HX_STACK_VAR(tmp114,"tmp114");
		HX_STACK_LINE(765)
		Float tmp115 = (tmp113 * tmp114);		HX_STACK_VAR(tmp115,"tmp115");
		HX_STACK_LINE(765)
		Float tmp116 = tmp106[(int)8] = tmp115;		HX_STACK_VAR(tmp116,"tmp116");
		HX_STACK_LINE(765)
		tmp116;
		HX_STACK_LINE(766)
		Array< Float > tmp117 = this->rawData;		HX_STACK_VAR(tmp117,"tmp117");
		HX_STACK_LINE(766)
		Float tmp118 = ((int)2 * y);		HX_STACK_VAR(tmp118,"tmp118");
		HX_STACK_LINE(766)
		Float tmp119 = z;		HX_STACK_VAR(tmp119,"tmp119");
		HX_STACK_LINE(766)
		Float tmp120 = (tmp118 * tmp119);		HX_STACK_VAR(tmp120,"tmp120");
		HX_STACK_LINE(766)
		Float tmp121 = ((int)2 * w);		HX_STACK_VAR(tmp121,"tmp121");
		HX_STACK_LINE(766)
		Float tmp122 = x;		HX_STACK_VAR(tmp122,"tmp122");
		HX_STACK_LINE(766)
		Float tmp123 = (tmp121 * tmp122);		HX_STACK_VAR(tmp123,"tmp123");
		HX_STACK_LINE(766)
		Float tmp124 = (tmp120 - tmp123);		HX_STACK_VAR(tmp124,"tmp124");
		HX_STACK_LINE(766)
		Float tmp125 = scale->__get((int)9);		HX_STACK_VAR(tmp125,"tmp125");
		HX_STACK_LINE(766)
		Float tmp126 = (tmp124 * tmp125);		HX_STACK_VAR(tmp126,"tmp126");
		HX_STACK_LINE(766)
		Float tmp127 = tmp117[(int)9] = tmp126;		HX_STACK_VAR(tmp127,"tmp127");
		HX_STACK_LINE(766)
		tmp127;
		HX_STACK_LINE(767)
		Array< Float > tmp128 = this->rawData;		HX_STACK_VAR(tmp128,"tmp128");
		HX_STACK_LINE(767)
		Float tmp129 = ((int)2 * x);		HX_STACK_VAR(tmp129,"tmp129");
		HX_STACK_LINE(767)
		Float tmp130 = x;		HX_STACK_VAR(tmp130,"tmp130");
		HX_STACK_LINE(767)
		Float tmp131 = (tmp129 * tmp130);		HX_STACK_VAR(tmp131,"tmp131");
		HX_STACK_LINE(767)
		Float tmp132 = ((int)1 - tmp131);		HX_STACK_VAR(tmp132,"tmp132");
		HX_STACK_LINE(767)
		Float tmp133 = ((int)2 * y);		HX_STACK_VAR(tmp133,"tmp133");
		HX_STACK_LINE(767)
		Float tmp134 = y;		HX_STACK_VAR(tmp134,"tmp134");
		HX_STACK_LINE(767)
		Float tmp135 = (tmp133 * tmp134);		HX_STACK_VAR(tmp135,"tmp135");
		HX_STACK_LINE(767)
		Float tmp136 = (tmp132 - tmp135);		HX_STACK_VAR(tmp136,"tmp136");
		HX_STACK_LINE(767)
		Float tmp137 = scale->__get((int)10);		HX_STACK_VAR(tmp137,"tmp137");
		HX_STACK_LINE(767)
		Float tmp138 = (tmp136 * tmp137);		HX_STACK_VAR(tmp138,"tmp138");
		HX_STACK_LINE(767)
		Float tmp139 = tmp128[(int)10] = tmp138;		HX_STACK_VAR(tmp139,"tmp139");
		HX_STACK_LINE(767)
		tmp139;
		HX_STACK_LINE(768)
		Array< Float > tmp140 = this->rawData;		HX_STACK_VAR(tmp140,"tmp140");
		HX_STACK_LINE(768)
		Float tmp141 = tmp140[(int)11] = (int)0;		HX_STACK_VAR(tmp141,"tmp141");
		HX_STACK_LINE(768)
		tmp141;
		HX_STACK_LINE(769)
		Array< Float > tmp142 = this->rawData;		HX_STACK_VAR(tmp142,"tmp142");
		HX_STACK_LINE(769)
		::openfl::geom::Vector3D tmp143 = components->__get((int)0).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp143,"tmp143");
		HX_STACK_LINE(769)
		Float tmp144 = tmp143->x;		HX_STACK_VAR(tmp144,"tmp144");
		HX_STACK_LINE(769)
		Float tmp145 = tmp142[(int)12] = tmp144;		HX_STACK_VAR(tmp145,"tmp145");
		HX_STACK_LINE(769)
		tmp145;
		HX_STACK_LINE(770)
		Array< Float > tmp146 = this->rawData;		HX_STACK_VAR(tmp146,"tmp146");
		HX_STACK_LINE(770)
		::openfl::geom::Vector3D tmp147 = components->__get((int)0).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp147,"tmp147");
		HX_STACK_LINE(770)
		Float tmp148 = tmp147->y;		HX_STACK_VAR(tmp148,"tmp148");
		HX_STACK_LINE(770)
		Float tmp149 = tmp146[(int)13] = tmp148;		HX_STACK_VAR(tmp149,"tmp149");
		HX_STACK_LINE(770)
		tmp149;
		HX_STACK_LINE(771)
		Array< Float > tmp150 = this->rawData;		HX_STACK_VAR(tmp150,"tmp150");
		HX_STACK_LINE(771)
		::openfl::geom::Vector3D tmp151 = components->__get((int)0).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp151,"tmp151");
		HX_STACK_LINE(771)
		Float tmp152 = tmp151->z;		HX_STACK_VAR(tmp152,"tmp152");
		HX_STACK_LINE(771)
		Float tmp153 = tmp150[(int)14] = tmp152;		HX_STACK_VAR(tmp153,"tmp153");
		HX_STACK_LINE(771)
		tmp153;
		HX_STACK_LINE(772)
		Array< Float > tmp154 = this->rawData;		HX_STACK_VAR(tmp154,"tmp154");
		HX_STACK_LINE(772)
		Float tmp155 = tmp154[(int)15] = (int)1;		HX_STACK_VAR(tmp155,"tmp155");
		HX_STACK_LINE(772)
		tmp155;
	}
	HX_STACK_LINE(776)
	::openfl::geom::Vector3D tmp24 = components->__get((int)2).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(776)
	Float tmp25 = tmp24->x;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(776)
	bool tmp26 = (tmp25 == (int)0);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(776)
	if ((tmp26)){
		HX_STACK_LINE(778)
		Array< Float > tmp27 = this->rawData;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(778)
		Float tmp28 = tmp27[(int)0] = ((Float)1e-15);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(778)
		tmp28;
	}
	HX_STACK_LINE(782)
	::openfl::geom::Vector3D tmp27 = components->__get((int)2).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(782)
	Float tmp28 = tmp27->y;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(782)
	bool tmp29 = (tmp28 == (int)0);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(782)
	if ((tmp29)){
		HX_STACK_LINE(784)
		Array< Float > tmp30 = this->rawData;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(784)
		Float tmp31 = tmp30[(int)5] = ((Float)1e-15);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(784)
		tmp31;
	}
	HX_STACK_LINE(788)
	::openfl::geom::Vector3D tmp30 = components->__get((int)2).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(788)
	Float tmp31 = tmp30->z;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(788)
	bool tmp32 = (tmp31 == (int)0);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(788)
	if ((tmp32)){
		HX_STACK_LINE(790)
		Array< Float > tmp33 = this->rawData;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(790)
		Float tmp34 = tmp33[(int)10] = ((Float)1e-15);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(790)
		tmp34;
	}
	HX_STACK_LINE(794)
	::openfl::geom::Vector3D tmp33 = components->__get((int)2).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(794)
	Float tmp34 = tmp33->x;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(794)
	bool tmp35 = (tmp34 == (int)0);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(794)
	bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(794)
	bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(794)
	bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(794)
	if ((tmp37)){
		HX_STACK_LINE(794)
		::openfl::geom::Vector3D tmp39 = components->__get((int)2).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(794)
		::openfl::geom::Vector3D tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(794)
		::openfl::geom::Vector3D tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(794)
		Float tmp42 = tmp41->y;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(794)
		Float tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(794)
		Float tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(794)
		tmp38 = (tmp44 == (int)0);
	}
	else{
		HX_STACK_LINE(794)
		tmp38 = true;
	}
	HX_STACK_LINE(794)
	bool tmp39 = !(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(794)
	bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(794)
	if ((tmp39)){
		HX_STACK_LINE(794)
		::openfl::geom::Vector3D tmp41 = components->__get((int)2).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(794)
		::openfl::geom::Vector3D tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(794)
		Float tmp43 = tmp42->y;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(794)
		Float tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(794)
		tmp40 = (tmp44 == (int)0);
	}
	else{
		HX_STACK_LINE(794)
		tmp40 = true;
	}
	HX_STACK_LINE(794)
	bool tmp41 = !(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(794)
	return tmp41;
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3D_obj,recompose,return )

::openfl::geom::Vector3D Matrix3D_obj::transformVector( ::openfl::geom::Vector3D v){
	HX_STACK_FRAME("openfl.geom.Matrix3D","transformVector",0x3f2dcec7,"openfl.geom.Matrix3D.transformVector","openfl/geom/Matrix3D.hx",799,0x3acce238)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(801)
	Float x = v->x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(802)
	Float y = v->y;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(803)
	Float z = v->z;		HX_STACK_VAR(z,"z");
	HX_STACK_LINE(805)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(805)
	Array< Float > tmp1 = this->rawData;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(805)
	Float tmp2 = tmp1->__get((int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(805)
	Dynamic tmp3 = ((Dynamic)(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(805)
	Float tmp4 = (tmp * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(805)
	Float tmp5 = y;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(805)
	Array< Float > tmp6 = this->rawData;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(805)
	Float tmp7 = tmp6->__get((int)4);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(805)
	Dynamic tmp8 = ((Dynamic)(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(805)
	Float tmp9 = (tmp5 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(805)
	Float tmp10 = (tmp4 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(805)
	Float tmp11 = z;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(805)
	Array< Float > tmp12 = this->rawData;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(805)
	Float tmp13 = tmp12->__get((int)8);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(805)
	Dynamic tmp14 = ((Dynamic)(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(805)
	Float tmp15 = (tmp11 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(805)
	Float tmp16 = (tmp10 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(805)
	Array< Float > tmp17 = this->rawData;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(805)
	Float tmp18 = tmp17->__get((int)12);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(805)
	Dynamic tmp19 = ((Dynamic)(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(805)
	Float tmp20 = (tmp16 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(805)
	Float tmp21 = x;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(805)
	Array< Float > tmp22 = this->rawData;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(805)
	Float tmp23 = tmp22->__get((int)1);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(805)
	Dynamic tmp24 = ((Dynamic)(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(805)
	Float tmp25 = (tmp21 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(805)
	Float tmp26 = y;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(805)
	Array< Float > tmp27 = this->rawData;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(805)
	Float tmp28 = tmp27->__get((int)5);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(805)
	Dynamic tmp29 = ((Dynamic)(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(805)
	Float tmp30 = (tmp26 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(805)
	Float tmp31 = (tmp25 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(805)
	Float tmp32 = z;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(805)
	Array< Float > tmp33 = this->rawData;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(805)
	Float tmp34 = tmp33->__get((int)9);		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(805)
	Dynamic tmp35 = ((Dynamic)(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(805)
	Float tmp36 = (tmp32 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(805)
	Float tmp37 = (tmp31 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(805)
	Array< Float > tmp38 = this->rawData;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(805)
	Float tmp39 = tmp38->__get((int)13);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(805)
	Dynamic tmp40 = ((Dynamic)(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(805)
	Float tmp41 = (tmp37 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(805)
	Float tmp42 = x;		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(805)
	Array< Float > tmp43 = this->rawData;		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(805)
	Float tmp44 = tmp43->__get((int)2);		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(805)
	Dynamic tmp45 = ((Dynamic)(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(805)
	Float tmp46 = (tmp42 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(805)
	Float tmp47 = y;		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(805)
	Array< Float > tmp48 = this->rawData;		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(805)
	Float tmp49 = tmp48->__get((int)6);		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(805)
	Dynamic tmp50 = ((Dynamic)(tmp49));		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(805)
	Float tmp51 = (tmp47 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(805)
	Float tmp52 = (tmp46 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(805)
	Float tmp53 = z;		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(805)
	Array< Float > tmp54 = this->rawData;		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(805)
	Float tmp55 = tmp54->__get((int)10);		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(805)
	Dynamic tmp56 = ((Dynamic)(tmp55));		HX_STACK_VAR(tmp56,"tmp56");
	HX_STACK_LINE(805)
	Float tmp57 = (tmp53 * tmp56);		HX_STACK_VAR(tmp57,"tmp57");
	HX_STACK_LINE(805)
	Float tmp58 = (tmp52 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
	HX_STACK_LINE(805)
	Array< Float > tmp59 = this->rawData;		HX_STACK_VAR(tmp59,"tmp59");
	HX_STACK_LINE(805)
	Float tmp60 = tmp59->__get((int)14);		HX_STACK_VAR(tmp60,"tmp60");
	HX_STACK_LINE(805)
	Dynamic tmp61 = ((Dynamic)(tmp60));		HX_STACK_VAR(tmp61,"tmp61");
	HX_STACK_LINE(805)
	Float tmp62 = (tmp58 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
	HX_STACK_LINE(805)
	Float tmp63 = x;		HX_STACK_VAR(tmp63,"tmp63");
	HX_STACK_LINE(805)
	Array< Float > tmp64 = this->rawData;		HX_STACK_VAR(tmp64,"tmp64");
	HX_STACK_LINE(805)
	Float tmp65 = tmp64->__get((int)3);		HX_STACK_VAR(tmp65,"tmp65");
	HX_STACK_LINE(805)
	Dynamic tmp66 = ((Dynamic)(tmp65));		HX_STACK_VAR(tmp66,"tmp66");
	HX_STACK_LINE(805)
	Float tmp67 = (tmp63 * tmp66);		HX_STACK_VAR(tmp67,"tmp67");
	HX_STACK_LINE(805)
	Float tmp68 = y;		HX_STACK_VAR(tmp68,"tmp68");
	HX_STACK_LINE(805)
	Array< Float > tmp69 = this->rawData;		HX_STACK_VAR(tmp69,"tmp69");
	HX_STACK_LINE(805)
	Float tmp70 = tmp69->__get((int)7);		HX_STACK_VAR(tmp70,"tmp70");
	HX_STACK_LINE(805)
	Dynamic tmp71 = ((Dynamic)(tmp70));		HX_STACK_VAR(tmp71,"tmp71");
	HX_STACK_LINE(805)
	Float tmp72 = (tmp68 * tmp71);		HX_STACK_VAR(tmp72,"tmp72");
	HX_STACK_LINE(805)
	Float tmp73 = (tmp67 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
	HX_STACK_LINE(805)
	Float tmp74 = z;		HX_STACK_VAR(tmp74,"tmp74");
	HX_STACK_LINE(805)
	Array< Float > tmp75 = this->rawData;		HX_STACK_VAR(tmp75,"tmp75");
	HX_STACK_LINE(805)
	Float tmp76 = tmp75->__get((int)11);		HX_STACK_VAR(tmp76,"tmp76");
	HX_STACK_LINE(805)
	Dynamic tmp77 = ((Dynamic)(tmp76));		HX_STACK_VAR(tmp77,"tmp77");
	HX_STACK_LINE(805)
	Float tmp78 = (tmp74 * tmp77);		HX_STACK_VAR(tmp78,"tmp78");
	HX_STACK_LINE(805)
	Float tmp79 = (tmp73 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
	HX_STACK_LINE(805)
	Array< Float > tmp80 = this->rawData;		HX_STACK_VAR(tmp80,"tmp80");
	HX_STACK_LINE(805)
	Float tmp81 = tmp80->__get((int)15);		HX_STACK_VAR(tmp81,"tmp81");
	HX_STACK_LINE(805)
	Dynamic tmp82 = ((Dynamic)(tmp81));		HX_STACK_VAR(tmp82,"tmp82");
	HX_STACK_LINE(805)
	Float tmp83 = (tmp79 + tmp82);		HX_STACK_VAR(tmp83,"tmp83");
	HX_STACK_LINE(805)
	::openfl::geom::Vector3D tmp84 = ::openfl::geom::Vector3D_obj::__new(tmp20,tmp41,tmp62,tmp83);		HX_STACK_VAR(tmp84,"tmp84");
	HX_STACK_LINE(805)
	return tmp84;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3D_obj,transformVector,return )

Void Matrix3D_obj::transformVectors( Array< Float > vin,Array< Float > vout){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","transformVectors",0x08e71fcc,"openfl.geom.Matrix3D.transformVectors","openfl/geom/Matrix3D.hx",810,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(vin,"vin")
		HX_STACK_ARG(vout,"vout")
		HX_STACK_LINE(812)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(813)
		Dynamic x;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(813)
		Dynamic y;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(813)
		Dynamic z;		HX_STACK_VAR(z,"z");
		HX_STACK_LINE(815)
		while((true)){
			HX_STACK_LINE(815)
			int tmp = (i + (int)3);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(815)
			int tmp1 = vin->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(815)
			bool tmp2 = (tmp <= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(815)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(815)
			if ((tmp3)){
				HX_STACK_LINE(815)
				break;
			}
			HX_STACK_LINE(817)
			Float tmp4 = vin->__get(i);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(817)
			x = ((Dynamic)(tmp4));
			HX_STACK_LINE(818)
			int tmp5 = (i + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(818)
			Float tmp6 = vin->__get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(818)
			y = ((Dynamic)(tmp6));
			HX_STACK_LINE(819)
			int tmp7 = (i + (int)2);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(819)
			Float tmp8 = vin->__get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(819)
			z = ((Dynamic)(tmp8));
			HX_STACK_LINE(821)
			Dynamic tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(821)
			Array< Float > tmp10 = this->rawData;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(821)
			Float tmp11 = tmp10->__get((int)0);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(821)
			Dynamic tmp12 = ((Dynamic)(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(821)
			Float tmp13 = (tmp9 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(821)
			Dynamic tmp14 = y;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(821)
			Array< Float > tmp15 = this->rawData;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(821)
			Float tmp16 = tmp15->__get((int)4);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(821)
			Dynamic tmp17 = ((Dynamic)(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(821)
			Float tmp18 = (tmp14 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(821)
			Float tmp19 = (tmp13 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(821)
			Dynamic tmp20 = z;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(821)
			Array< Float > tmp21 = this->rawData;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(821)
			Float tmp22 = tmp21->__get((int)8);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(821)
			Dynamic tmp23 = ((Dynamic)(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(821)
			Float tmp24 = (tmp20 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(821)
			Float tmp25 = (tmp19 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(821)
			Array< Float > tmp26 = this->rawData;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(821)
			Float tmp27 = tmp26->__get((int)12);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(821)
			Dynamic tmp28 = ((Dynamic)(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(821)
			Float tmp29 = (tmp25 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(821)
			Float tmp30 = vout[i] = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(821)
			tmp30;
			HX_STACK_LINE(822)
			int tmp31 = (i + (int)1);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(822)
			Dynamic tmp32 = x;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(822)
			Array< Float > tmp33 = this->rawData;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(822)
			Float tmp34 = tmp33->__get((int)1);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(822)
			Dynamic tmp35 = ((Dynamic)(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(822)
			Float tmp36 = (tmp32 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(822)
			Dynamic tmp37 = y;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(822)
			Array< Float > tmp38 = this->rawData;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(822)
			Float tmp39 = tmp38->__get((int)5);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(822)
			Dynamic tmp40 = ((Dynamic)(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(822)
			Float tmp41 = (tmp37 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(822)
			Float tmp42 = (tmp36 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(822)
			Dynamic tmp43 = z;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(822)
			Array< Float > tmp44 = this->rawData;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(822)
			Float tmp45 = tmp44->__get((int)9);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(822)
			Dynamic tmp46 = ((Dynamic)(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(822)
			Float tmp47 = (tmp43 * tmp46);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(822)
			Float tmp48 = (tmp42 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(822)
			Array< Float > tmp49 = this->rawData;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(822)
			Float tmp50 = tmp49->__get((int)13);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(822)
			Dynamic tmp51 = ((Dynamic)(tmp50));		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(822)
			Float tmp52 = (tmp48 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(822)
			Float tmp53 = vout[tmp31] = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(822)
			tmp53;
			HX_STACK_LINE(823)
			int tmp54 = (i + (int)2);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(823)
			Dynamic tmp55 = x;		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(823)
			Array< Float > tmp56 = this->rawData;		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(823)
			Float tmp57 = tmp56->__get((int)2);		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(823)
			Dynamic tmp58 = ((Dynamic)(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(823)
			Float tmp59 = (tmp55 * tmp58);		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(823)
			Dynamic tmp60 = y;		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(823)
			Array< Float > tmp61 = this->rawData;		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(823)
			Float tmp62 = tmp61->__get((int)6);		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(823)
			Dynamic tmp63 = ((Dynamic)(tmp62));		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(823)
			Float tmp64 = (tmp60 * tmp63);		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(823)
			Float tmp65 = (tmp59 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(823)
			Dynamic tmp66 = z;		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(823)
			Array< Float > tmp67 = this->rawData;		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(823)
			Float tmp68 = tmp67->__get((int)10);		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(823)
			Dynamic tmp69 = ((Dynamic)(tmp68));		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(823)
			Float tmp70 = (tmp66 * tmp69);		HX_STACK_VAR(tmp70,"tmp70");
			HX_STACK_LINE(823)
			Float tmp71 = (tmp65 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
			HX_STACK_LINE(823)
			Array< Float > tmp72 = this->rawData;		HX_STACK_VAR(tmp72,"tmp72");
			HX_STACK_LINE(823)
			Float tmp73 = tmp72->__get((int)14);		HX_STACK_VAR(tmp73,"tmp73");
			HX_STACK_LINE(823)
			Dynamic tmp74 = ((Dynamic)(tmp73));		HX_STACK_VAR(tmp74,"tmp74");
			HX_STACK_LINE(823)
			Float tmp75 = (tmp71 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
			HX_STACK_LINE(823)
			Float tmp76 = vout[tmp54] = tmp75;		HX_STACK_VAR(tmp76,"tmp76");
			HX_STACK_LINE(823)
			tmp76;
			HX_STACK_LINE(825)
			hx::AddEq(i,(int)3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3D_obj,transformVectors,(void))

Void Matrix3D_obj::transpose( ){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","transpose",0x1ba989f1,"openfl.geom.Matrix3D.transpose","openfl/geom/Matrix3D.hx",832,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_LINE(834)
		Array< Float > tmp = this->rawData;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(834)
		Array< Float > tmp1 = tmp->copy();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(834)
		Array< Float > oRawData = tmp1;		HX_STACK_VAR(oRawData,"oRawData");
		HX_STACK_LINE(835)
		Array< Float > tmp2 = this->rawData;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(835)
		Float tmp3 = oRawData->__get((int)4);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(835)
		Dynamic tmp4 = ((Dynamic)(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(835)
		Float tmp5 = tmp2[(int)1] = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(835)
		tmp5;
		HX_STACK_LINE(836)
		Array< Float > tmp6 = this->rawData;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(836)
		Float tmp7 = oRawData->__get((int)8);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(836)
		Dynamic tmp8 = ((Dynamic)(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(836)
		Float tmp9 = tmp6[(int)2] = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(836)
		tmp9;
		HX_STACK_LINE(837)
		Array< Float > tmp10 = this->rawData;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(837)
		Float tmp11 = oRawData->__get((int)12);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(837)
		Dynamic tmp12 = ((Dynamic)(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(837)
		Float tmp13 = tmp10[(int)3] = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(837)
		tmp13;
		HX_STACK_LINE(838)
		Array< Float > tmp14 = this->rawData;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(838)
		Float tmp15 = oRawData->__get((int)1);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(838)
		Dynamic tmp16 = ((Dynamic)(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(838)
		Float tmp17 = tmp14[(int)4] = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(838)
		tmp17;
		HX_STACK_LINE(839)
		Array< Float > tmp18 = this->rawData;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(839)
		Float tmp19 = oRawData->__get((int)9);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(839)
		Dynamic tmp20 = ((Dynamic)(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(839)
		Float tmp21 = tmp18[(int)6] = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(839)
		tmp21;
		HX_STACK_LINE(840)
		Array< Float > tmp22 = this->rawData;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(840)
		Float tmp23 = oRawData->__get((int)13);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(840)
		Dynamic tmp24 = ((Dynamic)(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(840)
		Float tmp25 = tmp22[(int)7] = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(840)
		tmp25;
		HX_STACK_LINE(841)
		Array< Float > tmp26 = this->rawData;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(841)
		Float tmp27 = oRawData->__get((int)2);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(841)
		Dynamic tmp28 = ((Dynamic)(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(841)
		Float tmp29 = tmp26[(int)8] = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(841)
		tmp29;
		HX_STACK_LINE(842)
		Array< Float > tmp30 = this->rawData;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(842)
		Float tmp31 = oRawData->__get((int)6);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(842)
		Dynamic tmp32 = ((Dynamic)(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(842)
		Float tmp33 = tmp30[(int)9] = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(842)
		tmp33;
		HX_STACK_LINE(843)
		Array< Float > tmp34 = this->rawData;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(843)
		Float tmp35 = oRawData->__get((int)14);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(843)
		Dynamic tmp36 = ((Dynamic)(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(843)
		Float tmp37 = tmp34[(int)11] = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(843)
		tmp37;
		HX_STACK_LINE(844)
		Array< Float > tmp38 = this->rawData;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(844)
		Float tmp39 = oRawData->__get((int)3);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(844)
		Dynamic tmp40 = ((Dynamic)(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(844)
		Float tmp41 = tmp38[(int)12] = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(844)
		tmp41;
		HX_STACK_LINE(845)
		Array< Float > tmp42 = this->rawData;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(845)
		Float tmp43 = oRawData->__get((int)7);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(845)
		Dynamic tmp44 = ((Dynamic)(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(845)
		Float tmp45 = tmp42[(int)13] = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(845)
		tmp45;
		HX_STACK_LINE(846)
		Array< Float > tmp46 = this->rawData;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(846)
		Float tmp47 = oRawData->__get((int)11);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(846)
		Dynamic tmp48 = ((Dynamic)(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(846)
		Float tmp49 = tmp46[(int)14] = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(846)
		tmp49;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3D_obj,transpose,(void))

Float Matrix3D_obj::get_determinant( ){
	HX_STACK_FRAME("openfl.geom.Matrix3D","get_determinant",0x5f71b8a4,"openfl.geom.Matrix3D.get_determinant","openfl/geom/Matrix3D.hx",890,0x3acce238)
	HX_STACK_THIS(this)
	HX_STACK_LINE(892)
	Array< Float > tmp = this->rawData;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(892)
	Float tmp1 = tmp->__get((int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(892)
	Dynamic tmp2 = ((Dynamic)(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(892)
	Array< Float > tmp3 = this->rawData;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(892)
	Float tmp4 = tmp3->__get((int)5);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(892)
	Dynamic tmp5 = ((Dynamic)(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(892)
	Float tmp6 = (tmp2 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(892)
	Array< Float > tmp7 = this->rawData;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(892)
	Float tmp8 = tmp7->__get((int)4);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(892)
	Dynamic tmp9 = ((Dynamic)(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(892)
	Array< Float > tmp10 = this->rawData;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(892)
	Float tmp11 = tmp10->__get((int)1);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(892)
	Dynamic tmp12 = ((Dynamic)(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(892)
	Float tmp13 = (tmp9 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(892)
	Float tmp14 = (tmp6 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(892)
	Array< Float > tmp15 = this->rawData;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(892)
	Float tmp16 = tmp15->__get((int)10);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(892)
	Dynamic tmp17 = ((Dynamic)(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(892)
	Array< Float > tmp18 = this->rawData;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(892)
	Float tmp19 = tmp18->__get((int)15);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(892)
	Dynamic tmp20 = ((Dynamic)(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(892)
	Float tmp21 = (tmp17 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(892)
	Array< Float > tmp22 = this->rawData;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(892)
	Float tmp23 = tmp22->__get((int)14);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(892)
	Dynamic tmp24 = ((Dynamic)(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(892)
	Array< Float > tmp25 = this->rawData;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(892)
	Float tmp26 = tmp25->__get((int)11);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(892)
	Dynamic tmp27 = ((Dynamic)(tmp26));		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(892)
	Float tmp28 = (tmp24 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(892)
	Float tmp29 = (tmp21 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(892)
	Float tmp30 = (tmp14 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(893)
	Array< Float > tmp31 = this->rawData;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(893)
	Float tmp32 = tmp31->__get((int)0);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(893)
	Dynamic tmp33 = ((Dynamic)(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(893)
	Array< Float > tmp34 = this->rawData;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(893)
	Float tmp35 = tmp34->__get((int)9);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(893)
	Dynamic tmp36 = ((Dynamic)(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(893)
	Float tmp37 = (tmp33 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(893)
	Array< Float > tmp38 = this->rawData;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(893)
	Float tmp39 = tmp38->__get((int)8);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(893)
	Dynamic tmp40 = ((Dynamic)(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(893)
	Array< Float > tmp41 = this->rawData;		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(893)
	Float tmp42 = tmp41->__get((int)1);		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(893)
	Dynamic tmp43 = ((Dynamic)(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(893)
	Float tmp44 = (tmp40 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(893)
	Float tmp45 = (tmp37 - tmp44);		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(893)
	Array< Float > tmp46 = this->rawData;		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(893)
	Float tmp47 = tmp46->__get((int)6);		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(893)
	Dynamic tmp48 = ((Dynamic)(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(893)
	Array< Float > tmp49 = this->rawData;		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(893)
	Float tmp50 = tmp49->__get((int)15);		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(893)
	Dynamic tmp51 = ((Dynamic)(tmp50));		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(893)
	Float tmp52 = (tmp48 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(893)
	Array< Float > tmp53 = this->rawData;		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(893)
	Float tmp54 = tmp53->__get((int)14);		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(893)
	Dynamic tmp55 = ((Dynamic)(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(893)
	Array< Float > tmp56 = this->rawData;		HX_STACK_VAR(tmp56,"tmp56");
	HX_STACK_LINE(893)
	Float tmp57 = tmp56->__get((int)7);		HX_STACK_VAR(tmp57,"tmp57");
	HX_STACK_LINE(893)
	Dynamic tmp58 = ((Dynamic)(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
	HX_STACK_LINE(893)
	Float tmp59 = (tmp55 * tmp58);		HX_STACK_VAR(tmp59,"tmp59");
	HX_STACK_LINE(893)
	Float tmp60 = (tmp52 - tmp59);		HX_STACK_VAR(tmp60,"tmp60");
	HX_STACK_LINE(893)
	Float tmp61 = (tmp45 * tmp60);		HX_STACK_VAR(tmp61,"tmp61");
	HX_STACK_LINE(892)
	Float tmp62 = (tmp30 - tmp61);		HX_STACK_VAR(tmp62,"tmp62");
	HX_STACK_LINE(894)
	Array< Float > tmp63 = this->rawData;		HX_STACK_VAR(tmp63,"tmp63");
	HX_STACK_LINE(894)
	Float tmp64 = tmp63->__get((int)0);		HX_STACK_VAR(tmp64,"tmp64");
	HX_STACK_LINE(894)
	Dynamic tmp65 = ((Dynamic)(tmp64));		HX_STACK_VAR(tmp65,"tmp65");
	HX_STACK_LINE(894)
	Array< Float > tmp66 = this->rawData;		HX_STACK_VAR(tmp66,"tmp66");
	HX_STACK_LINE(894)
	Float tmp67 = tmp66->__get((int)13);		HX_STACK_VAR(tmp67,"tmp67");
	HX_STACK_LINE(894)
	Dynamic tmp68 = ((Dynamic)(tmp67));		HX_STACK_VAR(tmp68,"tmp68");
	HX_STACK_LINE(894)
	Float tmp69 = (tmp65 * tmp68);		HX_STACK_VAR(tmp69,"tmp69");
	HX_STACK_LINE(894)
	Array< Float > tmp70 = this->rawData;		HX_STACK_VAR(tmp70,"tmp70");
	HX_STACK_LINE(894)
	Float tmp71 = tmp70->__get((int)12);		HX_STACK_VAR(tmp71,"tmp71");
	HX_STACK_LINE(894)
	Dynamic tmp72 = ((Dynamic)(tmp71));		HX_STACK_VAR(tmp72,"tmp72");
	HX_STACK_LINE(894)
	Array< Float > tmp73 = this->rawData;		HX_STACK_VAR(tmp73,"tmp73");
	HX_STACK_LINE(894)
	Float tmp74 = tmp73->__get((int)1);		HX_STACK_VAR(tmp74,"tmp74");
	HX_STACK_LINE(894)
	Dynamic tmp75 = ((Dynamic)(tmp74));		HX_STACK_VAR(tmp75,"tmp75");
	HX_STACK_LINE(894)
	Float tmp76 = (tmp72 * tmp75);		HX_STACK_VAR(tmp76,"tmp76");
	HX_STACK_LINE(894)
	Float tmp77 = (tmp69 - tmp76);		HX_STACK_VAR(tmp77,"tmp77");
	HX_STACK_LINE(894)
	Array< Float > tmp78 = this->rawData;		HX_STACK_VAR(tmp78,"tmp78");
	HX_STACK_LINE(894)
	Float tmp79 = tmp78->__get((int)6);		HX_STACK_VAR(tmp79,"tmp79");
	HX_STACK_LINE(894)
	Dynamic tmp80 = ((Dynamic)(tmp79));		HX_STACK_VAR(tmp80,"tmp80");
	HX_STACK_LINE(894)
	Array< Float > tmp81 = this->rawData;		HX_STACK_VAR(tmp81,"tmp81");
	HX_STACK_LINE(894)
	Float tmp82 = tmp81->__get((int)11);		HX_STACK_VAR(tmp82,"tmp82");
	HX_STACK_LINE(894)
	Dynamic tmp83 = ((Dynamic)(tmp82));		HX_STACK_VAR(tmp83,"tmp83");
	HX_STACK_LINE(894)
	Float tmp84 = (tmp80 * tmp83);		HX_STACK_VAR(tmp84,"tmp84");
	HX_STACK_LINE(894)
	Array< Float > tmp85 = this->rawData;		HX_STACK_VAR(tmp85,"tmp85");
	HX_STACK_LINE(894)
	Float tmp86 = tmp85->__get((int)10);		HX_STACK_VAR(tmp86,"tmp86");
	HX_STACK_LINE(894)
	Dynamic tmp87 = ((Dynamic)(tmp86));		HX_STACK_VAR(tmp87,"tmp87");
	HX_STACK_LINE(894)
	Array< Float > tmp88 = this->rawData;		HX_STACK_VAR(tmp88,"tmp88");
	HX_STACK_LINE(894)
	Float tmp89 = tmp88->__get((int)7);		HX_STACK_VAR(tmp89,"tmp89");
	HX_STACK_LINE(894)
	Dynamic tmp90 = ((Dynamic)(tmp89));		HX_STACK_VAR(tmp90,"tmp90");
	HX_STACK_LINE(894)
	Float tmp91 = (tmp87 * tmp90);		HX_STACK_VAR(tmp91,"tmp91");
	HX_STACK_LINE(894)
	Float tmp92 = (tmp84 - tmp91);		HX_STACK_VAR(tmp92,"tmp92");
	HX_STACK_LINE(894)
	Float tmp93 = (tmp77 * tmp92);		HX_STACK_VAR(tmp93,"tmp93");
	HX_STACK_LINE(892)
	Float tmp94 = (tmp62 + tmp93);		HX_STACK_VAR(tmp94,"tmp94");
	HX_STACK_LINE(895)
	Array< Float > tmp95 = this->rawData;		HX_STACK_VAR(tmp95,"tmp95");
	HX_STACK_LINE(895)
	Float tmp96 = tmp95->__get((int)4);		HX_STACK_VAR(tmp96,"tmp96");
	HX_STACK_LINE(895)
	Dynamic tmp97 = ((Dynamic)(tmp96));		HX_STACK_VAR(tmp97,"tmp97");
	HX_STACK_LINE(895)
	Array< Float > tmp98 = this->rawData;		HX_STACK_VAR(tmp98,"tmp98");
	HX_STACK_LINE(895)
	Float tmp99 = tmp98->__get((int)9);		HX_STACK_VAR(tmp99,"tmp99");
	HX_STACK_LINE(895)
	Dynamic tmp100 = ((Dynamic)(tmp99));		HX_STACK_VAR(tmp100,"tmp100");
	HX_STACK_LINE(895)
	Float tmp101 = (tmp97 * tmp100);		HX_STACK_VAR(tmp101,"tmp101");
	HX_STACK_LINE(895)
	Array< Float > tmp102 = this->rawData;		HX_STACK_VAR(tmp102,"tmp102");
	HX_STACK_LINE(895)
	Float tmp103 = tmp102->__get((int)8);		HX_STACK_VAR(tmp103,"tmp103");
	HX_STACK_LINE(895)
	Dynamic tmp104 = ((Dynamic)(tmp103));		HX_STACK_VAR(tmp104,"tmp104");
	HX_STACK_LINE(895)
	Array< Float > tmp105 = this->rawData;		HX_STACK_VAR(tmp105,"tmp105");
	HX_STACK_LINE(895)
	Float tmp106 = tmp105->__get((int)5);		HX_STACK_VAR(tmp106,"tmp106");
	HX_STACK_LINE(895)
	Dynamic tmp107 = ((Dynamic)(tmp106));		HX_STACK_VAR(tmp107,"tmp107");
	HX_STACK_LINE(895)
	Float tmp108 = (tmp104 * tmp107);		HX_STACK_VAR(tmp108,"tmp108");
	HX_STACK_LINE(895)
	Float tmp109 = (tmp101 - tmp108);		HX_STACK_VAR(tmp109,"tmp109");
	HX_STACK_LINE(895)
	Array< Float > tmp110 = this->rawData;		HX_STACK_VAR(tmp110,"tmp110");
	HX_STACK_LINE(895)
	Float tmp111 = tmp110->__get((int)2);		HX_STACK_VAR(tmp111,"tmp111");
	HX_STACK_LINE(895)
	Dynamic tmp112 = ((Dynamic)(tmp111));		HX_STACK_VAR(tmp112,"tmp112");
	HX_STACK_LINE(895)
	Array< Float > tmp113 = this->rawData;		HX_STACK_VAR(tmp113,"tmp113");
	HX_STACK_LINE(895)
	Float tmp114 = tmp113->__get((int)15);		HX_STACK_VAR(tmp114,"tmp114");
	HX_STACK_LINE(895)
	Dynamic tmp115 = ((Dynamic)(tmp114));		HX_STACK_VAR(tmp115,"tmp115");
	HX_STACK_LINE(895)
	Float tmp116 = (tmp112 * tmp115);		HX_STACK_VAR(tmp116,"tmp116");
	HX_STACK_LINE(895)
	Array< Float > tmp117 = this->rawData;		HX_STACK_VAR(tmp117,"tmp117");
	HX_STACK_LINE(895)
	Float tmp118 = tmp117->__get((int)14);		HX_STACK_VAR(tmp118,"tmp118");
	HX_STACK_LINE(895)
	Dynamic tmp119 = ((Dynamic)(tmp118));		HX_STACK_VAR(tmp119,"tmp119");
	HX_STACK_LINE(895)
	Array< Float > tmp120 = this->rawData;		HX_STACK_VAR(tmp120,"tmp120");
	HX_STACK_LINE(895)
	Float tmp121 = tmp120->__get((int)3);		HX_STACK_VAR(tmp121,"tmp121");
	HX_STACK_LINE(895)
	Dynamic tmp122 = ((Dynamic)(tmp121));		HX_STACK_VAR(tmp122,"tmp122");
	HX_STACK_LINE(895)
	Float tmp123 = (tmp119 * tmp122);		HX_STACK_VAR(tmp123,"tmp123");
	HX_STACK_LINE(895)
	Float tmp124 = (tmp116 - tmp123);		HX_STACK_VAR(tmp124,"tmp124");
	HX_STACK_LINE(895)
	Float tmp125 = (tmp109 * tmp124);		HX_STACK_VAR(tmp125,"tmp125");
	HX_STACK_LINE(892)
	Float tmp126 = (tmp94 + tmp125);		HX_STACK_VAR(tmp126,"tmp126");
	HX_STACK_LINE(896)
	Array< Float > tmp127 = this->rawData;		HX_STACK_VAR(tmp127,"tmp127");
	HX_STACK_LINE(896)
	Float tmp128 = tmp127->__get((int)4);		HX_STACK_VAR(tmp128,"tmp128");
	HX_STACK_LINE(896)
	Dynamic tmp129 = ((Dynamic)(tmp128));		HX_STACK_VAR(tmp129,"tmp129");
	HX_STACK_LINE(896)
	Array< Float > tmp130 = this->rawData;		HX_STACK_VAR(tmp130,"tmp130");
	HX_STACK_LINE(896)
	Float tmp131 = tmp130->__get((int)13);		HX_STACK_VAR(tmp131,"tmp131");
	HX_STACK_LINE(896)
	Dynamic tmp132 = ((Dynamic)(tmp131));		HX_STACK_VAR(tmp132,"tmp132");
	HX_STACK_LINE(896)
	Float tmp133 = (tmp129 * tmp132);		HX_STACK_VAR(tmp133,"tmp133");
	HX_STACK_LINE(896)
	Array< Float > tmp134 = this->rawData;		HX_STACK_VAR(tmp134,"tmp134");
	HX_STACK_LINE(896)
	Float tmp135 = tmp134->__get((int)12);		HX_STACK_VAR(tmp135,"tmp135");
	HX_STACK_LINE(896)
	Dynamic tmp136 = ((Dynamic)(tmp135));		HX_STACK_VAR(tmp136,"tmp136");
	HX_STACK_LINE(896)
	Array< Float > tmp137 = this->rawData;		HX_STACK_VAR(tmp137,"tmp137");
	HX_STACK_LINE(896)
	Float tmp138 = tmp137->__get((int)5);		HX_STACK_VAR(tmp138,"tmp138");
	HX_STACK_LINE(896)
	Dynamic tmp139 = ((Dynamic)(tmp138));		HX_STACK_VAR(tmp139,"tmp139");
	HX_STACK_LINE(896)
	Float tmp140 = (tmp136 * tmp139);		HX_STACK_VAR(tmp140,"tmp140");
	HX_STACK_LINE(896)
	Float tmp141 = (tmp133 - tmp140);		HX_STACK_VAR(tmp141,"tmp141");
	HX_STACK_LINE(896)
	Array< Float > tmp142 = this->rawData;		HX_STACK_VAR(tmp142,"tmp142");
	HX_STACK_LINE(896)
	Float tmp143 = tmp142->__get((int)2);		HX_STACK_VAR(tmp143,"tmp143");
	HX_STACK_LINE(896)
	Dynamic tmp144 = ((Dynamic)(tmp143));		HX_STACK_VAR(tmp144,"tmp144");
	HX_STACK_LINE(896)
	Array< Float > tmp145 = this->rawData;		HX_STACK_VAR(tmp145,"tmp145");
	HX_STACK_LINE(896)
	Float tmp146 = tmp145->__get((int)11);		HX_STACK_VAR(tmp146,"tmp146");
	HX_STACK_LINE(896)
	Dynamic tmp147 = ((Dynamic)(tmp146));		HX_STACK_VAR(tmp147,"tmp147");
	HX_STACK_LINE(896)
	Float tmp148 = (tmp144 * tmp147);		HX_STACK_VAR(tmp148,"tmp148");
	HX_STACK_LINE(896)
	Array< Float > tmp149 = this->rawData;		HX_STACK_VAR(tmp149,"tmp149");
	HX_STACK_LINE(896)
	Float tmp150 = tmp149->__get((int)10);		HX_STACK_VAR(tmp150,"tmp150");
	HX_STACK_LINE(896)
	Dynamic tmp151 = ((Dynamic)(tmp150));		HX_STACK_VAR(tmp151,"tmp151");
	HX_STACK_LINE(896)
	Array< Float > tmp152 = this->rawData;		HX_STACK_VAR(tmp152,"tmp152");
	HX_STACK_LINE(896)
	Float tmp153 = tmp152->__get((int)3);		HX_STACK_VAR(tmp153,"tmp153");
	HX_STACK_LINE(896)
	Dynamic tmp154 = ((Dynamic)(tmp153));		HX_STACK_VAR(tmp154,"tmp154");
	HX_STACK_LINE(896)
	Float tmp155 = (tmp151 * tmp154);		HX_STACK_VAR(tmp155,"tmp155");
	HX_STACK_LINE(896)
	Float tmp156 = (tmp148 - tmp155);		HX_STACK_VAR(tmp156,"tmp156");
	HX_STACK_LINE(896)
	Float tmp157 = (tmp141 * tmp156);		HX_STACK_VAR(tmp157,"tmp157");
	HX_STACK_LINE(892)
	Float tmp158 = (tmp126 - tmp157);		HX_STACK_VAR(tmp158,"tmp158");
	HX_STACK_LINE(897)
	Array< Float > tmp159 = this->rawData;		HX_STACK_VAR(tmp159,"tmp159");
	HX_STACK_LINE(897)
	Float tmp160 = tmp159->__get((int)8);		HX_STACK_VAR(tmp160,"tmp160");
	HX_STACK_LINE(897)
	Dynamic tmp161 = ((Dynamic)(tmp160));		HX_STACK_VAR(tmp161,"tmp161");
	HX_STACK_LINE(897)
	Array< Float > tmp162 = this->rawData;		HX_STACK_VAR(tmp162,"tmp162");
	HX_STACK_LINE(897)
	Float tmp163 = tmp162->__get((int)13);		HX_STACK_VAR(tmp163,"tmp163");
	HX_STACK_LINE(897)
	Dynamic tmp164 = ((Dynamic)(tmp163));		HX_STACK_VAR(tmp164,"tmp164");
	HX_STACK_LINE(897)
	Float tmp165 = (tmp161 * tmp164);		HX_STACK_VAR(tmp165,"tmp165");
	HX_STACK_LINE(897)
	Array< Float > tmp166 = this->rawData;		HX_STACK_VAR(tmp166,"tmp166");
	HX_STACK_LINE(897)
	Float tmp167 = tmp166->__get((int)12);		HX_STACK_VAR(tmp167,"tmp167");
	HX_STACK_LINE(897)
	Dynamic tmp168 = ((Dynamic)(tmp167));		HX_STACK_VAR(tmp168,"tmp168");
	HX_STACK_LINE(897)
	Array< Float > tmp169 = this->rawData;		HX_STACK_VAR(tmp169,"tmp169");
	HX_STACK_LINE(897)
	Float tmp170 = tmp169->__get((int)9);		HX_STACK_VAR(tmp170,"tmp170");
	HX_STACK_LINE(897)
	Dynamic tmp171 = ((Dynamic)(tmp170));		HX_STACK_VAR(tmp171,"tmp171");
	HX_STACK_LINE(897)
	Float tmp172 = (tmp168 * tmp171);		HX_STACK_VAR(tmp172,"tmp172");
	HX_STACK_LINE(897)
	Float tmp173 = (tmp165 - tmp172);		HX_STACK_VAR(tmp173,"tmp173");
	HX_STACK_LINE(897)
	Array< Float > tmp174 = this->rawData;		HX_STACK_VAR(tmp174,"tmp174");
	HX_STACK_LINE(897)
	Float tmp175 = tmp174->__get((int)2);		HX_STACK_VAR(tmp175,"tmp175");
	HX_STACK_LINE(897)
	Dynamic tmp176 = ((Dynamic)(tmp175));		HX_STACK_VAR(tmp176,"tmp176");
	HX_STACK_LINE(897)
	Array< Float > tmp177 = this->rawData;		HX_STACK_VAR(tmp177,"tmp177");
	HX_STACK_LINE(897)
	Float tmp178 = tmp177->__get((int)7);		HX_STACK_VAR(tmp178,"tmp178");
	HX_STACK_LINE(897)
	Dynamic tmp179 = ((Dynamic)(tmp178));		HX_STACK_VAR(tmp179,"tmp179");
	HX_STACK_LINE(897)
	Float tmp180 = (tmp176 * tmp179);		HX_STACK_VAR(tmp180,"tmp180");
	HX_STACK_LINE(897)
	Array< Float > tmp181 = this->rawData;		HX_STACK_VAR(tmp181,"tmp181");
	HX_STACK_LINE(897)
	Float tmp182 = tmp181->__get((int)6);		HX_STACK_VAR(tmp182,"tmp182");
	HX_STACK_LINE(897)
	Dynamic tmp183 = ((Dynamic)(tmp182));		HX_STACK_VAR(tmp183,"tmp183");
	HX_STACK_LINE(897)
	Array< Float > tmp184 = this->rawData;		HX_STACK_VAR(tmp184,"tmp184");
	HX_STACK_LINE(897)
	Float tmp185 = tmp184->__get((int)3);		HX_STACK_VAR(tmp185,"tmp185");
	HX_STACK_LINE(897)
	Dynamic tmp186 = ((Dynamic)(tmp185));		HX_STACK_VAR(tmp186,"tmp186");
	HX_STACK_LINE(897)
	Float tmp187 = (tmp183 * tmp186);		HX_STACK_VAR(tmp187,"tmp187");
	HX_STACK_LINE(897)
	Float tmp188 = (tmp180 - tmp187);		HX_STACK_VAR(tmp188,"tmp188");
	HX_STACK_LINE(897)
	Float tmp189 = (tmp173 * tmp188);		HX_STACK_VAR(tmp189,"tmp189");
	HX_STACK_LINE(892)
	Float tmp190 = (tmp158 + tmp189);		HX_STACK_VAR(tmp190,"tmp190");
	HX_STACK_LINE(892)
	Float tmp191 = tmp190;		HX_STACK_VAR(tmp191,"tmp191");
	HX_STACK_LINE(892)
	return tmp191;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3D_obj,get_determinant,return )

::openfl::geom::Vector3D Matrix3D_obj::get_position( ){
	HX_STACK_FRAME("openfl.geom.Matrix3D","get_position",0x1555563a,"openfl.geom.Matrix3D.get_position","openfl/geom/Matrix3D.hx",902,0x3acce238)
	HX_STACK_THIS(this)
	HX_STACK_LINE(904)
	Array< Float > tmp = this->rawData;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(904)
	Float tmp1 = tmp->__get((int)12);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(904)
	Dynamic tmp2 = ((Dynamic)(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(904)
	Array< Float > tmp3 = this->rawData;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(904)
	Float tmp4 = tmp3->__get((int)13);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(904)
	Dynamic tmp5 = ((Dynamic)(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(904)
	Array< Float > tmp6 = this->rawData;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(904)
	Float tmp7 = tmp6->__get((int)14);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(904)
	Dynamic tmp8 = ((Dynamic)(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(904)
	::openfl::geom::Vector3D tmp9 = ::openfl::geom::Vector3D_obj::__new(tmp2,tmp5,tmp8,null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(904)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3D_obj,get_position,return )

::openfl::geom::Vector3D Matrix3D_obj::set_position( ::openfl::geom::Vector3D val){
	HX_STACK_FRAME("openfl.geom.Matrix3D","set_position",0x2a4e79ae,"openfl.geom.Matrix3D.set_position","openfl/geom/Matrix3D.hx",909,0x3acce238)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(911)
	Array< Float > tmp = this->rawData;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(911)
	Float tmp1 = val->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(911)
	Float tmp2 = tmp[(int)12] = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(911)
	tmp2;
	HX_STACK_LINE(912)
	Array< Float > tmp3 = this->rawData;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(912)
	Float tmp4 = val->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(912)
	Float tmp5 = tmp3[(int)13] = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(912)
	tmp5;
	HX_STACK_LINE(913)
	Array< Float > tmp6 = this->rawData;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(913)
	Float tmp7 = val->z;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(913)
	Float tmp8 = tmp6[(int)14] = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(913)
	tmp8;
	HX_STACK_LINE(914)
	::openfl::geom::Vector3D tmp9 = val;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(914)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3D_obj,set_position,return )

::openfl::geom::Matrix3D Matrix3D_obj::create2D( Float x,Float y,hx::Null< Float >  __o_scale,hx::Null< Float >  __o_rotation){
Float scale = __o_scale.Default(1);
Float rotation = __o_rotation.Default(0);
	HX_STACK_FRAME("openfl.geom.Matrix3D","create2D",0x4623e756,"openfl.geom.Matrix3D.create2D","openfl/geom/Matrix3D.hx",324,0x3acce238)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(scale,"scale")
	HX_STACK_ARG(rotation,"rotation")
{
		HX_STACK_LINE(326)
		Float tmp = rotation;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(326)
		Float tmp1 = ::Math_obj::PI;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(326)
		Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(326)
		Float tmp3 = (Float(tmp2) / Float(((Float)180.0)));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(326)
		Float theta = tmp3;		HX_STACK_VAR(theta,"theta");
		HX_STACK_LINE(327)
		Float tmp4 = theta;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(327)
		Float tmp5 = ::Math_obj::cos(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(327)
		Float c = tmp5;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(328)
		Float tmp6 = theta;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(328)
		Float tmp7 = ::Math_obj::sin(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(328)
		Float s = tmp7;		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(330)
		Float tmp8 = (c * scale);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(330)
		Float tmp9 = s;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(330)
		Float tmp10 = -(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(330)
		Float tmp11 = scale;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(330)
		Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(330)
		Float tmp13 = (s * scale);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(330)
		Float tmp14 = (c * scale);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(330)
		Float tmp15 = x;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(330)
		Float tmp16 = y;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(330)
		::openfl::geom::Matrix3D tmp17 = ::openfl::geom::Matrix3D_obj::__new(Array_obj< Float >::__new().Add(tmp8).Add(tmp12).Add((int)0).Add((int)0).Add(tmp13).Add(tmp14).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add(tmp15).Add(tmp16).Add((int)0).Add((int)1));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(330)
		return tmp17;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix3D_obj,create2D,return )

::openfl::geom::Matrix3D Matrix3D_obj::createABCD( Float a,Float b,Float c,Float d,Float tx,Float ty){
	HX_STACK_FRAME("openfl.geom.Matrix3D","createABCD",0x0e55d246,"openfl.geom.Matrix3D.createABCD","openfl/geom/Matrix3D.hx",335,0x3acce238)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_ARG(tx,"tx")
	HX_STACK_ARG(ty,"ty")
	HX_STACK_LINE(337)
	::openfl::geom::Matrix3D tmp = ::openfl::geom::Matrix3D_obj::__new(Array_obj< Float >::__new().Add(a).Add(b).Add((int)0).Add((int)0).Add(c).Add(d).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add(tx).Add(ty).Add((int)0).Add((int)1));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(337)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Matrix3D_obj,createABCD,return )

::openfl::geom::Matrix3D Matrix3D_obj::createOrtho( Float x0,Float x1,Float y0,Float y1,Float zNear,Float zFar){
	HX_STACK_FRAME("openfl.geom.Matrix3D","createOrtho",0xac3dd614,"openfl.geom.Matrix3D.createOrtho","openfl/geom/Matrix3D.hx",342,0x3acce238)
	HX_STACK_ARG(x0,"x0")
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y0,"y0")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(zNear,"zNear")
	HX_STACK_ARG(zFar,"zFar")
	HX_STACK_LINE(344)
	Float tmp = (x1 - x0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(344)
	Float tmp1 = (Float(((Float)1.0)) / Float(tmp));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(344)
	Float sx = tmp1;		HX_STACK_VAR(sx,"sx");
	HX_STACK_LINE(345)
	Float tmp2 = (y1 - y0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(345)
	Float tmp3 = (Float(((Float)1.0)) / Float(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(345)
	Float sy = tmp3;		HX_STACK_VAR(sy,"sy");
	HX_STACK_LINE(346)
	Float tmp4 = (zFar - zNear);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(346)
	Float tmp5 = (Float(((Float)1.0)) / Float(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(346)
	Float sz = tmp5;		HX_STACK_VAR(sz,"sz");
	HX_STACK_LINE(348)
	Float tmp6 = (((Float)2.0) * sx);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(348)
	Float tmp7 = (((Float)2.0) * sy);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(348)
	Float tmp8 = ((Float)-2.);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(348)
	Float tmp9 = sz;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(348)
	Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(348)
	Float tmp11 = (x0 + x1);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(348)
	Float tmp12 = -(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(348)
	Float tmp13 = sx;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(348)
	Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(348)
	Float tmp15 = (y0 + y1);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(348)
	Float tmp16 = -(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(348)
	Float tmp17 = sy;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(348)
	Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(348)
	Float tmp19 = (zNear + zFar);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(348)
	Float tmp20 = -(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(348)
	Float tmp21 = sz;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(348)
	Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(348)
	::openfl::geom::Matrix3D tmp23 = ::openfl::geom::Matrix3D_obj::__new(Array_obj< Float >::__new().Add(tmp6).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add(tmp7).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add(tmp10).Add((int)0).Add(tmp14).Add(tmp18).Add(tmp22).Add((int)1));		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(348)
	return tmp23;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Matrix3D_obj,createOrtho,return )

::openfl::geom::Matrix3D Matrix3D_obj::interpolate( ::openfl::geom::Matrix3D thisMat,::openfl::geom::Matrix3D toMat,Float percent){
	HX_STACK_FRAME("openfl.geom.Matrix3D","interpolate",0x6cc85c39,"openfl.geom.Matrix3D.interpolate","openfl/geom/Matrix3D.hx",495,0x3acce238)
	HX_STACK_ARG(thisMat,"thisMat")
	HX_STACK_ARG(toMat,"toMat")
	HX_STACK_ARG(percent,"percent")
	HX_STACK_LINE(497)
	::openfl::geom::Matrix3D tmp = ::openfl::geom::Matrix3D_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(497)
	::openfl::geom::Matrix3D m = tmp;		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(499)
	{
		HX_STACK_LINE(499)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(499)
		while((true)){
			HX_STACK_LINE(499)
			bool tmp1 = (_g < (int)16);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(499)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(499)
			if ((tmp2)){
				HX_STACK_LINE(499)
				break;
			}
			HX_STACK_LINE(499)
			int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(499)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(501)
			Float tmp4 = thisMat->rawData->__get(i);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(501)
			Dynamic tmp5 = ((Dynamic)(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(501)
			Float tmp6 = toMat->rawData->__get(i);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(501)
			Dynamic tmp7 = ((Dynamic)(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(501)
			Float tmp8 = thisMat->rawData->__get(i);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(501)
			Dynamic tmp9 = ((Dynamic)(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(501)
			Float tmp10 = (tmp7 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(501)
			Float tmp11 = percent;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(501)
			Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(501)
			Float tmp13 = (tmp5 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(501)
			Float tmp14 = m->rawData[i] = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(501)
			tmp14;
		}
	}
	HX_STACK_LINE(505)
	::openfl::geom::Matrix3D tmp1 = m;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(505)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix3D_obj,interpolate,return )

::openfl::geom::Matrix3D Matrix3D_obj::__getAxisRotation( Float x,Float y,Float z,Float degrees){
	HX_STACK_FRAME("openfl.geom.Matrix3D","__getAxisRotation",0xf649170d,"openfl.geom.Matrix3D.__getAxisRotation","openfl/geom/Matrix3D.hx",851,0x3acce238)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(z,"z")
	HX_STACK_ARG(degrees,"degrees")
	HX_STACK_LINE(853)
	::openfl::geom::Matrix3D tmp = ::openfl::geom::Matrix3D_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(853)
	::openfl::geom::Matrix3D m = tmp;		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(855)
	::openfl::geom::Vector3D tmp1 = ::openfl::geom::Vector3D_obj::__new(x,y,z,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(855)
	::openfl::geom::Vector3D a1 = tmp1;		HX_STACK_VAR(a1,"a1");
	HX_STACK_LINE(856)
	Float tmp2 = degrees;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(856)
	Float tmp3 = -(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(856)
	Float tmp4 = ::Math_obj::PI;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(856)
	Float tmp5 = (Float(tmp4) / Float((int)180));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(856)
	Float tmp6 = (tmp3 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(856)
	Float rad = tmp6;		HX_STACK_VAR(rad,"rad");
	HX_STACK_LINE(857)
	Float tmp7 = rad;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(857)
	Float tmp8 = ::Math_obj::cos(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(857)
	Float c = tmp8;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(858)
	Float tmp9 = rad;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(858)
	Float tmp10 = ::Math_obj::sin(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(858)
	Float s = tmp10;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(859)
	Float tmp11 = (((Float)1.0) - c);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(859)
	Float t = tmp11;		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(861)
	Float tmp12 = c;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(861)
	Float tmp13 = (a1->x * a1->x);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(861)
	Float tmp14 = t;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(861)
	Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(861)
	Float tmp16 = (tmp12 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(861)
	Float tmp17 = m->rawData[(int)0] = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(861)
	tmp17;
	HX_STACK_LINE(862)
	Float tmp18 = c;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(862)
	Float tmp19 = (a1->y * a1->y);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(862)
	Float tmp20 = t;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(862)
	Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(862)
	Float tmp22 = (tmp18 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(862)
	Float tmp23 = m->rawData[(int)5] = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(862)
	tmp23;
	HX_STACK_LINE(863)
	Float tmp24 = c;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(863)
	Float tmp25 = (a1->z * a1->z);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(863)
	Float tmp26 = t;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(863)
	Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(863)
	Float tmp28 = (tmp24 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(863)
	Float tmp29 = m->rawData[(int)10] = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(863)
	tmp29;
	HX_STACK_LINE(865)
	Float tmp30 = (a1->x * a1->y);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(865)
	Float tmp31 = t;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(865)
	Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(865)
	Float tmp110 = tmp32;		HX_STACK_VAR(tmp110,"tmp110");
	HX_STACK_LINE(866)
	Float tmp33 = (a1->z * s);		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(866)
	Float tmp210 = tmp33;		HX_STACK_VAR(tmp210,"tmp210");
	HX_STACK_LINE(867)
	Float tmp34 = (tmp110 + tmp210);		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(867)
	Float tmp35 = m->rawData[(int)4] = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(867)
	tmp35;
	HX_STACK_LINE(868)
	Float tmp36 = (tmp110 - tmp210);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(868)
	Float tmp37 = m->rawData[(int)1] = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(868)
	tmp37;
	HX_STACK_LINE(869)
	Float tmp38 = (a1->x * a1->z);		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(869)
	Float tmp39 = t;		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(869)
	Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(869)
	tmp110 = tmp40;
	HX_STACK_LINE(870)
	Float tmp41 = (a1->y * s);		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(870)
	tmp210 = tmp41;
	HX_STACK_LINE(871)
	Float tmp42 = (tmp110 - tmp210);		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(871)
	Float tmp43 = m->rawData[(int)8] = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(871)
	tmp43;
	HX_STACK_LINE(872)
	Float tmp44 = (tmp110 + tmp210);		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(872)
	Float tmp45 = m->rawData[(int)2] = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(872)
	tmp45;
	HX_STACK_LINE(873)
	Float tmp46 = (a1->y * a1->z);		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(873)
	Float tmp47 = t;		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(873)
	Float tmp48 = (tmp46 * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(873)
	tmp110 = tmp48;
	HX_STACK_LINE(874)
	Float tmp49 = (a1->x * s);		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(874)
	tmp210 = tmp49;
	HX_STACK_LINE(875)
	Float tmp50 = (tmp110 + tmp210);		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(875)
	Float tmp51 = m->rawData[(int)9] = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(875)
	tmp51;
	HX_STACK_LINE(876)
	Float tmp52 = (tmp110 - tmp210);		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(876)
	Float tmp53 = m->rawData[(int)6] = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(876)
	tmp53;
	HX_STACK_LINE(878)
	::openfl::geom::Matrix3D tmp54 = m;		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(878)
	return tmp54;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix3D_obj,__getAxisRotation,return )


Matrix3D_obj::Matrix3D_obj()
{
}

void Matrix3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Matrix3D);
	HX_MARK_MEMBER_NAME(determinant,"determinant");
	HX_MARK_MEMBER_NAME(rawData,"rawData");
	HX_MARK_END_CLASS();
}

void Matrix3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(determinant,"determinant");
	HX_VISIT_MEMBER_NAME(rawData,"rawData");
}

Dynamic Matrix3D_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"append") ) { return append_dyn(); }
		if (HX_FIELD_EQ(inName,"invert") ) { return invert_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"rawData") ) { return rawData; }
		if (HX_FIELD_EQ(inName,"pointAt") ) { return pointAt_dyn(); }
		if (HX_FIELD_EQ(inName,"prepend") ) { return prepend_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp == hx::paccAlways) return get_position(); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"identity") ) { return identity_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"copyRowTo") ) { return copyRowTo_dyn(); }
		if (HX_FIELD_EQ(inName,"decompose") ) { return decompose_dyn(); }
		if (HX_FIELD_EQ(inName,"recompose") ) { return recompose_dyn(); }
		if (HX_FIELD_EQ(inName,"transpose") ) { return transpose_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"determinant") ) { return inCallProp == hx::paccAlways ? get_determinant() : determinant; }
		if (HX_FIELD_EQ(inName,"appendScale") ) { return appendScale_dyn(); }
		if (HX_FIELD_EQ(inName,"copyRowFrom") ) { return copyRowFrom_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"copyColumnTo") ) { return copyColumnTo_dyn(); }
		if (HX_FIELD_EQ(inName,"prependScale") ) { return prependScale_dyn(); }
		if (HX_FIELD_EQ(inName,"get_position") ) { return get_position_dyn(); }
		if (HX_FIELD_EQ(inName,"set_position") ) { return set_position_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"copyRawDataTo") ) { return copyRawDataTo_dyn(); }
		if (HX_FIELD_EQ(inName,"interpolateTo") ) { return interpolateTo_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"appendRotation") ) { return appendRotation_dyn(); }
		if (HX_FIELD_EQ(inName,"copyColumnFrom") ) { return copyColumnFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"copyToMatrix3D") ) { return copyToMatrix3D_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"copyRawDataFrom") ) { return copyRawDataFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"prependRotation") ) { return prependRotation_dyn(); }
		if (HX_FIELD_EQ(inName,"transformVector") ) { return transformVector_dyn(); }
		if (HX_FIELD_EQ(inName,"get_determinant") ) { return get_determinant_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"transformVectors") ) { return transformVectors_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"appendTranslation") ) { return appendTranslation_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"prependTranslation") ) { return prependTranslation_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"deltaTransformVector") ) { return deltaTransformVector_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Matrix3D_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"create2D") ) { outValue = create2D_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"createABCD") ) { outValue = createABCD_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"createOrtho") ) { outValue = createOrtho_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"interpolate") ) { outValue = interpolate_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__getAxisRotation") ) { outValue = __getAxisRotation_dyn(); return true;  }
	}
	return false;
}

Dynamic Matrix3D_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"rawData") ) { rawData=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp == hx::paccAlways) return set_position(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"determinant") ) { determinant=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Matrix3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("determinant","\x95","\x5d","\x15","\x32"));
	outFields->push(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"));
	outFields->push(HX_HCSTRING("rawData","\x32","\x6c","\x18","\xff"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Matrix3D_obj,determinant),HX_HCSTRING("determinant","\x95","\x5d","\x15","\x32")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(Matrix3D_obj,rawData),HX_HCSTRING("rawData","\x32","\x6c","\x18","\xff")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("determinant","\x95","\x5d","\x15","\x32"),
	HX_HCSTRING("rawData","\x32","\x6c","\x18","\xff"),
	HX_HCSTRING("append","\xda","\xe1","\xd3","\x8f"),
	HX_HCSTRING("appendRotation","\x38","\x45","\xe8","\xcb"),
	HX_HCSTRING("appendScale","\x50","\x66","\x45","\xb5"),
	HX_HCSTRING("appendTranslation","\x37","\xe1","\x3d","\xd6"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("copyColumnFrom","\x75","\x97","\xb5","\x3a"),
	HX_HCSTRING("copyColumnTo","\xc6","\x2e","\xf6","\xf6"),
	HX_HCSTRING("copyFrom","\xbf","\x0b","\x61","\xc8"),
	HX_HCSTRING("copyRawDataFrom","\x07","\x7d","\xbd","\x2c"),
	HX_HCSTRING("copyRawDataTo","\xd8","\x2b","\xf7","\xa8"),
	HX_HCSTRING("copyRowFrom","\x6f","\x45","\x8b","\xef"),
	HX_HCSTRING("copyRowTo","\x40","\x8a","\x62","\x73"),
	HX_HCSTRING("copyToMatrix3D","\xe2","\x1d","\x1f","\x04"),
	HX_HCSTRING("decompose","\xb1","\xc3","\xa7","\x7a"),
	HX_HCSTRING("deltaTransformVector","\x37","\x02","\x9c","\xc2"),
	HX_HCSTRING("identity","\x3e","\x45","\x2f","\xb9"),
	HX_HCSTRING("interpolateTo","\x9c","\x90","\x22","\x71"),
	HX_HCSTRING("invert","\x16","\xe7","\xd8","\x9f"),
	HX_HCSTRING("pointAt","\x63","\xa1","\x21","\x51"),
	HX_HCSTRING("prepend","\x0e","\x97","\xe0","\x37"),
	HX_HCSTRING("prependRotation","\x6c","\x4e","\x3b","\xe8"),
	HX_HCSTRING("prependScale","\x9c","\x54","\x97","\xc4"),
	HX_HCSTRING("prependTranslation","\x83","\x90","\x15","\x05"),
	HX_HCSTRING("recompose","\xbf","\x81","\xdb","\x03"),
	HX_HCSTRING("transformVector","\x4f","\x2b","\xb3","\xd2"),
	HX_HCSTRING("transformVectors","\x44","\xba","\x12","\x8a"),
	HX_HCSTRING("transpose","\x79","\x50","\x2f","\x4c"),
	HX_HCSTRING("get_determinant","\x2c","\x15","\xf7","\xf2"),
	HX_HCSTRING("get_position","\xb2","\x54","\x14","\x80"),
	HX_HCSTRING("set_position","\x26","\x78","\x0d","\x95"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Matrix3D_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Matrix3D_obj::__mClass,"__mClass");
};

#endif

hx::Class Matrix3D_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("create2D","\xce","\x49","\xf4","\x2b"),
	HX_HCSTRING("createABCD","\xbe","\xc2","\xdd","\x52"),
	HX_HCSTRING("createOrtho","\x9c","\x4e","\xa8","\x5e"),
	HX_HCSTRING("interpolate","\xc1","\xd4","\x32","\x1f"),
	HX_HCSTRING("__getAxisRotation","\x95","\xa5","\x44","\x7b"),
	::String(null()) };

void Matrix3D_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.geom.Matrix3D","\xe6","\x93","\x2e","\x3d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Matrix3D_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Matrix3D_obj >;
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
