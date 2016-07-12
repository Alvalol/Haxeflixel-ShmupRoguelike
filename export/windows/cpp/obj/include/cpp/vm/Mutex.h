#ifndef INCLUDED_cpp_vm_Mutex
#define INCLUDED_cpp_vm_Mutex

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(cpp,vm,Mutex)
namespace cpp{
namespace vm{


class HXCPP_CLASS_ATTRIBUTES  Mutex_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Mutex_obj OBJ_;
		Mutex_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="cpp.vm.Mutex")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Mutex_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Mutex_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Mutex","\x5f","\xff","\x88","\xa3"); }

		Dynamic m;
		virtual Void acquire( );
		Dynamic acquire_dyn();

		virtual Void release( );
		Dynamic release_dyn();

};

} // end namespace cpp
} // end namespace vm

#endif /* INCLUDED_cpp_vm_Mutex */ 
