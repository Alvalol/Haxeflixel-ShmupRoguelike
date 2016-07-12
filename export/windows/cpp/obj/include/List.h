#ifndef INCLUDED_List
#define INCLUDED_List

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(List)


class HXCPP_CLASS_ATTRIBUTES  List_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef List_obj OBJ_;
		List_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="List")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< List_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~List_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("List","\x7e","\x48","\x8c","\x32"); }

		cpp::ArrayBase h;
		cpp::ArrayBase q;
		int length;
		virtual Void add( Dynamic item);
		Dynamic add_dyn();

		virtual Void push( Dynamic item);
		Dynamic push_dyn();

		virtual bool isEmpty( );
		Dynamic isEmpty_dyn();

		virtual bool remove( Dynamic v);
		Dynamic remove_dyn();

};


#endif /* INCLUDED_List */ 
