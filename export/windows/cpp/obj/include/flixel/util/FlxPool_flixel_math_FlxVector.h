#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxVector
#define INCLUDED_flixel_util_FlxPool_flixel_math_FlxVector

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,math,FlxVector)
HX_DECLARE_CLASS2(flixel,util,FlxPool_flixel_math_FlxVector)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPool)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  FlxPool_flixel_math_FlxVector_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxPool_flixel_math_FlxVector_obj OBJ_;
		FlxPool_flixel_math_FlxVector_obj();
		Void __construct(::hx::Class classObj);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.util.FlxPool_flixel_math_FlxVector")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxPool_flixel_math_FlxVector_obj > __new(::hx::Class classObj);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxPool_flixel_math_FlxVector_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::flixel::util::IFlxPool_obj *();
		::String __ToString() const { return HX_HCSTRING("FlxPool_flixel_math_FlxVector","\x10","\x7e","\xb4","\x65"); }

		Array< ::Dynamic > _pool;
		::hx::Class _class;
		int _count;
		virtual ::flixel::math::FlxVector get( );
		Dynamic get_dyn();

		virtual Void put( ::flixel::math::FlxVector obj);
		Dynamic put_dyn();

		virtual Void putUnsafe( ::flixel::math::FlxVector obj);
		Dynamic putUnsafe_dyn();

		virtual Void preAllocate( int numObjects);
		Dynamic preAllocate_dyn();

		virtual Array< ::Dynamic > clear( );
		Dynamic clear_dyn();

		virtual int get_length( );
		Dynamic get_length_dyn();

};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxPool_flixel_math_FlxVector */ 
