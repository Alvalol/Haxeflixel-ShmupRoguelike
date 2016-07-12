#ifndef INCLUDED_haxe_ds_IntMap
#define INCLUDED_haxe_ds_IntMap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
namespace haxe{
namespace ds{


class HXCPP_CLASS_ATTRIBUTES  IntMap_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef IntMap_obj OBJ_;
		IntMap_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ds.IntMap")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< IntMap_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~IntMap_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::haxe::IMap_obj *();
		::String __ToString() const { return HX_HCSTRING("IntMap","\x0d","\xa9","\x08","\xd3"); }

		Dynamic h;
		virtual Void set( int key,Dynamic value);
		Dynamic set_dyn();

		virtual Dynamic get( int key);
		Dynamic get_dyn();

		virtual bool exists( int key);
		Dynamic exists_dyn();

		virtual bool remove( int key);
		Dynamic remove_dyn();

		virtual Dynamic keys( );
		Dynamic keys_dyn();


  inline void set(int key, ::null value) { __int_hash_set(h,key,value); }
  inline void set(int key, bool value) { __int_hash_set(h,key,value); }
  inline void set(int key, char value) { __int_hash_set_int(h,key,value); }
  inline void set(int key, unsigned char value) { __int_hash_set_int(h,key,value); }
  inline void set(int key, signed char value) { __int_hash_set_int(h,key,value); }
  inline void set(int key, short value) { __int_hash_set_int(h,key,value); }
  inline void set(int key, unsigned short value) { __int_hash_set_int(h,key,value); }
  inline void set(int key, int value) { __int_hash_set_int(h,key,value); }
  inline void set(int key, unsigned int value) { __int_hash_set_int(h,key,value); }
  inline void set(int key, float value) { __int_hash_set_float(h,key,value); }
  inline void set(int key, double value) { __int_hash_set_float(h,key,value); }
  inline void set(int key, ::String value) { __int_hash_set_string(h,key,value); }

  template<typename V, typename H>
  inline void set(int key, const ::cpp::Struct<V,H> &value) {__int_hash_set(h,key,value); }
  template<typename F>
  inline void set(int key, const ::cpp::Function<F> &value) {__int_hash_set(h,key,value); }
  template<typename V>
  inline void set(int key, const ::cpp::Pointer<V> &value) {__int_hash_set(h,key,(Dynamic)value ); }

  template<typename VALUE>
  inline Void set(Dynamic &key, const VALUE &value) { set( (int)key, value ); return null(); }

};

} // end namespace haxe
} // end namespace ds

#endif /* INCLUDED_haxe_ds_IntMap */ 
