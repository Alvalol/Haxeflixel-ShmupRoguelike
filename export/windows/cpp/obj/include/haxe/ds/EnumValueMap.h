#ifndef INCLUDED_haxe_ds_EnumValueMap
#define INCLUDED_haxe_ds_EnumValueMap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,BalancedTree)
HX_DECLARE_CLASS2(haxe,ds,EnumValueMap)
namespace haxe{
namespace ds{


class HXCPP_CLASS_ATTRIBUTES  EnumValueMap_obj : public ::haxe::ds::BalancedTree_obj{
	public:
		typedef ::haxe::ds::BalancedTree_obj super;
		typedef EnumValueMap_obj OBJ_;
		EnumValueMap_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ds.EnumValueMap")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< EnumValueMap_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EnumValueMap_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::haxe::IMap_obj *();
		::String __ToString() const { return HX_HCSTRING("EnumValueMap","\xec","\x9b","\xfb","\x92"); }

		virtual int compare( Dynamic _tmp_k1,Dynamic _tmp_k2);

		virtual int compareArgs( cpp::ArrayBase a1,cpp::ArrayBase a2);
		Dynamic compareArgs_dyn();

		virtual int compareArg( Dynamic v1,Dynamic v2);
		Dynamic compareArg_dyn();

};

} // end namespace haxe
} // end namespace ds

#endif /* INCLUDED_haxe_ds_EnumValueMap */ 
