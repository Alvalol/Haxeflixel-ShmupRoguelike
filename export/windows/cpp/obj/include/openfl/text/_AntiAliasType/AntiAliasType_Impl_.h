#ifndef INCLUDED_openfl_text__AntiAliasType_AntiAliasType_Impl_
#define INCLUDED_openfl_text__AntiAliasType_AntiAliasType_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,text,_AntiAliasType,AntiAliasType_Impl_)
namespace openfl{
namespace text{
namespace _AntiAliasType{


class HXCPP_CLASS_ATTRIBUTES  AntiAliasType_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AntiAliasType_Impl__obj OBJ_;
		AntiAliasType_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl.text._AntiAliasType.AntiAliasType_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AntiAliasType_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AntiAliasType_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("AntiAliasType_Impl_","\xe8","\xb6","\x04","\x1e"); }

		static void __boot();
		static Dynamic ADVANCED;
		static Dynamic NORMAL;
		static Dynamic fromString( ::String value);
		static Dynamic fromString_dyn();

		static ::String toString( int value);
		static Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace text
} // end namespace _AntiAliasType

#endif /* INCLUDED_openfl_text__AntiAliasType_AntiAliasType_Impl_ */ 
