#ifndef INCLUDED__List_ListIterator
#define INCLUDED__List_ListIterator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(_List,ListIterator)
namespace _List{


class HXCPP_CLASS_ATTRIBUTES  ListIterator_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ListIterator_obj OBJ_;
		ListIterator_obj();
		Void __construct(cpp::ArrayBase head);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="_List.ListIterator")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ListIterator_obj > __new(cpp::ArrayBase head);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ListIterator_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ListIterator","\x8c","\xfc","\x31","\xc4"); }

		cpp::ArrayBase head;
		Dynamic val;
		virtual bool hasNext( );
		Dynamic hasNext_dyn();

		virtual Dynamic next( );
		Dynamic next_dyn();

};

} // end namespace _List

#endif /* INCLUDED__List_ListIterator */ 
