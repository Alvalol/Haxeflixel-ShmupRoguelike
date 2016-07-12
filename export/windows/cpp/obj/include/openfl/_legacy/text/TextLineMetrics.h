#ifndef INCLUDED_openfl__legacy_text_TextLineMetrics
#define INCLUDED_openfl__legacy_text_TextLineMetrics

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_legacy,text,TextLineMetrics)
namespace openfl{
namespace _legacy{
namespace text{


class HXCPP_CLASS_ATTRIBUTES  TextLineMetrics_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TextLineMetrics_obj OBJ_;
		TextLineMetrics_obj();
		Void __construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height,hx::Null< Float >  __o_ascent,hx::Null< Float >  __o_descent,hx::Null< Float >  __o_leading);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl._legacy.text.TextLineMetrics")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TextLineMetrics_obj > __new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height,hx::Null< Float >  __o_ascent,hx::Null< Float >  __o_descent,hx::Null< Float >  __o_leading);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextLineMetrics_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("TextLineMetrics","\xe2","\xc0","\x45","\x7d"); }

		Float ascent;
		Float descent;
		Float height;
		Float leading;
		Float width;
		Float x;
};

} // end namespace openfl
} // end namespace _legacy
} // end namespace text

#endif /* INCLUDED_openfl__legacy_text_TextLineMetrics */ 
