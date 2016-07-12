#ifndef INCLUDED_StringTools
#define INCLUDED_StringTools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(StringTools)


class HXCPP_CLASS_ATTRIBUTES  StringTools_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef StringTools_obj OBJ_;
		StringTools_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="StringTools")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< StringTools_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StringTools_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("StringTools","\x6a","\xdb","\x63","\x03"); }

		static ::String urlEncode( ::String s);
		static Dynamic urlEncode_dyn();

		static ::String urlDecode( ::String s);
		static Dynamic urlDecode_dyn();

		static bool startsWith( ::String s,::String start);
		static Dynamic startsWith_dyn();

		static bool endsWith( ::String s,::String end);
		static Dynamic endsWith_dyn();

		static bool isSpace( ::String s,int pos);
		static Dynamic isSpace_dyn();

		static ::String ltrim( ::String s);
		static Dynamic ltrim_dyn();

		static ::String rtrim( ::String s);
		static Dynamic rtrim_dyn();

		static ::String trim( ::String s);
		static Dynamic trim_dyn();

		static ::String lpad( ::String s,::String c,int l);
		static Dynamic lpad_dyn();

		static ::String replace( ::String s,::String sub,::String by);
		static Dynamic replace_dyn();

		static ::String hex( int n,Dynamic digits);
		static Dynamic hex_dyn();

};


#endif /* INCLUDED_StringTools */ 
