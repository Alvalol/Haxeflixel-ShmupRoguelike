#include <hxcpp.h>

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

Void Xml_obj::__construct(int nodeType)
{
HX_STACK_FRAME("Xml","new",0x2e496e29,"Xml.new","C:\\HaxeToolkit\\haxe\\std/Xml.hx",316,0x6fe08e00)
HX_STACK_THIS(this)
HX_STACK_ARG(nodeType,"nodeType")
{
	HX_STACK_LINE(317)
	this->nodeType = nodeType;
	HX_STACK_LINE(318)
	this->children = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(319)
	::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(319)
	{
		HX_STACK_LINE(319)
		::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(319)
		::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(319)
		tmp = tmp2;
	}
	HX_STACK_LINE(319)
	this->attributeMap = tmp;
}
;
	return null();
}

//Xml_obj::~Xml_obj() { }

Dynamic Xml_obj::__CreateEmpty() { return  new Xml_obj; }
hx::ObjectPtr< Xml_obj > Xml_obj::__new(int nodeType)
{  hx::ObjectPtr< Xml_obj > _result_ = new Xml_obj();
	_result_->__construct(nodeType);
	return _result_;}

Dynamic Xml_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Xml_obj > _result_ = new Xml_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::String Xml_obj::get( ::String att){
	HX_STACK_FRAME("Xml","get",0x2e441e5f,"Xml.get","C:\\HaxeToolkit\\haxe\\std/Xml.hx",166,0x6fe08e00)
	HX_STACK_THIS(this)
	HX_STACK_ARG(att,"att")
	HX_STACK_LINE(167)
	int tmp = this->nodeType;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(167)
	int tmp1 = ::Xml_obj::Element;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(167)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(167)
	if ((tmp2)){
		HX_STACK_LINE(168)
		int tmp3 = this->nodeType;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(168)
		::String tmp4 = (HX_HCSTRING("Bad node type, expected Element but found ","\xd8","\x90","\x8b","\xbb") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(168)
		HX_STACK_DO_THROW(tmp4);
	}
	HX_STACK_LINE(170)
	::haxe::ds::StringMap tmp3 = this->attributeMap;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(170)
	::String tmp4 = att;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(170)
	::String tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(170)
	::String tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(170)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(Xml_obj,get,return )

Void Xml_obj::set( ::String att,::String value){
{
		HX_STACK_FRAME("Xml","set",0x2e4d396b,"Xml.set","C:\\HaxeToolkit\\haxe\\std/Xml.hx",177,0x6fe08e00)
		HX_STACK_THIS(this)
		HX_STACK_ARG(att,"att")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(178)
		int tmp = this->nodeType;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(178)
		int tmp1 = ::Xml_obj::Element;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(178)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(178)
		if ((tmp2)){
			HX_STACK_LINE(179)
			int tmp3 = this->nodeType;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(179)
			::String tmp4 = (HX_HCSTRING("Bad node type, expected Element but found ","\xd8","\x90","\x8b","\xbb") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(179)
			HX_STACK_DO_THROW(tmp4);
		}
		HX_STACK_LINE(181)
		::haxe::ds::StringMap tmp3 = this->attributeMap;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(181)
		::String tmp4 = att;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(181)
		::String tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(181)
		tmp3->set(tmp4,tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Xml_obj,set,(void))

bool Xml_obj::exists( ::String att){
	HX_STACK_FRAME("Xml","exists",0x446683b3,"Xml.exists","C:\\HaxeToolkit\\haxe\\std/Xml.hx",199,0x6fe08e00)
	HX_STACK_THIS(this)
	HX_STACK_ARG(att,"att")
	HX_STACK_LINE(200)
	int tmp = this->nodeType;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(200)
	int tmp1 = ::Xml_obj::Element;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(200)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(200)
	if ((tmp2)){
		HX_STACK_LINE(201)
		int tmp3 = this->nodeType;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(201)
		::String tmp4 = (HX_HCSTRING("Bad node type, expected Element but found ","\xd8","\x90","\x8b","\xbb") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(201)
		HX_STACK_DO_THROW(tmp4);
	}
	HX_STACK_LINE(203)
	::haxe::ds::StringMap tmp3 = this->attributeMap;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(203)
	::String tmp4 = att;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(203)
	bool tmp5 = tmp3->exists(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(203)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Xml_obj,exists,return )

Dynamic Xml_obj::elements( ){
	HX_STACK_FRAME("Xml","elements",0x0310ffce,"Xml.elements","C:\\HaxeToolkit\\haxe\\std/Xml.hx",229,0x6fe08e00)
	HX_STACK_THIS(this)
	HX_STACK_LINE(230)
	{
		HX_STACK_LINE(230)
		int tmp = this->nodeType;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(230)
		int tmp1 = ::Xml_obj::Document;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(230)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(230)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(230)
		if ((tmp2)){
			HX_STACK_LINE(230)
			int tmp4 = this->nodeType;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(230)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(230)
			int tmp6 = ::Xml_obj::Element;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(230)
			int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(230)
			tmp3 = (tmp5 != tmp7);
		}
		else{
			HX_STACK_LINE(230)
			tmp3 = false;
		}
		HX_STACK_LINE(230)
		if ((tmp3)){
			HX_STACK_LINE(230)
			int tmp4 = this->nodeType;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(230)
			::String tmp5 = (HX_HCSTRING("Bad node type, expected Element or Document but found ","\xa0","\xd6","\xba","\x79") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(230)
			HX_STACK_DO_THROW(tmp5);
		}
	}
	HX_STACK_LINE(231)
	Array< ::Dynamic > ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(231)
	{
		HX_STACK_LINE(231)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(231)
		{
			HX_STACK_LINE(231)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(231)
			Array< ::Dynamic > _g2 = this->children;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(231)
			while((true)){
				HX_STACK_LINE(231)
				bool tmp = (_g1 < _g2->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(231)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(231)
				if ((tmp1)){
					HX_STACK_LINE(231)
					break;
				}
				HX_STACK_LINE(231)
				::Xml tmp2 = _g2->__get(_g1).StaticCast< ::Xml >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(231)
				::Xml child = tmp2;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(231)
				++(_g1);
				HX_STACK_LINE(231)
				int tmp3 = child->nodeType;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(231)
				int tmp4 = ::Xml_obj::Element;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(231)
				bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(231)
				if ((tmp5)){
					HX_STACK_LINE(231)
					::Xml tmp6 = child;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(231)
					_g->push(tmp6);
				}
			}
		}
		HX_STACK_LINE(231)
		ret = _g;
	}
	HX_STACK_LINE(232)
	Dynamic tmp = ret->iteratorFast< ::Xml >();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(232)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Xml_obj,elements,return )

Dynamic Xml_obj::elementsNamed( ::String name){
	HX_STACK_FRAME("Xml","elementsNamed",0x6b28f50b,"Xml.elementsNamed","C:\\HaxeToolkit\\haxe\\std/Xml.hx",239,0x6fe08e00)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(240)
	{
		HX_STACK_LINE(240)
		int tmp = this->nodeType;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(240)
		int tmp1 = ::Xml_obj::Document;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(240)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(240)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(240)
		if ((tmp2)){
			HX_STACK_LINE(240)
			int tmp4 = this->nodeType;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(240)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(240)
			int tmp6 = ::Xml_obj::Element;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(240)
			int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(240)
			tmp3 = (tmp5 != tmp7);
		}
		else{
			HX_STACK_LINE(240)
			tmp3 = false;
		}
		HX_STACK_LINE(240)
		if ((tmp3)){
			HX_STACK_LINE(240)
			int tmp4 = this->nodeType;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(240)
			::String tmp5 = (HX_HCSTRING("Bad node type, expected Element or Document but found ","\xa0","\xd6","\xba","\x79") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(240)
			HX_STACK_DO_THROW(tmp5);
		}
	}
	HX_STACK_LINE(241)
	Array< ::Dynamic > ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(241)
	{
		HX_STACK_LINE(241)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(241)
		{
			HX_STACK_LINE(241)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(241)
			Array< ::Dynamic > _g2 = this->children;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(241)
			while((true)){
				HX_STACK_LINE(241)
				bool tmp = (_g1 < _g2->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(241)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(241)
				if ((tmp1)){
					HX_STACK_LINE(241)
					break;
				}
				HX_STACK_LINE(241)
				::Xml tmp2 = _g2->__get(_g1).StaticCast< ::Xml >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(241)
				::Xml child = tmp2;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(241)
				++(_g1);
				HX_STACK_LINE(241)
				int tmp3 = child->nodeType;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(241)
				int tmp4 = ::Xml_obj::Element;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(241)
				bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(241)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(241)
				if ((tmp5)){
					HX_STACK_LINE(241)
					::String tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(241)
					{
						HX_STACK_LINE(241)
						int tmp8 = child->nodeType;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(241)
						int tmp9 = ::Xml_obj::Element;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(241)
						int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(241)
						bool tmp11 = (tmp8 != tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(241)
						bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(241)
						bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(241)
						if ((tmp13)){
							HX_STACK_LINE(241)
							::String tmp14 = (HX_HCSTRING("Bad node type, expected Element but found ","\xd8","\x90","\x8b","\xbb") + child->nodeType);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(241)
							::String tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(241)
							::String tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(241)
							HX_STACK_DO_THROW(tmp16);
						}
						HX_STACK_LINE(241)
						tmp7 = child->nodeName;
					}
					HX_STACK_LINE(241)
					::String tmp8 = name;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(241)
					tmp6 = (tmp7 == tmp8);
				}
				else{
					HX_STACK_LINE(241)
					tmp6 = false;
				}
				HX_STACK_LINE(241)
				if ((tmp6)){
					HX_STACK_LINE(241)
					::Xml tmp7 = child;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(241)
					_g->push(tmp7);
				}
			}
		}
		HX_STACK_LINE(241)
		ret = _g;
	}
	HX_STACK_LINE(242)
	Dynamic tmp = ret->iteratorFast< ::Xml >();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(242)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Xml_obj,elementsNamed,return )

::Xml Xml_obj::firstElement( ){
	HX_STACK_FRAME("Xml","firstElement",0xc103a583,"Xml.firstElement","C:\\HaxeToolkit\\haxe\\std/Xml.hx",256,0x6fe08e00)
	HX_STACK_THIS(this)
	HX_STACK_LINE(257)
	{
		HX_STACK_LINE(257)
		int tmp = this->nodeType;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(257)
		int tmp1 = ::Xml_obj::Document;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(257)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(257)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(257)
		if ((tmp2)){
			HX_STACK_LINE(257)
			int tmp4 = this->nodeType;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(257)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(257)
			int tmp6 = ::Xml_obj::Element;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(257)
			int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(257)
			tmp3 = (tmp5 != tmp7);
		}
		else{
			HX_STACK_LINE(257)
			tmp3 = false;
		}
		HX_STACK_LINE(257)
		if ((tmp3)){
			HX_STACK_LINE(257)
			int tmp4 = this->nodeType;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(257)
			::String tmp5 = (HX_HCSTRING("Bad node type, expected Element or Document but found ","\xa0","\xd6","\xba","\x79") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(257)
			HX_STACK_DO_THROW(tmp5);
		}
	}
	HX_STACK_LINE(258)
	{
		HX_STACK_LINE(258)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(258)
		Array< ::Dynamic > _g1 = this->children;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(258)
		while((true)){
			HX_STACK_LINE(258)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(258)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(258)
			if ((tmp1)){
				HX_STACK_LINE(258)
				break;
			}
			HX_STACK_LINE(258)
			::Xml tmp2 = _g1->__get(_g).StaticCast< ::Xml >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(258)
			::Xml child = tmp2;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(258)
			++(_g);
			HX_STACK_LINE(259)
			int tmp3 = child->nodeType;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(259)
			int tmp4 = ::Xml_obj::Element;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(259)
			bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(259)
			if ((tmp5)){
				HX_STACK_LINE(260)
				::Xml tmp6 = child;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(260)
				return tmp6;
			}
		}
	}
	HX_STACK_LINE(263)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Xml_obj,firstElement,return )

Void Xml_obj::addChild( ::Xml x){
{
		HX_STACK_FRAME("Xml","addChild",0x3e639952,"Xml.addChild","C:\\HaxeToolkit\\haxe\\std/Xml.hx",272,0x6fe08e00)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(273)
		{
			HX_STACK_LINE(273)
			int tmp = this->nodeType;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(273)
			int tmp1 = ::Xml_obj::Document;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(273)
			bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(273)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(273)
			if ((tmp2)){
				HX_STACK_LINE(273)
				int tmp4 = this->nodeType;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(273)
				int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(273)
				int tmp6 = ::Xml_obj::Element;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(273)
				int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(273)
				tmp3 = (tmp5 != tmp7);
			}
			else{
				HX_STACK_LINE(273)
				tmp3 = false;
			}
			HX_STACK_LINE(273)
			if ((tmp3)){
				HX_STACK_LINE(273)
				int tmp4 = this->nodeType;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(273)
				::String tmp5 = (HX_HCSTRING("Bad node type, expected Element or Document but found ","\xa0","\xd6","\xba","\x79") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(273)
				HX_STACK_DO_THROW(tmp5);
			}
		}
		HX_STACK_LINE(274)
		bool tmp = (x->parent != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(274)
		if ((tmp)){
			HX_STACK_LINE(275)
			::Xml tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(275)
			x->parent->removeChild(tmp1);
		}
		HX_STACK_LINE(277)
		::Xml tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(277)
		this->children->push(tmp1);
		HX_STACK_LINE(278)
		x->parent = hx::ObjectPtr<OBJ_>(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Xml_obj,addChild,(void))

bool Xml_obj::removeChild( ::Xml x){
	HX_STACK_FRAME("Xml","removeChild",0x9bd39581,"Xml.removeChild","C:\\HaxeToolkit\\haxe\\std/Xml.hx",285,0x6fe08e00)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(286)
	{
		HX_STACK_LINE(286)
		int tmp = this->nodeType;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(286)
		int tmp1 = ::Xml_obj::Document;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(286)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(286)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(286)
		if ((tmp2)){
			HX_STACK_LINE(286)
			int tmp4 = this->nodeType;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(286)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(286)
			int tmp6 = ::Xml_obj::Element;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(286)
			int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(286)
			tmp3 = (tmp5 != tmp7);
		}
		else{
			HX_STACK_LINE(286)
			tmp3 = false;
		}
		HX_STACK_LINE(286)
		if ((tmp3)){
			HX_STACK_LINE(286)
			int tmp4 = this->nodeType;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(286)
			::String tmp5 = (HX_HCSTRING("Bad node type, expected Element or Document but found ","\xa0","\xd6","\xba","\x79") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(286)
			HX_STACK_DO_THROW(tmp5);
		}
	}
	HX_STACK_LINE(287)
	::Xml tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(287)
	bool tmp1 = this->children->remove(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(287)
	if ((tmp1)){
		HX_STACK_LINE(288)
		x->parent = null();
		HX_STACK_LINE(289)
		return true;
	}
	HX_STACK_LINE(291)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Xml_obj,removeChild,return )

int Xml_obj::Element;

int Xml_obj::PCData;

int Xml_obj::CData;

int Xml_obj::Comment;

int Xml_obj::DocType;

int Xml_obj::ProcessingInstruction;

int Xml_obj::Document;

::Xml Xml_obj::parse( ::String str){
	HX_STACK_FRAME("Xml","parse",0x8a44f23c,"Xml.parse","C:\\HaxeToolkit\\haxe\\std/Xml.hx",43,0x6fe08e00)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(44)
	::String tmp = str;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	::Xml tmp1 = ::haxe::xml::Parser_obj::parse(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(44)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Xml_obj,parse,return )

::Xml Xml_obj::createElement( ::String name){
	HX_STACK_FRAME("Xml","createElement",0x97359a29,"Xml.createElement","C:\\HaxeToolkit\\haxe\\std/Xml.hx",104,0x6fe08e00)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(105)
	int tmp = ::Xml_obj::Element;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(105)
	::Xml tmp1 = ::Xml_obj::__new(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(105)
	::Xml xml = tmp1;		HX_STACK_VAR(xml,"xml");
	HX_STACK_LINE(106)
	{
		HX_STACK_LINE(106)
		int tmp2 = xml->nodeType;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(106)
		int tmp3 = ::Xml_obj::Element;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(106)
		bool tmp4 = (tmp2 != tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(106)
		if ((tmp4)){
			HX_STACK_LINE(106)
			::String tmp5 = (HX_HCSTRING("Bad node type, expected Element but found ","\xd8","\x90","\x8b","\xbb") + xml->nodeType);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(106)
			HX_STACK_DO_THROW(tmp5);
		}
		HX_STACK_LINE(106)
		xml->nodeName = name;
	}
	HX_STACK_LINE(107)
	::Xml tmp2 = xml;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(107)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Xml_obj,createElement,return )

::Xml Xml_obj::createPCData( ::String data){
	HX_STACK_FRAME("Xml","createPCData",0x3cc9ead0,"Xml.createPCData","C:\\HaxeToolkit\\haxe\\std/Xml.hx",113,0x6fe08e00)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(114)
	int tmp = ::Xml_obj::PCData;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(114)
	::Xml tmp1 = ::Xml_obj::__new(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(114)
	::Xml xml = tmp1;		HX_STACK_VAR(xml,"xml");
	HX_STACK_LINE(115)
	{
		HX_STACK_LINE(115)
		int tmp2 = xml->nodeType;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(115)
		int tmp3 = ::Xml_obj::Document;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(115)
		bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(115)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(115)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(115)
		if ((tmp5)){
			HX_STACK_LINE(115)
			int tmp7 = xml->nodeType;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(115)
			int tmp8 = ::Xml_obj::Element;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(115)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(115)
			tmp6 = (tmp7 == tmp9);
		}
		else{
			HX_STACK_LINE(115)
			tmp6 = true;
		}
		HX_STACK_LINE(115)
		if ((tmp6)){
			HX_STACK_LINE(115)
			::String tmp7 = (HX_HCSTRING("Bad node type, unexpected ","\xbe","\x79","\xd5","\x11") + xml->nodeType);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(115)
			HX_STACK_DO_THROW(tmp7);
		}
		HX_STACK_LINE(115)
		xml->nodeValue = data;
	}
	HX_STACK_LINE(116)
	::Xml tmp2 = xml;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(116)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Xml_obj,createPCData,return )

::Xml Xml_obj::createCData( ::String data){
	HX_STACK_FRAME("Xml","createCData",0xaf49365a,"Xml.createCData","C:\\HaxeToolkit\\haxe\\std/Xml.hx",122,0x6fe08e00)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(123)
	int tmp = ::Xml_obj::CData;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(123)
	::Xml tmp1 = ::Xml_obj::__new(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(123)
	::Xml xml = tmp1;		HX_STACK_VAR(xml,"xml");
	HX_STACK_LINE(124)
	{
		HX_STACK_LINE(124)
		int tmp2 = xml->nodeType;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(124)
		int tmp3 = ::Xml_obj::Document;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(124)
		bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(124)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(124)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(124)
		if ((tmp5)){
			HX_STACK_LINE(124)
			int tmp7 = xml->nodeType;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(124)
			int tmp8 = ::Xml_obj::Element;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(124)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(124)
			tmp6 = (tmp7 == tmp9);
		}
		else{
			HX_STACK_LINE(124)
			tmp6 = true;
		}
		HX_STACK_LINE(124)
		if ((tmp6)){
			HX_STACK_LINE(124)
			::String tmp7 = (HX_HCSTRING("Bad node type, unexpected ","\xbe","\x79","\xd5","\x11") + xml->nodeType);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(124)
			HX_STACK_DO_THROW(tmp7);
		}
		HX_STACK_LINE(124)
		xml->nodeValue = data;
	}
	HX_STACK_LINE(125)
	::Xml tmp2 = xml;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(125)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Xml_obj,createCData,return )

::Xml Xml_obj::createComment( ::String data){
	HX_STACK_FRAME("Xml","createComment",0x125165cc,"Xml.createComment","C:\\HaxeToolkit\\haxe\\std/Xml.hx",131,0x6fe08e00)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(132)
	int tmp = ::Xml_obj::Comment;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(132)
	::Xml tmp1 = ::Xml_obj::__new(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(132)
	::Xml xml = tmp1;		HX_STACK_VAR(xml,"xml");
	HX_STACK_LINE(133)
	{
		HX_STACK_LINE(133)
		int tmp2 = xml->nodeType;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(133)
		int tmp3 = ::Xml_obj::Document;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(133)
		bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(133)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(133)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(133)
		if ((tmp5)){
			HX_STACK_LINE(133)
			int tmp7 = xml->nodeType;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(133)
			int tmp8 = ::Xml_obj::Element;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(133)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(133)
			tmp6 = (tmp7 == tmp9);
		}
		else{
			HX_STACK_LINE(133)
			tmp6 = true;
		}
		HX_STACK_LINE(133)
		if ((tmp6)){
			HX_STACK_LINE(133)
			::String tmp7 = (HX_HCSTRING("Bad node type, unexpected ","\xbe","\x79","\xd5","\x11") + xml->nodeType);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(133)
			HX_STACK_DO_THROW(tmp7);
		}
		HX_STACK_LINE(133)
		xml->nodeValue = data;
	}
	HX_STACK_LINE(134)
	::Xml tmp2 = xml;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(134)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Xml_obj,createComment,return )

::Xml Xml_obj::createDocType( ::String data){
	HX_STACK_FRAME("Xml","createDocType",0x696de8bf,"Xml.createDocType","C:\\HaxeToolkit\\haxe\\std/Xml.hx",140,0x6fe08e00)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(141)
	int tmp = ::Xml_obj::DocType;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(141)
	::Xml tmp1 = ::Xml_obj::__new(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(141)
	::Xml xml = tmp1;		HX_STACK_VAR(xml,"xml");
	HX_STACK_LINE(142)
	{
		HX_STACK_LINE(142)
		int tmp2 = xml->nodeType;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(142)
		int tmp3 = ::Xml_obj::Document;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(142)
		bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(142)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(142)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(142)
		if ((tmp5)){
			HX_STACK_LINE(142)
			int tmp7 = xml->nodeType;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(142)
			int tmp8 = ::Xml_obj::Element;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(142)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(142)
			tmp6 = (tmp7 == tmp9);
		}
		else{
			HX_STACK_LINE(142)
			tmp6 = true;
		}
		HX_STACK_LINE(142)
		if ((tmp6)){
			HX_STACK_LINE(142)
			::String tmp7 = (HX_HCSTRING("Bad node type, unexpected ","\xbe","\x79","\xd5","\x11") + xml->nodeType);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(142)
			HX_STACK_DO_THROW(tmp7);
		}
		HX_STACK_LINE(142)
		xml->nodeValue = data;
	}
	HX_STACK_LINE(143)
	::Xml tmp2 = xml;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(143)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Xml_obj,createDocType,return )

::Xml Xml_obj::createProcessingInstruction( ::String data){
	HX_STACK_FRAME("Xml","createProcessingInstruction",0x632a1f28,"Xml.createProcessingInstruction","C:\\HaxeToolkit\\haxe\\std/Xml.hx",149,0x6fe08e00)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(150)
	int tmp = ::Xml_obj::ProcessingInstruction;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(150)
	::Xml tmp1 = ::Xml_obj::__new(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(150)
	::Xml xml = tmp1;		HX_STACK_VAR(xml,"xml");
	HX_STACK_LINE(151)
	{
		HX_STACK_LINE(151)
		int tmp2 = xml->nodeType;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(151)
		int tmp3 = ::Xml_obj::Document;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(151)
		bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(151)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(151)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(151)
		if ((tmp5)){
			HX_STACK_LINE(151)
			int tmp7 = xml->nodeType;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(151)
			int tmp8 = ::Xml_obj::Element;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(151)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(151)
			tmp6 = (tmp7 == tmp9);
		}
		else{
			HX_STACK_LINE(151)
			tmp6 = true;
		}
		HX_STACK_LINE(151)
		if ((tmp6)){
			HX_STACK_LINE(151)
			::String tmp7 = (HX_HCSTRING("Bad node type, unexpected ","\xbe","\x79","\xd5","\x11") + xml->nodeType);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(151)
			HX_STACK_DO_THROW(tmp7);
		}
		HX_STACK_LINE(151)
		xml->nodeValue = data;
	}
	HX_STACK_LINE(152)
	::Xml tmp2 = xml;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(152)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Xml_obj,createProcessingInstruction,return )

::Xml Xml_obj::createDocument( ){
	HX_STACK_FRAME("Xml","createDocument",0xcf00030e,"Xml.createDocument","C:\\HaxeToolkit\\haxe\\std/Xml.hx",158,0x6fe08e00)
	HX_STACK_LINE(159)
	int tmp = ::Xml_obj::Document;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(159)
	::Xml tmp1 = ::Xml_obj::__new(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(159)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Xml_obj,createDocument,return )


Xml_obj::Xml_obj()
{
}

void Xml_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Xml);
	HX_MARK_MEMBER_NAME(nodeType,"nodeType");
	HX_MARK_MEMBER_NAME(nodeName,"nodeName");
	HX_MARK_MEMBER_NAME(nodeValue,"nodeValue");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(children,"children");
	HX_MARK_MEMBER_NAME(attributeMap,"attributeMap");
	HX_MARK_END_CLASS();
}

void Xml_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(nodeType,"nodeType");
	HX_VISIT_MEMBER_NAME(nodeName,"nodeName");
	HX_VISIT_MEMBER_NAME(nodeValue,"nodeValue");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(children,"children");
	HX_VISIT_MEMBER_NAME(attributeMap,"attributeMap");
}

Dynamic Xml_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		if (HX_FIELD_EQ(inName,"exists") ) { return exists_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"nodeType") ) { return nodeType; }
		if (HX_FIELD_EQ(inName,"nodeName") ) { return nodeName; }
		if (HX_FIELD_EQ(inName,"children") ) { return children; }
		if (HX_FIELD_EQ(inName,"elements") ) { return elements_dyn(); }
		if (HX_FIELD_EQ(inName,"addChild") ) { return addChild_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nodeValue") ) { return nodeValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"removeChild") ) { return removeChild_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"attributeMap") ) { return attributeMap; }
		if (HX_FIELD_EQ(inName,"firstElement") ) { return firstElement_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"elementsNamed") ) { return elementsNamed_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Xml_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"CData") ) { outValue = CData; return true;  }
		if (HX_FIELD_EQ(inName,"parse") ) { outValue = parse_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"PCData") ) { outValue = PCData; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"Element") ) { outValue = Element; return true;  }
		if (HX_FIELD_EQ(inName,"Comment") ) { outValue = Comment; return true;  }
		if (HX_FIELD_EQ(inName,"DocType") ) { outValue = DocType; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"Document") ) { outValue = Document; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"createCData") ) { outValue = createCData_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createPCData") ) { outValue = createPCData_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"createElement") ) { outValue = createElement_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"createComment") ) { outValue = createComment_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"createDocType") ) { outValue = createDocType_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createDocument") ) { outValue = createDocument_dyn(); return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"ProcessingInstruction") ) { outValue = ProcessingInstruction; return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"createProcessingInstruction") ) { outValue = createProcessingInstruction_dyn(); return true;  }
	}
	return false;
}

Dynamic Xml_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::Xml >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"nodeType") ) { nodeType=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nodeName") ) { nodeName=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"children") ) { children=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nodeValue") ) { nodeValue=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"attributeMap") ) { attributeMap=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Xml_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"CData") ) { CData=ioValue.Cast< int >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"PCData") ) { PCData=ioValue.Cast< int >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"Element") ) { Element=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"Comment") ) { Comment=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"DocType") ) { DocType=ioValue.Cast< int >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"Document") ) { Document=ioValue.Cast< int >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"ProcessingInstruction") ) { ProcessingInstruction=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void Xml_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("nodeType","\xdc","\x51","\x86","\xf6"));
	outFields->push(HX_HCSTRING("nodeName","\x6d","\xd1","\x7c","\xf2"));
	outFields->push(HX_HCSTRING("nodeValue","\x0f","\x5e","\xee","\xd5"));
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	outFields->push(HX_HCSTRING("children","\x3f","\x19","\x6a","\x70"));
	outFields->push(HX_HCSTRING("attributeMap","\xe0","\x4b","\xb2","\x95"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Xml_obj,nodeType),HX_HCSTRING("nodeType","\xdc","\x51","\x86","\xf6")},
	{hx::fsString,(int)offsetof(Xml_obj,nodeName),HX_HCSTRING("nodeName","\x6d","\xd1","\x7c","\xf2")},
	{hx::fsString,(int)offsetof(Xml_obj,nodeValue),HX_HCSTRING("nodeValue","\x0f","\x5e","\xee","\xd5")},
	{hx::fsObject /*::Xml*/ ,(int)offsetof(Xml_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Xml_obj,children),HX_HCSTRING("children","\x3f","\x19","\x6a","\x70")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Xml_obj,attributeMap),HX_HCSTRING("attributeMap","\xe0","\x4b","\xb2","\x95")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Xml_obj::Element,HX_HCSTRING("Element","\x9c","\xd6","\xa5","\xd3")},
	{hx::fsInt,(void *) &Xml_obj::PCData,HX_HCSTRING("PCData","\xbd","\x3d","\xa2","\xbd")},
	{hx::fsInt,(void *) &Xml_obj::CData,HX_HCSTRING("CData","\x0d","\x60","\x15","\xc1")},
	{hx::fsInt,(void *) &Xml_obj::Comment,HX_HCSTRING("Comment","\x3f","\xa2","\xc1","\x4e")},
	{hx::fsInt,(void *) &Xml_obj::DocType,HX_HCSTRING("DocType","\x32","\x25","\xde","\xa5")},
	{hx::fsInt,(void *) &Xml_obj::ProcessingInstruction,HX_HCSTRING("ProcessingInstruction","\xdb","\x1e","\x14","\x6a")},
	{hx::fsInt,(void *) &Xml_obj::Document,HX_HCSTRING("Document","\x3b","\xab","\xc4","\x74")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("nodeType","\xdc","\x51","\x86","\xf6"),
	HX_HCSTRING("nodeName","\x6d","\xd1","\x7c","\xf2"),
	HX_HCSTRING("nodeValue","\x0f","\x5e","\xee","\xd5"),
	HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"),
	HX_HCSTRING("children","\x3f","\x19","\x6a","\x70"),
	HX_HCSTRING("attributeMap","\xe0","\x4b","\xb2","\x95"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"),
	HX_HCSTRING("elements","\x37","\x36","\xc4","\x83"),
	HX_HCSTRING("elementsNamed","\x02","\xe2","\x8a","\xc2"),
	HX_HCSTRING("firstElement","\x6c","\xc4","\x9c","\x2f"),
	HX_HCSTRING("addChild","\xbb","\xcf","\x16","\xbf"),
	HX_HCSTRING("removeChild","\xb8","\x86","\xed","\x43"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Xml_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Xml_obj::Element,"Element");
	HX_MARK_MEMBER_NAME(Xml_obj::PCData,"PCData");
	HX_MARK_MEMBER_NAME(Xml_obj::CData,"CData");
	HX_MARK_MEMBER_NAME(Xml_obj::Comment,"Comment");
	HX_MARK_MEMBER_NAME(Xml_obj::DocType,"DocType");
	HX_MARK_MEMBER_NAME(Xml_obj::ProcessingInstruction,"ProcessingInstruction");
	HX_MARK_MEMBER_NAME(Xml_obj::Document,"Document");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Xml_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Xml_obj::Element,"Element");
	HX_VISIT_MEMBER_NAME(Xml_obj::PCData,"PCData");
	HX_VISIT_MEMBER_NAME(Xml_obj::CData,"CData");
	HX_VISIT_MEMBER_NAME(Xml_obj::Comment,"Comment");
	HX_VISIT_MEMBER_NAME(Xml_obj::DocType,"DocType");
	HX_VISIT_MEMBER_NAME(Xml_obj::ProcessingInstruction,"ProcessingInstruction");
	HX_VISIT_MEMBER_NAME(Xml_obj::Document,"Document");
};

#endif

hx::Class Xml_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("Element","\x9c","\xd6","\xa5","\xd3"),
	HX_HCSTRING("PCData","\xbd","\x3d","\xa2","\xbd"),
	HX_HCSTRING("CData","\x0d","\x60","\x15","\xc1"),
	HX_HCSTRING("Comment","\x3f","\xa2","\xc1","\x4e"),
	HX_HCSTRING("DocType","\x32","\x25","\xde","\xa5"),
	HX_HCSTRING("ProcessingInstruction","\xdb","\x1e","\x14","\x6a"),
	HX_HCSTRING("Document","\x3b","\xab","\xc4","\x74"),
	HX_HCSTRING("parse","\x33","\x90","\x55","\xbd"),
	HX_HCSTRING("createElement","\x20","\x87","\x97","\xee"),
	HX_HCSTRING("createPCData","\xb9","\x09","\x63","\xab"),
	HX_HCSTRING("createCData","\x91","\x27","\x63","\x57"),
	HX_HCSTRING("createComment","\xc3","\x52","\xb3","\x69"),
	HX_HCSTRING("createDocType","\xb6","\xd5","\xcf","\xc0"),
	HX_HCSTRING("createProcessingInstruction","\x5f","\x2e","\x58","\x38"),
	HX_HCSTRING("createDocument","\x37","\x6e","\x4d","\xed"),
	::String(null()) };

void Xml_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Xml","\xb7","\x25","\x43","\x00");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Xml_obj::__GetStatic;
	__mClass->mSetStaticField = &Xml_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Xml_obj >;
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

void Xml_obj::__boot()
{
	Element= (int)0;
	PCData= (int)1;
	CData= (int)2;
	Comment= (int)3;
	DocType= (int)4;
	ProcessingInstruction= (int)5;
	Document= (int)6;
}

