#ifndef INCLUDED_haxe_xml__Fast_NodeAccess
#define INCLUDED_haxe_xml__Fast_NodeAccess

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS3(haxe,xml,_Fast,NodeAccess)
namespace haxe{
namespace xml{
namespace _Fast{


class HXCPP_CLASS_ATTRIBUTES  NodeAccess_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef NodeAccess_obj OBJ_;
		NodeAccess_obj();
		Void __construct(::Xml x);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.xml._Fast.NodeAccess")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< NodeAccess_obj > __new(::Xml x);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NodeAccess_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		HX_DECLARE_IMPLEMENT_DYNAMIC;
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("NodeAccess","\x66","\x85","\xa4","\x0c"); }

		::Xml __x;
};

} // end namespace haxe
} // end namespace xml
} // end namespace _Fast

#endif /* INCLUDED_haxe_xml__Fast_NodeAccess */ 
