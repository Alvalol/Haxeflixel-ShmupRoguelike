#ifndef INCLUDED_haxe_xml_Parser
#define INCLUDED_haxe_xml_Parser

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,xml,Parser)
namespace haxe{
namespace xml{


class HXCPP_CLASS_ATTRIBUTES  Parser_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Parser_obj OBJ_;
		Parser_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxe.xml.Parser")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Parser_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Parser_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Parser","\xff","\x10","\x1d","\x22"); }

		static void __boot();
		static ::haxe::ds::StringMap escapes;
		static ::Xml parse( ::String str,hx::Null< bool >  strict);
		static Dynamic parse_dyn();

		static int doParse( ::String str,bool strict,hx::Null< int >  p,::Xml parent);
		static Dynamic doParse_dyn();

};

} // end namespace haxe
} // end namespace xml

#endif /* INCLUDED_haxe_xml_Parser */ 
