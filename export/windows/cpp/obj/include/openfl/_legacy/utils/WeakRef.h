#ifndef INCLUDED_openfl__legacy_utils_WeakRef
#define INCLUDED_openfl__legacy_utils_WeakRef

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_legacy,utils,WeakRef)
namespace openfl{
namespace _legacy{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  WeakRef_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef WeakRef_obj OBJ_;
		WeakRef_obj();
		Void __construct(Dynamic object,hx::Null< bool >  __o_makeWeak);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._legacy.utils.WeakRef")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< WeakRef_obj > __new(Dynamic object,hx::Null< bool >  __o_makeWeak);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~WeakRef_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("WeakRef","\x9b","\x77","\xad","\xa4"); }

		static void __boot();
		static Dynamic lime_weak_ref_create;
		static Dynamic lime_weak_ref_get;
		Dynamic hardRef;
		int weakRef;
		virtual Dynamic get( );
		Dynamic get_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace _legacy
} // end namespace utils

#endif /* INCLUDED_openfl__legacy_utils_WeakRef */ 
