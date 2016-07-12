#ifndef INCLUDED_haxe_xml_Fast
#define INCLUDED_haxe_xml_Fast

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS2(haxe,xml,Fast)
HX_DECLARE_CLASS3(haxe,xml,_Fast,AttribAccess)
HX_DECLARE_CLASS3(haxe,xml,_Fast,HasAttribAccess)
HX_DECLARE_CLASS3(haxe,xml,_Fast,HasNodeAccess)
HX_DECLARE_CLASS3(haxe,xml,_Fast,NodeAccess)
HX_DECLARE_CLASS3(haxe,xml,_Fast,NodeListAccess)
namespace haxe{
namespace xml{


class HXCPP_CLASS_ATTRIBUTES  Fast_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Fast_obj OBJ_;
		Fast_obj();
		Void __construct(::Xml x);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.xml.Fast")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Fast_obj > __new(::Xml x);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Fast_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Fast","\xbc","\xee","\x8e","\x2e"); }

		::Xml x;
		::haxe::xml::_Fast::NodeAccess node;
		::haxe::xml::_Fast::NodeListAccess nodes;
		::haxe::xml::_Fast::AttribAccess att;
		::haxe::xml::_Fast::HasAttribAccess has;
		::haxe::xml::_Fast::HasNodeAccess hasNode;
};

} // end namespace haxe
} // end namespace xml

#endif /* INCLUDED_haxe_xml_Fast */ 
