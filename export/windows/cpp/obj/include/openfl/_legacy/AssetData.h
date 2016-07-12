#ifndef INCLUDED_openfl__legacy_AssetData
#define INCLUDED_openfl__legacy_AssetData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,_legacy,AssetData)
HX_DECLARE_CLASS2(openfl,_legacy,AssetType)
namespace openfl{
namespace _legacy{


class HXCPP_CLASS_ATTRIBUTES  AssetData_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AssetData_obj OBJ_;
		AssetData_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._legacy.AssetData")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AssetData_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AssetData_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("AssetData","\x1a","\x84","\xdc","\x48"); }

		::String id;
		::String path;
		::openfl::_legacy::AssetType type;
};

} // end namespace openfl
} // end namespace _legacy

#endif /* INCLUDED_openfl__legacy_AssetData */ 
