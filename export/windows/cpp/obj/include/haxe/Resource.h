#ifndef INCLUDED_haxe_Resource
#define INCLUDED_haxe_Resource

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,Resource)
HX_DECLARE_CLASS2(haxe,io,Bytes)
namespace haxe{


class HXCPP_CLASS_ATTRIBUTES  Resource_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Resource_obj OBJ_;
		Resource_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxe.Resource")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Resource_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Resource_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Resource","\xee","\x18","\x52","\xec"); }

		static ::haxe::io::Bytes getBytes( ::String name);
		static Dynamic getBytes_dyn();

};

} // end namespace haxe

#endif /* INCLUDED_haxe_Resource */ 
