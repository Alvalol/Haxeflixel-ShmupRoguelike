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
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Unserializer
#include <haxe/Unserializer.h>
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

Void Unserializer_obj::__construct(::String buf)
{
HX_STACK_FRAME("haxe.Unserializer","new",0xa8f5e205,"haxe.Unserializer.new","C:\\HaxeToolkit\\haxe\\std/haxe/Unserializer.hx",99,0x00b9ec83)
HX_STACK_THIS(this)
HX_STACK_ARG(buf,"buf")
{
	HX_STACK_LINE(100)
	this->buf = buf;
	HX_STACK_LINE(101)
	this->length = buf.length;
	HX_STACK_LINE(102)
	this->pos = (int)0;
	HX_STACK_LINE(106)
	this->scache = Array_obj< ::String >::__new();
	HX_STACK_LINE(107)
	this->cache = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(108)
	Dynamic tmp = ::haxe::Unserializer_obj::DEFAULT_RESOLVER;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(108)
	Dynamic r = tmp;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(109)
	bool tmp1 = (r == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(109)
	if ((tmp1)){
		HX_STACK_LINE(110)
		r = hx::ClassOf< ::Type >();
		HX_STACK_LINE(111)
		::haxe::Unserializer_obj::DEFAULT_RESOLVER = r;
	}
	HX_STACK_LINE(113)
	Dynamic tmp2 = r;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(113)
	this->setResolver(tmp2);
}
;
	return null();
}

//Unserializer_obj::~Unserializer_obj() { }

Dynamic Unserializer_obj::__CreateEmpty() { return  new Unserializer_obj; }
hx::ObjectPtr< Unserializer_obj > Unserializer_obj::__new(::String buf)
{  hx::ObjectPtr< Unserializer_obj > _result_ = new Unserializer_obj();
	_result_->__construct(buf);
	return _result_;}

Dynamic Unserializer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Unserializer_obj > _result_ = new Unserializer_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Unserializer_obj::setResolver( Dynamic r){
{
		HX_STACK_FRAME("haxe.Unserializer","setResolver",0x5545046d,"haxe.Unserializer.setResolver","C:\\HaxeToolkit\\haxe\\std/haxe/Unserializer.hx",124,0x00b9ec83)
		HX_STACK_THIS(this)
		HX_STACK_ARG(r,"r")
		HX_STACK_LINE(125)
		bool tmp = (r == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(125)
		if ((tmp)){
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/Unserializer.hx",126,0x00b9ec83)
					{
						hx::Anon __result = hx::Anon_obj::Create();

						HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
						int __ArgCount() const { return 1; }
						::hx::Class run(::String _){
							HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","C:\\HaxeToolkit\\haxe\\std/haxe/Unserializer.hx",127,0x00b9ec83)
							HX_STACK_ARG(_,"_")
							{
								HX_STACK_LINE(127)
								return null();
							}
							return null();
						}
						HX_END_LOCAL_FUNC1(return)

						__result->Add(HX_HCSTRING("resolveClass","\xac","\xbd","\xdd","\x80") ,  Dynamic(new _Function_3_1()),true);

						HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
						int __ArgCount() const { return 1; }
						::Enum run(::String _){
							HX_STACK_FRAME("*","_Function_3_2",0x520271ba,"*._Function_3_2","C:\\HaxeToolkit\\haxe\\std/haxe/Unserializer.hx",128,0x00b9ec83)
							HX_STACK_ARG(_,"_")
							{
								HX_STACK_LINE(128)
								return null();
							}
							return null();
						}
						HX_END_LOCAL_FUNC1(return)

						__result->Add(HX_HCSTRING("resolveEnum","\x0d","\x90","\x51","\xde") ,  Dynamic(new _Function_3_2()),true);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(126)
			Dynamic tmp1 = _Function_2_1::Block();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(126)
			this->resolver = tmp1;
		}
		else{
			HX_STACK_LINE(131)
			this->resolver = r;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Unserializer_obj,setResolver,(void))

int Unserializer_obj::readDigits( ){
	HX_STACK_FRAME("haxe.Unserializer","readDigits",0x75598b17,"haxe.Unserializer.readDigits","C:\\HaxeToolkit\\haxe\\std/haxe/Unserializer.hx",147,0x00b9ec83)
	HX_STACK_THIS(this)
	HX_STACK_LINE(148)
	int k = (int)0;		HX_STACK_VAR(k,"k");
	HX_STACK_LINE(149)
	bool s = false;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(150)
	int tmp = this->pos;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(150)
	int fpos = tmp;		HX_STACK_VAR(fpos,"fpos");
	HX_STACK_LINE(151)
	while((true)){
		HX_STACK_LINE(152)
		::String tmp1 = this->buf;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(152)
		int tmp2 = this->pos;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(152)
		int tmp3 = tmp1.cca(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(152)
		int c = tmp3;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(153)
		bool tmp4 = (c == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(153)
		if ((tmp4)){
			HX_STACK_LINE(154)
			break;
		}
		HX_STACK_LINE(155)
		bool tmp5 = (c == (int)45);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(155)
		if ((tmp5)){
			HX_STACK_LINE(156)
			int tmp6 = this->pos;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(156)
			int tmp7 = fpos;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(156)
			bool tmp8 = (tmp6 != tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(156)
			if ((tmp8)){
				HX_STACK_LINE(157)
				break;
			}
			HX_STACK_LINE(158)
			s = true;
			HX_STACK_LINE(159)
			(this->pos)++;
			HX_STACK_LINE(160)
			continue;
		}
		HX_STACK_LINE(162)
		bool tmp6 = (c < (int)48);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(162)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(162)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(162)
		if ((tmp7)){
			HX_STACK_LINE(162)
			tmp8 = (c > (int)57);
		}
		else{
			HX_STACK_LINE(162)
			tmp8 = true;
		}
		HX_STACK_LINE(162)
		if ((tmp8)){
			HX_STACK_LINE(163)
			break;
		}
		HX_STACK_LINE(164)
		int tmp9 = (k * (int)10);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(164)
		int tmp10 = (c - (int)48);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(164)
		int tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(164)
		k = tmp11;
		HX_STACK_LINE(165)
		(this->pos)++;
	}
	HX_STACK_LINE(167)
	bool tmp1 = s;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(167)
	if ((tmp1)){
		HX_STACK_LINE(168)
		hx::MultEq(k,(int)-1);
	}
	HX_STACK_LINE(169)
	int tmp2 = k;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(169)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Unserializer_obj,readDigits,return )

Float Unserializer_obj::readFloat( ){
	HX_STACK_FRAME("haxe.Unserializer","readFloat",0x5bd86dcb,"haxe.Unserializer.readFloat","C:\\HaxeToolkit\\haxe\\std/haxe/Unserializer.hx",172,0x00b9ec83)
	HX_STACK_THIS(this)
	HX_STACK_LINE(173)
	int tmp = this->pos;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(173)
	int p1 = tmp;		HX_STACK_VAR(p1,"p1");
	HX_STACK_LINE(174)
	while((true)){
		HX_STACK_LINE(175)
		::String tmp1 = this->buf;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(175)
		int tmp2 = this->pos;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(175)
		int tmp3 = tmp1.cca(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(175)
		int c = tmp3;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(177)
		bool tmp4 = (c >= (int)43);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(177)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(177)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(177)
		if ((tmp5)){
			HX_STACK_LINE(177)
			tmp6 = (c < (int)58);
		}
		else{
			HX_STACK_LINE(177)
			tmp6 = false;
		}
		HX_STACK_LINE(177)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(177)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(177)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(177)
		if ((tmp8)){
			HX_STACK_LINE(177)
			tmp9 = (c == (int)101);
		}
		else{
			HX_STACK_LINE(177)
			tmp9 = true;
		}
		HX_STACK_LINE(177)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(177)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(177)
		if ((tmp10)){
			HX_STACK_LINE(177)
			tmp11 = (c == (int)69);
		}
		else{
			HX_STACK_LINE(177)
			tmp11 = true;
		}
		HX_STACK_LINE(177)
		if ((tmp11)){
			HX_STACK_LINE(178)
			(this->pos)++;
		}
		else{
			HX_STACK_LINE(180)
			break;
		}
	}
	HX_STACK_LINE(182)
	::String tmp1 = this->buf;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(182)
	int tmp2 = p1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(182)
	int tmp3 = this->pos;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(182)
	int tmp4 = p1;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(182)
	int tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(182)
	::String tmp6 = tmp1.substr(tmp2,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(182)
	Float tmp7 = ::Std_obj::parseFloat(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(182)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(Unserializer_obj,readFloat,return )

Void Unserializer_obj::unserializeObject( Dynamic o){
{
		HX_STACK_FRAME("haxe.Unserializer","unserializeObject",0x1b3e66eb,"haxe.Unserializer.unserializeObject","C:\\HaxeToolkit\\haxe\\std/haxe/Unserializer.hx",185,0x00b9ec83)
		HX_STACK_THIS(this)
		HX_STACK_ARG(o,"o")
		HX_STACK_LINE(186)
		while((true)){
			HX_STACK_LINE(187)
			int tmp = this->pos;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(187)
			int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(187)
			bool tmp2 = (tmp >= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(187)
			if ((tmp2)){
				HX_STACK_LINE(188)
				HX_STACK_DO_THROW(HX_HCSTRING("Invalid object","\xe8","\x6c","\xb7","\xe2"));
			}
			HX_STACK_LINE(189)
			::String tmp3 = this->buf;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(189)
			int tmp4 = this->pos;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(189)
			int tmp5 = tmp3.cca(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(189)
			bool tmp6 = (tmp5 == (int)103);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(189)
			if ((tmp6)){
				HX_STACK_LINE(190)
				break;
			}
			HX_STACK_LINE(191)
			Dynamic tmp7 = this->unserialize();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(191)
			::String k = tmp7;		HX_STACK_VAR(k,"k");
			HX_STACK_LINE(192)
			::String tmp8 = k;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(192)
			bool tmp9 = ::Std_obj::is(tmp8,hx::ClassOf< ::String >());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(192)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(192)
			if ((tmp10)){
				HX_STACK_LINE(193)
				HX_STACK_DO_THROW(HX_HCSTRING("Invalid object key","\x67","\x5e","\x4c","\xfb"));
			}
			HX_STACK_LINE(194)
			Dynamic tmp11 = this->unserialize();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(194)
			Dynamic v = tmp11;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(195)
			Dynamic tmp12 = o;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(195)
			::String tmp13 = k;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(195)
			Dynamic tmp14 = v;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(195)
			::Reflect_obj::setField(tmp12,tmp13,tmp14);
		}
		HX_STACK_LINE(197)
		(this->pos)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Unserializer_obj,unserializeObject,(void))

Dynamic Unserializer_obj::unserializeEnum( ::Enum edecl,::String tag){
	HX_STACK_FRAME("haxe.Unserializer","unserializeEnum",0x5018b02d,"haxe.Unserializer.unserializeEnum","C:\\HaxeToolkit\\haxe\\std/haxe/Unserializer.hx",200,0x00b9ec83)
	HX_STACK_THIS(this)
	HX_STACK_ARG(edecl,"edecl")
	HX_STACK_ARG(tag,"tag")
	HX_STACK_LINE(201)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(201)
	{
		HX_STACK_LINE(201)
		int tmp1 = (this->pos)++;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(201)
		int p = tmp1;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(201)
		::String tmp2 = this->buf;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(201)
		int tmp3 = p;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(201)
		tmp = tmp2.cca(tmp3);
	}
	HX_STACK_LINE(201)
	bool tmp1 = (tmp != (int)58);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(201)
	if ((tmp1)){
		HX_STACK_LINE(202)
		HX_STACK_DO_THROW(HX_HCSTRING("Invalid enum format","\xad","\xeb","\x77","\xc2"));
	}
	HX_STACK_LINE(203)
	int tmp2 = this->readDigits();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(203)
	int nargs = tmp2;		HX_STACK_VAR(nargs,"nargs");
	HX_STACK_LINE(204)
	bool tmp3 = (nargs == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(204)
	if ((tmp3)){
		HX_STACK_LINE(205)
		::Enum tmp4 = edecl;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(205)
		::String tmp5 = tag;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(205)
		Dynamic tmp6 = ::Type_obj::createEnum(tmp4,tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(205)
		return tmp6;
	}
	HX_STACK_LINE(206)
	cpp::ArrayBase args = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(args,"args");
	HX_STACK_LINE(207)
	while((true)){
		HX_STACK_LINE(207)
		int tmp4 = (nargs)--;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(207)
		bool tmp5 = (tmp4 > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(207)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(207)
		if ((tmp6)){
			HX_STACK_LINE(207)
			break;
		}
		HX_STACK_LINE(208)
		Dynamic tmp7 = this->unserialize();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(208)
		args->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp7);
	}
	HX_STACK_LINE(209)
	::Enum tmp4 = edecl;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(209)
	::String tmp5 = tag;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(209)
	Dynamic tmp6 = ::Type_obj::createEnum(tmp4,tmp5,args);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(209)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC2(Unserializer_obj,unserializeEnum,return )

Dynamic Unserializer_obj::unserialize( ){
	HX_STACK_FRAME("haxe.Unserializer","unserialize",0x92cca30c,"haxe.Unserializer.unserialize","C:\\HaxeToolkit\\haxe\\std/haxe/Unserializer.hx",232,0x00b9ec83)
	HX_STACK_THIS(this)
	HX_STACK_LINE(233)
	{
		HX_STACK_LINE(233)
		int tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(233)
		{
			HX_STACK_LINE(233)
			int tmp1 = (this->pos)++;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(233)
			int p = tmp1;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(233)
			::String tmp2 = this->buf;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(233)
			int tmp3 = p;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(233)
			tmp = tmp2.cca(tmp3);
		}
		HX_STACK_LINE(233)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(233)
		int tmp1 = _g;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(233)
		switch( (int)(tmp1)){
			case (int)110: {
				HX_STACK_LINE(235)
				return null();
			}
			;break;
			case (int)116: {
				HX_STACK_LINE(237)
				return true;
			}
			;break;
			case (int)102: {
				HX_STACK_LINE(239)
				return false;
			}
			;break;
			case (int)122: {
				HX_STACK_LINE(241)
				return (int)0;
			}
			;break;
			case (int)105: {
				HX_STACK_LINE(243)
				int tmp2 = this->readDigits();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(243)
				return tmp2;
			}
			;break;
			case (int)100: {
				HX_STACK_LINE(245)
				Float tmp2 = this->readFloat();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(245)
				return tmp2;
			}
			;break;
			case (int)121: {
				HX_STACK_LINE(247)
				int tmp2 = this->readDigits();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(247)
				int len = tmp2;		HX_STACK_VAR(len,"len");
				HX_STACK_LINE(248)
				int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(248)
				{
					HX_STACK_LINE(248)
					int tmp4 = (this->pos)++;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(248)
					int p = tmp4;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(248)
					::String tmp5 = this->buf;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(248)
					int tmp6 = p;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(248)
					tmp3 = tmp5.cca(tmp6);
				}
				HX_STACK_LINE(248)
				bool tmp4 = (tmp3 != (int)58);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(248)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(248)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(248)
				if ((tmp5)){
					HX_STACK_LINE(248)
					int tmp7 = this->length;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(248)
					int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(248)
					int tmp9 = this->pos;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(248)
					int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(248)
					int tmp11 = (tmp8 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(248)
					int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(248)
					int tmp13 = len;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(248)
					tmp6 = (tmp12 < tmp13);
				}
				else{
					HX_STACK_LINE(248)
					tmp6 = true;
				}
				HX_STACK_LINE(248)
				if ((tmp6)){
					HX_STACK_LINE(249)
					HX_STACK_DO_THROW(HX_HCSTRING("Invalid string length","\x4c","\x89","\x20","\xc9"));
				}
				HX_STACK_LINE(250)
				::String tmp7 = this->buf;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(250)
				int tmp8 = this->pos;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(250)
				int tmp9 = len;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(250)
				::String tmp10 = tmp7.substr(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(250)
				::String s = tmp10;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(251)
				hx::AddEq(this->pos,len);
				HX_STACK_LINE(252)
				::String tmp11 = s;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(252)
				::String tmp12 = ::StringTools_obj::urlDecode(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(252)
				s = tmp12;
				HX_STACK_LINE(253)
				::String tmp13 = s;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(253)
				this->scache->push(tmp13);
				HX_STACK_LINE(254)
				::String tmp14 = s;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(254)
				return tmp14;
			}
			;break;
			case (int)107: {
				HX_STACK_LINE(256)
				Float tmp2 = ::Math_obj::NaN;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(256)
				return tmp2;
			}
			;break;
			case (int)109: {
				HX_STACK_LINE(258)
				Float tmp2 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(258)
				return tmp2;
			}
			;break;
			case (int)112: {
				HX_STACK_LINE(260)
				Float tmp2 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(260)
				return tmp2;
			}
			;break;
			case (int)97: {
				HX_STACK_LINE(262)
				::String tmp2 = this->buf;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(262)
				::String buf = tmp2;		HX_STACK_VAR(buf,"buf");
				HX_STACK_LINE(263)
				cpp::ArrayBase a = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(264)
				this->cache->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(a);
				HX_STACK_LINE(265)
				while((true)){
					HX_STACK_LINE(266)
					::String tmp3 = this->buf;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(266)
					int tmp4 = this->pos;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(266)
					int tmp5 = tmp3.cca(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(266)
					int c = tmp5;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(267)
					bool tmp6 = (c == (int)104);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(267)
					if ((tmp6)){
						HX_STACK_LINE(268)
						(this->pos)++;
						HX_STACK_LINE(269)
						break;
					}
					HX_STACK_LINE(271)
					bool tmp7 = (c == (int)117);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(271)
					if ((tmp7)){
						HX_STACK_LINE(272)
						(this->pos)++;
						HX_STACK_LINE(273)
						int tmp8 = this->readDigits();		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(273)
						int n = tmp8;		HX_STACK_VAR(n,"n");
						HX_STACK_LINE(274)
						int tmp9 = (a->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) + n);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(274)
						int tmp10 = (tmp9 - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(274)
						hx::IndexRef((a).mPtr,tmp10) = null();
					}
					else{
						HX_STACK_LINE(276)
						Dynamic tmp8 = this->unserialize();		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(276)
						a->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp8);
					}
				}
				HX_STACK_LINE(278)
				return a;
			}
			;break;
			case (int)111: {
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/Unserializer.hx",280,0x00b9ec83)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(280)
				Dynamic tmp2 = _Function_3_1::Block();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(280)
				Dynamic o = tmp2;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(281)
				Dynamic tmp3 = o;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(281)
				this->cache->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
				HX_STACK_LINE(282)
				Dynamic tmp4 = o;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(282)
				this->unserializeObject(tmp4);
				HX_STACK_LINE(283)
				Dynamic tmp5 = o;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(283)
				return tmp5;
			}
			;break;
			case (int)114: {
				HX_STACK_LINE(285)
				int tmp2 = this->readDigits();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(285)
				int n = tmp2;		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(286)
				bool tmp3 = (n < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(286)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(286)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(286)
				if ((tmp4)){
					HX_STACK_LINE(286)
					int tmp6 = n;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(286)
					int tmp7 = this->cache->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(286)
					int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(286)
					tmp5 = (tmp6 >= tmp8);
				}
				else{
					HX_STACK_LINE(286)
					tmp5 = true;
				}
				HX_STACK_LINE(286)
				if ((tmp5)){
					HX_STACK_LINE(287)
					HX_STACK_DO_THROW(HX_HCSTRING("Invalid reference","\x42","\x99","\x8f","\x7d"));
				}
				HX_STACK_LINE(288)
				Dynamic tmp6 = this->cache->__GetItem(n);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(288)
				return tmp6;
			}
			;break;
			case (int)82: {
				HX_STACK_LINE(290)
				int tmp2 = this->readDigits();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(290)
				int n = tmp2;		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(291)
				bool tmp3 = (n < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(291)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(291)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(291)
				if ((tmp4)){
					HX_STACK_LINE(291)
					int tmp6 = n;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(291)
					int tmp7 = this->scache->length;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(291)
					int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(291)
					tmp5 = (tmp6 >= tmp8);
				}
				else{
					HX_STACK_LINE(291)
					tmp5 = true;
				}
				HX_STACK_LINE(291)
				if ((tmp5)){
					HX_STACK_LINE(292)
					HX_STACK_DO_THROW(HX_HCSTRING("Invalid string reference","\x25","\x57","\x28","\x1b"));
				}
				HX_STACK_LINE(293)
				::String tmp6 = this->scache->__get(n);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(293)
				return tmp6;
			}
			;break;
			case (int)120: {
				HX_STACK_LINE(295)
				Dynamic tmp2 = this->unserialize();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(295)
				HX_STACK_DO_THROW(tmp2);
			}
			;break;
			case (int)99: {
				HX_STACK_LINE(297)
				Dynamic tmp2 = this->unserialize();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(297)
				::String name = tmp2;		HX_STACK_VAR(name,"name");
				HX_STACK_LINE(298)
				Dynamic tmp3 = this->resolver;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(298)
				::String tmp4 = name;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(298)
				::hx::Class tmp5 = tmp3->__Field(HX_HCSTRING("resolveClass","\xac","\xbd","\xdd","\x80"), hx::paccDynamic )(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(298)
				::hx::Class cl = tmp5;		HX_STACK_VAR(cl,"cl");
				HX_STACK_LINE(299)
				bool tmp6 = (cl == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(299)
				if ((tmp6)){
					HX_STACK_LINE(300)
					::String tmp7 = (HX_HCSTRING("Class not found ","\x13","\x56","\x74","\xed") + name);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(300)
					HX_STACK_DO_THROW(tmp7);
				}
				HX_STACK_LINE(301)
				::hx::Class tmp7 = cl;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(301)
				Dynamic tmp8 = ::Type_obj::createEmptyInstance(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(301)
				Dynamic o = tmp8;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(302)
				Dynamic tmp9 = o;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(302)
				this->cache->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp9);
				HX_STACK_LINE(303)
				Dynamic tmp10 = o;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(303)
				this->unserializeObject(tmp10);
				HX_STACK_LINE(304)
				Dynamic tmp11 = o;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(304)
				return tmp11;
			}
			;break;
			case (int)119: {
				HX_STACK_LINE(306)
				Dynamic tmp2 = this->unserialize();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(306)
				::String name = tmp2;		HX_STACK_VAR(name,"name");
				HX_STACK_LINE(307)
				Dynamic tmp3 = this->resolver;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(307)
				::String tmp4 = name;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(307)
				::Enum tmp5 = tmp3->__Field(HX_HCSTRING("resolveEnum","\x0d","\x90","\x51","\xde"), hx::paccDynamic )(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(307)
				::Enum edecl = tmp5;		HX_STACK_VAR(edecl,"edecl");
				HX_STACK_LINE(308)
				bool tmp6 = (edecl == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(308)
				if ((tmp6)){
					HX_STACK_LINE(309)
					::String tmp7 = (HX_HCSTRING("Enum not found ","\xaa","\xe1","\x55","\xfd") + name);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(309)
					HX_STACK_DO_THROW(tmp7);
				}
				HX_STACK_LINE(310)
				::Enum tmp7 = edecl;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(310)
				Dynamic tmp8 = this->unserialize();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(310)
				Dynamic tmp9 = this->unserializeEnum(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(310)
				Dynamic e = tmp9;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(311)
				Dynamic tmp10 = e;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(311)
				this->cache->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp10);
				HX_STACK_LINE(312)
				Dynamic tmp11 = e;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(312)
				return tmp11;
			}
			;break;
			case (int)106: {
				HX_STACK_LINE(314)
				Dynamic tmp2 = this->unserialize();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(314)
				::String name = tmp2;		HX_STACK_VAR(name,"name");
				HX_STACK_LINE(315)
				Dynamic tmp3 = this->resolver;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(315)
				::String tmp4 = name;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(315)
				::Enum tmp5 = tmp3->__Field(HX_HCSTRING("resolveEnum","\x0d","\x90","\x51","\xde"), hx::paccDynamic )(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(315)
				::Enum edecl = tmp5;		HX_STACK_VAR(edecl,"edecl");
				HX_STACK_LINE(316)
				bool tmp6 = (edecl == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(316)
				if ((tmp6)){
					HX_STACK_LINE(317)
					::String tmp7 = (HX_HCSTRING("Enum not found ","\xaa","\xe1","\x55","\xfd") + name);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(317)
					HX_STACK_DO_THROW(tmp7);
				}
				HX_STACK_LINE(318)
				(this->pos)++;
				HX_STACK_LINE(319)
				int tmp7 = this->readDigits();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(319)
				int index = tmp7;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(320)
				::Enum tmp8 = edecl;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(320)
				::String tmp9 = ::Type_obj::getEnumConstructs(tmp8)->__get(index);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(320)
				::String tag = tmp9;		HX_STACK_VAR(tag,"tag");
				HX_STACK_LINE(321)
				bool tmp10 = (tag == null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(321)
				if ((tmp10)){
					HX_STACK_LINE(322)
					::String tmp11 = (HX_HCSTRING("Unknown enum index ","\x57","\xca","\x63","\x30") + name);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(322)
					::String tmp12 = (tmp11 + HX_HCSTRING("@","\x40","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(322)
					int tmp13 = index;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(322)
					::String tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(322)
					HX_STACK_DO_THROW(tmp14);
				}
				HX_STACK_LINE(323)
				::Enum tmp11 = edecl;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(323)
				::String tmp12 = tag;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(323)
				Dynamic tmp13 = this->unserializeEnum(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(323)
				Dynamic e = tmp13;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(324)
				Dynamic tmp14 = e;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(324)
				this->cache->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp14);
				HX_STACK_LINE(325)
				Dynamic tmp15 = e;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(325)
				return tmp15;
			}
			;break;
			case (int)108: {
				HX_STACK_LINE(327)
				::List tmp2 = ::List_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(327)
				::List l = tmp2;		HX_STACK_VAR(l,"l");
				HX_STACK_LINE(328)
				::List tmp3 = l;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(328)
				this->cache->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
				HX_STACK_LINE(329)
				::String tmp4 = this->buf;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(329)
				::String buf = tmp4;		HX_STACK_VAR(buf,"buf");
				HX_STACK_LINE(330)
				while((true)){
					HX_STACK_LINE(330)
					::String tmp5 = this->buf;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(330)
					int tmp6 = this->pos;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(330)
					int tmp7 = tmp5.cca(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(330)
					bool tmp8 = (tmp7 != (int)104);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(330)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(330)
					if ((tmp9)){
						HX_STACK_LINE(330)
						break;
					}
					HX_STACK_LINE(331)
					Dynamic tmp10 = this->unserialize();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(331)
					l->add(tmp10);
				}
				HX_STACK_LINE(332)
				(this->pos)++;
				HX_STACK_LINE(333)
				::List tmp5 = l;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(333)
				return tmp5;
			}
			;break;
			case (int)98: {
				HX_STACK_LINE(335)
				::haxe::ds::StringMap tmp2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(335)
				::haxe::ds::StringMap h = tmp2;		HX_STACK_VAR(h,"h");
				HX_STACK_LINE(336)
				::haxe::ds::StringMap tmp3 = h;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(336)
				this->cache->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
				HX_STACK_LINE(337)
				::String tmp4 = this->buf;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(337)
				::String buf = tmp4;		HX_STACK_VAR(buf,"buf");
				HX_STACK_LINE(338)
				while((true)){
					HX_STACK_LINE(338)
					::String tmp5 = this->buf;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(338)
					int tmp6 = this->pos;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(338)
					int tmp7 = tmp5.cca(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(338)
					bool tmp8 = (tmp7 != (int)104);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(338)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(338)
					if ((tmp9)){
						HX_STACK_LINE(338)
						break;
					}
					HX_STACK_LINE(339)
					Dynamic tmp10 = this->unserialize();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(339)
					::String s = tmp10;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(340)
					::String tmp11 = s;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(340)
					Dynamic tmp12 = this->unserialize();		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(340)
					h->set(tmp11,tmp12);
				}
				HX_STACK_LINE(342)
				(this->pos)++;
				HX_STACK_LINE(343)
				::haxe::ds::StringMap tmp5 = h;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(343)
				return tmp5;
			}
			;break;
			case (int)113: {
				HX_STACK_LINE(345)
				::haxe::ds::IntMap tmp2 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(345)
				::haxe::ds::IntMap h = tmp2;		HX_STACK_VAR(h,"h");
				HX_STACK_LINE(346)
				::haxe::ds::IntMap tmp3 = h;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(346)
				this->cache->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
				HX_STACK_LINE(347)
				::String tmp4 = this->buf;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(347)
				::String buf = tmp4;		HX_STACK_VAR(buf,"buf");
				HX_STACK_LINE(348)
				int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(348)
				{
					HX_STACK_LINE(348)
					int tmp6 = (this->pos)++;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(348)
					int p = tmp6;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(348)
					::String tmp7 = this->buf;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(348)
					int tmp8 = p;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(348)
					tmp5 = tmp7.cca(tmp8);
				}
				HX_STACK_LINE(348)
				int c = tmp5;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(349)
				while((true)){
					HX_STACK_LINE(349)
					bool tmp6 = (c == (int)58);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(349)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(349)
					if ((tmp7)){
						HX_STACK_LINE(349)
						break;
					}
					HX_STACK_LINE(350)
					int tmp8 = this->readDigits();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(350)
					int i = tmp8;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(351)
					int tmp9 = i;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(351)
					Dynamic tmp10 = this->unserialize();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(351)
					h->set(tmp9,tmp10);
					HX_STACK_LINE(352)
					int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(352)
					{
						HX_STACK_LINE(352)
						int tmp12 = (this->pos)++;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(352)
						int p = tmp12;		HX_STACK_VAR(p,"p");
						HX_STACK_LINE(352)
						::String tmp13 = this->buf;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(352)
						int tmp14 = p;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(352)
						tmp11 = tmp13.cca(tmp14);
					}
					HX_STACK_LINE(352)
					c = tmp11;
				}
				HX_STACK_LINE(354)
				bool tmp6 = (c != (int)104);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(354)
				if ((tmp6)){
					HX_STACK_LINE(355)
					HX_STACK_DO_THROW(HX_HCSTRING("Invalid IntMap format","\xe1","\xc2","\xb1","\x71"));
				}
				HX_STACK_LINE(356)
				::haxe::ds::IntMap tmp7 = h;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(356)
				return tmp7;
			}
			;break;
			case (int)77: {
				HX_STACK_LINE(358)
				::haxe::ds::ObjectMap tmp2 = ::haxe::ds::ObjectMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(358)
				::haxe::ds::ObjectMap h = tmp2;		HX_STACK_VAR(h,"h");
				HX_STACK_LINE(359)
				::haxe::ds::ObjectMap tmp3 = h;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(359)
				this->cache->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
				HX_STACK_LINE(360)
				::String tmp4 = this->buf;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(360)
				::String buf = tmp4;		HX_STACK_VAR(buf,"buf");
				HX_STACK_LINE(361)
				while((true)){
					HX_STACK_LINE(361)
					::String tmp5 = this->buf;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(361)
					int tmp6 = this->pos;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(361)
					int tmp7 = tmp5.cca(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(361)
					bool tmp8 = (tmp7 != (int)104);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(361)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(361)
					if ((tmp9)){
						HX_STACK_LINE(361)
						break;
					}
					HX_STACK_LINE(362)
					Dynamic tmp10 = this->unserialize();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(362)
					Dynamic s = tmp10;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(363)
					Dynamic tmp11 = s;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(363)
					Dynamic tmp12 = this->unserialize();		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(363)
					h->set(tmp11,tmp12);
				}
				HX_STACK_LINE(365)
				(this->pos)++;
				HX_STACK_LINE(366)
				::haxe::ds::ObjectMap tmp5 = h;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(366)
				return tmp5;
			}
			;break;
			case (int)118: {
				HX_STACK_LINE(368)
				::Date d;		HX_STACK_VAR(d,"d");
				HX_STACK_LINE(369)
				::String tmp2 = this->buf;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(369)
				int tmp3 = this->pos;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(369)
				int tmp4 = tmp2.cca(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(369)
				bool tmp5 = (tmp4 >= (int)48);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(369)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(369)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(369)
				if ((tmp6)){
					HX_STACK_LINE(369)
					::String tmp8 = this->buf;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(369)
					::String tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(369)
					::String tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(369)
					int tmp11 = this->pos;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(369)
					int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(369)
					int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(369)
					int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(369)
					int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(369)
					int tmp16 = tmp10.cca(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(369)
					int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(369)
					int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(369)
					tmp7 = (tmp18 <= (int)57);
				}
				else{
					HX_STACK_LINE(369)
					tmp7 = false;
				}
				HX_STACK_LINE(369)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(369)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(369)
				if ((tmp8)){
					HX_STACK_LINE(370)
					::String tmp10 = this->buf;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(370)
					::String tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(370)
					::String tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(370)
					int tmp13 = this->pos;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(370)
					int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(370)
					int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(370)
					int tmp16 = (tmp15 + (int)1);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(370)
					int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(370)
					int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(370)
					int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(370)
					int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(370)
					int tmp21 = tmp12.cca(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(370)
					int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(370)
					int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(370)
					tmp9 = (tmp23 >= (int)48);
				}
				else{
					HX_STACK_LINE(369)
					tmp9 = false;
				}
				HX_STACK_LINE(369)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(369)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(369)
				if ((tmp10)){
					HX_STACK_LINE(370)
					::String tmp12 = this->buf;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(370)
					::String tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(370)
					::String tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(370)
					int tmp15 = this->pos;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(370)
					int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(370)
					int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(370)
					int tmp18 = (tmp17 + (int)1);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(370)
					int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(370)
					int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(370)
					int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(370)
					int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(370)
					int tmp23 = tmp14.cca(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(370)
					int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(370)
					int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(370)
					tmp11 = (tmp25 <= (int)57);
				}
				else{
					HX_STACK_LINE(369)
					tmp11 = false;
				}
				HX_STACK_LINE(369)
				bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(369)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(369)
				if ((tmp12)){
					HX_STACK_LINE(371)
					::String tmp14 = this->buf;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(371)
					::String tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(371)
					::String tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(371)
					int tmp17 = this->pos;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(371)
					int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(371)
					int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(371)
					int tmp20 = (tmp19 + (int)2);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(371)
					int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(371)
					int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(371)
					int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(371)
					int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(371)
					int tmp25 = tmp16.cca(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(371)
					int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(371)
					int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(371)
					tmp13 = (tmp27 >= (int)48);
				}
				else{
					HX_STACK_LINE(369)
					tmp13 = false;
				}
				HX_STACK_LINE(369)
				bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(369)
				bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(369)
				if ((tmp14)){
					HX_STACK_LINE(371)
					::String tmp16 = this->buf;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(371)
					::String tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(371)
					::String tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(371)
					int tmp19 = this->pos;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(371)
					int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(371)
					int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(371)
					int tmp22 = (tmp21 + (int)2);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(371)
					int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(371)
					int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(371)
					int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(371)
					int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(371)
					int tmp27 = tmp18.cca(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(371)
					int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(371)
					int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(371)
					tmp15 = (tmp29 <= (int)57);
				}
				else{
					HX_STACK_LINE(369)
					tmp15 = false;
				}
				HX_STACK_LINE(369)
				bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(369)
				bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(369)
				if ((tmp16)){
					HX_STACK_LINE(372)
					::String tmp18 = this->buf;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(372)
					::String tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(372)
					::String tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(372)
					int tmp21 = this->pos;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(372)
					int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(372)
					int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(372)
					int tmp24 = (tmp23 + (int)3);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(372)
					int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(372)
					int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(372)
					int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(372)
					int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(372)
					int tmp29 = tmp20.cca(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(372)
					int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(372)
					int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(372)
					tmp17 = (tmp31 >= (int)48);
				}
				else{
					HX_STACK_LINE(369)
					tmp17 = false;
				}
				HX_STACK_LINE(369)
				bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(369)
				bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(369)
				if ((tmp18)){
					HX_STACK_LINE(372)
					::String tmp20 = this->buf;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(372)
					::String tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(372)
					::String tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(372)
					int tmp23 = this->pos;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(372)
					int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(372)
					int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(372)
					int tmp26 = (tmp25 + (int)3);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(372)
					int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(372)
					int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(372)
					int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(372)
					int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(372)
					int tmp31 = tmp22.cca(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(372)
					int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(372)
					int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(372)
					tmp19 = (tmp33 <= (int)57);
				}
				else{
					HX_STACK_LINE(369)
					tmp19 = false;
				}
				HX_STACK_LINE(369)
				bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(369)
				if ((tmp19)){
					HX_STACK_LINE(373)
					::String tmp21 = this->buf;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(373)
					::String tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(373)
					int tmp23 = this->pos;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(373)
					int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(373)
					int tmp25 = (tmp24 + (int)4);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(373)
					int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(373)
					int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(373)
					int tmp28 = tmp22.cca(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(373)
					int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(373)
					tmp20 = (tmp29 == (int)45);
				}
				else{
					HX_STACK_LINE(369)
					tmp20 = false;
				}
				HX_STACK_LINE(369)
				if ((tmp20)){
					HX_STACK_LINE(376)
					::String tmp21 = this->buf;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(376)
					int tmp22 = this->pos;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(376)
					::String tmp23 = tmp21.substr(tmp22,(int)19);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(376)
					::Date tmp24 = ::Date_obj::fromString(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(376)
					d = tmp24;
					HX_STACK_LINE(377)
					hx::AddEq(this->pos,(int)19);
				}
				else{
					HX_STACK_LINE(379)
					Float tmp21 = this->readFloat();		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(379)
					::Date tmp22 = ::Date_obj::fromTime(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(379)
					d = tmp22;
				}
				HX_STACK_LINE(380)
				::Date tmp21 = d;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(380)
				this->cache->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp21);
				HX_STACK_LINE(381)
				::Date tmp22 = d;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(381)
				return tmp22;
			}
			;break;
			case (int)115: {
				HX_STACK_LINE(383)
				int tmp2 = this->readDigits();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(383)
				int len = tmp2;		HX_STACK_VAR(len,"len");
				HX_STACK_LINE(384)
				::String tmp3 = this->buf;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(384)
				::String buf = tmp3;		HX_STACK_VAR(buf,"buf");
				HX_STACK_LINE(385)
				int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(385)
				{
					HX_STACK_LINE(385)
					int tmp5 = (this->pos)++;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(385)
					int p = tmp5;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(385)
					::String tmp6 = this->buf;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(385)
					int tmp7 = p;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(385)
					tmp4 = tmp6.cca(tmp7);
				}
				HX_STACK_LINE(385)
				bool tmp5 = (tmp4 != (int)58);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(385)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(385)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(385)
				if ((tmp6)){
					HX_STACK_LINE(385)
					int tmp8 = this->length;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(385)
					int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(385)
					int tmp10 = this->pos;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(385)
					int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(385)
					int tmp12 = (tmp9 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(385)
					int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(385)
					int tmp14 = len;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(385)
					tmp7 = (tmp13 < tmp14);
				}
				else{
					HX_STACK_LINE(385)
					tmp7 = true;
				}
				HX_STACK_LINE(385)
				if ((tmp7)){
					HX_STACK_LINE(386)
					HX_STACK_DO_THROW(HX_HCSTRING("Invalid bytes length","\xe4","\x8a","\xd3","\x50"));
				}
				HX_STACK_LINE(390)
				Array< int > codes = ::haxe::Unserializer_obj::CODES;		HX_STACK_VAR(codes,"codes");
				HX_STACK_LINE(391)
				bool tmp8 = (codes == null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(391)
				if ((tmp8)){
					HX_STACK_LINE(392)
					codes = ::haxe::Unserializer_obj::initCodes();
					HX_STACK_LINE(393)
					::haxe::Unserializer_obj::CODES = codes;
				}
				HX_STACK_LINE(395)
				int tmp9 = this->pos;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(395)
				int i = tmp9;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(396)
				int tmp10 = (int(len) & int((int)3));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(396)
				int rest = tmp10;		HX_STACK_VAR(rest,"rest");
				HX_STACK_LINE(397)
				int tmp11 = (int(len) >> int((int)2));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(397)
				int tmp12 = (tmp11 * (int)3);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(397)
				bool tmp13 = (rest >= (int)2);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(397)
				int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(397)
				if ((tmp13)){
					HX_STACK_LINE(397)
					tmp14 = (rest - (int)1);
				}
				else{
					HX_STACK_LINE(397)
					tmp14 = (int)0;
				}
				HX_STACK_LINE(397)
				int tmp15 = (tmp12 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(397)
				int size = tmp15;		HX_STACK_VAR(size,"size");
				HX_STACK_LINE(398)
				int tmp16 = i;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(398)
				int tmp17 = (len - rest);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(398)
				int tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(398)
				int max = tmp18;		HX_STACK_VAR(max,"max");
				HX_STACK_LINE(399)
				int tmp19 = size;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(399)
				::haxe::io::Bytes tmp20 = ::haxe::io::Bytes_obj::alloc(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(399)
				::haxe::io::Bytes bytes = tmp20;		HX_STACK_VAR(bytes,"bytes");
				HX_STACK_LINE(400)
				int bpos = (int)0;		HX_STACK_VAR(bpos,"bpos");
				HX_STACK_LINE(401)
				while((true)){
					HX_STACK_LINE(401)
					bool tmp21 = (i < max);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(401)
					bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(401)
					if ((tmp22)){
						HX_STACK_LINE(401)
						break;
					}
					HX_STACK_LINE(402)
					int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(402)
					{
						HX_STACK_LINE(402)
						int tmp24 = (i)++;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(402)
						int index = tmp24;		HX_STACK_VAR(index,"index");
						HX_STACK_LINE(402)
						int tmp25 = index;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(402)
						tmp23 = buf.cca(tmp25);
					}
					HX_STACK_LINE(402)
					int tmp24 = codes->__get(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(402)
					int c1 = tmp24;		HX_STACK_VAR(c1,"c1");
					HX_STACK_LINE(403)
					int tmp25;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(403)
					{
						HX_STACK_LINE(403)
						int tmp26 = (i)++;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(403)
						int index = tmp26;		HX_STACK_VAR(index,"index");
						HX_STACK_LINE(403)
						int tmp27 = index;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(403)
						tmp25 = buf.cca(tmp27);
					}
					HX_STACK_LINE(403)
					int tmp26 = codes->__get(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(403)
					int c2 = tmp26;		HX_STACK_VAR(c2,"c2");
					HX_STACK_LINE(404)
					{
						HX_STACK_LINE(404)
						int tmp27 = (bpos)++;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(404)
						int pos = tmp27;		HX_STACK_VAR(pos,"pos");
						HX_STACK_LINE(404)
						int tmp28 = (int(c1) << int((int)2));		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(404)
						int tmp29 = (int(c2) >> int((int)4));		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(404)
						int tmp30 = (int(tmp28) | int(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(404)
						bytes->b[pos] = tmp30;
					}
					HX_STACK_LINE(405)
					int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(405)
					{
						HX_STACK_LINE(405)
						int tmp28 = (i)++;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(405)
						int index = tmp28;		HX_STACK_VAR(index,"index");
						HX_STACK_LINE(405)
						int tmp29 = index;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(405)
						tmp27 = buf.cca(tmp29);
					}
					HX_STACK_LINE(405)
					int tmp28 = codes->__get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(405)
					int c3 = tmp28;		HX_STACK_VAR(c3,"c3");
					HX_STACK_LINE(406)
					{
						HX_STACK_LINE(406)
						int tmp29 = (bpos)++;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(406)
						int pos = tmp29;		HX_STACK_VAR(pos,"pos");
						HX_STACK_LINE(406)
						int tmp30 = (int(c2) << int((int)4));		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(406)
						int tmp31 = (int(c3) >> int((int)2));		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(406)
						int tmp32 = (int(tmp30) | int(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(406)
						bytes->b[pos] = tmp32;
					}
					HX_STACK_LINE(407)
					int tmp29;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(407)
					{
						HX_STACK_LINE(407)
						int tmp30 = (i)++;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(407)
						int index = tmp30;		HX_STACK_VAR(index,"index");
						HX_STACK_LINE(407)
						int tmp31 = index;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(407)
						tmp29 = buf.cca(tmp31);
					}
					HX_STACK_LINE(407)
					int tmp30 = codes->__get(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(407)
					int c4 = tmp30;		HX_STACK_VAR(c4,"c4");
					HX_STACK_LINE(408)
					{
						HX_STACK_LINE(408)
						int tmp31 = (bpos)++;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(408)
						int pos = tmp31;		HX_STACK_VAR(pos,"pos");
						HX_STACK_LINE(408)
						int tmp32 = (int(c3) << int((int)6));		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(408)
						int tmp33 = c4;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(408)
						int tmp34 = (int(tmp32) | int(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(408)
						bytes->b[pos] = tmp34;
					}
				}
				HX_STACK_LINE(410)
				bool tmp21 = (rest >= (int)2);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(410)
				if ((tmp21)){
					HX_STACK_LINE(411)
					int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(411)
					{
						HX_STACK_LINE(411)
						int tmp23 = (i)++;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(411)
						int index = tmp23;		HX_STACK_VAR(index,"index");
						HX_STACK_LINE(411)
						int tmp24 = index;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(411)
						tmp22 = buf.cca(tmp24);
					}
					HX_STACK_LINE(411)
					int tmp23 = codes->__get(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(411)
					int c1 = tmp23;		HX_STACK_VAR(c1,"c1");
					HX_STACK_LINE(412)
					int tmp24;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(412)
					{
						HX_STACK_LINE(412)
						int tmp25 = (i)++;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(412)
						int index = tmp25;		HX_STACK_VAR(index,"index");
						HX_STACK_LINE(412)
						int tmp26 = index;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(412)
						tmp24 = buf.cca(tmp26);
					}
					HX_STACK_LINE(412)
					int tmp25 = codes->__get(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(412)
					int c2 = tmp25;		HX_STACK_VAR(c2,"c2");
					HX_STACK_LINE(413)
					{
						HX_STACK_LINE(413)
						int tmp26 = (bpos)++;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(413)
						int pos = tmp26;		HX_STACK_VAR(pos,"pos");
						HX_STACK_LINE(413)
						int tmp27 = (int(c1) << int((int)2));		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(413)
						int tmp28 = (int(c2) >> int((int)4));		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(413)
						int tmp29 = (int(tmp27) | int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(413)
						bytes->b[pos] = tmp29;
					}
					HX_STACK_LINE(414)
					bool tmp26 = (rest == (int)3);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(414)
					if ((tmp26)){
						HX_STACK_LINE(415)
						int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(415)
						{
							HX_STACK_LINE(415)
							int tmp28 = (i)++;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(415)
							int index = tmp28;		HX_STACK_VAR(index,"index");
							HX_STACK_LINE(415)
							int tmp29 = index;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(415)
							tmp27 = buf.cca(tmp29);
						}
						HX_STACK_LINE(415)
						int tmp28 = codes->__get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(415)
						int c3 = tmp28;		HX_STACK_VAR(c3,"c3");
						HX_STACK_LINE(416)
						{
							HX_STACK_LINE(416)
							int tmp29 = (bpos)++;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(416)
							int pos = tmp29;		HX_STACK_VAR(pos,"pos");
							HX_STACK_LINE(416)
							int tmp30 = (int(c2) << int((int)4));		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(416)
							int tmp31 = (int(c3) >> int((int)2));		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(416)
							int tmp32 = (int(tmp30) | int(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(416)
							bytes->b[pos] = tmp32;
						}
					}
				}
				HX_STACK_LINE(420)
				hx::AddEq(this->pos,len);
				HX_STACK_LINE(421)
				::haxe::io::Bytes tmp22 = bytes;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(421)
				this->cache->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp22);
				HX_STACK_LINE(422)
				::haxe::io::Bytes tmp23 = bytes;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(422)
				return tmp23;
			}
			;break;
			case (int)67: {
				HX_STACK_LINE(424)
				Dynamic tmp2 = this->unserialize();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(424)
				::String name = tmp2;		HX_STACK_VAR(name,"name");
				HX_STACK_LINE(425)
				Dynamic tmp3 = this->resolver;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(425)
				::String tmp4 = name;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(425)
				::hx::Class tmp5 = tmp3->__Field(HX_HCSTRING("resolveClass","\xac","\xbd","\xdd","\x80"), hx::paccDynamic )(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(425)
				::hx::Class cl = tmp5;		HX_STACK_VAR(cl,"cl");
				HX_STACK_LINE(426)
				bool tmp6 = (cl == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(426)
				if ((tmp6)){
					HX_STACK_LINE(427)
					::String tmp7 = (HX_HCSTRING("Class not found ","\x13","\x56","\x74","\xed") + name);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(427)
					HX_STACK_DO_THROW(tmp7);
				}
				HX_STACK_LINE(428)
				::hx::Class tmp7 = cl;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(428)
				Dynamic tmp8 = ::Type_obj::createEmptyInstance(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(428)
				Dynamic o = tmp8;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(429)
				Dynamic tmp9 = o;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(429)
				this->cache->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp9);
				HX_STACK_LINE(430)
				o->__Field(HX_HCSTRING("hxUnserialize","\x37","\xdb","\xb9","\x86"), hx::paccDynamic )(hx::ObjectPtr<OBJ_>(this));
				HX_STACK_LINE(431)
				int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(431)
				{
					HX_STACK_LINE(431)
					int tmp11 = (this->pos)++;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(431)
					int p = tmp11;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(431)
					::String tmp12 = this->buf;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(431)
					int tmp13 = p;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(431)
					tmp10 = tmp12.cca(tmp13);
				}
				HX_STACK_LINE(431)
				bool tmp11 = (tmp10 != (int)103);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(431)
				if ((tmp11)){
					HX_STACK_LINE(432)
					HX_STACK_DO_THROW(HX_HCSTRING("Invalid custom data","\x30","\xfa","\xef","\x08"));
				}
				HX_STACK_LINE(433)
				Dynamic tmp12 = o;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(433)
				return tmp12;
			}
			;break;
			case (int)65: {
				HX_STACK_LINE(435)
				Dynamic tmp2 = this->unserialize();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(435)
				::String name = tmp2;		HX_STACK_VAR(name,"name");
				HX_STACK_LINE(436)
				Dynamic tmp3 = this->resolver;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(436)
				::String tmp4 = name;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(436)
				::hx::Class tmp5 = tmp3->__Field(HX_HCSTRING("resolveClass","\xac","\xbd","\xdd","\x80"), hx::paccDynamic )(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(436)
				::hx::Class cl = tmp5;		HX_STACK_VAR(cl,"cl");
				HX_STACK_LINE(437)
				bool tmp6 = (cl == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(437)
				if ((tmp6)){
					HX_STACK_LINE(438)
					::String tmp7 = (HX_HCSTRING("Class not found ","\x13","\x56","\x74","\xed") + name);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(438)
					HX_STACK_DO_THROW(tmp7);
				}
				HX_STACK_LINE(439)
				::hx::Class tmp7 = cl;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(439)
				return tmp7;
			}
			;break;
			case (int)66: {
				HX_STACK_LINE(441)
				Dynamic tmp2 = this->unserialize();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(441)
				::String name = tmp2;		HX_STACK_VAR(name,"name");
				HX_STACK_LINE(442)
				Dynamic tmp3 = this->resolver;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(442)
				::String tmp4 = name;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(442)
				::Enum tmp5 = tmp3->__Field(HX_HCSTRING("resolveEnum","\x0d","\x90","\x51","\xde"), hx::paccDynamic )(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(442)
				::Enum e = tmp5;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(443)
				bool tmp6 = (e == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(443)
				if ((tmp6)){
					HX_STACK_LINE(444)
					::String tmp7 = (HX_HCSTRING("Enum not found ","\xaa","\xe1","\x55","\xfd") + name);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(444)
					HX_STACK_DO_THROW(tmp7);
				}
				HX_STACK_LINE(445)
				::Enum tmp7 = e;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(445)
				return tmp7;
			}
			;break;
			default: {
			}
		}
	}
	HX_STACK_LINE(448)
	(this->pos)--;
	HX_STACK_LINE(449)
	::String tmp = this->buf;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(449)
	int tmp1 = this->pos;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(449)
	::String tmp2 = tmp.charAt(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(449)
	::String tmp3 = (HX_HCSTRING("Invalid char ","\x81","\x66","\xec","\x29") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(449)
	::String tmp4 = (tmp3 + HX_HCSTRING(" at position ","\x0a","\xc2","\x01","\xe0"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(449)
	int tmp5 = this->pos;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(449)
	::String tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(449)
	HX_STACK_DO_THROW(tmp6);
	HX_STACK_LINE(449)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Unserializer_obj,unserialize,return )

Dynamic Unserializer_obj::DEFAULT_RESOLVER;

::String Unserializer_obj::BASE64;

Array< int > Unserializer_obj::CODES;

Array< int > Unserializer_obj::initCodes( ){
	HX_STACK_FRAME("haxe.Unserializer","initCodes",0xee42ccdb,"haxe.Unserializer.initCodes","C:\\HaxeToolkit\\haxe\\std/haxe/Unserializer.hx",67,0x00b9ec83)
	HX_STACK_LINE(72)
	Array< int > codes = Array_obj< int >::__new();		HX_STACK_VAR(codes,"codes");
	HX_STACK_LINE(74)
	{
		HX_STACK_LINE(74)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(74)
		::String tmp = ::haxe::Unserializer_obj::BASE64;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(74)
		int _g = tmp.length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(74)
		while((true)){
			HX_STACK_LINE(74)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(74)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(74)
			if ((tmp2)){
				HX_STACK_LINE(74)
				break;
			}
			HX_STACK_LINE(74)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(74)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(75)
			::String tmp4 = ::haxe::Unserializer_obj::BASE64;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(75)
			int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(75)
			int tmp6 = tmp4.cca(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(75)
			int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(75)
			codes[tmp6] = tmp7;
		}
	}
	HX_STACK_LINE(76)
	return codes;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Unserializer_obj,initCodes,return )

Dynamic Unserializer_obj::run( ::String v){
	HX_STACK_FRAME("haxe.Unserializer","run",0xa8f8f8f0,"haxe.Unserializer.run","C:\\HaxeToolkit\\haxe\\std/haxe/Unserializer.hx",459,0x00b9ec83)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(460)
	::haxe::Unserializer tmp = ::haxe::Unserializer_obj::__new(v);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(460)
	Dynamic tmp1 = tmp->unserialize();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(460)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Unserializer_obj,run,return )


Unserializer_obj::Unserializer_obj()
{
}

void Unserializer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Unserializer);
	HX_MARK_MEMBER_NAME(buf,"buf");
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(cache,"cache");
	HX_MARK_MEMBER_NAME(scache,"scache");
	HX_MARK_MEMBER_NAME(resolver,"resolver");
	HX_MARK_END_CLASS();
}

void Unserializer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buf,"buf");
	HX_VISIT_MEMBER_NAME(pos,"pos");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(cache,"cache");
	HX_VISIT_MEMBER_NAME(scache,"scache");
	HX_VISIT_MEMBER_NAME(resolver,"resolver");
}

Dynamic Unserializer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"buf") ) { return buf; }
		if (HX_FIELD_EQ(inName,"pos") ) { return pos; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { return cache; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		if (HX_FIELD_EQ(inName,"scache") ) { return scache; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"resolver") ) { return resolver; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"readFloat") ) { return readFloat_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"readDigits") ) { return readDigits_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setResolver") ) { return setResolver_dyn(); }
		if (HX_FIELD_EQ(inName,"unserialize") ) { return unserialize_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"unserializeEnum") ) { return unserializeEnum_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"unserializeObject") ) { return unserializeObject_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Unserializer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { outValue = run_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"CODES") ) { outValue = CODES; return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"BASE64") ) { outValue = BASE64; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"initCodes") ) { outValue = initCodes_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"DEFAULT_RESOLVER") ) { outValue = DEFAULT_RESOLVER; return true;  }
	}
	return false;
}

Dynamic Unserializer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"buf") ) { buf=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { cache=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scache") ) { scache=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"resolver") ) { resolver=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Unserializer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"CODES") ) { CODES=ioValue.Cast< Array< int > >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"BASE64") ) { BASE64=ioValue.Cast< ::String >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"DEFAULT_RESOLVER") ) { DEFAULT_RESOLVER=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void Unserializer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("buf","\x33","\xc3","\x4a","\x00"));
	outFields->push(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("cache","\x42","\x9a","\x14","\x41"));
	outFields->push(HX_HCSTRING("scache","\xef","\x18","\x1f","\x3c"));
	outFields->push(HX_HCSTRING("resolver","\x06","\x7c","\xb0","\x0c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Unserializer_obj,buf),HX_HCSTRING("buf","\x33","\xc3","\x4a","\x00")},
	{hx::fsInt,(int)offsetof(Unserializer_obj,pos),HX_HCSTRING("pos","\x94","\x5d","\x55","\x00")},
	{hx::fsInt,(int)offsetof(Unserializer_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Unserializer_obj,cache),HX_HCSTRING("cache","\x42","\x9a","\x14","\x41")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(Unserializer_obj,scache),HX_HCSTRING("scache","\xef","\x18","\x1f","\x3c")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Unserializer_obj,resolver),HX_HCSTRING("resolver","\x06","\x7c","\xb0","\x0c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &Unserializer_obj::DEFAULT_RESOLVER,HX_HCSTRING("DEFAULT_RESOLVER","\xa4","\x3a","\xb4","\xde")},
	{hx::fsString,(void *) &Unserializer_obj::BASE64,HX_HCSTRING("BASE64","\x8f","\xc5","\xaa","\x07")},
	{hx::fsObject /*Array< int >*/ ,(void *) &Unserializer_obj::CODES,HX_HCSTRING("CODES","\x86","\x8e","\x44","\xc8")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("buf","\x33","\xc3","\x4a","\x00"),
	HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("cache","\x42","\x9a","\x14","\x41"),
	HX_HCSTRING("scache","\xef","\x18","\x1f","\x3c"),
	HX_HCSTRING("resolver","\x06","\x7c","\xb0","\x0c"),
	HX_HCSTRING("setResolver","\xc8","\x45","\x11","\x3d"),
	HX_HCSTRING("readDigits","\x1c","\xee","\xa3","\xae"),
	HX_HCSTRING("readFloat","\x66","\x12","\x7e","\xd3"),
	HX_HCSTRING("unserializeObject","\x86","\x9e","\x52","\x9f"),
	HX_HCSTRING("unserializeEnum","\x08","\x3b","\x10","\x7f"),
	HX_HCSTRING("unserialize","\x67","\xe4","\x98","\x7a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Unserializer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Unserializer_obj::DEFAULT_RESOLVER,"DEFAULT_RESOLVER");
	HX_MARK_MEMBER_NAME(Unserializer_obj::BASE64,"BASE64");
	HX_MARK_MEMBER_NAME(Unserializer_obj::CODES,"CODES");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Unserializer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Unserializer_obj::DEFAULT_RESOLVER,"DEFAULT_RESOLVER");
	HX_VISIT_MEMBER_NAME(Unserializer_obj::BASE64,"BASE64");
	HX_VISIT_MEMBER_NAME(Unserializer_obj::CODES,"CODES");
};

#endif

hx::Class Unserializer_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("DEFAULT_RESOLVER","\xa4","\x3a","\xb4","\xde"),
	HX_HCSTRING("BASE64","\x8f","\xc5","\xaa","\x07"),
	HX_HCSTRING("CODES","\x86","\x8e","\x44","\xc8"),
	HX_HCSTRING("initCodes","\x76","\x71","\xe8","\x65"),
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	::String(null()) };

void Unserializer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.Unserializer","\x93","\x7b","\x79","\x6c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Unserializer_obj::__GetStatic;
	__mClass->mSetStaticField = &Unserializer_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Unserializer_obj >;
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

void Unserializer_obj::__boot()
{
	DEFAULT_RESOLVER= hx::ClassOf< ::Type >();
	BASE64= HX_HCSTRING("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789%:","\xd4","\x3b","\x03","\x7f");
	CODES= null();
}

} // end namespace haxe
