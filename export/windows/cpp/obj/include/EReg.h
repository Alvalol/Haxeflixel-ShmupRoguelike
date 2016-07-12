#ifndef INCLUDED_EReg
#define INCLUDED_EReg

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(EReg)


class HXCPP_CLASS_ATTRIBUTES  EReg_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef EReg_obj OBJ_;
		EReg_obj();
		Void __construct(::String r,::String opt);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="EReg")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< EReg_obj > __new(::String r,::String opt);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EReg_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("EReg","\x0f","\x4a","\xda","\x2d"); }

		static void __boot();
		static Dynamic regexp_new_options;
		static Dynamic &regexp_new_options_dyn() { return regexp_new_options;}
		static Dynamic regexp_match;
		static Dynamic &regexp_match_dyn() { return regexp_match;}
		static Dynamic regexp_matched;
		static Dynamic &regexp_matched_dyn() { return regexp_matched;}
		static Dynamic regexp_matched_pos;
		static Dynamic &regexp_matched_pos_dyn() { return regexp_matched_pos;}
		Dynamic r;
		::String last;
		bool global;
		virtual bool match( ::String s);
		Dynamic match_dyn();

		virtual ::String matched( int n);
		Dynamic matched_dyn();

		virtual Array< ::String > split( ::String s);
		Dynamic split_dyn();

};


#endif /* INCLUDED_EReg */ 
