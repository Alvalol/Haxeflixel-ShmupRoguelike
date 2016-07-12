#ifndef INCLUDED_openfl_utils__Object_Object_Impl_
#define INCLUDED_openfl_utils__Object_Object_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,utils,_Object,Object_Impl_)
namespace openfl{
namespace utils{
namespace _Object{


class HXCPP_CLASS_ATTRIBUTES  Object_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Object_Impl__obj OBJ_;
		Object_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl.utils._Object.Object_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Object_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Object_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Object_Impl_","\xbf","\x20","\x11","\xba"); }

		static Dynamic _new( );
		static Dynamic _new_dyn();

		static bool hasOwnProperty( Dynamic this1,::String name);
		static Dynamic hasOwnProperty_dyn();

		static bool isPrototypeOf( Dynamic this1,::hx::Class theClass);
		static Dynamic isPrototypeOf_dyn();

		static Dynamic iterator( Dynamic this1);
		static Dynamic iterator_dyn();

		static bool propertyIsEnumerable( Dynamic this1,::String name);
		static Dynamic propertyIsEnumerable_dyn();

		static ::String toLocaleString( Dynamic this1);
		static Dynamic toLocaleString_dyn();

		static ::String toString( Dynamic this1);
		static Dynamic toString_dyn();

		static Dynamic valueOf( Dynamic this1);
		static Dynamic valueOf_dyn();

		static Dynamic __get( Dynamic this1,::String key);
		static Dynamic __get_dyn();

		static Dynamic __set( Dynamic this1,::String key,Dynamic value);
		static Dynamic __set_dyn();

};

} // end namespace openfl
} // end namespace utils
} // end namespace _Object

#endif /* INCLUDED_openfl_utils__Object_Object_Impl_ */ 
