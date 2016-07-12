#ifndef INCLUDED_flixel_util_LabelValuePair
#define INCLUDED_flixel_util_LabelValuePair

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS2(flixel,util,FlxPool_flixel_util_LabelValuePair)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPool)
HX_DECLARE_CLASS2(flixel,util,LabelValuePair)
namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  LabelValuePair_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef LabelValuePair_obj OBJ_;
		LabelValuePair_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.util.LabelValuePair")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< LabelValuePair_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LabelValuePair_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::flixel::util::IFlxDestroyable_obj *();
		::String __ToString() const { return HX_HCSTRING("LabelValuePair","\xb7","\x9b","\x80","\x94"); }

		static void __boot();
		static ::flixel::util::FlxPool_flixel_util_LabelValuePair _pool;
		static ::flixel::util::LabelValuePair weak( ::String label,Dynamic value);
		static Dynamic weak_dyn();

		::String label;
		Dynamic value;
		virtual ::flixel::util::LabelValuePair create( ::String label,Dynamic value);
		Dynamic create_dyn();

		virtual Void put( );
		Dynamic put_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_LabelValuePair */ 
