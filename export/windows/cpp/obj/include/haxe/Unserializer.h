#ifndef INCLUDED_haxe_Unserializer
#define INCLUDED_haxe_Unserializer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,Unserializer)
namespace haxe{


class HXCPP_CLASS_ATTRIBUTES  Unserializer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Unserializer_obj OBJ_;
		Unserializer_obj();
		Void __construct(::String buf);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.Unserializer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Unserializer_obj > __new(::String buf);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Unserializer_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Unserializer","\x4b","\x42","\x41","\x93"); }

		static void __boot();
		static Dynamic DEFAULT_RESOLVER;
		static ::String BASE64;
		static Array< int > CODES;
		static Array< int > initCodes( );
		static Dynamic initCodes_dyn();

		static Dynamic run( ::String v);
		static Dynamic run_dyn();

		::String buf;
		int pos;
		int length;
		cpp::ArrayBase cache;
		Array< ::String > scache;
		Dynamic resolver;
		virtual Void setResolver( Dynamic r);
		Dynamic setResolver_dyn();

		virtual int readDigits( );
		Dynamic readDigits_dyn();

		virtual Float readFloat( );
		Dynamic readFloat_dyn();

		virtual Void unserializeObject( Dynamic o);
		Dynamic unserializeObject_dyn();

		virtual Dynamic unserializeEnum( ::Enum edecl,::String tag);
		Dynamic unserializeEnum_dyn();

		virtual Dynamic unserialize( );
		Dynamic unserialize_dyn();

};

} // end namespace haxe

#endif /* INCLUDED_haxe_Unserializer */ 
