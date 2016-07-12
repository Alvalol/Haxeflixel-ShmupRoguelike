#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_xml_Parser
#include <haxe/xml/Parser.h>
#endif
namespace haxe{
namespace xml{

Void Parser_obj::__construct()
{
	return null();
}

//Parser_obj::~Parser_obj() { }

Dynamic Parser_obj::__CreateEmpty() { return  new Parser_obj; }
hx::ObjectPtr< Parser_obj > Parser_obj::__new()
{  hx::ObjectPtr< Parser_obj > _result_ = new Parser_obj();
	_result_->__construct();
	return _result_;}

Dynamic Parser_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Parser_obj > _result_ = new Parser_obj();
	_result_->__construct();
	return _result_;}

::haxe::ds::StringMap Parser_obj::escapes;

::Xml Parser_obj::parse( ::String str,hx::Null< bool >  __o_strict){
bool strict = __o_strict.Default(false);
	HX_STACK_FRAME("haxe.xml.Parser","parse",0x937905c3,"haxe.xml.Parser.parse","C:\\HaxeToolkit\\haxe\\std/haxe/xml/Parser.hx",65,0xbc28dcd7)
	HX_STACK_ARG(str,"str")
	HX_STACK_ARG(strict,"strict")
{
		HX_STACK_LINE(66)
		::Xml tmp = ::Xml_obj::createDocument();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(66)
		::Xml doc = tmp;		HX_STACK_VAR(doc,"doc");
		HX_STACK_LINE(67)
		::String tmp1 = str;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(67)
		bool tmp2 = strict;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(67)
		::Xml tmp3 = doc;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(67)
		::haxe::xml::Parser_obj::doParse(tmp1,tmp2,(int)0,tmp3);
		HX_STACK_LINE(68)
		::Xml tmp4 = doc;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(68)
		return tmp4;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Parser_obj,parse,return )

int Parser_obj::doParse( ::String str,bool strict,hx::Null< int >  __o_p,::Xml parent){
int p = __o_p.Default(0);
	HX_STACK_FRAME("haxe.xml.Parser","doParse",0x2e9a6a38,"haxe.xml.Parser.doParse","C:\\HaxeToolkit\\haxe\\std/haxe/xml/Parser.hx",72,0xbc28dcd7)
	HX_STACK_ARG(str,"str")
	HX_STACK_ARG(strict,"strict")
	HX_STACK_ARG(p,"p")
	HX_STACK_ARG(parent,"parent")
{
		HX_STACK_LINE(73)
		::Xml xml = null();		HX_STACK_VAR(xml,"xml");
		HX_STACK_LINE(74)
		int state = (int)1;		HX_STACK_VAR(state,"state");
		HX_STACK_LINE(75)
		int next = (int)1;		HX_STACK_VAR(next,"next");
		HX_STACK_LINE(76)
		::String aname = null();		HX_STACK_VAR(aname,"aname");
		HX_STACK_LINE(77)
		int start = (int)0;		HX_STACK_VAR(start,"start");
		HX_STACK_LINE(78)
		int nsubs = (int)0;		HX_STACK_VAR(nsubs,"nsubs");
		HX_STACK_LINE(79)
		int nbrackets = (int)0;		HX_STACK_VAR(nbrackets,"nbrackets");
		HX_STACK_LINE(80)
		int tmp = p;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(80)
		int tmp1 = str.cca(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(80)
		int c = tmp1;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(81)
		::StringBuf tmp2 = ::StringBuf_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(81)
		::StringBuf buf = tmp2;		HX_STACK_VAR(buf,"buf");
		HX_STACK_LINE(83)
		int escapeNext = (int)1;		HX_STACK_VAR(escapeNext,"escapeNext");
		HX_STACK_LINE(84)
		int attrValQuote = (int)-1;		HX_STACK_VAR(attrValQuote,"attrValQuote");
		HX_STACK_LINE(89)
		while((true)){
			HX_STACK_LINE(89)
			bool tmp3 = (c == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(89)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(89)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(89)
			if ((tmp5)){
				HX_STACK_LINE(89)
				break;
			}
			HX_STACK_LINE(91)
			int tmp6 = state;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(91)
			switch( (int)(tmp6)){
				case (int)0: {
					HX_STACK_LINE(94)
					int tmp7 = c;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(94)
					switch( (int)(tmp7)){
						case (int)10: case (int)13: case (int)9: case (int)32: {
						}
						;break;
						default: {
							HX_STACK_LINE(102)
							state = next;
							HX_STACK_LINE(103)
							continue;
						}
					}
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(106)
					int tmp7 = c;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(106)
					switch( (int)(tmp7)){
						case (int)60: {
							HX_STACK_LINE(109)
							state = (int)0;
							HX_STACK_LINE(110)
							next = (int)2;
						}
						;break;
						default: {
							HX_STACK_LINE(112)
							start = p;
							HX_STACK_LINE(113)
							state = (int)13;
							HX_STACK_LINE(114)
							continue;
						}
					}
				}
				;break;
				case (int)13: {
					HX_STACK_LINE(117)
					bool tmp7 = (c == (int)60);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(117)
					if ((tmp7)){
						HX_STACK_LINE(119)
						{
							HX_STACK_LINE(119)
							int tmp8 = start;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(119)
							int tmp9 = (p - start);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(119)
							::String tmp10 = str.substr(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(119)
							buf->b->push(tmp10);
						}
						HX_STACK_LINE(120)
						::String tmp8 = buf->b->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(120)
						::Xml tmp9 = ::Xml_obj::createPCData(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(120)
						::Xml child = tmp9;		HX_STACK_VAR(child,"child");
						HX_STACK_LINE(121)
						::StringBuf tmp10 = ::StringBuf_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(121)
						buf = tmp10;
						HX_STACK_LINE(122)
						{
							HX_STACK_LINE(122)
							::Xml tmp11 = child;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(122)
							parent->addChild(tmp11);
							HX_STACK_LINE(122)
							(nsubs)++;
						}
						HX_STACK_LINE(123)
						state = (int)0;
						HX_STACK_LINE(124)
						next = (int)2;
					}
					else{
						HX_STACK_LINE(125)
						bool tmp8 = (c == (int)38);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(125)
						if ((tmp8)){
							HX_STACK_LINE(126)
							{
								HX_STACK_LINE(126)
								int tmp9 = start;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(126)
								int tmp10 = (p - start);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(126)
								::String tmp11 = str.substr(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(126)
								buf->b->push(tmp11);
							}
							HX_STACK_LINE(127)
							state = (int)18;
							HX_STACK_LINE(128)
							escapeNext = (int)13;
							HX_STACK_LINE(129)
							int tmp9 = (p + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(129)
							start = tmp9;
						}
					}
				}
				;break;
				case (int)17: {
					HX_STACK_LINE(132)
					bool tmp7 = (c == (int)93);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(132)
					bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(132)
					bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(132)
					if ((tmp8)){
						HX_STACK_LINE(132)
						int tmp10 = (p + (int)1);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(132)
						int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(132)
						int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(132)
						int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(132)
						int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(132)
						int tmp15 = str.cca(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(132)
						int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(132)
						int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(132)
						tmp9 = (tmp17 == (int)93);
					}
					else{
						HX_STACK_LINE(132)
						tmp9 = false;
					}
					HX_STACK_LINE(132)
					bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(132)
					if ((tmp9)){
						HX_STACK_LINE(132)
						int tmp11 = (p + (int)2);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(132)
						int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(132)
						int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(132)
						int tmp14 = str.cca(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(132)
						int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(132)
						tmp10 = (tmp15 == (int)62);
					}
					else{
						HX_STACK_LINE(132)
						tmp10 = false;
					}
					HX_STACK_LINE(132)
					if ((tmp10)){
						HX_STACK_LINE(134)
						int tmp11 = start;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(134)
						int tmp12 = (p - start);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(134)
						::String tmp13 = str.substr(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(134)
						::Xml tmp14 = ::Xml_obj::createCData(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(134)
						::Xml child = tmp14;		HX_STACK_VAR(child,"child");
						HX_STACK_LINE(135)
						{
							HX_STACK_LINE(135)
							::Xml tmp15 = child;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(135)
							parent->addChild(tmp15);
							HX_STACK_LINE(135)
							(nsubs)++;
						}
						HX_STACK_LINE(136)
						hx::AddEq(p,(int)2);
						HX_STACK_LINE(137)
						state = (int)1;
					}
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(140)
					int tmp7 = c;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(140)
					switch( (int)(tmp7)){
						case (int)33: {
							HX_STACK_LINE(143)
							int tmp8 = (p + (int)1);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(143)
							int tmp9 = str.cca(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(143)
							bool tmp10 = (tmp9 == (int)91);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(143)
							if ((tmp10)){
								HX_STACK_LINE(145)
								hx::AddEq(p,(int)2);
								HX_STACK_LINE(146)
								int tmp11 = p;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(146)
								::String tmp12 = str.substr(tmp11,(int)6);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(146)
								::String tmp13 = tmp12.toUpperCase();		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(146)
								bool tmp14 = (tmp13 != HX_HCSTRING("CDATA[","\xce","\x73","\x5f","\x1c"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(146)
								if ((tmp14)){
									HX_STACK_LINE(147)
									HX_STACK_DO_THROW(HX_HCSTRING("Expected <![CDATA[","\x1c","\x11","\x1f","\x2d"));
								}
								HX_STACK_LINE(148)
								hx::AddEq(p,(int)5);
								HX_STACK_LINE(149)
								state = (int)17;
								HX_STACK_LINE(150)
								int tmp15 = (p + (int)1);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(150)
								start = tmp15;
							}
							else{
								HX_STACK_LINE(152)
								int tmp11 = (p + (int)1);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(152)
								int tmp12 = str.cca(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(152)
								bool tmp13 = (tmp12 == (int)68);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(152)
								bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(152)
								bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(152)
								if ((tmp14)){
									HX_STACK_LINE(152)
									int tmp16 = (p + (int)1);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(152)
									int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(152)
									int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(152)
									int tmp19 = str.cca(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(152)
									int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(152)
									tmp15 = (tmp20 == (int)100);
								}
								else{
									HX_STACK_LINE(152)
									tmp15 = true;
								}
								HX_STACK_LINE(152)
								if ((tmp15)){
									HX_STACK_LINE(154)
									int tmp16 = (p + (int)2);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(154)
									::String tmp17 = str.substr(tmp16,(int)6);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(154)
									::String tmp18 = tmp17.toUpperCase();		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(154)
									bool tmp19 = (tmp18 != HX_HCSTRING("OCTYPE","\xce","\x19","\xd4","\x61"));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(154)
									if ((tmp19)){
										HX_STACK_LINE(155)
										HX_STACK_DO_THROW(HX_HCSTRING("Expected <!DOCTYPE","\xc5","\x0b","\x26","\xb6"));
									}
									HX_STACK_LINE(156)
									hx::AddEq(p,(int)8);
									HX_STACK_LINE(157)
									state = (int)16;
									HX_STACK_LINE(158)
									int tmp20 = (p + (int)1);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(158)
									start = tmp20;
								}
								else{
									HX_STACK_LINE(160)
									int tmp16 = (p + (int)1);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(160)
									int tmp17 = str.cca(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(160)
									bool tmp18 = (tmp17 != (int)45);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(160)
									bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(160)
									bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(160)
									if ((tmp19)){
										HX_STACK_LINE(160)
										int tmp21 = (p + (int)2);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(160)
										int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(160)
										int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(160)
										int tmp24 = str.cca(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(160)
										int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(160)
										tmp20 = (tmp25 != (int)45);
									}
									else{
										HX_STACK_LINE(160)
										tmp20 = true;
									}
									HX_STACK_LINE(160)
									if ((tmp20)){
										HX_STACK_LINE(161)
										HX_STACK_DO_THROW(HX_HCSTRING("Expected <!--","\x8d","\x3d","\xc1","\x53"));
									}
									else{
										HX_STACK_LINE(164)
										hx::AddEq(p,(int)2);
										HX_STACK_LINE(165)
										state = (int)15;
										HX_STACK_LINE(166)
										int tmp21 = (p + (int)1);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(166)
										start = tmp21;
									}
								}
							}
						}
						;break;
						case (int)63: {
							HX_STACK_LINE(169)
							state = (int)14;
							HX_STACK_LINE(170)
							start = p;
						}
						;break;
						case (int)47: {
							HX_STACK_LINE(172)
							bool tmp8 = (parent == null());		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(172)
							if ((tmp8)){
								HX_STACK_LINE(173)
								HX_STACK_DO_THROW(HX_HCSTRING("Expected node name","\xa1","\x85","\x63","\x3f"));
							}
							HX_STACK_LINE(174)
							int tmp9 = (p + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(174)
							start = tmp9;
							HX_STACK_LINE(175)
							state = (int)0;
							HX_STACK_LINE(176)
							next = (int)10;
						}
						;break;
						default: {
							HX_STACK_LINE(178)
							state = (int)3;
							HX_STACK_LINE(179)
							start = p;
							HX_STACK_LINE(180)
							continue;
						}
					}
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(183)
					bool tmp7 = (c >= (int)97);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(183)
					bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(183)
					bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(183)
					if ((tmp8)){
						HX_STACK_LINE(183)
						tmp9 = (c <= (int)122);
					}
					else{
						HX_STACK_LINE(183)
						tmp9 = false;
					}
					HX_STACK_LINE(183)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(183)
					bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(183)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(183)
					if ((tmp11)){
						HX_STACK_LINE(183)
						bool tmp13 = (c >= (int)65);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(183)
						bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(183)
						bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(183)
						bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(183)
						bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(183)
						if ((tmp17)){
							HX_STACK_LINE(183)
							tmp12 = (c <= (int)90);
						}
						else{
							HX_STACK_LINE(183)
							tmp12 = false;
						}
					}
					else{
						HX_STACK_LINE(183)
						tmp12 = true;
					}
					HX_STACK_LINE(183)
					bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(183)
					bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(183)
					bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(183)
					if ((tmp14)){
						HX_STACK_LINE(183)
						bool tmp16 = (c >= (int)48);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(183)
						bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(183)
						bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(183)
						bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(183)
						bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(183)
						if ((tmp20)){
							HX_STACK_LINE(183)
							tmp15 = (c <= (int)57);
						}
						else{
							HX_STACK_LINE(183)
							tmp15 = false;
						}
					}
					else{
						HX_STACK_LINE(183)
						tmp15 = true;
					}
					HX_STACK_LINE(183)
					bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(183)
					bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(183)
					bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(183)
					if ((tmp17)){
						HX_STACK_LINE(183)
						tmp18 = (c == (int)58);
					}
					else{
						HX_STACK_LINE(183)
						tmp18 = true;
					}
					HX_STACK_LINE(183)
					bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(183)
					bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(183)
					bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(183)
					if ((tmp20)){
						HX_STACK_LINE(183)
						tmp21 = (c == (int)46);
					}
					else{
						HX_STACK_LINE(183)
						tmp21 = true;
					}
					HX_STACK_LINE(183)
					bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(183)
					bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(183)
					bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(183)
					if ((tmp23)){
						HX_STACK_LINE(183)
						tmp24 = (c == (int)95);
					}
					else{
						HX_STACK_LINE(183)
						tmp24 = true;
					}
					HX_STACK_LINE(183)
					bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(183)
					bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(183)
					if ((tmp25)){
						HX_STACK_LINE(183)
						tmp26 = (c == (int)45);
					}
					else{
						HX_STACK_LINE(183)
						tmp26 = true;
					}
					HX_STACK_LINE(183)
					bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(183)
					if ((tmp27)){
						HX_STACK_LINE(185)
						bool tmp28 = (p == start);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(185)
						if ((tmp28)){
							HX_STACK_LINE(186)
							HX_STACK_DO_THROW(HX_HCSTRING("Expected node name","\xa1","\x85","\x63","\x3f"));
						}
						HX_STACK_LINE(187)
						int tmp29 = start;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(187)
						int tmp30 = (p - start);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(187)
						::String tmp31 = str.substr(tmp29,tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(187)
						::Xml tmp32 = ::Xml_obj::createElement(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(187)
						xml = tmp32;
						HX_STACK_LINE(188)
						{
							HX_STACK_LINE(188)
							::Xml tmp33 = xml;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(188)
							parent->addChild(tmp33);
							HX_STACK_LINE(188)
							(nsubs)++;
						}
						HX_STACK_LINE(189)
						state = (int)0;
						HX_STACK_LINE(190)
						next = (int)4;
						HX_STACK_LINE(191)
						continue;
					}
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(194)
					int tmp7 = c;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(194)
					switch( (int)(tmp7)){
						case (int)47: {
							HX_STACK_LINE(197)
							state = (int)11;
						}
						;break;
						case (int)62: {
							HX_STACK_LINE(199)
							state = (int)9;
						}
						;break;
						default: {
							HX_STACK_LINE(201)
							state = (int)5;
							HX_STACK_LINE(202)
							start = p;
							HX_STACK_LINE(203)
							continue;
						}
					}
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(206)
					bool tmp7 = (c >= (int)97);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(206)
					bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(206)
					bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(206)
					if ((tmp8)){
						HX_STACK_LINE(206)
						tmp9 = (c <= (int)122);
					}
					else{
						HX_STACK_LINE(206)
						tmp9 = false;
					}
					HX_STACK_LINE(206)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(206)
					bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(206)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(206)
					if ((tmp11)){
						HX_STACK_LINE(206)
						bool tmp13 = (c >= (int)65);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(206)
						bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(206)
						bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(206)
						bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(206)
						bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(206)
						if ((tmp17)){
							HX_STACK_LINE(206)
							tmp12 = (c <= (int)90);
						}
						else{
							HX_STACK_LINE(206)
							tmp12 = false;
						}
					}
					else{
						HX_STACK_LINE(206)
						tmp12 = true;
					}
					HX_STACK_LINE(206)
					bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(206)
					bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(206)
					bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(206)
					if ((tmp14)){
						HX_STACK_LINE(206)
						bool tmp16 = (c >= (int)48);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(206)
						bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(206)
						bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(206)
						bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(206)
						bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(206)
						if ((tmp20)){
							HX_STACK_LINE(206)
							tmp15 = (c <= (int)57);
						}
						else{
							HX_STACK_LINE(206)
							tmp15 = false;
						}
					}
					else{
						HX_STACK_LINE(206)
						tmp15 = true;
					}
					HX_STACK_LINE(206)
					bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(206)
					bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(206)
					bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(206)
					if ((tmp17)){
						HX_STACK_LINE(206)
						tmp18 = (c == (int)58);
					}
					else{
						HX_STACK_LINE(206)
						tmp18 = true;
					}
					HX_STACK_LINE(206)
					bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(206)
					bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(206)
					bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(206)
					if ((tmp20)){
						HX_STACK_LINE(206)
						tmp21 = (c == (int)46);
					}
					else{
						HX_STACK_LINE(206)
						tmp21 = true;
					}
					HX_STACK_LINE(206)
					bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(206)
					bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(206)
					bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(206)
					if ((tmp23)){
						HX_STACK_LINE(206)
						tmp24 = (c == (int)95);
					}
					else{
						HX_STACK_LINE(206)
						tmp24 = true;
					}
					HX_STACK_LINE(206)
					bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(206)
					bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(206)
					if ((tmp25)){
						HX_STACK_LINE(206)
						tmp26 = (c == (int)45);
					}
					else{
						HX_STACK_LINE(206)
						tmp26 = true;
					}
					HX_STACK_LINE(206)
					bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(206)
					if ((tmp27)){
						HX_STACK_LINE(208)
						::String tmp28;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(209)
						bool tmp29 = (start == p);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(209)
						if ((tmp29)){
							HX_STACK_LINE(210)
							HX_STACK_DO_THROW(HX_HCSTRING("Expected attribute name","\x57","\x65","\x2b","\x54"));
						}
						HX_STACK_LINE(211)
						int tmp30 = start;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(211)
						int tmp31 = (p - start);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(211)
						::String tmp32 = str.substr(tmp30,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(211)
						tmp28 = tmp32;
						HX_STACK_LINE(212)
						aname = tmp28;
						HX_STACK_LINE(213)
						::String tmp33 = aname;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(213)
						bool tmp34 = xml->exists(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(213)
						if ((tmp34)){
							HX_STACK_LINE(214)
							HX_STACK_DO_THROW(HX_HCSTRING("Duplicate attribute","\x27","\x81","\x0b","\x8b"));
						}
						HX_STACK_LINE(215)
						state = (int)0;
						HX_STACK_LINE(216)
						next = (int)6;
						HX_STACK_LINE(217)
						continue;
					}
				}
				;break;
				case (int)6: {
					HX_STACK_LINE(220)
					int tmp7 = c;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(220)
					switch( (int)(tmp7)){
						case (int)61: {
							HX_STACK_LINE(223)
							state = (int)0;
							HX_STACK_LINE(224)
							next = (int)7;
						}
						;break;
						default: {
							HX_STACK_LINE(226)
							HX_STACK_DO_THROW(HX_HCSTRING("Expected =","\xb5","\xdc","\x23","\xc6"));
						}
					}
				}
				;break;
				case (int)7: {
					HX_STACK_LINE(229)
					int tmp7 = c;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(229)
					switch( (int)(tmp7)){
						case (int)34: case (int)39: {
							HX_STACK_LINE(232)
							::StringBuf tmp8 = ::StringBuf_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(232)
							buf = tmp8;
							HX_STACK_LINE(233)
							state = (int)8;
							HX_STACK_LINE(234)
							int tmp9 = (p + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(234)
							start = tmp9;
							HX_STACK_LINE(235)
							attrValQuote = c;
						}
						;break;
						default: {
							HX_STACK_LINE(237)
							HX_STACK_DO_THROW(HX_HCSTRING("Expected \"","\x9a","\xdc","\x23","\xc6"));
						}
					}
				}
				;break;
				case (int)8: {
					HX_STACK_LINE(240)
					int tmp7 = c;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(240)
					switch( (int)(tmp7)){
						case (int)38: {
							HX_STACK_LINE(242)
							{
								HX_STACK_LINE(242)
								int tmp8 = start;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(242)
								int tmp9 = (p - start);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(242)
								::String tmp10 = str.substr(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(242)
								buf->b->push(tmp10);
							}
							HX_STACK_LINE(243)
							state = (int)18;
							HX_STACK_LINE(244)
							escapeNext = (int)8;
							HX_STACK_LINE(245)
							int tmp8 = (p + (int)1);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(245)
							start = tmp8;
						}
						;break;
						case (int)62: {
							HX_STACK_LINE(246)
							bool tmp8 = strict;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(246)
							if ((tmp8)){
								HX_STACK_LINE(248)
								int tmp9 = c;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(248)
								::String tmp10 = ::String::fromCharCode(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(248)
								::String tmp11 = (HX_HCSTRING("Invalid unescaped ","\xff","\xda","\xcb","\xcc") + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(248)
								::String tmp12 = (tmp11 + HX_HCSTRING(" in attribute value","\x52","\x5a","\xca","\x13"));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(248)
								HX_STACK_DO_THROW(tmp12);
							}
							else{
								HX_STACK_LINE(249)
								bool tmp9 = (c == attrValQuote);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(249)
								if ((tmp9)){
									HX_STACK_LINE(250)
									{
										HX_STACK_LINE(250)
										int tmp10 = start;		HX_STACK_VAR(tmp10,"tmp10");
										HX_STACK_LINE(250)
										int tmp11 = (p - start);		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(250)
										::String tmp12 = str.substr(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(250)
										buf->b->push(tmp12);
									}
									HX_STACK_LINE(251)
									::String tmp10 = buf->b->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(251)
									::String val = tmp10;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(252)
									::StringBuf tmp11 = ::StringBuf_obj::__new();		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(252)
									buf = tmp11;
									HX_STACK_LINE(253)
									::String tmp12 = aname;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(253)
									::String tmp13 = val;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(253)
									xml->set(tmp12,tmp13);
									HX_STACK_LINE(254)
									state = (int)0;
									HX_STACK_LINE(255)
									next = (int)4;
								}
							}
						}
						;break;
						case (int)60: {
							HX_STACK_LINE(246)
							bool tmp8 = strict;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(246)
							if ((tmp8)){
								HX_STACK_LINE(248)
								int tmp9 = c;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(248)
								::String tmp10 = ::String::fromCharCode(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(248)
								::String tmp11 = (HX_HCSTRING("Invalid unescaped ","\xff","\xda","\xcb","\xcc") + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(248)
								::String tmp12 = (tmp11 + HX_HCSTRING(" in attribute value","\x52","\x5a","\xca","\x13"));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(248)
								HX_STACK_DO_THROW(tmp12);
							}
							else{
								HX_STACK_LINE(249)
								bool tmp9 = (c == attrValQuote);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(249)
								if ((tmp9)){
									HX_STACK_LINE(250)
									{
										HX_STACK_LINE(250)
										int tmp10 = start;		HX_STACK_VAR(tmp10,"tmp10");
										HX_STACK_LINE(250)
										int tmp11 = (p - start);		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(250)
										::String tmp12 = str.substr(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(250)
										buf->b->push(tmp12);
									}
									HX_STACK_LINE(251)
									::String tmp10 = buf->b->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(251)
									::String val = tmp10;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(252)
									::StringBuf tmp11 = ::StringBuf_obj::__new();		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(252)
									buf = tmp11;
									HX_STACK_LINE(253)
									::String tmp12 = aname;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(253)
									::String tmp13 = val;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(253)
									xml->set(tmp12,tmp13);
									HX_STACK_LINE(254)
									state = (int)0;
									HX_STACK_LINE(255)
									next = (int)4;
								}
							}
						}
						;break;
						default: {
							HX_STACK_LINE(249)
							bool tmp8 = (c == attrValQuote);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(249)
							if ((tmp8)){
								HX_STACK_LINE(250)
								{
									HX_STACK_LINE(250)
									int tmp9 = start;		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(250)
									int tmp10 = (p - start);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(250)
									::String tmp11 = str.substr(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(250)
									buf->b->push(tmp11);
								}
								HX_STACK_LINE(251)
								::String tmp9 = buf->b->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(251)
								::String val = tmp9;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(252)
								::StringBuf tmp10 = ::StringBuf_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(252)
								buf = tmp10;
								HX_STACK_LINE(253)
								::String tmp11 = aname;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(253)
								::String tmp12 = val;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(253)
								xml->set(tmp11,tmp12);
								HX_STACK_LINE(254)
								state = (int)0;
								HX_STACK_LINE(255)
								next = (int)4;
							}
						}
					}
				}
				;break;
				case (int)9: {
					HX_STACK_LINE(258)
					::String tmp7 = str;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(258)
					bool tmp8 = strict;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(258)
					int tmp9 = p;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(258)
					::Xml tmp10 = xml;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(258)
					int tmp11 = ::haxe::xml::Parser_obj::doParse(tmp7,tmp8,tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(258)
					p = tmp11;
					HX_STACK_LINE(259)
					start = p;
					HX_STACK_LINE(260)
					state = (int)1;
				}
				;break;
				case (int)11: {
					HX_STACK_LINE(262)
					int tmp7 = c;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(262)
					switch( (int)(tmp7)){
						case (int)62: {
							HX_STACK_LINE(265)
							state = (int)1;
						}
						;break;
						default: {
							HX_STACK_LINE(267)
							HX_STACK_DO_THROW(HX_HCSTRING("Expected >","\xb6","\xdc","\x23","\xc6"));
						}
					}
				}
				;break;
				case (int)12: {
					HX_STACK_LINE(270)
					int tmp7 = c;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(270)
					switch( (int)(tmp7)){
						case (int)62: {
							HX_STACK_LINE(273)
							bool tmp8 = (nsubs == (int)0);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(273)
							if ((tmp8)){
								HX_STACK_LINE(274)
								::Xml tmp9 = ::Xml_obj::createPCData(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(274)
								parent->addChild(tmp9);
							}
							HX_STACK_LINE(275)
							int tmp9 = p;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(275)
							return tmp9;
						}
						;break;
						default: {
							HX_STACK_LINE(277)
							HX_STACK_DO_THROW(HX_HCSTRING("Expected >","\xb6","\xdc","\x23","\xc6"));
						}
					}
				}
				;break;
				case (int)10: {
					HX_STACK_LINE(280)
					bool tmp7 = (c >= (int)97);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(280)
					bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(280)
					bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(280)
					if ((tmp8)){
						HX_STACK_LINE(280)
						tmp9 = (c <= (int)122);
					}
					else{
						HX_STACK_LINE(280)
						tmp9 = false;
					}
					HX_STACK_LINE(280)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(280)
					bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(280)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(280)
					if ((tmp11)){
						HX_STACK_LINE(280)
						bool tmp13 = (c >= (int)65);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(280)
						bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(280)
						bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(280)
						bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(280)
						bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(280)
						if ((tmp17)){
							HX_STACK_LINE(280)
							tmp12 = (c <= (int)90);
						}
						else{
							HX_STACK_LINE(280)
							tmp12 = false;
						}
					}
					else{
						HX_STACK_LINE(280)
						tmp12 = true;
					}
					HX_STACK_LINE(280)
					bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(280)
					bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(280)
					bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(280)
					if ((tmp14)){
						HX_STACK_LINE(280)
						bool tmp16 = (c >= (int)48);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(280)
						bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(280)
						bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(280)
						bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(280)
						bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(280)
						if ((tmp20)){
							HX_STACK_LINE(280)
							tmp15 = (c <= (int)57);
						}
						else{
							HX_STACK_LINE(280)
							tmp15 = false;
						}
					}
					else{
						HX_STACK_LINE(280)
						tmp15 = true;
					}
					HX_STACK_LINE(280)
					bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(280)
					bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(280)
					bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(280)
					if ((tmp17)){
						HX_STACK_LINE(280)
						tmp18 = (c == (int)58);
					}
					else{
						HX_STACK_LINE(280)
						tmp18 = true;
					}
					HX_STACK_LINE(280)
					bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(280)
					bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(280)
					bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(280)
					if ((tmp20)){
						HX_STACK_LINE(280)
						tmp21 = (c == (int)46);
					}
					else{
						HX_STACK_LINE(280)
						tmp21 = true;
					}
					HX_STACK_LINE(280)
					bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(280)
					bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(280)
					bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(280)
					if ((tmp23)){
						HX_STACK_LINE(280)
						tmp24 = (c == (int)95);
					}
					else{
						HX_STACK_LINE(280)
						tmp24 = true;
					}
					HX_STACK_LINE(280)
					bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(280)
					bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(280)
					if ((tmp25)){
						HX_STACK_LINE(280)
						tmp26 = (c == (int)45);
					}
					else{
						HX_STACK_LINE(280)
						tmp26 = true;
					}
					HX_STACK_LINE(280)
					bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(280)
					if ((tmp27)){
						HX_STACK_LINE(282)
						bool tmp28 = (start == p);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(282)
						if ((tmp28)){
							HX_STACK_LINE(283)
							HX_STACK_DO_THROW(HX_HCSTRING("Expected node name","\xa1","\x85","\x63","\x3f"));
						}
						HX_STACK_LINE(285)
						int tmp29 = start;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(285)
						int tmp30 = (p - start);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(285)
						::String tmp31 = str.substr(tmp29,tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(285)
						::String v = tmp31;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(286)
						::String tmp32 = v;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(286)
						::String tmp33;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(286)
						{
							HX_STACK_LINE(286)
							int tmp34 = parent->nodeType;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(286)
							int tmp35 = ::Xml_obj::Element;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(286)
							bool tmp36 = (tmp34 != tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(286)
							if ((tmp36)){
								HX_STACK_LINE(286)
								::String tmp37 = (HX_HCSTRING("Bad node type, expected Element but found ","\xd8","\x90","\x8b","\xbb") + parent->nodeType);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(286)
								HX_STACK_DO_THROW(tmp37);
							}
							HX_STACK_LINE(286)
							tmp33 = parent->nodeName;
						}
						HX_STACK_LINE(286)
						bool tmp34 = (tmp32 != tmp33);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(286)
						if ((tmp34)){
							HX_STACK_LINE(287)
							::String tmp35;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(287)
							{
								HX_STACK_LINE(287)
								int tmp36 = parent->nodeType;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(287)
								int tmp37 = ::Xml_obj::Element;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(287)
								bool tmp38 = (tmp36 != tmp37);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(287)
								if ((tmp38)){
									HX_STACK_LINE(287)
									::String tmp39 = (HX_HCSTRING("Bad node type, expected Element but found ","\xd8","\x90","\x8b","\xbb") + parent->nodeType);		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(287)
									HX_STACK_DO_THROW(tmp39);
								}
								HX_STACK_LINE(287)
								tmp35 = parent->nodeName;
							}
							HX_STACK_LINE(287)
							::String tmp36 = (HX_HCSTRING("Expected </","\xfb","\x40","\x3d","\x99") + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(287)
							::String tmp37 = (tmp36 + HX_HCSTRING(">","\x3e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(287)
							HX_STACK_DO_THROW(tmp37);
						}
						HX_STACK_LINE(289)
						state = (int)0;
						HX_STACK_LINE(290)
						next = (int)12;
						HX_STACK_LINE(291)
						continue;
					}
				}
				;break;
				case (int)15: {
					HX_STACK_LINE(294)
					bool tmp7 = (c == (int)45);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(294)
					bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(294)
					bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(294)
					if ((tmp8)){
						HX_STACK_LINE(294)
						int tmp10 = (p + (int)1);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(294)
						int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(294)
						int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(294)
						int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(294)
						int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(294)
						int tmp15 = str.cca(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(294)
						int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(294)
						int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(294)
						tmp9 = (tmp17 == (int)45);
					}
					else{
						HX_STACK_LINE(294)
						tmp9 = false;
					}
					HX_STACK_LINE(294)
					bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(294)
					if ((tmp9)){
						HX_STACK_LINE(294)
						int tmp11 = (p + (int)2);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(294)
						int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(294)
						int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(294)
						int tmp14 = str.cca(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(294)
						int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(294)
						tmp10 = (tmp15 == (int)62);
					}
					else{
						HX_STACK_LINE(294)
						tmp10 = false;
					}
					HX_STACK_LINE(294)
					if ((tmp10)){
						HX_STACK_LINE(296)
						{
							HX_STACK_LINE(296)
							int tmp11 = start;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(296)
							int tmp12 = (p - start);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(296)
							::String tmp13 = str.substr(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(296)
							::Xml tmp14 = ::Xml_obj::createComment(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(296)
							::Xml xml1 = tmp14;		HX_STACK_VAR(xml1,"xml1");
							HX_STACK_LINE(296)
							::Xml tmp15 = xml1;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(296)
							parent->addChild(tmp15);
							HX_STACK_LINE(296)
							(nsubs)++;
						}
						HX_STACK_LINE(297)
						hx::AddEq(p,(int)2);
						HX_STACK_LINE(298)
						state = (int)1;
					}
				}
				;break;
				case (int)16: {
					HX_STACK_LINE(301)
					bool tmp7 = (c == (int)91);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(301)
					if ((tmp7)){
						HX_STACK_LINE(302)
						(nbrackets)++;
					}
					else{
						HX_STACK_LINE(303)
						bool tmp8 = (c == (int)93);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(303)
						if ((tmp8)){
							HX_STACK_LINE(304)
							(nbrackets)--;
						}
						else{
							HX_STACK_LINE(305)
							bool tmp9 = (c == (int)62);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(305)
							bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(305)
							if ((tmp9)){
								HX_STACK_LINE(305)
								tmp10 = (nbrackets == (int)0);
							}
							else{
								HX_STACK_LINE(305)
								tmp10 = false;
							}
							HX_STACK_LINE(305)
							if ((tmp10)){
								HX_STACK_LINE(307)
								{
									HX_STACK_LINE(307)
									int tmp11 = start;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(307)
									int tmp12 = (p - start);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(307)
									::String tmp13 = str.substr(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(307)
									::Xml tmp14 = ::Xml_obj::createDocType(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(307)
									::Xml xml1 = tmp14;		HX_STACK_VAR(xml1,"xml1");
									HX_STACK_LINE(307)
									::Xml tmp15 = xml1;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(307)
									parent->addChild(tmp15);
									HX_STACK_LINE(307)
									(nsubs)++;
								}
								HX_STACK_LINE(308)
								state = (int)1;
							}
						}
					}
				}
				;break;
				case (int)14: {
					HX_STACK_LINE(311)
					bool tmp7 = (c == (int)63);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(311)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(311)
					if ((tmp7)){
						HX_STACK_LINE(311)
						int tmp9 = (p + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(311)
						int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(311)
						int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(311)
						int tmp12 = str.cca(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(311)
						int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(311)
						tmp8 = (tmp13 == (int)62);
					}
					else{
						HX_STACK_LINE(311)
						tmp8 = false;
					}
					HX_STACK_LINE(311)
					if ((tmp8)){
						HX_STACK_LINE(313)
						(p)++;
						HX_STACK_LINE(314)
						int tmp9 = (start + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(314)
						int tmp10 = (p - start);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(314)
						int tmp11 = (tmp10 - (int)2);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(314)
						::String tmp12 = str.substr(tmp9,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(314)
						::String str1 = tmp12;		HX_STACK_VAR(str1,"str1");
						HX_STACK_LINE(315)
						{
							HX_STACK_LINE(315)
							::String tmp13 = str1;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(315)
							::Xml tmp14 = ::Xml_obj::createProcessingInstruction(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(315)
							::Xml xml1 = tmp14;		HX_STACK_VAR(xml1,"xml1");
							HX_STACK_LINE(315)
							::Xml tmp15 = xml1;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(315)
							parent->addChild(tmp15);
							HX_STACK_LINE(315)
							(nsubs)++;
						}
						HX_STACK_LINE(316)
						state = (int)1;
					}
				}
				;break;
				case (int)18: {
					HX_STACK_LINE(319)
					bool tmp7 = (c == (int)59);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(319)
					if ((tmp7)){
						HX_STACK_LINE(321)
						int tmp8 = start;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(321)
						int tmp9 = (p - start);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(321)
						::String tmp10 = str.substr(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(321)
						::String s = tmp10;		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(322)
						int tmp11 = s.cca((int)0);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(322)
						bool tmp12 = (tmp11 == (int)35);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(322)
						if ((tmp12)){
							HX_STACK_LINE(323)
							int tmp13 = s.cca((int)1);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(323)
							bool tmp14 = (tmp13 == (int)120);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(323)
							Dynamic tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(323)
							if ((tmp14)){
								HX_STACK_LINE(324)
								int tmp16 = (s.length - (int)1);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(324)
								::String tmp17 = s.substr((int)1,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(324)
								::String tmp18 = (HX_HCSTRING("0","\x30","\x00","\x00","\x00") + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(324)
								tmp15 = ::Std_obj::parseInt(tmp18);
							}
							else{
								HX_STACK_LINE(325)
								int tmp16 = (s.length - (int)1);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(325)
								::String tmp17 = s.substr((int)1,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(325)
								tmp15 = ::Std_obj::parseInt(tmp17);
							}
							HX_STACK_LINE(323)
							Dynamic c1 = tmp15;		HX_STACK_VAR(c1,"c1");
							HX_STACK_LINE(327)
							bool tmp16 = (c1 >= (int)128);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(327)
							if ((tmp16)){
								HX_STACK_LINE(329)
								bool tmp17 = (c1 <= (int)2047);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(329)
								if ((tmp17)){
									HX_STACK_LINE(330)
									{
										HX_STACK_LINE(330)
										int tmp18 = (int(c1) >> int((int)6));		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(330)
										int tmp19 = (int((int)192) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(330)
										::String tmp20 = ::String::fromCharCode(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(330)
										buf->b->push(tmp20);
									}
									HX_STACK_LINE(331)
									{
										HX_STACK_LINE(331)
										int tmp18 = (int(c1) & int((int)63));		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(331)
										int tmp19 = (int((int)128) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(331)
										::String tmp20 = ::String::fromCharCode(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(331)
										buf->b->push(tmp20);
									}
								}
								else{
									HX_STACK_LINE(332)
									bool tmp18 = (c1 <= (int)65535);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(332)
									if ((tmp18)){
										HX_STACK_LINE(333)
										{
											HX_STACK_LINE(333)
											int tmp19 = (int(c1) >> int((int)12));		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(333)
											int tmp20 = (int((int)224) | int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(333)
											::String tmp21 = ::String::fromCharCode(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(333)
											buf->b->push(tmp21);
										}
										HX_STACK_LINE(334)
										{
											HX_STACK_LINE(334)
											int tmp19 = (int(c1) >> int((int)6));		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(334)
											int tmp20 = (int(tmp19) & int((int)63));		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(334)
											int tmp21 = (int((int)128) | int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(334)
											::String tmp22 = ::String::fromCharCode(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(334)
											buf->b->push(tmp22);
										}
										HX_STACK_LINE(335)
										{
											HX_STACK_LINE(335)
											int tmp19 = (int(c1) & int((int)63));		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(335)
											int tmp20 = (int((int)128) | int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(335)
											::String tmp21 = ::String::fromCharCode(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(335)
											buf->b->push(tmp21);
										}
									}
									else{
										HX_STACK_LINE(336)
										bool tmp19 = (c1 <= (int)1114111);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(336)
										if ((tmp19)){
											HX_STACK_LINE(337)
											{
												HX_STACK_LINE(337)
												int tmp20 = (int(c1) >> int((int)18));		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(337)
												int tmp21 = (int((int)240) | int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(337)
												::String tmp22 = ::String::fromCharCode(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(337)
												buf->b->push(tmp22);
											}
											HX_STACK_LINE(338)
											{
												HX_STACK_LINE(338)
												int tmp20 = (int(c1) >> int((int)12));		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(338)
												int tmp21 = (int(tmp20) & int((int)63));		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(338)
												int tmp22 = (int((int)128) | int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(338)
												::String tmp23 = ::String::fromCharCode(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(338)
												buf->b->push(tmp23);
											}
											HX_STACK_LINE(339)
											{
												HX_STACK_LINE(339)
												int tmp20 = (int(c1) >> int((int)6));		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(339)
												int tmp21 = (int(tmp20) & int((int)63));		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(339)
												int tmp22 = (int((int)128) | int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(339)
												::String tmp23 = ::String::fromCharCode(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(339)
												buf->b->push(tmp23);
											}
											HX_STACK_LINE(340)
											{
												HX_STACK_LINE(340)
												int tmp20 = (int(c1) & int((int)63));		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(340)
												int tmp21 = (int((int)128) | int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(340)
												::String tmp22 = ::String::fromCharCode(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(340)
												buf->b->push(tmp22);
											}
										}
										else{
											HX_STACK_LINE(342)
											::String tmp20 = (HX_HCSTRING("Cannot encode UTF8-char ","\xdb","\x8e","\x93","\xf7") + c1);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(342)
											HX_STACK_DO_THROW(tmp20);
										}
									}
								}
							}
							else{
								HX_STACK_LINE(345)
								int c2 = c1;		HX_STACK_VAR(c2,"c2");
								HX_STACK_LINE(345)
								int tmp17 = c2;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(345)
								::String tmp18 = ::String::fromCharCode(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(345)
								buf->b->push(tmp18);
							}
						}
						else{
							HX_STACK_LINE(346)
							::haxe::ds::StringMap tmp13 = ::haxe::xml::Parser_obj::escapes;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(346)
							::String tmp14 = s;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(346)
							bool tmp15 = tmp13->exists(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(346)
							bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(346)
							if ((tmp16)){
								HX_STACK_LINE(347)
								bool tmp17 = strict;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(347)
								if ((tmp17)){
									HX_STACK_LINE(348)
									::String tmp18 = (HX_HCSTRING("Undefined entity: ","\x39","\x48","\xf2","\x48") + s);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(348)
									HX_STACK_DO_THROW(tmp18);
								}
								HX_STACK_LINE(349)
								::String tmp18 = (HX_HCSTRING("&","\x26","\x00","\x00","\x00") + s);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(349)
								::String tmp19 = (tmp18 + HX_HCSTRING(";","\x3b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(349)
								buf->add(tmp19);
							}
							else{
								HX_STACK_LINE(351)
								::haxe::ds::StringMap tmp17 = ::haxe::xml::Parser_obj::escapes;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(351)
								::String tmp18 = s;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(351)
								::String tmp19 = tmp17->get(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(351)
								buf->add(tmp19);
							}
						}
						HX_STACK_LINE(353)
						int tmp13 = (p + (int)1);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(353)
						start = tmp13;
						HX_STACK_LINE(354)
						state = escapeNext;
					}
					else{
						HX_STACK_LINE(355)
						bool tmp8 = (c >= (int)97);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(355)
						bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(355)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(355)
						if ((tmp9)){
							HX_STACK_LINE(355)
							tmp10 = (c <= (int)122);
						}
						else{
							HX_STACK_LINE(355)
							tmp10 = false;
						}
						HX_STACK_LINE(355)
						bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(355)
						bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(355)
						bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(355)
						if ((tmp12)){
							HX_STACK_LINE(355)
							bool tmp14 = (c >= (int)65);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(355)
							bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(355)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(355)
							bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(355)
							bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(355)
							if ((tmp18)){
								HX_STACK_LINE(355)
								tmp13 = (c <= (int)90);
							}
							else{
								HX_STACK_LINE(355)
								tmp13 = false;
							}
						}
						else{
							HX_STACK_LINE(355)
							tmp13 = true;
						}
						HX_STACK_LINE(355)
						bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(355)
						bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(355)
						bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(355)
						if ((tmp15)){
							HX_STACK_LINE(355)
							bool tmp17 = (c >= (int)48);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(355)
							bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(355)
							bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(355)
							bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(355)
							bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(355)
							if ((tmp21)){
								HX_STACK_LINE(355)
								tmp16 = (c <= (int)57);
							}
							else{
								HX_STACK_LINE(355)
								tmp16 = false;
							}
						}
						else{
							HX_STACK_LINE(355)
							tmp16 = true;
						}
						HX_STACK_LINE(355)
						bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(355)
						bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(355)
						bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(355)
						if ((tmp18)){
							HX_STACK_LINE(355)
							tmp19 = (c == (int)58);
						}
						else{
							HX_STACK_LINE(355)
							tmp19 = true;
						}
						HX_STACK_LINE(355)
						bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(355)
						bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(355)
						bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(355)
						if ((tmp21)){
							HX_STACK_LINE(355)
							tmp22 = (c == (int)46);
						}
						else{
							HX_STACK_LINE(355)
							tmp22 = true;
						}
						HX_STACK_LINE(355)
						bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(355)
						bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(355)
						bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(355)
						if ((tmp24)){
							HX_STACK_LINE(355)
							tmp25 = (c == (int)95);
						}
						else{
							HX_STACK_LINE(355)
							tmp25 = true;
						}
						HX_STACK_LINE(355)
						bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(355)
						bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(355)
						if ((tmp26)){
							HX_STACK_LINE(355)
							tmp27 = (c == (int)45);
						}
						else{
							HX_STACK_LINE(355)
							tmp27 = true;
						}
						HX_STACK_LINE(355)
						bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(355)
						bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(355)
						bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(355)
						if ((tmp29)){
							HX_STACK_LINE(355)
							tmp30 = (c != (int)35);
						}
						else{
							HX_STACK_LINE(355)
							tmp30 = false;
						}
						HX_STACK_LINE(355)
						if ((tmp30)){
							HX_STACK_LINE(356)
							bool tmp31 = strict;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(356)
							if ((tmp31)){
								HX_STACK_LINE(357)
								int tmp32 = c;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(357)
								::String tmp33 = ::String::fromCharCode(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(357)
								::String tmp34 = (HX_HCSTRING("Invalid character in entity: ","\x24","\x85","\x11","\x30") + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(357)
								HX_STACK_DO_THROW(tmp34);
							}
							HX_STACK_LINE(358)
							{
								HX_STACK_LINE(358)
								::String tmp32 = HX_HCSTRING("&","\x26","\x00","\x00","\x00");		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(358)
								buf->b->push(tmp32);
							}
							HX_STACK_LINE(359)
							{
								HX_STACK_LINE(359)
								int tmp32 = start;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(359)
								int tmp33 = (p - start);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(359)
								::String tmp34 = str.substr(tmp32,tmp33);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(359)
								buf->b->push(tmp34);
							}
							HX_STACK_LINE(360)
							(p)--;
							HX_STACK_LINE(361)
							int tmp32 = (p + (int)1);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(361)
							start = tmp32;
							HX_STACK_LINE(362)
							state = escapeNext;
						}
					}
				}
				;break;
			}
			HX_STACK_LINE(365)
			int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(365)
			{
				HX_STACK_LINE(365)
				int tmp8 = ++(p);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(365)
				int index = tmp8;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(365)
				int tmp9 = index;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(365)
				tmp7 = str.cca(tmp9);
			}
			HX_STACK_LINE(365)
			c = tmp7;
		}
		HX_STACK_LINE(368)
		bool tmp3 = (state == (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(368)
		if ((tmp3)){
			HX_STACK_LINE(370)
			start = p;
			HX_STACK_LINE(371)
			state = (int)13;
		}
		HX_STACK_LINE(374)
		bool tmp4 = (state == (int)13);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(374)
		if ((tmp4)){
			HX_STACK_LINE(376)
			bool tmp5 = (p != start);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(376)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(376)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(376)
			if ((tmp6)){
				HX_STACK_LINE(376)
				tmp7 = (nsubs == (int)0);
			}
			else{
				HX_STACK_LINE(376)
				tmp7 = true;
			}
			HX_STACK_LINE(376)
			if ((tmp7)){
				HX_STACK_LINE(377)
				{
					HX_STACK_LINE(377)
					int tmp8 = start;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(377)
					int tmp9 = (p - start);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(377)
					::String tmp10 = str.substr(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(377)
					buf->b->push(tmp10);
				}
				HX_STACK_LINE(378)
				{
					HX_STACK_LINE(378)
					::String tmp8 = buf->b->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(378)
					::Xml tmp9 = ::Xml_obj::createPCData(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(378)
					::Xml xml1 = tmp9;		HX_STACK_VAR(xml1,"xml1");
					HX_STACK_LINE(378)
					::Xml tmp10 = xml1;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(378)
					parent->addChild(tmp10);
					HX_STACK_LINE(378)
					(nsubs)++;
				}
			}
			HX_STACK_LINE(380)
			int tmp8 = p;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(380)
			return tmp8;
		}
		HX_STACK_LINE(383)
		bool tmp5 = strict;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(383)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(383)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(383)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(383)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(383)
		if ((tmp8)){
			HX_STACK_LINE(383)
			tmp9 = (state == (int)18);
		}
		else{
			HX_STACK_LINE(383)
			tmp9 = false;
		}
		HX_STACK_LINE(383)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(383)
		if ((tmp9)){
			HX_STACK_LINE(383)
			tmp10 = (escapeNext == (int)13);
		}
		else{
			HX_STACK_LINE(383)
			tmp10 = false;
		}
		HX_STACK_LINE(383)
		if ((tmp10)){
			HX_STACK_LINE(384)
			{
				HX_STACK_LINE(384)
				::String tmp11 = HX_HCSTRING("&","\x26","\x00","\x00","\x00");		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(384)
				buf->b->push(tmp11);
			}
			HX_STACK_LINE(385)
			{
				HX_STACK_LINE(385)
				int tmp11 = start;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(385)
				int tmp12 = (p - start);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(385)
				::String tmp13 = str.substr(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(385)
				buf->b->push(tmp13);
			}
			HX_STACK_LINE(386)
			{
				HX_STACK_LINE(386)
				::String tmp11 = buf->b->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(386)
				::Xml tmp12 = ::Xml_obj::createPCData(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(386)
				::Xml xml1 = tmp12;		HX_STACK_VAR(xml1,"xml1");
				HX_STACK_LINE(386)
				::Xml tmp13 = xml1;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(386)
				parent->addChild(tmp13);
				HX_STACK_LINE(386)
				(nsubs)++;
			}
			HX_STACK_LINE(387)
			int tmp11 = p;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(387)
			return tmp11;
		}
		HX_STACK_LINE(390)
		HX_STACK_DO_THROW(HX_HCSTRING("Unexpected end","\x2c","\x3e","\xab","\x50"));
		HX_STACK_LINE(390)
		return (int)0;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Parser_obj,doParse,return )


Parser_obj::Parser_obj()
{
}

bool Parser_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { outValue = parse_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"escapes") ) { outValue = escapes; return true;  }
		if (HX_FIELD_EQ(inName,"doParse") ) { outValue = doParse_dyn(); return true;  }
	}
	return false;
}

bool Parser_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"escapes") ) { escapes=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &Parser_obj::escapes,HX_HCSTRING("escapes","\xd2","\xcd","\x20","\xa4")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Parser_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Parser_obj::escapes,"escapes");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Parser_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Parser_obj::escapes,"escapes");
};

#endif

hx::Class Parser_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("escapes","\xd2","\xcd","\x20","\xa4"),
	HX_HCSTRING("parse","\x33","\x90","\x55","\xbd"),
	HX_HCSTRING("doParse","\xa8","\x70","\x82","\xf0"),
	::String(null()) };

void Parser_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.xml.Parser","\xfe","\x49","\x90","\xc4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Parser_obj::__GetStatic;
	__mClass->mSetStaticField = &Parser_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Parser_obj >;
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

void Parser_obj::__boot()
{
struct _Function_0_1{
	inline static ::haxe::ds::StringMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/xml/Parser.hx",51,0xbc28dcd7)
		{
			HX_STACK_LINE(52)
			::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(52)
			::haxe::ds::StringMap h = tmp;		HX_STACK_VAR(h,"h");
			HX_STACK_LINE(53)
			h->set(HX_HCSTRING("lt","\x88","\x5e","\x00","\x00"),HX_HCSTRING("<","\x3c","\x00","\x00","\x00"));
			HX_STACK_LINE(54)
			h->set(HX_HCSTRING("gt","\x2d","\x5a","\x00","\x00"),HX_HCSTRING(">","\x3e","\x00","\x00","\x00"));
			HX_STACK_LINE(55)
			h->set(HX_HCSTRING("amp","\x04","\xfa","\x49","\x00"),HX_HCSTRING("&","\x26","\x00","\x00","\x00"));
			HX_STACK_LINE(56)
			h->set(HX_HCSTRING("quot","\x09","\x45","\x0a","\x4b"),HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));
			HX_STACK_LINE(57)
			h->set(HX_HCSTRING("apos","\xd3","\x0f","\x73","\x40"),HX_HCSTRING("'","\x27","\x00","\x00","\x00"));
			HX_STACK_LINE(58)
			return h;
		}
		return null();
	}
};
	escapes= _Function_0_1::Block();
}

} // end namespace haxe
} // end namespace xml
