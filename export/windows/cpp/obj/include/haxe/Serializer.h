#ifndef INCLUDED_haxe_Serializer
#define INCLUDED_haxe_Serializer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(StringBuf)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS1(haxe,Serializer)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
namespace haxe{


class HXCPP_CLASS_ATTRIBUTES  Serializer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Serializer_obj OBJ_;
		Serializer_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.Serializer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Serializer_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Serializer_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Serializer","\xb2","\xca","\xd0","\x55"); }

		static void __boot();
		static bool USE_CACHE;
		static bool USE_ENUM_INDEX;
		static ::String BASE64;
		static ::String run( Dynamic v);
		static Dynamic run_dyn();

		::StringBuf buf;
		cpp::ArrayBase cache;
		::haxe::ds::StringMap shash;
		int scount;
		bool useCache;
		bool useEnumIndex;
		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual Void serializeString( ::String s);
		Dynamic serializeString_dyn();

		virtual bool serializeRef( Dynamic v);
		Dynamic serializeRef_dyn();

		virtual Void serializeFields( Dynamic v);
		Dynamic serializeFields_dyn();

		virtual Void serialize( Dynamic v);
		Dynamic serialize_dyn();

};

} // end namespace haxe

#endif /* INCLUDED_haxe_Serializer */ 
