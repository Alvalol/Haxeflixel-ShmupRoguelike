#ifndef INCLUDED_cpp_vm_Deque
#define INCLUDED_cpp_vm_Deque

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(cpp,vm,Deque)
namespace cpp{
namespace vm{


class HXCPP_CLASS_ATTRIBUTES  Deque_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Deque_obj OBJ_;
		Deque_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="cpp.vm.Deque")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Deque_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Deque_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Deque","\x00","\x24","\x58","\x6a"); }

		Dynamic q;
		virtual Void add( Dynamic i);
		Dynamic add_dyn();

		virtual Dynamic pop( bool block);
		Dynamic pop_dyn();

};

} // end namespace cpp
} // end namespace vm

#endif /* INCLUDED_cpp_vm_Deque */ 
