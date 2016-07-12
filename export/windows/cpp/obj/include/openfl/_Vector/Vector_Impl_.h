#ifndef INCLUDED_openfl__Vector_Vector_Impl_
#define INCLUDED_openfl__Vector_Vector_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,_Vector,Vector_Impl_)
namespace openfl{
namespace _Vector{


class HXCPP_CLASS_ATTRIBUTES  Vector_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Vector_Impl__obj OBJ_;
		Vector_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl._Vector.Vector_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Vector_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Vector_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Vector_Impl_","\xc3","\xad","\x36","\x7e"); }

		static cpp::ArrayBase _new( Dynamic length,Dynamic fixed);
		static Dynamic _new_dyn();

		static cpp::ArrayBase concat( cpp::ArrayBase this1,cpp::ArrayBase a);
		static Dynamic concat_dyn();

		static cpp::ArrayBase copy( cpp::ArrayBase this1);
		static Dynamic copy_dyn();

		static Dynamic iterator( cpp::ArrayBase this1);
		static Dynamic iterator_dyn();

		static ::String join( cpp::ArrayBase this1,::String sep);
		static Dynamic join_dyn();

		static Dynamic pop( cpp::ArrayBase this1);
		static Dynamic pop_dyn();

		static int push( cpp::ArrayBase this1,Dynamic x);
		static Dynamic push_dyn();

		static Void reverse( cpp::ArrayBase this1);
		static Dynamic reverse_dyn();

		static Dynamic shift( cpp::ArrayBase this1);
		static Dynamic shift_dyn();

		static Void unshift( cpp::ArrayBase this1,Dynamic x);
		static Dynamic unshift_dyn();

		static cpp::ArrayBase slice( cpp::ArrayBase this1,Dynamic pos,Dynamic end);
		static Dynamic slice_dyn();

		static Void sort( cpp::ArrayBase this1,Dynamic f);
		static Dynamic sort_dyn();

		static cpp::ArrayBase splice( cpp::ArrayBase this1,int pos,int len);
		static Dynamic splice_dyn();

		static ::String toString( cpp::ArrayBase this1);
		static Dynamic toString_dyn();

		static int indexOf( cpp::ArrayBase this1,Dynamic x,Dynamic from);
		static Dynamic indexOf_dyn();

		static int lastIndexOf( cpp::ArrayBase this1,Dynamic x,Dynamic from);
		static Dynamic lastIndexOf_dyn();

		static Dynamic get( cpp::ArrayBase this1,int index);
		static Dynamic get_dyn();

		static Dynamic set( cpp::ArrayBase this1,int index,Dynamic value);
		static Dynamic set_dyn();

		static cpp::ArrayBase ofArray( cpp::ArrayBase a);
		static Dynamic ofArray_dyn();

		static cpp::ArrayBase convert( cpp::ArrayBase v);
		static Dynamic convert_dyn();

		static cpp::ArrayBase fromHaxeVector( cpp::ArrayBase value);
		static Dynamic fromHaxeVector_dyn();

		static cpp::ArrayBase toHaxeVector( cpp::ArrayBase this1);
		static Dynamic toHaxeVector_dyn();

		static int get_length( cpp::ArrayBase this1);
		static Dynamic get_length_dyn();

		static int set_length( cpp::ArrayBase this1,int value);
		static Dynamic set_length_dyn();

		static bool get_fixed( cpp::ArrayBase this1);
		static Dynamic get_fixed_dyn();

		static bool set_fixed( cpp::ArrayBase this1,bool value);
		static Dynamic set_fixed_dyn();

};

} // end namespace openfl
} // end namespace _Vector

#endif /* INCLUDED_openfl__Vector_Vector_Impl_ */ 
