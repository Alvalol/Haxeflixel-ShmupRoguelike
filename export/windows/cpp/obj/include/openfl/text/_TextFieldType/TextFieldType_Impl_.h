#ifndef INCLUDED_openfl_text__TextFieldType_TextFieldType_Impl_
#define INCLUDED_openfl_text__TextFieldType_TextFieldType_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,text,_TextFieldType,TextFieldType_Impl_)
namespace openfl{
namespace text{
namespace _TextFieldType{


class HXCPP_CLASS_ATTRIBUTES  TextFieldType_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TextFieldType_Impl__obj OBJ_;
		TextFieldType_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl.text._TextFieldType.TextFieldType_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TextFieldType_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextFieldType_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("TextFieldType_Impl_","\xe7","\x79","\x6c","\x43"); }

		static void __boot();
		static Dynamic DYNAMIC;
		static Dynamic INPUT;
		static Dynamic fromString( ::String value);
		static Dynamic fromString_dyn();

		static ::String toString( int value);
		static Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace text
} // end namespace _TextFieldType

#endif /* INCLUDED_openfl_text__TextFieldType_TextFieldType_Impl_ */ 
