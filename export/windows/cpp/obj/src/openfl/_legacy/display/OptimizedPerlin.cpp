#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_OptimizedPerlin
#include <openfl/_legacy/display/OptimizedPerlin.h>
#endif
namespace openfl{
namespace _legacy{
namespace display{

Void OptimizedPerlin_obj::__construct(hx::Null< int >  __o_seed,hx::Null< int >  __o_numOctaves,hx::Null< Float >  __o_falloff)
{
HX_STACK_FRAME("openfl._legacy.display.OptimizedPerlin","new",0x2e02d39d,"openfl._legacy.display.OptimizedPerlin.new","openfl/_legacy/display/BitmapData.hx",967,0x0b92a012)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_seed,"seed")
HX_STACK_ARG(__o_numOctaves,"numOctaves")
HX_STACK_ARG(__o_falloff,"falloff")
int seed = __o_seed.Default(123);
int numOctaves = __o_numOctaves.Default(4);
Float falloff = __o_falloff.Default(((Float)0.5));
{
	HX_STACK_LINE(969)
	Float tmp = ((Float)0.015625);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(969)
	this->baseFactor = tmp;
	HX_STACK_LINE(970)
	this->octaves = numOctaves;
	HX_STACK_LINE(971)
	int tmp1 = seed;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(971)
	this->seedOffset(tmp1);
	HX_STACK_LINE(972)
	Float tmp2 = falloff;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(972)
	this->octFreqPers(tmp2);
}
;
	return null();
}

//OptimizedPerlin_obj::~OptimizedPerlin_obj() { }

Dynamic OptimizedPerlin_obj::__CreateEmpty() { return  new OptimizedPerlin_obj; }
hx::ObjectPtr< OptimizedPerlin_obj > OptimizedPerlin_obj::__new(hx::Null< int >  __o_seed,hx::Null< int >  __o_numOctaves,hx::Null< Float >  __o_falloff)
{  hx::ObjectPtr< OptimizedPerlin_obj > _result_ = new OptimizedPerlin_obj();
	_result_->__construct(__o_seed,__o_numOctaves,__o_falloff);
	return _result_;}

Dynamic OptimizedPerlin_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OptimizedPerlin_obj > _result_ = new OptimizedPerlin_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void OptimizedPerlin_obj::fill( ::openfl::_legacy::display::BitmapData bitmap,Float _x,Float _y,Float _z,Dynamic _){
{
		HX_STACK_FRAME("openfl._legacy.display.OptimizedPerlin","fill",0x0f2fa0a6,"openfl._legacy.display.OptimizedPerlin.fill","openfl/_legacy/display/BitmapData.hx",977,0x0b92a012)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bitmap,"bitmap")
		HX_STACK_ARG(_x,"_x")
		HX_STACK_ARG(_y,"_y")
		HX_STACK_ARG(_z,"_z")
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(979)
		Float baseX;		HX_STACK_VAR(baseX,"baseX");
		HX_STACK_LINE(981)
		Float tmp = _x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(981)
		Float tmp1 = this->baseFactor;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(981)
		Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(981)
		Float tmp3 = this->iXoffset;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(981)
		Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(981)
		baseX = tmp4;
		HX_STACK_LINE(982)
		Float tmp5 = _y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(982)
		Float tmp6 = this->baseFactor;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(982)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(982)
		Float tmp8 = this->iYoffset;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(982)
		Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(982)
		_y = tmp9;
		HX_STACK_LINE(983)
		Float tmp10 = _z;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(983)
		Float tmp11 = this->baseFactor;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(983)
		Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(983)
		Float tmp13 = this->iZoffset;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(983)
		Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(983)
		_z = tmp14;
		HX_STACK_LINE(985)
		int tmp15 = bitmap->get_width();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(985)
		int width = tmp15;		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(986)
		int tmp16 = bitmap->get_height();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(986)
		int height = tmp16;		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(988)
		Array< int > p = ::openfl::_legacy::display::OptimizedPerlin_obj::P;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(989)
		int tmp17 = this->octaves;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(989)
		int octaves = tmp17;		HX_STACK_VAR(octaves,"octaves");
		HX_STACK_LINE(990)
		Array< Float > aOctFreq = this->aOctFreq;		HX_STACK_VAR(aOctFreq,"aOctFreq");
		HX_STACK_LINE(991)
		Array< Float > aOctPers = this->aOctPers;		HX_STACK_VAR(aOctPers,"aOctPers");
		HX_STACK_LINE(993)
		Float s;		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(993)
		Float fFreq;		HX_STACK_VAR(fFreq,"fFreq");
		HX_STACK_LINE(993)
		Float fPers;		HX_STACK_VAR(fPers,"fPers");
		HX_STACK_LINE(993)
		Float x;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(993)
		Float y;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(993)
		Float z;		HX_STACK_VAR(z,"z");
		HX_STACK_LINE(993)
		Float xf;		HX_STACK_VAR(xf,"xf");
		HX_STACK_LINE(993)
		Float yf;		HX_STACK_VAR(yf,"yf");
		HX_STACK_LINE(993)
		Float zf;		HX_STACK_VAR(zf,"zf");
		HX_STACK_LINE(993)
		int X;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(993)
		int Y;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(993)
		int Z;		HX_STACK_VAR(Z,"Z");
		HX_STACK_LINE(993)
		Float u;		HX_STACK_VAR(u,"u");
		HX_STACK_LINE(993)
		Float v;		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(993)
		Float w;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(993)
		int A;		HX_STACK_VAR(A,"A");
		HX_STACK_LINE(993)
		int AA;		HX_STACK_VAR(AA,"AA");
		HX_STACK_LINE(993)
		int AB;		HX_STACK_VAR(AB,"AB");
		HX_STACK_LINE(993)
		int B;		HX_STACK_VAR(B,"B");
		HX_STACK_LINE(993)
		int BA;		HX_STACK_VAR(BA,"BA");
		HX_STACK_LINE(993)
		int BB;		HX_STACK_VAR(BB,"BB");
		HX_STACK_LINE(993)
		Float x1;		HX_STACK_VAR(x1,"x1");
		HX_STACK_LINE(993)
		Float y1;		HX_STACK_VAR(y1,"y1");
		HX_STACK_LINE(993)
		Float z1;		HX_STACK_VAR(z1,"z1");
		HX_STACK_LINE(993)
		int hash;		HX_STACK_VAR(hash,"hash");
		HX_STACK_LINE(993)
		Float g1;		HX_STACK_VAR(g1,"g1");
		HX_STACK_LINE(993)
		Float g2;		HX_STACK_VAR(g2,"g2");
		HX_STACK_LINE(993)
		Float g3;		HX_STACK_VAR(g3,"g3");
		HX_STACK_LINE(993)
		Float g4;		HX_STACK_VAR(g4,"g4");
		HX_STACK_LINE(993)
		Float g5;		HX_STACK_VAR(g5,"g5");
		HX_STACK_LINE(993)
		Float g6;		HX_STACK_VAR(g6,"g6");
		HX_STACK_LINE(993)
		Float g7;		HX_STACK_VAR(g7,"g7");
		HX_STACK_LINE(993)
		Float g8;		HX_STACK_VAR(g8,"g8");
		HX_STACK_LINE(993)
		int color;		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(993)
		int pixel;		HX_STACK_VAR(pixel,"pixel");
		HX_STACK_LINE(995)
		{
			HX_STACK_LINE(995)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(995)
			while((true)){
				HX_STACK_LINE(995)
				bool tmp18 = (_g < height);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(995)
				bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(995)
				if ((tmp19)){
					HX_STACK_LINE(995)
					break;
				}
				HX_STACK_LINE(995)
				int tmp20 = (_g)++;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(995)
				int py = tmp20;		HX_STACK_VAR(py,"py");
				HX_STACK_LINE(997)
				_x = baseX;
				HX_STACK_LINE(999)
				{
					HX_STACK_LINE(999)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(999)
					while((true)){
						HX_STACK_LINE(999)
						bool tmp21 = (_g1 < width);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(999)
						bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(999)
						if ((tmp22)){
							HX_STACK_LINE(999)
							break;
						}
						HX_STACK_LINE(999)
						int tmp23 = (_g1)++;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(999)
						int px = tmp23;		HX_STACK_VAR(px,"px");
						HX_STACK_LINE(1001)
						s = ((Float)0.);
						HX_STACK_LINE(1003)
						{
							HX_STACK_LINE(1003)
							int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(1003)
							while((true)){
								HX_STACK_LINE(1003)
								bool tmp24 = (_g2 < octaves);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1003)
								bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(1003)
								if ((tmp25)){
									HX_STACK_LINE(1003)
									break;
								}
								HX_STACK_LINE(1003)
								int tmp26 = (_g2)++;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1003)
								int i = tmp26;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(1005)
								Float tmp27 = aOctFreq->__get(i);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(1005)
								fFreq = tmp27;
								HX_STACK_LINE(1006)
								Float tmp28 = aOctPers->__get(i);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1006)
								fPers = tmp28;
								HX_STACK_LINE(1008)
								Float tmp29 = (_x * fFreq);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1008)
								x = tmp29;
								HX_STACK_LINE(1009)
								Float tmp30 = (_y * fFreq);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(1009)
								y = tmp30;
								HX_STACK_LINE(1010)
								Float tmp31 = (_z * fFreq);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(1010)
								z = tmp31;
								HX_STACK_LINE(1012)
								Float tmp32 = x;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(1012)
								Float tmp33 = hx::Mod(x,(int)1);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(1012)
								Float tmp34 = (tmp32 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(1012)
								xf = tmp34;
								HX_STACK_LINE(1013)
								Float tmp35 = y;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(1013)
								Float tmp36 = hx::Mod(y,(int)1);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(1013)
								Float tmp37 = (tmp35 - tmp36);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(1013)
								yf = tmp37;
								HX_STACK_LINE(1014)
								Float tmp38 = z;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(1014)
								Float tmp39 = hx::Mod(z,(int)1);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(1014)
								Float tmp40 = (tmp38 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(1014)
								zf = tmp40;
								HX_STACK_LINE(1016)
								Float tmp41 = xf;		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(1016)
								int tmp42 = ::Std_obj::_int(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(1016)
								int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(1016)
								X = tmp43;
								HX_STACK_LINE(1017)
								Float tmp44 = yf;		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(1017)
								int tmp45 = ::Std_obj::_int(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(1017)
								int tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(1017)
								Y = tmp46;
								HX_STACK_LINE(1018)
								Float tmp47 = zf;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(1018)
								int tmp48 = ::Std_obj::_int(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(1018)
								int tmp49 = (int(tmp48) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(1018)
								Z = tmp49;
								HX_STACK_LINE(1020)
								hx::SubEq(x,xf);
								HX_STACK_LINE(1021)
								hx::SubEq(y,yf);
								HX_STACK_LINE(1022)
								hx::SubEq(z,zf);
								HX_STACK_LINE(1024)
								Float tmp50 = (x * x);		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(1024)
								Float tmp51 = x;		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(1024)
								Float tmp52 = (tmp50 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(1024)
								Float tmp53 = x;		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(1024)
								Float tmp54 = (x * (int)6);		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(1024)
								Float tmp55 = (tmp54 - (int)15);		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(1024)
								Float tmp56 = (tmp53 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(1024)
								Float tmp57 = (tmp56 + (int)10);		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(1024)
								Float tmp58 = (tmp52 * tmp57);		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(1024)
								u = tmp58;
								HX_STACK_LINE(1025)
								Float tmp59 = (y * y);		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(1025)
								Float tmp60 = y;		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(1025)
								Float tmp61 = (tmp59 * tmp60);		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(1025)
								Float tmp62 = y;		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(1025)
								Float tmp63 = (y * (int)6);		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(1025)
								Float tmp64 = (tmp63 - (int)15);		HX_STACK_VAR(tmp64,"tmp64");
								HX_STACK_LINE(1025)
								Float tmp65 = (tmp62 * tmp64);		HX_STACK_VAR(tmp65,"tmp65");
								HX_STACK_LINE(1025)
								Float tmp66 = (tmp65 + (int)10);		HX_STACK_VAR(tmp66,"tmp66");
								HX_STACK_LINE(1025)
								Float tmp67 = (tmp61 * tmp66);		HX_STACK_VAR(tmp67,"tmp67");
								HX_STACK_LINE(1025)
								v = tmp67;
								HX_STACK_LINE(1026)
								Float tmp68 = (z * z);		HX_STACK_VAR(tmp68,"tmp68");
								HX_STACK_LINE(1026)
								Float tmp69 = z;		HX_STACK_VAR(tmp69,"tmp69");
								HX_STACK_LINE(1026)
								Float tmp70 = (tmp68 * tmp69);		HX_STACK_VAR(tmp70,"tmp70");
								HX_STACK_LINE(1026)
								Float tmp71 = z;		HX_STACK_VAR(tmp71,"tmp71");
								HX_STACK_LINE(1026)
								Float tmp72 = (z * (int)6);		HX_STACK_VAR(tmp72,"tmp72");
								HX_STACK_LINE(1026)
								Float tmp73 = (tmp72 - (int)15);		HX_STACK_VAR(tmp73,"tmp73");
								HX_STACK_LINE(1026)
								Float tmp74 = (tmp71 * tmp73);		HX_STACK_VAR(tmp74,"tmp74");
								HX_STACK_LINE(1026)
								Float tmp75 = (tmp74 + (int)10);		HX_STACK_VAR(tmp75,"tmp75");
								HX_STACK_LINE(1026)
								Float tmp76 = (tmp70 * tmp75);		HX_STACK_VAR(tmp76,"tmp76");
								HX_STACK_LINE(1026)
								w = tmp76;
								HX_STACK_LINE(1028)
								int tmp77 = p->__get(X);		HX_STACK_VAR(tmp77,"tmp77");
								HX_STACK_LINE(1028)
								int tmp78 = Y;		HX_STACK_VAR(tmp78,"tmp78");
								HX_STACK_LINE(1028)
								int tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
								HX_STACK_LINE(1028)
								A = tmp79;
								HX_STACK_LINE(1029)
								int tmp80 = p->__get(A);		HX_STACK_VAR(tmp80,"tmp80");
								HX_STACK_LINE(1029)
								int tmp81 = Z;		HX_STACK_VAR(tmp81,"tmp81");
								HX_STACK_LINE(1029)
								int tmp82 = (tmp80 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
								HX_STACK_LINE(1029)
								AA = tmp82;
								HX_STACK_LINE(1030)
								int tmp83 = (A + (int)1);		HX_STACK_VAR(tmp83,"tmp83");
								HX_STACK_LINE(1030)
								int tmp84 = p->__get(tmp83);		HX_STACK_VAR(tmp84,"tmp84");
								HX_STACK_LINE(1030)
								int tmp85 = Z;		HX_STACK_VAR(tmp85,"tmp85");
								HX_STACK_LINE(1030)
								int tmp86 = (tmp84 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
								HX_STACK_LINE(1030)
								AB = tmp86;
								HX_STACK_LINE(1031)
								int tmp87 = (X + (int)1);		HX_STACK_VAR(tmp87,"tmp87");
								HX_STACK_LINE(1031)
								int tmp88 = p->__get(tmp87);		HX_STACK_VAR(tmp88,"tmp88");
								HX_STACK_LINE(1031)
								int tmp89 = Y;		HX_STACK_VAR(tmp89,"tmp89");
								HX_STACK_LINE(1031)
								int tmp90 = (tmp88 + tmp89);		HX_STACK_VAR(tmp90,"tmp90");
								HX_STACK_LINE(1031)
								B = tmp90;
								HX_STACK_LINE(1032)
								int tmp91 = p->__get(B);		HX_STACK_VAR(tmp91,"tmp91");
								HX_STACK_LINE(1032)
								int tmp92 = Z;		HX_STACK_VAR(tmp92,"tmp92");
								HX_STACK_LINE(1032)
								int tmp93 = (tmp91 + tmp92);		HX_STACK_VAR(tmp93,"tmp93");
								HX_STACK_LINE(1032)
								BA = tmp93;
								HX_STACK_LINE(1033)
								int tmp94 = (B + (int)1);		HX_STACK_VAR(tmp94,"tmp94");
								HX_STACK_LINE(1033)
								int tmp95 = p->__get(tmp94);		HX_STACK_VAR(tmp95,"tmp95");
								HX_STACK_LINE(1033)
								int tmp96 = Z;		HX_STACK_VAR(tmp96,"tmp96");
								HX_STACK_LINE(1033)
								int tmp97 = (tmp95 + tmp96);		HX_STACK_VAR(tmp97,"tmp97");
								HX_STACK_LINE(1033)
								BB = tmp97;
								HX_STACK_LINE(1035)
								Float tmp98 = (x - (int)1);		HX_STACK_VAR(tmp98,"tmp98");
								HX_STACK_LINE(1035)
								x1 = tmp98;
								HX_STACK_LINE(1036)
								Float tmp99 = (y - (int)1);		HX_STACK_VAR(tmp99,"tmp99");
								HX_STACK_LINE(1036)
								y1 = tmp99;
								HX_STACK_LINE(1037)
								Float tmp100 = (z - (int)1);		HX_STACK_VAR(tmp100,"tmp100");
								HX_STACK_LINE(1037)
								z1 = tmp100;
								HX_STACK_LINE(1039)
								int tmp101 = (BB + (int)1);		HX_STACK_VAR(tmp101,"tmp101");
								HX_STACK_LINE(1039)
								int tmp102 = p->__get(tmp101);		HX_STACK_VAR(tmp102,"tmp102");
								HX_STACK_LINE(1039)
								int tmp103 = (int(tmp102) & int((int)15));		HX_STACK_VAR(tmp103,"tmp103");
								HX_STACK_LINE(1039)
								hash = tmp103;
								HX_STACK_LINE(1040)
								int tmp104 = (int(hash) & int((int)1));		HX_STACK_VAR(tmp104,"tmp104");
								HX_STACK_LINE(1040)
								bool tmp105 = (tmp104 == (int)0);		HX_STACK_VAR(tmp105,"tmp105");
								HX_STACK_LINE(1040)
								Float tmp106;		HX_STACK_VAR(tmp106,"tmp106");
								HX_STACK_LINE(1040)
								if ((tmp105)){
									HX_STACK_LINE(1040)
									bool tmp107 = (hash < (int)8);		HX_STACK_VAR(tmp107,"tmp107");
									HX_STACK_LINE(1040)
									if ((tmp107)){
										HX_STACK_LINE(1040)
										tmp106 = x1;
									}
									else{
										HX_STACK_LINE(1040)
										tmp106 = y1;
									}
								}
								else{
									HX_STACK_LINE(1040)
									bool tmp107 = (hash < (int)8);		HX_STACK_VAR(tmp107,"tmp107");
									HX_STACK_LINE(1040)
									if ((tmp107)){
										HX_STACK_LINE(1040)
										Float tmp108 = x1;		HX_STACK_VAR(tmp108,"tmp108");
										HX_STACK_LINE(1040)
										tmp106 = -(tmp108);
									}
									else{
										HX_STACK_LINE(1040)
										Float tmp108 = y1;		HX_STACK_VAR(tmp108,"tmp108");
										HX_STACK_LINE(1040)
										tmp106 = -(tmp108);
									}
								}
								HX_STACK_LINE(1040)
								int tmp107 = (int(hash) & int((int)2));		HX_STACK_VAR(tmp107,"tmp107");
								HX_STACK_LINE(1040)
								bool tmp108 = (tmp107 == (int)0);		HX_STACK_VAR(tmp108,"tmp108");
								HX_STACK_LINE(1040)
								Float tmp109;		HX_STACK_VAR(tmp109,"tmp109");
								HX_STACK_LINE(1040)
								if ((tmp108)){
									HX_STACK_LINE(1040)
									bool tmp110 = (hash < (int)4);		HX_STACK_VAR(tmp110,"tmp110");
									HX_STACK_LINE(1040)
									if ((tmp110)){
										HX_STACK_LINE(1040)
										tmp109 = y1;
									}
									else{
										HX_STACK_LINE(1040)
										bool tmp111 = (hash == (int)12);		HX_STACK_VAR(tmp111,"tmp111");
										HX_STACK_LINE(1040)
										if ((tmp111)){
											HX_STACK_LINE(1040)
											tmp109 = x1;
										}
										else{
											HX_STACK_LINE(1040)
											tmp109 = z1;
										}
									}
								}
								else{
									HX_STACK_LINE(1040)
									bool tmp110 = (hash < (int)4);		HX_STACK_VAR(tmp110,"tmp110");
									HX_STACK_LINE(1040)
									if ((tmp110)){
										HX_STACK_LINE(1040)
										Float tmp111 = y1;		HX_STACK_VAR(tmp111,"tmp111");
										HX_STACK_LINE(1040)
										tmp109 = -(tmp111);
									}
									else{
										HX_STACK_LINE(1040)
										bool tmp111 = (hash == (int)14);		HX_STACK_VAR(tmp111,"tmp111");
										HX_STACK_LINE(1040)
										if ((tmp111)){
											HX_STACK_LINE(1040)
											Float tmp112 = x1;		HX_STACK_VAR(tmp112,"tmp112");
											HX_STACK_LINE(1040)
											tmp109 = -(tmp112);
										}
										else{
											HX_STACK_LINE(1040)
											Float tmp112 = z1;		HX_STACK_VAR(tmp112,"tmp112");
											HX_STACK_LINE(1040)
											tmp109 = -(tmp112);
										}
									}
								}
								HX_STACK_LINE(1040)
								Float tmp110 = (tmp106 + tmp109);		HX_STACK_VAR(tmp110,"tmp110");
								HX_STACK_LINE(1040)
								g1 = tmp110;
								HX_STACK_LINE(1042)
								int tmp111 = (AB + (int)1);		HX_STACK_VAR(tmp111,"tmp111");
								HX_STACK_LINE(1042)
								int tmp112 = p->__get(tmp111);		HX_STACK_VAR(tmp112,"tmp112");
								HX_STACK_LINE(1042)
								int tmp113 = (int(tmp112) & int((int)15));		HX_STACK_VAR(tmp113,"tmp113");
								HX_STACK_LINE(1042)
								hash = tmp113;
								HX_STACK_LINE(1043)
								int tmp114 = (int(hash) & int((int)1));		HX_STACK_VAR(tmp114,"tmp114");
								HX_STACK_LINE(1043)
								bool tmp115 = (tmp114 == (int)0);		HX_STACK_VAR(tmp115,"tmp115");
								HX_STACK_LINE(1043)
								Float tmp116;		HX_STACK_VAR(tmp116,"tmp116");
								HX_STACK_LINE(1043)
								if ((tmp115)){
									HX_STACK_LINE(1043)
									bool tmp117 = (hash < (int)8);		HX_STACK_VAR(tmp117,"tmp117");
									HX_STACK_LINE(1043)
									if ((tmp117)){
										HX_STACK_LINE(1043)
										tmp116 = x;
									}
									else{
										HX_STACK_LINE(1043)
										tmp116 = y1;
									}
								}
								else{
									HX_STACK_LINE(1043)
									bool tmp117 = (hash < (int)8);		HX_STACK_VAR(tmp117,"tmp117");
									HX_STACK_LINE(1043)
									if ((tmp117)){
										HX_STACK_LINE(1043)
										Float tmp118 = x;		HX_STACK_VAR(tmp118,"tmp118");
										HX_STACK_LINE(1043)
										tmp116 = -(tmp118);
									}
									else{
										HX_STACK_LINE(1043)
										Float tmp118 = y1;		HX_STACK_VAR(tmp118,"tmp118");
										HX_STACK_LINE(1043)
										tmp116 = -(tmp118);
									}
								}
								HX_STACK_LINE(1043)
								int tmp117 = (int(hash) & int((int)2));		HX_STACK_VAR(tmp117,"tmp117");
								HX_STACK_LINE(1043)
								bool tmp118 = (tmp117 == (int)0);		HX_STACK_VAR(tmp118,"tmp118");
								HX_STACK_LINE(1043)
								Float tmp119;		HX_STACK_VAR(tmp119,"tmp119");
								HX_STACK_LINE(1043)
								if ((tmp118)){
									HX_STACK_LINE(1043)
									bool tmp120 = (hash < (int)4);		HX_STACK_VAR(tmp120,"tmp120");
									HX_STACK_LINE(1043)
									if ((tmp120)){
										HX_STACK_LINE(1043)
										tmp119 = y1;
									}
									else{
										HX_STACK_LINE(1043)
										bool tmp121 = (hash == (int)12);		HX_STACK_VAR(tmp121,"tmp121");
										HX_STACK_LINE(1043)
										if ((tmp121)){
											HX_STACK_LINE(1043)
											tmp119 = x;
										}
										else{
											HX_STACK_LINE(1043)
											tmp119 = z1;
										}
									}
								}
								else{
									HX_STACK_LINE(1043)
									bool tmp120 = (hash < (int)4);		HX_STACK_VAR(tmp120,"tmp120");
									HX_STACK_LINE(1043)
									if ((tmp120)){
										HX_STACK_LINE(1043)
										Float tmp121 = y1;		HX_STACK_VAR(tmp121,"tmp121");
										HX_STACK_LINE(1043)
										tmp119 = -(tmp121);
									}
									else{
										HX_STACK_LINE(1043)
										bool tmp121 = (hash == (int)14);		HX_STACK_VAR(tmp121,"tmp121");
										HX_STACK_LINE(1043)
										if ((tmp121)){
											HX_STACK_LINE(1043)
											Float tmp122 = x;		HX_STACK_VAR(tmp122,"tmp122");
											HX_STACK_LINE(1043)
											tmp119 = -(tmp122);
										}
										else{
											HX_STACK_LINE(1043)
											Float tmp122 = z1;		HX_STACK_VAR(tmp122,"tmp122");
											HX_STACK_LINE(1043)
											tmp119 = -(tmp122);
										}
									}
								}
								HX_STACK_LINE(1043)
								Float tmp120 = (tmp116 + tmp119);		HX_STACK_VAR(tmp120,"tmp120");
								HX_STACK_LINE(1043)
								g2 = tmp120;
								HX_STACK_LINE(1045)
								int tmp121 = (BA + (int)1);		HX_STACK_VAR(tmp121,"tmp121");
								HX_STACK_LINE(1045)
								int tmp122 = p->__get(tmp121);		HX_STACK_VAR(tmp122,"tmp122");
								HX_STACK_LINE(1045)
								int tmp123 = (int(tmp122) & int((int)15));		HX_STACK_VAR(tmp123,"tmp123");
								HX_STACK_LINE(1045)
								hash = tmp123;
								HX_STACK_LINE(1046)
								int tmp124 = (int(hash) & int((int)1));		HX_STACK_VAR(tmp124,"tmp124");
								HX_STACK_LINE(1046)
								bool tmp125 = (tmp124 == (int)0);		HX_STACK_VAR(tmp125,"tmp125");
								HX_STACK_LINE(1046)
								Float tmp126;		HX_STACK_VAR(tmp126,"tmp126");
								HX_STACK_LINE(1046)
								if ((tmp125)){
									HX_STACK_LINE(1046)
									bool tmp127 = (hash < (int)8);		HX_STACK_VAR(tmp127,"tmp127");
									HX_STACK_LINE(1046)
									if ((tmp127)){
										HX_STACK_LINE(1046)
										tmp126 = x1;
									}
									else{
										HX_STACK_LINE(1046)
										tmp126 = y;
									}
								}
								else{
									HX_STACK_LINE(1046)
									bool tmp127 = (hash < (int)8);		HX_STACK_VAR(tmp127,"tmp127");
									HX_STACK_LINE(1046)
									if ((tmp127)){
										HX_STACK_LINE(1046)
										Float tmp128 = x1;		HX_STACK_VAR(tmp128,"tmp128");
										HX_STACK_LINE(1046)
										tmp126 = -(tmp128);
									}
									else{
										HX_STACK_LINE(1046)
										Float tmp128 = y;		HX_STACK_VAR(tmp128,"tmp128");
										HX_STACK_LINE(1046)
										tmp126 = -(tmp128);
									}
								}
								HX_STACK_LINE(1046)
								int tmp127 = (int(hash) & int((int)2));		HX_STACK_VAR(tmp127,"tmp127");
								HX_STACK_LINE(1046)
								bool tmp128 = (tmp127 == (int)0);		HX_STACK_VAR(tmp128,"tmp128");
								HX_STACK_LINE(1046)
								Float tmp129;		HX_STACK_VAR(tmp129,"tmp129");
								HX_STACK_LINE(1046)
								if ((tmp128)){
									HX_STACK_LINE(1046)
									bool tmp130 = (hash < (int)4);		HX_STACK_VAR(tmp130,"tmp130");
									HX_STACK_LINE(1046)
									if ((tmp130)){
										HX_STACK_LINE(1046)
										tmp129 = y;
									}
									else{
										HX_STACK_LINE(1046)
										bool tmp131 = (hash == (int)12);		HX_STACK_VAR(tmp131,"tmp131");
										HX_STACK_LINE(1046)
										if ((tmp131)){
											HX_STACK_LINE(1046)
											tmp129 = x1;
										}
										else{
											HX_STACK_LINE(1046)
											tmp129 = z1;
										}
									}
								}
								else{
									HX_STACK_LINE(1046)
									bool tmp130 = (hash < (int)4);		HX_STACK_VAR(tmp130,"tmp130");
									HX_STACK_LINE(1046)
									if ((tmp130)){
										HX_STACK_LINE(1046)
										Float tmp131 = y;		HX_STACK_VAR(tmp131,"tmp131");
										HX_STACK_LINE(1046)
										tmp129 = -(tmp131);
									}
									else{
										HX_STACK_LINE(1046)
										bool tmp131 = (hash == (int)14);		HX_STACK_VAR(tmp131,"tmp131");
										HX_STACK_LINE(1046)
										if ((tmp131)){
											HX_STACK_LINE(1046)
											Float tmp132 = x1;		HX_STACK_VAR(tmp132,"tmp132");
											HX_STACK_LINE(1046)
											tmp129 = -(tmp132);
										}
										else{
											HX_STACK_LINE(1046)
											Float tmp132 = z1;		HX_STACK_VAR(tmp132,"tmp132");
											HX_STACK_LINE(1046)
											tmp129 = -(tmp132);
										}
									}
								}
								HX_STACK_LINE(1046)
								Float tmp130 = (tmp126 + tmp129);		HX_STACK_VAR(tmp130,"tmp130");
								HX_STACK_LINE(1046)
								g3 = tmp130;
								HX_STACK_LINE(1048)
								int tmp131 = (AA + (int)1);		HX_STACK_VAR(tmp131,"tmp131");
								HX_STACK_LINE(1048)
								int tmp132 = p->__get(tmp131);		HX_STACK_VAR(tmp132,"tmp132");
								HX_STACK_LINE(1048)
								int tmp133 = (int(tmp132) & int((int)15));		HX_STACK_VAR(tmp133,"tmp133");
								HX_STACK_LINE(1048)
								hash = tmp133;
								HX_STACK_LINE(1049)
								int tmp134 = (int(hash) & int((int)1));		HX_STACK_VAR(tmp134,"tmp134");
								HX_STACK_LINE(1049)
								bool tmp135 = (tmp134 == (int)0);		HX_STACK_VAR(tmp135,"tmp135");
								HX_STACK_LINE(1049)
								Float tmp136;		HX_STACK_VAR(tmp136,"tmp136");
								HX_STACK_LINE(1049)
								if ((tmp135)){
									HX_STACK_LINE(1049)
									bool tmp137 = (hash < (int)8);		HX_STACK_VAR(tmp137,"tmp137");
									HX_STACK_LINE(1049)
									if ((tmp137)){
										HX_STACK_LINE(1049)
										tmp136 = x;
									}
									else{
										HX_STACK_LINE(1049)
										tmp136 = y;
									}
								}
								else{
									HX_STACK_LINE(1049)
									bool tmp137 = (hash < (int)8);		HX_STACK_VAR(tmp137,"tmp137");
									HX_STACK_LINE(1049)
									if ((tmp137)){
										HX_STACK_LINE(1049)
										Float tmp138 = x;		HX_STACK_VAR(tmp138,"tmp138");
										HX_STACK_LINE(1049)
										tmp136 = -(tmp138);
									}
									else{
										HX_STACK_LINE(1049)
										Float tmp138 = y;		HX_STACK_VAR(tmp138,"tmp138");
										HX_STACK_LINE(1049)
										tmp136 = -(tmp138);
									}
								}
								HX_STACK_LINE(1049)
								int tmp137 = (int(hash) & int((int)2));		HX_STACK_VAR(tmp137,"tmp137");
								HX_STACK_LINE(1049)
								bool tmp138 = (tmp137 == (int)0);		HX_STACK_VAR(tmp138,"tmp138");
								HX_STACK_LINE(1049)
								Float tmp139;		HX_STACK_VAR(tmp139,"tmp139");
								HX_STACK_LINE(1049)
								if ((tmp138)){
									HX_STACK_LINE(1049)
									bool tmp140 = (hash < (int)4);		HX_STACK_VAR(tmp140,"tmp140");
									HX_STACK_LINE(1049)
									if ((tmp140)){
										HX_STACK_LINE(1049)
										tmp139 = y;
									}
									else{
										HX_STACK_LINE(1049)
										bool tmp141 = (hash == (int)12);		HX_STACK_VAR(tmp141,"tmp141");
										HX_STACK_LINE(1049)
										if ((tmp141)){
											HX_STACK_LINE(1049)
											tmp139 = x;
										}
										else{
											HX_STACK_LINE(1049)
											tmp139 = z1;
										}
									}
								}
								else{
									HX_STACK_LINE(1049)
									bool tmp140 = (hash < (int)4);		HX_STACK_VAR(tmp140,"tmp140");
									HX_STACK_LINE(1049)
									if ((tmp140)){
										HX_STACK_LINE(1049)
										Float tmp141 = y;		HX_STACK_VAR(tmp141,"tmp141");
										HX_STACK_LINE(1049)
										tmp139 = -(tmp141);
									}
									else{
										HX_STACK_LINE(1049)
										bool tmp141 = (hash == (int)14);		HX_STACK_VAR(tmp141,"tmp141");
										HX_STACK_LINE(1049)
										if ((tmp141)){
											HX_STACK_LINE(1049)
											Float tmp142 = x;		HX_STACK_VAR(tmp142,"tmp142");
											HX_STACK_LINE(1049)
											tmp139 = -(tmp142);
										}
										else{
											HX_STACK_LINE(1049)
											Float tmp142 = z1;		HX_STACK_VAR(tmp142,"tmp142");
											HX_STACK_LINE(1049)
											tmp139 = -(tmp142);
										}
									}
								}
								HX_STACK_LINE(1049)
								Float tmp140 = (tmp136 + tmp139);		HX_STACK_VAR(tmp140,"tmp140");
								HX_STACK_LINE(1049)
								g4 = tmp140;
								HX_STACK_LINE(1051)
								int tmp141 = p->__get(BB);		HX_STACK_VAR(tmp141,"tmp141");
								HX_STACK_LINE(1051)
								int tmp142 = (int(tmp141) & int((int)15));		HX_STACK_VAR(tmp142,"tmp142");
								HX_STACK_LINE(1051)
								hash = tmp142;
								HX_STACK_LINE(1052)
								int tmp143 = (int(hash) & int((int)1));		HX_STACK_VAR(tmp143,"tmp143");
								HX_STACK_LINE(1052)
								bool tmp144 = (tmp143 == (int)0);		HX_STACK_VAR(tmp144,"tmp144");
								HX_STACK_LINE(1052)
								Float tmp145;		HX_STACK_VAR(tmp145,"tmp145");
								HX_STACK_LINE(1052)
								if ((tmp144)){
									HX_STACK_LINE(1052)
									bool tmp146 = (hash < (int)8);		HX_STACK_VAR(tmp146,"tmp146");
									HX_STACK_LINE(1052)
									if ((tmp146)){
										HX_STACK_LINE(1052)
										tmp145 = x1;
									}
									else{
										HX_STACK_LINE(1052)
										tmp145 = y1;
									}
								}
								else{
									HX_STACK_LINE(1052)
									bool tmp146 = (hash < (int)8);		HX_STACK_VAR(tmp146,"tmp146");
									HX_STACK_LINE(1052)
									if ((tmp146)){
										HX_STACK_LINE(1052)
										Float tmp147 = x1;		HX_STACK_VAR(tmp147,"tmp147");
										HX_STACK_LINE(1052)
										tmp145 = -(tmp147);
									}
									else{
										HX_STACK_LINE(1052)
										Float tmp147 = y1;		HX_STACK_VAR(tmp147,"tmp147");
										HX_STACK_LINE(1052)
										tmp145 = -(tmp147);
									}
								}
								HX_STACK_LINE(1052)
								int tmp146 = (int(hash) & int((int)2));		HX_STACK_VAR(tmp146,"tmp146");
								HX_STACK_LINE(1052)
								bool tmp147 = (tmp146 == (int)0);		HX_STACK_VAR(tmp147,"tmp147");
								HX_STACK_LINE(1052)
								Float tmp148;		HX_STACK_VAR(tmp148,"tmp148");
								HX_STACK_LINE(1052)
								if ((tmp147)){
									HX_STACK_LINE(1052)
									bool tmp149 = (hash < (int)4);		HX_STACK_VAR(tmp149,"tmp149");
									HX_STACK_LINE(1052)
									if ((tmp149)){
										HX_STACK_LINE(1052)
										tmp148 = y1;
									}
									else{
										HX_STACK_LINE(1052)
										bool tmp150 = (hash == (int)12);		HX_STACK_VAR(tmp150,"tmp150");
										HX_STACK_LINE(1052)
										if ((tmp150)){
											HX_STACK_LINE(1052)
											tmp148 = x1;
										}
										else{
											HX_STACK_LINE(1052)
											tmp148 = z;
										}
									}
								}
								else{
									HX_STACK_LINE(1052)
									bool tmp149 = (hash < (int)4);		HX_STACK_VAR(tmp149,"tmp149");
									HX_STACK_LINE(1052)
									if ((tmp149)){
										HX_STACK_LINE(1052)
										Float tmp150 = y1;		HX_STACK_VAR(tmp150,"tmp150");
										HX_STACK_LINE(1052)
										tmp148 = -(tmp150);
									}
									else{
										HX_STACK_LINE(1052)
										bool tmp150 = (hash == (int)14);		HX_STACK_VAR(tmp150,"tmp150");
										HX_STACK_LINE(1052)
										if ((tmp150)){
											HX_STACK_LINE(1052)
											Float tmp151 = x1;		HX_STACK_VAR(tmp151,"tmp151");
											HX_STACK_LINE(1052)
											tmp148 = -(tmp151);
										}
										else{
											HX_STACK_LINE(1052)
											Float tmp151 = z;		HX_STACK_VAR(tmp151,"tmp151");
											HX_STACK_LINE(1052)
											tmp148 = -(tmp151);
										}
									}
								}
								HX_STACK_LINE(1052)
								Float tmp149 = (tmp145 + tmp148);		HX_STACK_VAR(tmp149,"tmp149");
								HX_STACK_LINE(1052)
								g5 = tmp149;
								HX_STACK_LINE(1054)
								int tmp150 = p->__get(AB);		HX_STACK_VAR(tmp150,"tmp150");
								HX_STACK_LINE(1054)
								int tmp151 = (int(tmp150) & int((int)15));		HX_STACK_VAR(tmp151,"tmp151");
								HX_STACK_LINE(1054)
								hash = tmp151;
								HX_STACK_LINE(1055)
								int tmp152 = (int(hash) & int((int)1));		HX_STACK_VAR(tmp152,"tmp152");
								HX_STACK_LINE(1055)
								bool tmp153 = (tmp152 == (int)0);		HX_STACK_VAR(tmp153,"tmp153");
								HX_STACK_LINE(1055)
								Float tmp154;		HX_STACK_VAR(tmp154,"tmp154");
								HX_STACK_LINE(1055)
								if ((tmp153)){
									HX_STACK_LINE(1055)
									bool tmp155 = (hash < (int)8);		HX_STACK_VAR(tmp155,"tmp155");
									HX_STACK_LINE(1055)
									if ((tmp155)){
										HX_STACK_LINE(1055)
										tmp154 = x;
									}
									else{
										HX_STACK_LINE(1055)
										tmp154 = y1;
									}
								}
								else{
									HX_STACK_LINE(1055)
									bool tmp155 = (hash < (int)8);		HX_STACK_VAR(tmp155,"tmp155");
									HX_STACK_LINE(1055)
									if ((tmp155)){
										HX_STACK_LINE(1055)
										Float tmp156 = x;		HX_STACK_VAR(tmp156,"tmp156");
										HX_STACK_LINE(1055)
										tmp154 = -(tmp156);
									}
									else{
										HX_STACK_LINE(1055)
										Float tmp156 = y1;		HX_STACK_VAR(tmp156,"tmp156");
										HX_STACK_LINE(1055)
										tmp154 = -(tmp156);
									}
								}
								HX_STACK_LINE(1055)
								int tmp155 = (int(hash) & int((int)2));		HX_STACK_VAR(tmp155,"tmp155");
								HX_STACK_LINE(1055)
								bool tmp156 = (tmp155 == (int)0);		HX_STACK_VAR(tmp156,"tmp156");
								HX_STACK_LINE(1055)
								Float tmp157;		HX_STACK_VAR(tmp157,"tmp157");
								HX_STACK_LINE(1055)
								if ((tmp156)){
									HX_STACK_LINE(1055)
									bool tmp158 = (hash < (int)4);		HX_STACK_VAR(tmp158,"tmp158");
									HX_STACK_LINE(1055)
									if ((tmp158)){
										HX_STACK_LINE(1055)
										tmp157 = y1;
									}
									else{
										HX_STACK_LINE(1055)
										bool tmp159 = (hash == (int)12);		HX_STACK_VAR(tmp159,"tmp159");
										HX_STACK_LINE(1055)
										if ((tmp159)){
											HX_STACK_LINE(1055)
											tmp157 = x;
										}
										else{
											HX_STACK_LINE(1055)
											tmp157 = z;
										}
									}
								}
								else{
									HX_STACK_LINE(1055)
									bool tmp158 = (hash < (int)4);		HX_STACK_VAR(tmp158,"tmp158");
									HX_STACK_LINE(1055)
									if ((tmp158)){
										HX_STACK_LINE(1055)
										Float tmp159 = y1;		HX_STACK_VAR(tmp159,"tmp159");
										HX_STACK_LINE(1055)
										tmp157 = -(tmp159);
									}
									else{
										HX_STACK_LINE(1055)
										bool tmp159 = (hash == (int)14);		HX_STACK_VAR(tmp159,"tmp159");
										HX_STACK_LINE(1055)
										if ((tmp159)){
											HX_STACK_LINE(1055)
											Float tmp160 = x;		HX_STACK_VAR(tmp160,"tmp160");
											HX_STACK_LINE(1055)
											tmp157 = -(tmp160);
										}
										else{
											HX_STACK_LINE(1055)
											Float tmp160 = z;		HX_STACK_VAR(tmp160,"tmp160");
											HX_STACK_LINE(1055)
											tmp157 = -(tmp160);
										}
									}
								}
								HX_STACK_LINE(1055)
								Float tmp158 = (tmp154 + tmp157);		HX_STACK_VAR(tmp158,"tmp158");
								HX_STACK_LINE(1055)
								g6 = tmp158;
								HX_STACK_LINE(1057)
								int tmp159 = p->__get(BA);		HX_STACK_VAR(tmp159,"tmp159");
								HX_STACK_LINE(1057)
								int tmp160 = (int(tmp159) & int((int)15));		HX_STACK_VAR(tmp160,"tmp160");
								HX_STACK_LINE(1057)
								hash = tmp160;
								HX_STACK_LINE(1058)
								int tmp161 = (int(hash) & int((int)1));		HX_STACK_VAR(tmp161,"tmp161");
								HX_STACK_LINE(1058)
								bool tmp162 = (tmp161 == (int)0);		HX_STACK_VAR(tmp162,"tmp162");
								HX_STACK_LINE(1058)
								Float tmp163;		HX_STACK_VAR(tmp163,"tmp163");
								HX_STACK_LINE(1058)
								if ((tmp162)){
									HX_STACK_LINE(1058)
									bool tmp164 = (hash < (int)8);		HX_STACK_VAR(tmp164,"tmp164");
									HX_STACK_LINE(1058)
									if ((tmp164)){
										HX_STACK_LINE(1058)
										tmp163 = x1;
									}
									else{
										HX_STACK_LINE(1058)
										tmp163 = y;
									}
								}
								else{
									HX_STACK_LINE(1058)
									bool tmp164 = (hash < (int)8);		HX_STACK_VAR(tmp164,"tmp164");
									HX_STACK_LINE(1058)
									if ((tmp164)){
										HX_STACK_LINE(1058)
										Float tmp165 = x1;		HX_STACK_VAR(tmp165,"tmp165");
										HX_STACK_LINE(1058)
										tmp163 = -(tmp165);
									}
									else{
										HX_STACK_LINE(1058)
										Float tmp165 = y;		HX_STACK_VAR(tmp165,"tmp165");
										HX_STACK_LINE(1058)
										tmp163 = -(tmp165);
									}
								}
								HX_STACK_LINE(1058)
								int tmp164 = (int(hash) & int((int)2));		HX_STACK_VAR(tmp164,"tmp164");
								HX_STACK_LINE(1058)
								bool tmp165 = (tmp164 == (int)0);		HX_STACK_VAR(tmp165,"tmp165");
								HX_STACK_LINE(1058)
								Float tmp166;		HX_STACK_VAR(tmp166,"tmp166");
								HX_STACK_LINE(1058)
								if ((tmp165)){
									HX_STACK_LINE(1058)
									bool tmp167 = (hash < (int)4);		HX_STACK_VAR(tmp167,"tmp167");
									HX_STACK_LINE(1058)
									if ((tmp167)){
										HX_STACK_LINE(1058)
										tmp166 = y;
									}
									else{
										HX_STACK_LINE(1058)
										bool tmp168 = (hash == (int)12);		HX_STACK_VAR(tmp168,"tmp168");
										HX_STACK_LINE(1058)
										if ((tmp168)){
											HX_STACK_LINE(1058)
											tmp166 = x1;
										}
										else{
											HX_STACK_LINE(1058)
											tmp166 = z;
										}
									}
								}
								else{
									HX_STACK_LINE(1058)
									bool tmp167 = (hash < (int)4);		HX_STACK_VAR(tmp167,"tmp167");
									HX_STACK_LINE(1058)
									if ((tmp167)){
										HX_STACK_LINE(1058)
										Float tmp168 = y;		HX_STACK_VAR(tmp168,"tmp168");
										HX_STACK_LINE(1058)
										tmp166 = -(tmp168);
									}
									else{
										HX_STACK_LINE(1058)
										bool tmp168 = (hash == (int)14);		HX_STACK_VAR(tmp168,"tmp168");
										HX_STACK_LINE(1058)
										if ((tmp168)){
											HX_STACK_LINE(1058)
											Float tmp169 = x1;		HX_STACK_VAR(tmp169,"tmp169");
											HX_STACK_LINE(1058)
											tmp166 = -(tmp169);
										}
										else{
											HX_STACK_LINE(1058)
											Float tmp169 = z;		HX_STACK_VAR(tmp169,"tmp169");
											HX_STACK_LINE(1058)
											tmp166 = -(tmp169);
										}
									}
								}
								HX_STACK_LINE(1058)
								Float tmp167 = (tmp163 + tmp166);		HX_STACK_VAR(tmp167,"tmp167");
								HX_STACK_LINE(1058)
								g7 = tmp167;
								HX_STACK_LINE(1060)
								int tmp168 = p->__get(AA);		HX_STACK_VAR(tmp168,"tmp168");
								HX_STACK_LINE(1060)
								int tmp169 = (int(tmp168) & int((int)15));		HX_STACK_VAR(tmp169,"tmp169");
								HX_STACK_LINE(1060)
								hash = tmp169;
								HX_STACK_LINE(1061)
								int tmp170 = (int(hash) & int((int)1));		HX_STACK_VAR(tmp170,"tmp170");
								HX_STACK_LINE(1061)
								bool tmp171 = (tmp170 == (int)0);		HX_STACK_VAR(tmp171,"tmp171");
								HX_STACK_LINE(1061)
								Float tmp172;		HX_STACK_VAR(tmp172,"tmp172");
								HX_STACK_LINE(1061)
								if ((tmp171)){
									HX_STACK_LINE(1061)
									bool tmp173 = (hash < (int)8);		HX_STACK_VAR(tmp173,"tmp173");
									HX_STACK_LINE(1061)
									if ((tmp173)){
										HX_STACK_LINE(1061)
										tmp172 = x;
									}
									else{
										HX_STACK_LINE(1061)
										tmp172 = y;
									}
								}
								else{
									HX_STACK_LINE(1061)
									bool tmp173 = (hash < (int)8);		HX_STACK_VAR(tmp173,"tmp173");
									HX_STACK_LINE(1061)
									if ((tmp173)){
										HX_STACK_LINE(1061)
										Float tmp174 = x;		HX_STACK_VAR(tmp174,"tmp174");
										HX_STACK_LINE(1061)
										tmp172 = -(tmp174);
									}
									else{
										HX_STACK_LINE(1061)
										Float tmp174 = y;		HX_STACK_VAR(tmp174,"tmp174");
										HX_STACK_LINE(1061)
										tmp172 = -(tmp174);
									}
								}
								HX_STACK_LINE(1061)
								int tmp173 = (int(hash) & int((int)2));		HX_STACK_VAR(tmp173,"tmp173");
								HX_STACK_LINE(1061)
								bool tmp174 = (tmp173 == (int)0);		HX_STACK_VAR(tmp174,"tmp174");
								HX_STACK_LINE(1061)
								Float tmp175;		HX_STACK_VAR(tmp175,"tmp175");
								HX_STACK_LINE(1061)
								if ((tmp174)){
									HX_STACK_LINE(1061)
									bool tmp176 = (hash < (int)4);		HX_STACK_VAR(tmp176,"tmp176");
									HX_STACK_LINE(1061)
									if ((tmp176)){
										HX_STACK_LINE(1061)
										tmp175 = y;
									}
									else{
										HX_STACK_LINE(1061)
										bool tmp177 = (hash == (int)12);		HX_STACK_VAR(tmp177,"tmp177");
										HX_STACK_LINE(1061)
										if ((tmp177)){
											HX_STACK_LINE(1061)
											tmp175 = x;
										}
										else{
											HX_STACK_LINE(1061)
											tmp175 = z;
										}
									}
								}
								else{
									HX_STACK_LINE(1061)
									bool tmp176 = (hash < (int)4);		HX_STACK_VAR(tmp176,"tmp176");
									HX_STACK_LINE(1061)
									if ((tmp176)){
										HX_STACK_LINE(1061)
										Float tmp177 = y;		HX_STACK_VAR(tmp177,"tmp177");
										HX_STACK_LINE(1061)
										tmp175 = -(tmp177);
									}
									else{
										HX_STACK_LINE(1061)
										bool tmp177 = (hash == (int)14);		HX_STACK_VAR(tmp177,"tmp177");
										HX_STACK_LINE(1061)
										if ((tmp177)){
											HX_STACK_LINE(1061)
											Float tmp178 = x;		HX_STACK_VAR(tmp178,"tmp178");
											HX_STACK_LINE(1061)
											tmp175 = -(tmp178);
										}
										else{
											HX_STACK_LINE(1061)
											Float tmp178 = z;		HX_STACK_VAR(tmp178,"tmp178");
											HX_STACK_LINE(1061)
											tmp175 = -(tmp178);
										}
									}
								}
								HX_STACK_LINE(1061)
								Float tmp176 = (tmp172 + tmp175);		HX_STACK_VAR(tmp176,"tmp176");
								HX_STACK_LINE(1061)
								g8 = tmp176;
								HX_STACK_LINE(1063)
								Float tmp177 = u;		HX_STACK_VAR(tmp177,"tmp177");
								HX_STACK_LINE(1063)
								Float tmp178 = (g1 - g2);		HX_STACK_VAR(tmp178,"tmp178");
								HX_STACK_LINE(1063)
								Float tmp179 = (tmp177 * tmp178);		HX_STACK_VAR(tmp179,"tmp179");
								HX_STACK_LINE(1063)
								hx::AddEq(g2,tmp179);
								HX_STACK_LINE(1064)
								Float tmp180 = u;		HX_STACK_VAR(tmp180,"tmp180");
								HX_STACK_LINE(1064)
								Float tmp181 = (g3 - g4);		HX_STACK_VAR(tmp181,"tmp181");
								HX_STACK_LINE(1064)
								Float tmp182 = (tmp180 * tmp181);		HX_STACK_VAR(tmp182,"tmp182");
								HX_STACK_LINE(1064)
								hx::AddEq(g4,tmp182);
								HX_STACK_LINE(1065)
								Float tmp183 = u;		HX_STACK_VAR(tmp183,"tmp183");
								HX_STACK_LINE(1065)
								Float tmp184 = (g5 - g6);		HX_STACK_VAR(tmp184,"tmp184");
								HX_STACK_LINE(1065)
								Float tmp185 = (tmp183 * tmp184);		HX_STACK_VAR(tmp185,"tmp185");
								HX_STACK_LINE(1065)
								hx::AddEq(g6,tmp185);
								HX_STACK_LINE(1066)
								Float tmp186 = u;		HX_STACK_VAR(tmp186,"tmp186");
								HX_STACK_LINE(1066)
								Float tmp187 = (g7 - g8);		HX_STACK_VAR(tmp187,"tmp187");
								HX_STACK_LINE(1066)
								Float tmp188 = (tmp186 * tmp187);		HX_STACK_VAR(tmp188,"tmp188");
								HX_STACK_LINE(1066)
								hx::AddEq(g8,tmp188);
								HX_STACK_LINE(1068)
								Float tmp189 = v;		HX_STACK_VAR(tmp189,"tmp189");
								HX_STACK_LINE(1068)
								Float tmp190 = (g2 - g4);		HX_STACK_VAR(tmp190,"tmp190");
								HX_STACK_LINE(1068)
								Float tmp191 = (tmp189 * tmp190);		HX_STACK_VAR(tmp191,"tmp191");
								HX_STACK_LINE(1068)
								hx::AddEq(g4,tmp191);
								HX_STACK_LINE(1069)
								Float tmp192 = v;		HX_STACK_VAR(tmp192,"tmp192");
								HX_STACK_LINE(1069)
								Float tmp193 = (g6 - g8);		HX_STACK_VAR(tmp193,"tmp193");
								HX_STACK_LINE(1069)
								Float tmp194 = (tmp192 * tmp193);		HX_STACK_VAR(tmp194,"tmp194");
								HX_STACK_LINE(1069)
								hx::AddEq(g8,tmp194);
								HX_STACK_LINE(1071)
								Float tmp195 = g8;		HX_STACK_VAR(tmp195,"tmp195");
								HX_STACK_LINE(1071)
								Float tmp196 = w;		HX_STACK_VAR(tmp196,"tmp196");
								HX_STACK_LINE(1071)
								Float tmp197 = (g4 - g8);		HX_STACK_VAR(tmp197,"tmp197");
								HX_STACK_LINE(1071)
								Float tmp198 = (tmp196 * tmp197);		HX_STACK_VAR(tmp198,"tmp198");
								HX_STACK_LINE(1071)
								Float tmp199 = (tmp195 + tmp198);		HX_STACK_VAR(tmp199,"tmp199");
								HX_STACK_LINE(1071)
								Float tmp200 = fPers;		HX_STACK_VAR(tmp200,"tmp200");
								HX_STACK_LINE(1071)
								Float tmp201 = (tmp199 * tmp200);		HX_STACK_VAR(tmp201,"tmp201");
								HX_STACK_LINE(1071)
								hx::AddEq(s,tmp201);
							}
						}
						HX_STACK_LINE(1075)
						Float tmp24 = s;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(1075)
						Float tmp25 = this->fPersMax;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(1075)
						Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(1075)
						Float tmp27 = (tmp26 + (int)1);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(1075)
						Float tmp28 = (tmp27 * (int)128);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(1075)
						int tmp29 = ::Std_obj::_int(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(1075)
						color = tmp29;
						HX_STACK_LINE(1076)
						int tmp30 = (int(color) << int((int)16));		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(1076)
						int tmp31 = (int((int)-16777216) | int(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(1076)
						int tmp32 = (int(color) << int((int)8));		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(1076)
						int tmp33 = (int(tmp31) | int(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(1076)
						int tmp34 = color;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(1076)
						int tmp35 = (int(tmp33) | int(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(1076)
						pixel = tmp35;
						HX_STACK_LINE(1078)
						int tmp36 = px;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(1078)
						int tmp37 = py;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(1078)
						int tmp38 = pixel;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(1078)
						bitmap->setPixel32(tmp36,tmp37,tmp38);
						HX_STACK_LINE(1080)
						Float tmp39 = this->baseFactor;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(1080)
						hx::AddEq(_x,tmp39);
					}
				}
				HX_STACK_LINE(1084)
				Float tmp21 = this->baseFactor;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1084)
				hx::AddEq(_y,tmp21);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(OptimizedPerlin_obj,fill,(void))

Void OptimizedPerlin_obj::octFreqPers( Float fPersistence){
{
		HX_STACK_FRAME("openfl._legacy.display.OptimizedPerlin","octFreqPers",0xaeeba70b,"openfl._legacy.display.OptimizedPerlin.octFreqPers","openfl/_legacy/display/BitmapData.hx",1091,0x0b92a012)
		HX_STACK_THIS(this)
		HX_STACK_ARG(fPersistence,"fPersistence")
		HX_STACK_LINE(1093)
		Float fFreq;		HX_STACK_VAR(fFreq,"fFreq");
		HX_STACK_LINE(1093)
		Float fPers;		HX_STACK_VAR(fPers,"fPers");
		HX_STACK_LINE(1095)
		this->aOctFreq = Array_obj< Float >::__new();
		HX_STACK_LINE(1096)
		this->aOctPers = Array_obj< Float >::__new();
		HX_STACK_LINE(1097)
		this->fPersMax = (int)0;
		HX_STACK_LINE(1099)
		{
			HX_STACK_LINE(1099)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1099)
			int tmp = this->octaves;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1099)
			int _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1099)
			while((true)){
				HX_STACK_LINE(1099)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1099)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1099)
				if ((tmp2)){
					HX_STACK_LINE(1099)
					break;
				}
				HX_STACK_LINE(1099)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1099)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1101)
				int tmp4 = i;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1101)
				Float tmp5 = ::Math_obj::pow((int)2,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1101)
				fFreq = tmp5;
				HX_STACK_LINE(1102)
				Float tmp6 = fPersistence;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1102)
				int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1102)
				Float tmp8 = ::Math_obj::pow(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1102)
				fPers = tmp8;
				HX_STACK_LINE(1103)
				hx::AddEq(this->fPersMax,fPers);
				HX_STACK_LINE(1104)
				Float tmp9 = fFreq;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1104)
				this->aOctFreq->push(tmp9);
				HX_STACK_LINE(1105)
				Float tmp10 = fPers;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1105)
				this->aOctPers->push(tmp10);
			}
		}
		HX_STACK_LINE(1109)
		Float tmp = this->fPersMax;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1109)
		Float tmp1 = (Float((int)1) / Float(tmp));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1109)
		this->fPersMax = tmp1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(OptimizedPerlin_obj,octFreqPers,(void))

Void OptimizedPerlin_obj::seedOffset( int iSeed){
{
		HX_STACK_FRAME("openfl._legacy.display.OptimizedPerlin","seedOffset",0xad5c4a47,"openfl._legacy.display.OptimizedPerlin.seedOffset","openfl/_legacy/display/BitmapData.hx",1114,0x0b92a012)
		HX_STACK_THIS(this)
		HX_STACK_ARG(iSeed,"iSeed")
		HX_STACK_LINE(1116)
		Float tmp = (iSeed * ((Float)16807.));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1116)
		Float tmp1 = hx::Mod(tmp,(int)2147483647);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1116)
		int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1116)
		int tmp3 = iSeed = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1116)
		this->iXoffset = tmp3;
		HX_STACK_LINE(1117)
		Float tmp4 = (iSeed * ((Float)16807.));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1117)
		Float tmp5 = hx::Mod(tmp4,(int)2147483647);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1117)
		int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1117)
		int tmp7 = iSeed = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1117)
		this->iYoffset = tmp7;
		HX_STACK_LINE(1118)
		Float tmp8 = (iSeed * ((Float)16807.));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1118)
		Float tmp9 = hx::Mod(tmp8,(int)2147483647);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1118)
		int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1118)
		int tmp11 = iSeed = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1118)
		this->iZoffset = tmp11;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(OptimizedPerlin_obj,seedOffset,(void))

Array< int > OptimizedPerlin_obj::P;


OptimizedPerlin_obj::OptimizedPerlin_obj()
{
}

void OptimizedPerlin_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OptimizedPerlin);
	HX_MARK_MEMBER_NAME(octaves,"octaves");
	HX_MARK_MEMBER_NAME(aOctFreq,"aOctFreq");
	HX_MARK_MEMBER_NAME(aOctPers,"aOctPers");
	HX_MARK_MEMBER_NAME(fPersMax,"fPersMax");
	HX_MARK_MEMBER_NAME(iXoffset,"iXoffset");
	HX_MARK_MEMBER_NAME(iYoffset,"iYoffset");
	HX_MARK_MEMBER_NAME(iZoffset,"iZoffset");
	HX_MARK_MEMBER_NAME(baseFactor,"baseFactor");
	HX_MARK_END_CLASS();
}

void OptimizedPerlin_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(octaves,"octaves");
	HX_VISIT_MEMBER_NAME(aOctFreq,"aOctFreq");
	HX_VISIT_MEMBER_NAME(aOctPers,"aOctPers");
	HX_VISIT_MEMBER_NAME(fPersMax,"fPersMax");
	HX_VISIT_MEMBER_NAME(iXoffset,"iXoffset");
	HX_VISIT_MEMBER_NAME(iYoffset,"iYoffset");
	HX_VISIT_MEMBER_NAME(iZoffset,"iZoffset");
	HX_VISIT_MEMBER_NAME(baseFactor,"baseFactor");
}

Dynamic OptimizedPerlin_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"fill") ) { return fill_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"octaves") ) { return octaves; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"aOctFreq") ) { return aOctFreq; }
		if (HX_FIELD_EQ(inName,"aOctPers") ) { return aOctPers; }
		if (HX_FIELD_EQ(inName,"fPersMax") ) { return fPersMax; }
		if (HX_FIELD_EQ(inName,"iXoffset") ) { return iXoffset; }
		if (HX_FIELD_EQ(inName,"iYoffset") ) { return iYoffset; }
		if (HX_FIELD_EQ(inName,"iZoffset") ) { return iZoffset; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"baseFactor") ) { return baseFactor; }
		if (HX_FIELD_EQ(inName,"seedOffset") ) { return seedOffset_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"octFreqPers") ) { return octFreqPers_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool OptimizedPerlin_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"P") ) { outValue = P; return true;  }
	}
	return false;
}

Dynamic OptimizedPerlin_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"octaves") ) { octaves=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"aOctFreq") ) { aOctFreq=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"aOctPers") ) { aOctPers=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fPersMax") ) { fPersMax=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"iXoffset") ) { iXoffset=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"iYoffset") ) { iYoffset=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"iZoffset") ) { iZoffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"baseFactor") ) { baseFactor=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool OptimizedPerlin_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"P") ) { P=ioValue.Cast< Array< int > >(); return true; }
	}
	return false;
}

void OptimizedPerlin_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("octaves","\x83","\x15","\x16","\xa8"));
	outFields->push(HX_HCSTRING("aOctFreq","\x57","\xaf","\xa8","\x0f"));
	outFields->push(HX_HCSTRING("aOctPers","\x95","\xff","\x3a","\x16"));
	outFields->push(HX_HCSTRING("fPersMax","\x88","\x73","\xc6","\x1a"));
	outFields->push(HX_HCSTRING("iXoffset","\xa2","\x38","\x51","\x21"));
	outFields->push(HX_HCSTRING("iYoffset","\x63","\xaf","\xe6","\x4a"));
	outFields->push(HX_HCSTRING("iZoffset","\x24","\x26","\x7c","\x74"));
	outFields->push(HX_HCSTRING("baseFactor","\xc0","\xd7","\x3d","\xbc"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(OptimizedPerlin_obj,octaves),HX_HCSTRING("octaves","\x83","\x15","\x16","\xa8")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(OptimizedPerlin_obj,aOctFreq),HX_HCSTRING("aOctFreq","\x57","\xaf","\xa8","\x0f")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(OptimizedPerlin_obj,aOctPers),HX_HCSTRING("aOctPers","\x95","\xff","\x3a","\x16")},
	{hx::fsFloat,(int)offsetof(OptimizedPerlin_obj,fPersMax),HX_HCSTRING("fPersMax","\x88","\x73","\xc6","\x1a")},
	{hx::fsFloat,(int)offsetof(OptimizedPerlin_obj,iXoffset),HX_HCSTRING("iXoffset","\xa2","\x38","\x51","\x21")},
	{hx::fsFloat,(int)offsetof(OptimizedPerlin_obj,iYoffset),HX_HCSTRING("iYoffset","\x63","\xaf","\xe6","\x4a")},
	{hx::fsFloat,(int)offsetof(OptimizedPerlin_obj,iZoffset),HX_HCSTRING("iZoffset","\x24","\x26","\x7c","\x74")},
	{hx::fsFloat,(int)offsetof(OptimizedPerlin_obj,baseFactor),HX_HCSTRING("baseFactor","\xc0","\xd7","\x3d","\xbc")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Array< int >*/ ,(void *) &OptimizedPerlin_obj::P,HX_HCSTRING("P","\x50","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("octaves","\x83","\x15","\x16","\xa8"),
	HX_HCSTRING("aOctFreq","\x57","\xaf","\xa8","\x0f"),
	HX_HCSTRING("aOctPers","\x95","\xff","\x3a","\x16"),
	HX_HCSTRING("fPersMax","\x88","\x73","\xc6","\x1a"),
	HX_HCSTRING("iXoffset","\xa2","\x38","\x51","\x21"),
	HX_HCSTRING("iYoffset","\x63","\xaf","\xe6","\x4a"),
	HX_HCSTRING("iZoffset","\x24","\x26","\x7c","\x74"),
	HX_HCSTRING("baseFactor","\xc0","\xd7","\x3d","\xbc"),
	HX_HCSTRING("fill","\x83","\xce","\xbb","\x43"),
	HX_HCSTRING("octFreqPers","\xce","\x9e","\x7b","\xa2"),
	HX_HCSTRING("seedOffset","\xe4","\xbb","\xcf","\xfe"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OptimizedPerlin_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(OptimizedPerlin_obj::P,"P");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OptimizedPerlin_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(OptimizedPerlin_obj::P,"P");
};

#endif

hx::Class OptimizedPerlin_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("P","\x50","\x00","\x00","\x00"),
	::String(null()) };

void OptimizedPerlin_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.display.OptimizedPerlin","\x2b","\xc1","\x97","\xdf");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &OptimizedPerlin_obj::__GetStatic;
	__mClass->mSetStaticField = &OptimizedPerlin_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< OptimizedPerlin_obj >;
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

void OptimizedPerlin_obj::__boot()
{
	P= Array_obj< int >::__new().Add((int)151).Add((int)160).Add((int)137).Add((int)91).Add((int)90).Add((int)15).Add((int)131).Add((int)13).Add((int)201).Add((int)95).Add((int)96).Add((int)53).Add((int)194).Add((int)233).Add((int)7).Add((int)225).Add((int)140).Add((int)36).Add((int)103).Add((int)30).Add((int)69).Add((int)142).Add((int)8).Add((int)99).Add((int)37).Add((int)240).Add((int)21).Add((int)10).Add((int)23).Add((int)190).Add((int)6).Add((int)148).Add((int)247).Add((int)120).Add((int)234).Add((int)75).Add((int)0).Add((int)26).Add((int)197).Add((int)62).Add((int)94).Add((int)252).Add((int)219).Add((int)203).Add((int)117).Add((int)35).Add((int)11).Add((int)32).Add((int)57).Add((int)177).Add((int)33).Add((int)88).Add((int)237).Add((int)149).Add((int)56).Add((int)87).Add((int)174).Add((int)20).Add((int)125).Add((int)136).Add((int)171).Add((int)168).Add((int)68).Add((int)175).Add((int)74).Add((int)165).Add((int)71).Add((int)134).Add((int)139).Add((int)48).Add((int)27).Add((int)166).Add((int)77).Add((int)146).Add((int)158).Add((int)231).Add((int)83).Add((int)111).Add((int)229).Add((int)122).Add((int)60).Add((int)211).Add((int)133).Add((int)230).Add((int)220).Add((int)105).Add((int)92).Add((int)41).Add((int)55).Add((int)46).Add((int)245).Add((int)40).Add((int)244).Add((int)102).Add((int)143).Add((int)54).Add((int)65).Add((int)25).Add((int)63).Add((int)161).Add((int)1).Add((int)216).Add((int)80).Add((int)73).Add((int)209).Add((int)76).Add((int)132).Add((int)187).Add((int)208).Add((int)89).Add((int)18).Add((int)169).Add((int)200).Add((int)196).Add((int)135).Add((int)130).Add((int)116).Add((int)188).Add((int)159).Add((int)86).Add((int)164).Add((int)100).Add((int)109).Add((int)198).Add((int)173).Add((int)186).Add((int)3).Add((int)64).Add((int)52).Add((int)217).Add((int)226).Add((int)250).Add((int)124).Add((int)123).Add((int)5).Add((int)202).Add((int)38).Add((int)147).Add((int)118).Add((int)126).Add((int)255).Add((int)82).Add((int)85).Add((int)212).Add((int)207).Add((int)206).Add((int)59).Add((int)227).Add((int)47).Add((int)16).Add((int)58).Add((int)17).Add((int)182).Add((int)189).Add((int)28).Add((int)42).Add((int)223).Add((int)183).Add((int)170).Add((int)213).Add((int)119).Add((int)248).Add((int)152).Add((int)2).Add((int)44).Add((int)154).Add((int)163).Add((int)70).Add((int)221).Add((int)153).Add((int)101).Add((int)155).Add((int)167).Add((int)43).Add((int)172).Add((int)9).Add((int)129).Add((int)22).Add((int)39).Add((int)253).Add((int)19).Add((int)98).Add((int)108).Add((int)110).Add((int)79).Add((int)113).Add((int)224).Add((int)232).Add((int)178).Add((int)185).Add((int)112).Add((int)104).Add((int)218).Add((int)246).Add((int)97).Add((int)228).Add((int)251).Add((int)34).Add((int)242).Add((int)193).Add((int)238).Add((int)210).Add((int)144).Add((int)12).Add((int)191).Add((int)179).Add((int)162).Add((int)241).Add((int)81).Add((int)51).Add((int)145).Add((int)235).Add((int)249).Add((int)14).Add((int)239).Add((int)107).Add((int)49).Add((int)192).Add((int)214).Add((int)31).Add((int)181).Add((int)199).Add((int)106).Add((int)157).Add((int)184).Add((int)84).Add((int)204).Add((int)176).Add((int)115).Add((int)121).Add((int)50).Add((int)45).Add((int)127).Add((int)4).Add((int)150).Add((int)254).Add((int)138).Add((int)236).Add((int)205).Add((int)93).Add((int)222).Add((int)114).Add((int)67).Add((int)29).Add((int)24).Add((int)72).Add((int)243).Add((int)141).Add((int)128).Add((int)195).Add((int)78).Add((int)66).Add((int)215).Add((int)61).Add((int)156).Add((int)180).Add((int)151).Add((int)160).Add((int)137).Add((int)91).Add((int)90).Add((int)15).Add((int)131).Add((int)13).Add((int)201).Add((int)95).Add((int)96).Add((int)53).Add((int)194).Add((int)233).Add((int)7).Add((int)225).Add((int)140).Add((int)36).Add((int)103).Add((int)30).Add((int)69).Add((int)142).Add((int)8).Add((int)99).Add((int)37).Add((int)240).Add((int)21).Add((int)10).Add((int)23).Add((int)190).Add((int)6).Add((int)148).Add((int)247).Add((int)120).Add((int)234).Add((int)75).Add((int)0).Add((int)26).Add((int)197).Add((int)62).Add((int)94).Add((int)252).Add((int)219).Add((int)203).Add((int)117).Add((int)35).Add((int)11).Add((int)32).Add((int)57).Add((int)177).Add((int)33).Add((int)88).Add((int)237).Add((int)149).Add((int)56).Add((int)87).Add((int)174).Add((int)20).Add((int)125).Add((int)136).Add((int)171).Add((int)168).Add((int)68).Add((int)175).Add((int)74).Add((int)165).Add((int)71).Add((int)134).Add((int)139).Add((int)48).Add((int)27).Add((int)166).Add((int)77).Add((int)146).Add((int)158).Add((int)231).Add((int)83).Add((int)111).Add((int)229).Add((int)122).Add((int)60).Add((int)211).Add((int)133).Add((int)230).Add((int)220).Add((int)105).Add((int)92).Add((int)41).Add((int)55).Add((int)46).Add((int)245).Add((int)40).Add((int)244).Add((int)102).Add((int)143).Add((int)54).Add((int)65).Add((int)25).Add((int)63).Add((int)161).Add((int)1).Add((int)216).Add((int)80).Add((int)73).Add((int)209).Add((int)76).Add((int)132).Add((int)187).Add((int)208).Add((int)89).Add((int)18).Add((int)169).Add((int)200).Add((int)196).Add((int)135).Add((int)130).Add((int)116).Add((int)188).Add((int)159).Add((int)86).Add((int)164).Add((int)100).Add((int)109).Add((int)198).Add((int)173).Add((int)186).Add((int)3).Add((int)64).Add((int)52).Add((int)217).Add((int)226).Add((int)250).Add((int)124).Add((int)123).Add((int)5).Add((int)202).Add((int)38).Add((int)147).Add((int)118).Add((int)126).Add((int)255).Add((int)82).Add((int)85).Add((int)212).Add((int)207).Add((int)206).Add((int)59).Add((int)227).Add((int)47).Add((int)16).Add((int)58).Add((int)17).Add((int)182).Add((int)189).Add((int)28).Add((int)42).Add((int)223).Add((int)183).Add((int)170).Add((int)213).Add((int)119).Add((int)248).Add((int)152).Add((int)2).Add((int)44).Add((int)154).Add((int)163).Add((int)70).Add((int)221).Add((int)153).Add((int)101).Add((int)155).Add((int)167).Add((int)43).Add((int)172).Add((int)9).Add((int)129).Add((int)22).Add((int)39).Add((int)253).Add((int)19).Add((int)98).Add((int)108).Add((int)110).Add((int)79).Add((int)113).Add((int)224).Add((int)232).Add((int)178).Add((int)185).Add((int)112).Add((int)104).Add((int)218).Add((int)246).Add((int)97).Add((int)228).Add((int)251).Add((int)34).Add((int)242).Add((int)193).Add((int)238).Add((int)210).Add((int)144).Add((int)12).Add((int)191).Add((int)179).Add((int)162).Add((int)241).Add((int)81).Add((int)51).Add((int)145).Add((int)235).Add((int)249).Add((int)14).Add((int)239).Add((int)107).Add((int)49).Add((int)192).Add((int)214).Add((int)31).Add((int)181).Add((int)199).Add((int)106).Add((int)157).Add((int)184).Add((int)84).Add((int)204).Add((int)176).Add((int)115).Add((int)121).Add((int)50).Add((int)45).Add((int)127).Add((int)4).Add((int)150).Add((int)254).Add((int)138).Add((int)236).Add((int)205).Add((int)93).Add((int)222).Add((int)114).Add((int)67).Add((int)29).Add((int)24).Add((int)72).Add((int)243).Add((int)141).Add((int)128).Add((int)195).Add((int)78).Add((int)66).Add((int)215).Add((int)61).Add((int)156).Add((int)180);
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace display
