#ifndef INCLUDED_openfl_net_URLVariables
#define INCLUDED_openfl_net_URLVariables

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,net,URLVariables)
namespace openfl{
namespace net{


class HXCPP_CLASS_ATTRIBUTES  URLVariables_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef URLVariables_obj OBJ_;
		URLVariables_obj();
		Void __construct(::String source);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.net.URLVariables")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< URLVariables_obj > __new(::String source);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~URLVariables_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		HX_DECLARE_IMPLEMENT_DYNAMIC;
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("URLVariables","\x68","\x19","\x1f","\x56"); }

		virtual Void decode( ::String source);
		Dynamic decode_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace net

#endif /* INCLUDED_openfl_net_URLVariables */ 
