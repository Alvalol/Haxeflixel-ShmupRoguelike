#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED__List_ListIterator
#include <_List/ListIterator.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Serializer
#include <haxe/Serializer.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
namespace haxe{

Void Serializer_obj::__construct()
{
HX_STACK_FRAME("haxe.Serializer","new",0xcdbbc7ec,"haxe.Serializer.new","C:\\HaxeToolkit\\haxe\\std/haxe/Serializer.hx",100,0xfce2327c)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(101)
	::StringBuf tmp = ::StringBuf_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(101)
	this->buf = tmp;
	HX_STACK_LINE(102)
	this->cache = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(103)
	bool tmp1 = ::haxe::Serializer_obj::USE_CACHE;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(103)
	this->useCache = tmp1;
	HX_STACK_LINE(104)
	bool tmp2 = ::haxe::Serializer_obj::USE_ENUM_INDEX;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(104)
	this->useEnumIndex = tmp2;
	HX_STACK_LINE(105)
	::haxe::ds::StringMap tmp3 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(105)
	this->shash = tmp3;
	HX_STACK_LINE(106)
	this->scount = (int)0;
}
;
	return null();
}

//Serializer_obj::~Serializer_obj() { }

Dynamic Serializer_obj::__CreateEmpty() { return  new Serializer_obj; }
hx::ObjectPtr< Serializer_obj > Serializer_obj::__new()
{  hx::ObjectPtr< Serializer_obj > _result_ = new Serializer_obj();
	_result_->__construct();
	return _result_;}

Dynamic Serializer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Serializer_obj > _result_ = new Serializer_obj();
	_result_->__construct();
	return _result_;}

::String Serializer_obj::toString( ){
	HX_STACK_FRAME("haxe.Serializer","toString",0x95bdfda0,"haxe.Serializer.toString","C:\\HaxeToolkit\\haxe\\std/haxe/Serializer.hx",115,0xfce2327c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(116)
	::StringBuf tmp = this->buf;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(116)
	::String tmp1 = tmp->b->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(116)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Serializer_obj,toString,return )

Void Serializer_obj::serializeString( ::String s){
{
		HX_STACK_FRAME("haxe.Serializer","serializeString",0xd565bc5d,"haxe.Serializer.serializeString","C:\\HaxeToolkit\\haxe\\std/haxe/Serializer.hx",152,0xfce2327c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(153)
		::haxe::ds::StringMap tmp = this->shash;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(153)
		::String tmp1 = s;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(153)
		Dynamic tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(153)
		Dynamic x = tmp2;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(154)
		bool tmp3 = (x != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(154)
		if ((tmp3)){
			HX_STACK_LINE(155)
			::StringBuf tmp4 = this->buf;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(155)
			tmp4->add(HX_HCSTRING("R","\x52","\x00","\x00","\x00"));
			HX_STACK_LINE(156)
			::StringBuf tmp5 = this->buf;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(156)
			Dynamic tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(156)
			tmp5->add(tmp6);
			HX_STACK_LINE(157)
			return null();
		}
		HX_STACK_LINE(159)
		::haxe::ds::StringMap tmp4 = this->shash;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(159)
		::String tmp5 = s;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(159)
		int tmp6 = (this->scount)++;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(159)
		tmp4->set(tmp5,tmp6);
		HX_STACK_LINE(164)
		::StringBuf tmp7 = this->buf;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(164)
		tmp7->add(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
		HX_STACK_LINE(165)
		::String tmp8 = s;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(165)
		::String tmp9 = ::StringTools_obj::urlEncode(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(165)
		s = tmp9;
		HX_STACK_LINE(166)
		::StringBuf tmp10 = this->buf;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(166)
		int tmp11 = s.length;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(166)
		tmp10->add(tmp11);
		HX_STACK_LINE(167)
		::StringBuf tmp12 = this->buf;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(167)
		tmp12->add(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));
		HX_STACK_LINE(168)
		::StringBuf tmp13 = this->buf;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(168)
		::String tmp14 = s;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(168)
		tmp13->add(tmp14);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Serializer_obj,serializeString,(void))

bool Serializer_obj::serializeRef( Dynamic v){
	HX_STACK_FRAME("haxe.Serializer","serializeRef",0x0b8ed647,"haxe.Serializer.serializeRef","C:\\HaxeToolkit\\haxe\\std/haxe/Serializer.hx",171,0xfce2327c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(175)
	{
		HX_STACK_LINE(175)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(175)
		int tmp = this->cache->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(175)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(175)
		while((true)){
			HX_STACK_LINE(175)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(175)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(175)
			if ((tmp2)){
				HX_STACK_LINE(175)
				break;
			}
			HX_STACK_LINE(175)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(175)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(180)
			Dynamic tmp4 = this->cache->__GetItem(i);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(180)
			Dynamic tmp5 = v;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(180)
			bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(180)
			if ((tmp6)){
				HX_STACK_LINE(182)
				::StringBuf tmp7 = this->buf;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(182)
				tmp7->add(HX_HCSTRING("r","\x72","\x00","\x00","\x00"));
				HX_STACK_LINE(183)
				::StringBuf tmp8 = this->buf;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(183)
				int tmp9 = i;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(183)
				tmp8->add(tmp9);
				HX_STACK_LINE(184)
				return true;
			}
		}
	}
	HX_STACK_LINE(187)
	Dynamic tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(187)
	this->cache->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
	HX_STACK_LINE(188)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Serializer_obj,serializeRef,return )

Void Serializer_obj::serializeFields( Dynamic v){
{
		HX_STACK_FRAME("haxe.Serializer","serializeFields",0x44c42205,"haxe.Serializer.serializeFields","C:\\HaxeToolkit\\haxe\\std/haxe/Serializer.hx",208,0xfce2327c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(209)
		{
			HX_STACK_LINE(209)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(209)
			Dynamic tmp = v;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(209)
			Array< ::String > _g1 = ::Reflect_obj::fields(tmp);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(209)
			while((true)){
				HX_STACK_LINE(209)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(209)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(209)
				if ((tmp2)){
					HX_STACK_LINE(209)
					break;
				}
				HX_STACK_LINE(209)
				::String tmp3 = _g1->__get(_g);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(209)
				::String f = tmp3;		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(209)
				++(_g);
				HX_STACK_LINE(210)
				::String tmp4 = f;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(210)
				this->serializeString(tmp4);
				HX_STACK_LINE(211)
				Dynamic tmp5 = v;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(211)
				::String tmp6 = f;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(211)
				Dynamic tmp7 = ::Reflect_obj::field(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(211)
				this->serialize(tmp7);
			}
		}
		HX_STACK_LINE(213)
		::StringBuf tmp = this->buf;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(213)
		tmp->add(HX_HCSTRING("g","\x67","\x00","\x00","\x00"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Serializer_obj,serializeFields,(void))

Void Serializer_obj::serialize( Dynamic v){
{
		HX_STACK_FRAME("haxe.Serializer","serialize",0x3cea866c,"haxe.Serializer.serialize","C:\\HaxeToolkit\\haxe\\std/haxe/Serializer.hx",227,0xfce2327c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(227)
		{
			HX_STACK_LINE(227)
			Dynamic tmp = v;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(227)
			::ValueType tmp1 = ::Type_obj::_typeof(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(227)
			::ValueType _g = tmp1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(227)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(229)
					::StringBuf tmp2 = this->buf;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(229)
					tmp2->add(HX_HCSTRING("n","\x6e","\x00","\x00","\x00"));
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(231)
					int v1 = v;		HX_STACK_VAR(v1,"v1");
					HX_STACK_LINE(232)
					bool tmp2 = (v1 == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(232)
					if ((tmp2)){
						HX_STACK_LINE(233)
						::StringBuf tmp3 = this->buf;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(233)
						tmp3->add(HX_HCSTRING("z","\x7a","\x00","\x00","\x00"));
						HX_STACK_LINE(234)
						return null();
					}
					HX_STACK_LINE(236)
					::StringBuf tmp3 = this->buf;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(236)
					tmp3->add(HX_HCSTRING("i","\x69","\x00","\x00","\x00"));
					HX_STACK_LINE(237)
					::StringBuf tmp4 = this->buf;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(237)
					int tmp5 = v1;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(237)
					tmp4->add(tmp5);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(239)
					Float v1 = v;		HX_STACK_VAR(v1,"v1");
					HX_STACK_LINE(240)
					Float tmp2 = v1;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(240)
					bool tmp3 = ::Math_obj::isNaN(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(240)
					if ((tmp3)){
						HX_STACK_LINE(241)
						::StringBuf tmp4 = this->buf;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(241)
						tmp4->add(HX_HCSTRING("k","\x6b","\x00","\x00","\x00"));
					}
					else{
						HX_STACK_LINE(242)
						Float tmp4 = v1;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(242)
						bool tmp5 = ::Math_obj::isFinite(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(242)
						bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(242)
						if ((tmp6)){
							HX_STACK_LINE(243)
							::StringBuf tmp7 = this->buf;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(243)
							bool tmp8 = (v1 < (int)0);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(243)
							::String tmp9;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(243)
							if ((tmp8)){
								HX_STACK_LINE(243)
								tmp9 = HX_HCSTRING("m","\x6d","\x00","\x00","\x00");
							}
							else{
								HX_STACK_LINE(243)
								tmp9 = HX_HCSTRING("p","\x70","\x00","\x00","\x00");
							}
							HX_STACK_LINE(243)
							tmp7->add(tmp9);
						}
						else{
							HX_STACK_LINE(245)
							::StringBuf tmp7 = this->buf;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(245)
							tmp7->add(HX_HCSTRING("d","\x64","\x00","\x00","\x00"));
							HX_STACK_LINE(246)
							::StringBuf tmp8 = this->buf;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(246)
							Float tmp9 = v1;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(246)
							tmp8->add(tmp9);
						}
					}
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(249)
					::StringBuf tmp2 = this->buf;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(249)
					Dynamic tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(249)
					::String tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(249)
					if ((tmp3)){
						HX_STACK_LINE(249)
						tmp4 = HX_HCSTRING("t","\x74","\x00","\x00","\x00");
					}
					else{
						HX_STACK_LINE(249)
						tmp4 = HX_HCSTRING("f","\x66","\x00","\x00","\x00");
					}
					HX_STACK_LINE(249)
					tmp2->add(tmp4);
				}
				;break;
				case (int)6: {
					HX_STACK_LINE(227)
					::hx::Class tmp2 = (::ValueType(_g))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(227)
					::hx::Class c = tmp2;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(250)
					{
						HX_STACK_LINE(251)
						bool tmp3 = (c == hx::ClassOf< ::String >());		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(251)
						if ((tmp3)){
							HX_STACK_LINE(252)
							Dynamic tmp4 = v;		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(252)
							this->serializeString(tmp4);
							HX_STACK_LINE(253)
							return null();
						}
						HX_STACK_LINE(255)
						bool tmp4 = this->useCache;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(255)
						bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(255)
						if ((tmp4)){
							HX_STACK_LINE(255)
							Dynamic tmp6 = v;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(255)
							Dynamic tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(255)
							tmp5 = this->serializeRef(tmp7);
						}
						else{
							HX_STACK_LINE(255)
							tmp5 = false;
						}
						HX_STACK_LINE(255)
						if ((tmp5)){
							HX_STACK_LINE(256)
							return null();
						}
						HX_STACK_LINE(257)
						::hx::Class tmp6 = c;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(257)
						::hx::Class _switch_1 = (tmp6);
						if (  ( _switch_1==hx::ClassOf< Array<int> >())){
							HX_STACK_LINE(259)
							int ucount = (int)0;		HX_STACK_VAR(ucount,"ucount");
							HX_STACK_LINE(260)
							::StringBuf tmp7 = this->buf;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(260)
							tmp7->add(HX_HCSTRING("a","\x61","\x00","\x00","\x00"));
							HX_STACK_LINE(264)
							Dynamic tmp8 = v->__length();		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(264)
							int l = tmp8;		HX_STACK_VAR(l,"l");
							HX_STACK_LINE(265)
							{
								HX_STACK_LINE(265)
								int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(265)
								while((true)){
									HX_STACK_LINE(265)
									bool tmp9 = (_g1 < l);		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(265)
									bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(265)
									if ((tmp10)){
										HX_STACK_LINE(265)
										break;
									}
									HX_STACK_LINE(265)
									int tmp11 = (_g1)++;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(265)
									int i = tmp11;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(266)
									Dynamic tmp12 = v->__GetItem(i);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(266)
									bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(266)
									if ((tmp13)){
										HX_STACK_LINE(267)
										(ucount)++;
									}
									else{
										HX_STACK_LINE(269)
										bool tmp14 = (ucount > (int)0);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(269)
										if ((tmp14)){
											HX_STACK_LINE(270)
											bool tmp15 = (ucount == (int)1);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(270)
											if ((tmp15)){
												HX_STACK_LINE(271)
												::StringBuf tmp16 = this->buf;		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(271)
												tmp16->add(HX_HCSTRING("n","\x6e","\x00","\x00","\x00"));
											}
											else{
												HX_STACK_LINE(273)
												::StringBuf tmp16 = this->buf;		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(273)
												tmp16->add(HX_HCSTRING("u","\x75","\x00","\x00","\x00"));
												HX_STACK_LINE(274)
												::StringBuf tmp17 = this->buf;		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(274)
												int tmp18 = ucount;		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(274)
												tmp17->add(tmp18);
											}
											HX_STACK_LINE(276)
											ucount = (int)0;
										}
										HX_STACK_LINE(278)
										Dynamic tmp15 = v->__GetItem(i);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(278)
										this->serialize(tmp15);
									}
								}
							}
							HX_STACK_LINE(281)
							bool tmp9 = (ucount > (int)0);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(281)
							if ((tmp9)){
								HX_STACK_LINE(282)
								bool tmp10 = (ucount == (int)1);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(282)
								if ((tmp10)){
									HX_STACK_LINE(283)
									::StringBuf tmp11 = this->buf;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(283)
									tmp11->add(HX_HCSTRING("n","\x6e","\x00","\x00","\x00"));
								}
								else{
									HX_STACK_LINE(285)
									::StringBuf tmp11 = this->buf;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(285)
									tmp11->add(HX_HCSTRING("u","\x75","\x00","\x00","\x00"));
									HX_STACK_LINE(286)
									::StringBuf tmp12 = this->buf;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(286)
									int tmp13 = ucount;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(286)
									tmp12->add(tmp13);
								}
							}
							HX_STACK_LINE(289)
							::StringBuf tmp10 = this->buf;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(289)
							tmp10->add(HX_HCSTRING("h","\x68","\x00","\x00","\x00"));
						}
						else if (  ( _switch_1==hx::ClassOf< ::List >())){
							HX_STACK_LINE(291)
							::StringBuf tmp7 = this->buf;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(291)
							tmp7->add(HX_HCSTRING("l","\x6c","\x00","\x00","\x00"));
							HX_STACK_LINE(292)
							::List v1 = v;		HX_STACK_VAR(v1,"v1");
							HX_STACK_LINE(293)
							{
								HX_STACK_LINE(293)
								::_List::ListIterator tmp8 = ::_List::ListIterator_obj::__new(v1->h);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(293)
								::_List::ListIterator _g1 = tmp8;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(293)
								while((true)){
									HX_STACK_LINE(293)
									bool tmp9 = (_g1->head != null());		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(293)
									bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(293)
									if ((tmp10)){
										HX_STACK_LINE(293)
										break;
									}
									HX_STACK_LINE(293)
									Dynamic tmp11;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(293)
									{
										HX_STACK_LINE(293)
										Dynamic tmp12 = _g1->head->__GetItem((int)0);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(293)
										_g1->val = tmp12;
										HX_STACK_LINE(293)
										Dynamic tmp13 = _g1->head->__GetItem((int)1);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(293)
										_g1->head = tmp13;
										HX_STACK_LINE(293)
										tmp11 = _g1->val;
									}
									HX_STACK_LINE(293)
									Dynamic i = tmp11;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(294)
									Dynamic tmp12 = i;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(294)
									this->serialize(tmp12);
								}
							}
							HX_STACK_LINE(295)
							::StringBuf tmp8 = this->buf;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(295)
							tmp8->add(HX_HCSTRING("h","\x68","\x00","\x00","\x00"));
						}
						else if (  ( _switch_1==hx::ClassOf< ::Date >())){
							HX_STACK_LINE(297)
							::Date d = v;		HX_STACK_VAR(d,"d");
							HX_STACK_LINE(298)
							::StringBuf tmp7 = this->buf;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(298)
							tmp7->add(HX_HCSTRING("v","\x76","\x00","\x00","\x00"));
							HX_STACK_LINE(299)
							::StringBuf tmp8 = this->buf;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(299)
							Float tmp9 = d->getTime();		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(299)
							tmp8->add(tmp9);
						}
						else if (  ( _switch_1==hx::ClassOf< ::haxe::ds::StringMap >())){
							HX_STACK_LINE(301)
							::StringBuf tmp7 = this->buf;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(301)
							tmp7->add(HX_HCSTRING("b","\x62","\x00","\x00","\x00"));
							HX_STACK_LINE(302)
							::haxe::ds::StringMap v1 = v;		HX_STACK_VAR(v1,"v1");
							HX_STACK_LINE(303)
							Dynamic tmp8 = v1->keys();		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(303)
							for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp8);  __it->hasNext(); ){
								::String k = __it->next();
								{
									HX_STACK_LINE(304)
									::String tmp9 = k;		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(304)
									this->serializeString(tmp9);
									HX_STACK_LINE(305)
									::String tmp10 = k;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(305)
									Dynamic tmp11 = v1->get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(305)
									this->serialize(tmp11);
								}
;
							}
							HX_STACK_LINE(307)
							::StringBuf tmp9 = this->buf;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(307)
							tmp9->add(HX_HCSTRING("h","\x68","\x00","\x00","\x00"));
						}
						else if (  ( _switch_1==hx::ClassOf< ::haxe::ds::IntMap >())){
							HX_STACK_LINE(309)
							::StringBuf tmp7 = this->buf;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(309)
							tmp7->add(HX_HCSTRING("q","\x71","\x00","\x00","\x00"));
							HX_STACK_LINE(310)
							::haxe::ds::IntMap v1 = v;		HX_STACK_VAR(v1,"v1");
							HX_STACK_LINE(311)
							Dynamic tmp8 = v1->keys();		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(311)
							for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(tmp8);  __it->hasNext(); ){
								int k = __it->next();
								{
									HX_STACK_LINE(312)
									::StringBuf tmp9 = this->buf;		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(312)
									tmp9->add(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));
									HX_STACK_LINE(313)
									::StringBuf tmp10 = this->buf;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(313)
									int tmp11 = k;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(313)
									tmp10->add(tmp11);
									HX_STACK_LINE(314)
									int tmp12 = k;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(314)
									Dynamic tmp13 = v1->get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(314)
									this->serialize(tmp13);
								}
;
							}
							HX_STACK_LINE(316)
							::StringBuf tmp9 = this->buf;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(316)
							tmp9->add(HX_HCSTRING("h","\x68","\x00","\x00","\x00"));
						}
						else if (  ( _switch_1==hx::ClassOf< ::haxe::ds::ObjectMap >())){
							HX_STACK_LINE(318)
							::StringBuf tmp7 = this->buf;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(318)
							tmp7->add(HX_HCSTRING("M","\x4d","\x00","\x00","\x00"));
							HX_STACK_LINE(319)
							::haxe::ds::ObjectMap v1 = v;		HX_STACK_VAR(v1,"v1");
							HX_STACK_LINE(320)
							Dynamic tmp8 = v1->keys();		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(320)
							for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(tmp8);  __it->hasNext(); ){
								Dynamic k = __it->next();
								{
									HX_STACK_LINE(327)
									Dynamic tmp9 = k;		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(327)
									this->serialize(tmp9);
									HX_STACK_LINE(329)
									Dynamic tmp10 = k;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(329)
									Dynamic tmp11 = v1->get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(329)
									this->serialize(tmp11);
								}
;
							}
							HX_STACK_LINE(331)
							::StringBuf tmp9 = this->buf;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(331)
							tmp9->add(HX_HCSTRING("h","\x68","\x00","\x00","\x00"));
						}
						else if (  ( _switch_1==hx::ClassOf< ::haxe::io::Bytes >())){
							HX_STACK_LINE(333)
							::haxe::io::Bytes v1 = v;		HX_STACK_VAR(v1,"v1");
							HX_STACK_LINE(337)
							int i = (int)0;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(338)
							int tmp7 = (v1->length - (int)2);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(338)
							int max = tmp7;		HX_STACK_VAR(max,"max");
							HX_STACK_LINE(339)
							::StringBuf tmp8 = ::StringBuf_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(339)
							::StringBuf charsBuf = tmp8;		HX_STACK_VAR(charsBuf,"charsBuf");
							HX_STACK_LINE(340)
							::String tmp9 = ::haxe::Serializer_obj::BASE64;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(340)
							::String b64 = tmp9;		HX_STACK_VAR(b64,"b64");
							HX_STACK_LINE(341)
							while((true)){
								HX_STACK_LINE(341)
								bool tmp10 = (i < max);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(341)
								bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(341)
								if ((tmp11)){
									HX_STACK_LINE(341)
									break;
								}
								HX_STACK_LINE(342)
								int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(342)
								{
									HX_STACK_LINE(342)
									int tmp13 = (i)++;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(342)
									int pos = tmp13;		HX_STACK_VAR(pos,"pos");
									HX_STACK_LINE(342)
									tmp12 = v1->b->__get(pos);
								}
								HX_STACK_LINE(342)
								int b1 = tmp12;		HX_STACK_VAR(b1,"b1");
								HX_STACK_LINE(343)
								int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(343)
								{
									HX_STACK_LINE(343)
									int tmp14 = (i)++;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(343)
									int pos = tmp14;		HX_STACK_VAR(pos,"pos");
									HX_STACK_LINE(343)
									tmp13 = v1->b->__get(pos);
								}
								HX_STACK_LINE(343)
								int b2 = tmp13;		HX_STACK_VAR(b2,"b2");
								HX_STACK_LINE(344)
								int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(344)
								{
									HX_STACK_LINE(344)
									int tmp15 = (i)++;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(344)
									int pos = tmp15;		HX_STACK_VAR(pos,"pos");
									HX_STACK_LINE(344)
									tmp14 = v1->b->__get(pos);
								}
								HX_STACK_LINE(344)
								int b3 = tmp14;		HX_STACK_VAR(b3,"b3");
								HX_STACK_LINE(346)
								int tmp15 = (int(b1) >> int((int)2));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(346)
								::String tmp16 = b64.charAt(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(346)
								charsBuf->add(tmp16);
								HX_STACK_LINE(347)
								int tmp17 = (int(b1) << int((int)4));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(347)
								int tmp18 = (int(b2) >> int((int)4));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(347)
								int tmp19 = (int(tmp17) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(347)
								int tmp20 = (int(tmp19) & int((int)63));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(347)
								::String tmp21 = b64.charAt(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(347)
								charsBuf->add(tmp21);
								HX_STACK_LINE(348)
								int tmp22 = (int(b2) << int((int)2));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(348)
								int tmp23 = (int(b3) >> int((int)6));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(348)
								int tmp24 = (int(tmp22) | int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(348)
								int tmp25 = (int(tmp24) & int((int)63));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(348)
								::String tmp26 = b64.charAt(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(348)
								charsBuf->add(tmp26);
								HX_STACK_LINE(349)
								int tmp27 = (int(b3) & int((int)63));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(349)
								::String tmp28 = b64.charAt(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(349)
								charsBuf->add(tmp28);
							}
							HX_STACK_LINE(351)
							bool tmp10 = (i == max);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(351)
							if ((tmp10)){
								HX_STACK_LINE(352)
								int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(352)
								{
									HX_STACK_LINE(352)
									int tmp12 = (i)++;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(352)
									int pos = tmp12;		HX_STACK_VAR(pos,"pos");
									HX_STACK_LINE(352)
									tmp11 = v1->b->__get(pos);
								}
								HX_STACK_LINE(352)
								int b1 = tmp11;		HX_STACK_VAR(b1,"b1");
								HX_STACK_LINE(353)
								int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(353)
								{
									HX_STACK_LINE(353)
									int tmp13 = (i)++;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(353)
									int pos = tmp13;		HX_STACK_VAR(pos,"pos");
									HX_STACK_LINE(353)
									tmp12 = v1->b->__get(pos);
								}
								HX_STACK_LINE(353)
								int b2 = tmp12;		HX_STACK_VAR(b2,"b2");
								HX_STACK_LINE(354)
								int tmp13 = (int(b1) >> int((int)2));		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(354)
								::String tmp14 = b64.charAt(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(354)
								charsBuf->add(tmp14);
								HX_STACK_LINE(355)
								int tmp15 = (int(b1) << int((int)4));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(355)
								int tmp16 = (int(b2) >> int((int)4));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(355)
								int tmp17 = (int(tmp15) | int(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(355)
								int tmp18 = (int(tmp17) & int((int)63));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(355)
								::String tmp19 = b64.charAt(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(355)
								charsBuf->add(tmp19);
								HX_STACK_LINE(356)
								int tmp20 = (int(b2) << int((int)2));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(356)
								int tmp21 = (int(tmp20) & int((int)63));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(356)
								::String tmp22 = b64.charAt(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(356)
								charsBuf->add(tmp22);
							}
							else{
								HX_STACK_LINE(357)
								int tmp11 = i;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(357)
								int tmp12 = (max + (int)1);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(357)
								bool tmp13 = (tmp11 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(357)
								if ((tmp13)){
									HX_STACK_LINE(358)
									int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(358)
									{
										HX_STACK_LINE(358)
										int tmp15 = (i)++;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(358)
										int pos = tmp15;		HX_STACK_VAR(pos,"pos");
										HX_STACK_LINE(358)
										tmp14 = v1->b->__get(pos);
									}
									HX_STACK_LINE(358)
									int b1 = tmp14;		HX_STACK_VAR(b1,"b1");
									HX_STACK_LINE(359)
									int tmp15 = (int(b1) >> int((int)2));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(359)
									::String tmp16 = b64.charAt(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(359)
									charsBuf->add(tmp16);
									HX_STACK_LINE(360)
									int tmp17 = (int(b1) << int((int)4));		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(360)
									int tmp18 = (int(tmp17) & int((int)63));		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(360)
									::String tmp19 = b64.charAt(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(360)
									charsBuf->add(tmp19);
								}
							}
							HX_STACK_LINE(362)
							::String tmp11 = charsBuf->b->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(362)
							::String chars = tmp11;		HX_STACK_VAR(chars,"chars");
							HX_STACK_LINE(364)
							::StringBuf tmp12 = this->buf;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(364)
							tmp12->add(HX_HCSTRING("s","\x73","\x00","\x00","\x00"));
							HX_STACK_LINE(365)
							::StringBuf tmp13 = this->buf;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(365)
							int tmp14 = chars.length;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(365)
							tmp13->add(tmp14);
							HX_STACK_LINE(366)
							::StringBuf tmp15 = this->buf;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(366)
							tmp15->add(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));
							HX_STACK_LINE(367)
							::StringBuf tmp16 = this->buf;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(367)
							::String tmp17 = chars;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(367)
							tmp16->add(tmp17);
						}
						else  {
							HX_STACK_LINE(369)
							bool tmp7 = this->useCache;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(369)
							if ((tmp7)){
								HX_STACK_LINE(369)
								this->cache->__Field(HX_HCSTRING("pop","\x91","\x5d","\x55","\x00"), hx::paccDynamic )();
							}
							HX_STACK_LINE(370)
							bool tmp8 = (v->__Field(HX_HCSTRING("hxSerialize","\xb0","\x00","\x09","\x14"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(370)
							if ((tmp8)){
								HX_STACK_LINE(371)
								::StringBuf tmp9 = this->buf;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(371)
								tmp9->add(HX_HCSTRING("C","\x43","\x00","\x00","\x00"));
								HX_STACK_LINE(372)
								::hx::Class tmp10 = c;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(372)
								::String tmp11 = ::Type_obj::getClassName(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(372)
								this->serializeString(tmp11);
								HX_STACK_LINE(373)
								bool tmp12 = this->useCache;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(373)
								if ((tmp12)){
									HX_STACK_LINE(373)
									Dynamic tmp13 = v;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(373)
									this->cache->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp13);
								}
								HX_STACK_LINE(374)
								v->__Field(HX_HCSTRING("hxSerialize","\xb0","\x00","\x09","\x14"), hx::paccDynamic )(hx::ObjectPtr<OBJ_>(this));
								HX_STACK_LINE(375)
								::StringBuf tmp13 = this->buf;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(375)
								tmp13->add(HX_HCSTRING("g","\x67","\x00","\x00","\x00"));
							}
							else{
								HX_STACK_LINE(377)
								::StringBuf tmp9 = this->buf;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(377)
								tmp9->add(HX_HCSTRING("c","\x63","\x00","\x00","\x00"));
								HX_STACK_LINE(378)
								::hx::Class tmp10 = c;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(378)
								::String tmp11 = ::Type_obj::getClassName(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(378)
								this->serializeString(tmp11);
								HX_STACK_LINE(379)
								bool tmp12 = this->useCache;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(379)
								if ((tmp12)){
									HX_STACK_LINE(379)
									Dynamic tmp13 = v;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(379)
									this->cache->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp13);
								}
								HX_STACK_LINE(383)
								Dynamic tmp13 = v;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(383)
								this->serializeFields(tmp13);
							}
						}
;
;
					}
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(388)
					Dynamic tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(388)
					bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(388)
					if ((tmp3)){
						HX_STACK_LINE(389)
						Dynamic tmp4 = v;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(389)
						::String tmp5 = ::Type_obj::getClassName(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(389)
						::String className = tmp5;		HX_STACK_VAR(className,"className");
						HX_STACK_LINE(393)
						::String tmp6 = className;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(393)
						::Enum tmp7 = ::Type_obj::resolveEnum(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(393)
						bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(393)
						if ((tmp8)){
							HX_STACK_LINE(393)
							::StringBuf tmp9 = this->buf;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(393)
							tmp9->add(HX_HCSTRING("B","\x42","\x00","\x00","\x00"));
						}
						else{
							HX_STACK_LINE(395)
							::StringBuf tmp9 = this->buf;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(395)
							tmp9->add(HX_HCSTRING("A","\x41","\x00","\x00","\x00"));
						}
						HX_STACK_LINE(396)
						::String tmp9 = className;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(396)
						this->serializeString(tmp9);
					}
					else{
						HX_STACK_LINE(397)
						Dynamic tmp4 = v;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(397)
						bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::Enum >());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(397)
						if ((tmp5)){
							HX_STACK_LINE(398)
							::StringBuf tmp6 = this->buf;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(398)
							tmp6->add(HX_HCSTRING("B","\x42","\x00","\x00","\x00"));
							HX_STACK_LINE(399)
							Dynamic tmp7 = v;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(399)
							::String tmp8 = ::Type_obj::getEnumName(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(399)
							this->serializeString(tmp8);
						}
						else{
							HX_STACK_LINE(401)
							bool tmp6 = this->useCache;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(401)
							bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(401)
							if ((tmp6)){
								HX_STACK_LINE(401)
								Dynamic tmp8 = v;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(401)
								Dynamic tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(401)
								tmp7 = this->serializeRef(tmp9);
							}
							else{
								HX_STACK_LINE(401)
								tmp7 = false;
							}
							HX_STACK_LINE(401)
							if ((tmp7)){
								HX_STACK_LINE(402)
								return null();
							}
							HX_STACK_LINE(403)
							::StringBuf tmp8 = this->buf;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(403)
							tmp8->add(HX_HCSTRING("o","\x6f","\x00","\x00","\x00"));
							HX_STACK_LINE(404)
							Dynamic tmp9 = v;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(404)
							this->serializeFields(tmp9);
						}
					}
				}
				;break;
				case (int)7: {
					HX_STACK_LINE(227)
					::Enum tmp2 = (::ValueType(_g))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(227)
					::Enum e = tmp2;		HX_STACK_VAR(e,"e");
					HX_STACK_LINE(406)
					{
						HX_STACK_LINE(407)
						bool tmp3 = this->useCache;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(407)
						if ((tmp3)){
							HX_STACK_LINE(408)
							Dynamic tmp4 = v;		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(408)
							bool tmp5 = this->serializeRef(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(408)
							if ((tmp5)){
								HX_STACK_LINE(409)
								return null();
							}
							HX_STACK_LINE(410)
							this->cache->__Field(HX_HCSTRING("pop","\x91","\x5d","\x55","\x00"), hx::paccDynamic )();
						}
						HX_STACK_LINE(412)
						::StringBuf tmp4 = this->buf;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(412)
						bool tmp5 = this->useEnumIndex;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(412)
						::String tmp6;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(412)
						if ((tmp5)){
							HX_STACK_LINE(412)
							tmp6 = HX_HCSTRING("j","\x6a","\x00","\x00","\x00");
						}
						else{
							HX_STACK_LINE(412)
							tmp6 = HX_HCSTRING("w","\x77","\x00","\x00","\x00");
						}
						HX_STACK_LINE(412)
						tmp4->add(tmp6);
						HX_STACK_LINE(413)
						::Enum tmp7 = e;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(413)
						::String tmp8 = ::Type_obj::getEnumName(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(413)
						this->serializeString(tmp8);
						HX_STACK_LINE(446)
						bool tmp9 = this->useEnumIndex;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(446)
						if ((tmp9)){
							HX_STACK_LINE(447)
							::StringBuf tmp10 = this->buf;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(447)
							tmp10->add(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));
							HX_STACK_LINE(448)
							::StringBuf tmp11 = this->buf;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(448)
							Dynamic tmp12 = v->__Index();		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(448)
							tmp11->add(tmp12);
						}
						else{
							HX_STACK_LINE(450)
							Dynamic tmp10 = v->__Tag();		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(450)
							this->serializeString(tmp10);
						}
						HX_STACK_LINE(451)
						::StringBuf tmp10 = this->buf;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(451)
						tmp10->add(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));
						HX_STACK_LINE(452)
						Dynamic tmp11 = v->__EnumParams();		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(452)
						cpp::ArrayBase pl = tmp11;		HX_STACK_VAR(pl,"pl");
						HX_STACK_LINE(453)
						bool tmp12 = (pl == null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(453)
						if ((tmp12)){
							HX_STACK_LINE(454)
							::StringBuf tmp13 = this->buf;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(454)
							tmp13->add((int)0);
						}
						else{
							HX_STACK_LINE(456)
							::StringBuf tmp13 = this->buf;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(456)
							int tmp14 = pl->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(456)
							tmp13->add(tmp14);
							HX_STACK_LINE(457)
							{
								HX_STACK_LINE(457)
								int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(457)
								while((true)){
									HX_STACK_LINE(457)
									bool tmp15 = (_g1 < pl->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(457)
									bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(457)
									if ((tmp16)){
										HX_STACK_LINE(457)
										break;
									}
									HX_STACK_LINE(457)
									Dynamic tmp17 = pl->__GetItem(_g1);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(457)
									Dynamic p = tmp17;		HX_STACK_VAR(p,"p");
									HX_STACK_LINE(457)
									++(_g1);
									HX_STACK_LINE(458)
									Dynamic tmp18 = p;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(458)
									this->serialize(tmp18);
								}
							}
						}
						HX_STACK_LINE(504)
						bool tmp13 = this->useCache;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(504)
						if ((tmp13)){
							HX_STACK_LINE(504)
							Dynamic tmp14 = v;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(504)
							this->cache->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp14);
						}
					}
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(506)
					HX_STACK_DO_THROW(HX_HCSTRING("Cannot serialize function","\x35","\xd8","\xfc","\x3d"));
				}
				;break;
				default: {
					HX_STACK_LINE(515)
					Dynamic tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(515)
					::String tmp3 = ::Std_obj::string(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(515)
					::String tmp4 = (HX_HCSTRING("Cannot serialize ","\x1d","\x48","\xc9","\xed") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(515)
					HX_STACK_DO_THROW(tmp4);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Serializer_obj,serialize,(void))

bool Serializer_obj::USE_CACHE;

bool Serializer_obj::USE_ENUM_INDEX;

::String Serializer_obj::BASE64;

::String Serializer_obj::run( Dynamic v){
	HX_STACK_FRAME("haxe.Serializer","run",0xcdbeded7,"haxe.Serializer.run","C:\\HaxeToolkit\\haxe\\std/haxe/Serializer.hx",544,0xfce2327c)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(545)
	::haxe::Serializer tmp = ::haxe::Serializer_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(545)
	::haxe::Serializer s = tmp;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(546)
	Dynamic tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(546)
	s->serialize(tmp1);
	HX_STACK_LINE(547)
	::String tmp2 = s->toString();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(547)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Serializer_obj,run,return )


Serializer_obj::Serializer_obj()
{
}

void Serializer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Serializer);
	HX_MARK_MEMBER_NAME(buf,"buf");
	HX_MARK_MEMBER_NAME(cache,"cache");
	HX_MARK_MEMBER_NAME(shash,"shash");
	HX_MARK_MEMBER_NAME(scount,"scount");
	HX_MARK_MEMBER_NAME(useCache,"useCache");
	HX_MARK_MEMBER_NAME(useEnumIndex,"useEnumIndex");
	HX_MARK_END_CLASS();
}

void Serializer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buf,"buf");
	HX_VISIT_MEMBER_NAME(cache,"cache");
	HX_VISIT_MEMBER_NAME(shash,"shash");
	HX_VISIT_MEMBER_NAME(scount,"scount");
	HX_VISIT_MEMBER_NAME(useCache,"useCache");
	HX_VISIT_MEMBER_NAME(useEnumIndex,"useEnumIndex");
}

Dynamic Serializer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"buf") ) { return buf; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { return cache; }
		if (HX_FIELD_EQ(inName,"shash") ) { return shash; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scount") ) { return scount; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"useCache") ) { return useCache; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"serialize") ) { return serialize_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"useEnumIndex") ) { return useEnumIndex; }
		if (HX_FIELD_EQ(inName,"serializeRef") ) { return serializeRef_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"serializeString") ) { return serializeString_dyn(); }
		if (HX_FIELD_EQ(inName,"serializeFields") ) { return serializeFields_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Serializer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { outValue = run_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"BASE64") ) { outValue = BASE64; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"USE_CACHE") ) { outValue = USE_CACHE; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"USE_ENUM_INDEX") ) { outValue = USE_ENUM_INDEX; return true;  }
	}
	return false;
}

Dynamic Serializer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"buf") ) { buf=inValue.Cast< ::StringBuf >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { cache=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shash") ) { shash=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scount") ) { scount=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"useCache") ) { useCache=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"useEnumIndex") ) { useEnumIndex=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Serializer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"BASE64") ) { BASE64=ioValue.Cast< ::String >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"USE_CACHE") ) { USE_CACHE=ioValue.Cast< bool >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"USE_ENUM_INDEX") ) { USE_ENUM_INDEX=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void Serializer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("buf","\x33","\xc3","\x4a","\x00"));
	outFields->push(HX_HCSTRING("cache","\x42","\x9a","\x14","\x41"));
	outFields->push(HX_HCSTRING("shash","\xc1","\xe5","\x1c","\x7c"));
	outFields->push(HX_HCSTRING("scount","\x7c","\xc3","\x6d","\x45"));
	outFields->push(HX_HCSTRING("useCache","\x7b","\xfc","\x7f","\x08"));
	outFields->push(HX_HCSTRING("useEnumIndex","\x0a","\x8f","\xfe","\x23"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::StringBuf*/ ,(int)offsetof(Serializer_obj,buf),HX_HCSTRING("buf","\x33","\xc3","\x4a","\x00")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Serializer_obj,cache),HX_HCSTRING("cache","\x42","\x9a","\x14","\x41")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Serializer_obj,shash),HX_HCSTRING("shash","\xc1","\xe5","\x1c","\x7c")},
	{hx::fsInt,(int)offsetof(Serializer_obj,scount),HX_HCSTRING("scount","\x7c","\xc3","\x6d","\x45")},
	{hx::fsBool,(int)offsetof(Serializer_obj,useCache),HX_HCSTRING("useCache","\x7b","\xfc","\x7f","\x08")},
	{hx::fsBool,(int)offsetof(Serializer_obj,useEnumIndex),HX_HCSTRING("useEnumIndex","\x0a","\x8f","\xfe","\x23")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &Serializer_obj::USE_CACHE,HX_HCSTRING("USE_CACHE","\xca","\xf8","\xb5","\x85")},
	{hx::fsBool,(void *) &Serializer_obj::USE_ENUM_INDEX,HX_HCSTRING("USE_ENUM_INDEX","\x4c","\xbc","\x56","\x9d")},
	{hx::fsString,(void *) &Serializer_obj::BASE64,HX_HCSTRING("BASE64","\x8f","\xc5","\xaa","\x07")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("buf","\x33","\xc3","\x4a","\x00"),
	HX_HCSTRING("cache","\x42","\x9a","\x14","\x41"),
	HX_HCSTRING("shash","\xc1","\xe5","\x1c","\x7c"),
	HX_HCSTRING("scount","\x7c","\xc3","\x6d","\x45"),
	HX_HCSTRING("useCache","\x7b","\xfc","\x7f","\x08"),
	HX_HCSTRING("useEnumIndex","\x0a","\x8f","\xfe","\x23"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("serializeString","\xd1","\xa2","\x22","\x2b"),
	HX_HCSTRING("serializeRef","\x53","\x1f","\x74","\x3b"),
	HX_HCSTRING("serializeFields","\x79","\x08","\x81","\x9a"),
	HX_HCSTRING("serialize","\xe0","\x5d","\xf2","\xf4"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Serializer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Serializer_obj::USE_CACHE,"USE_CACHE");
	HX_MARK_MEMBER_NAME(Serializer_obj::USE_ENUM_INDEX,"USE_ENUM_INDEX");
	HX_MARK_MEMBER_NAME(Serializer_obj::BASE64,"BASE64");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Serializer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Serializer_obj::USE_CACHE,"USE_CACHE");
	HX_VISIT_MEMBER_NAME(Serializer_obj::USE_ENUM_INDEX,"USE_ENUM_INDEX");
	HX_VISIT_MEMBER_NAME(Serializer_obj::BASE64,"BASE64");
};

#endif

hx::Class Serializer_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("USE_CACHE","\xca","\xf8","\xb5","\x85"),
	HX_HCSTRING("USE_ENUM_INDEX","\x4c","\xbc","\x56","\x9d"),
	HX_HCSTRING("BASE64","\x8f","\xc5","\xaa","\x07"),
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	::String(null()) };

void Serializer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.Serializer","\xfa","\xa1","\x6e","\x6a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Serializer_obj::__GetStatic;
	__mClass->mSetStaticField = &Serializer_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Serializer_obj >;
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

void Serializer_obj::__boot()
{
	USE_CACHE= false;
	USE_ENUM_INDEX= false;
	BASE64= HX_HCSTRING("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789%:","\xd4","\x3b","\x03","\x7f");
}

} // end namespace haxe
