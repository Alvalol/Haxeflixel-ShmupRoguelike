#ifndef INCLUDED_Lambda
#define INCLUDED_Lambda

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Lambda)


class HXCPP_CLASS_ATTRIBUTES  Lambda_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Lambda_obj OBJ_;
		Lambda_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="Lambda")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Lambda_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Lambda_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Lambda","\x27","\xa7","\x54","\x85"); }

		static cpp::ArrayBase array( Dynamic it);
		static Dynamic array_dyn();

		static bool has( Dynamic it,Dynamic elt);
		static Dynamic has_dyn();

};


#endif /* INCLUDED_Lambda */ 
