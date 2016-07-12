#ifndef INCLUDED_flixel_util__FlxSignal_FlxTypedSignal_Impl_
#define INCLUDED_flixel_util__FlxSignal_FlxTypedSignal_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxSignal)
HX_DECLARE_CLASS3(flixel,util,_FlxSignal,FlxBaseSignal)
HX_DECLARE_CLASS3(flixel,util,_FlxSignal,FlxSignal0)
HX_DECLARE_CLASS3(flixel,util,_FlxSignal,FlxSignal1)
HX_DECLARE_CLASS3(flixel,util,_FlxSignal,FlxSignal2)
HX_DECLARE_CLASS3(flixel,util,_FlxSignal,FlxSignal3)
HX_DECLARE_CLASS3(flixel,util,_FlxSignal,FlxSignal4)
HX_DECLARE_CLASS3(flixel,util,_FlxSignal,FlxTypedSignal_Impl_)
namespace flixel{
namespace util{
namespace _FlxSignal{


class HXCPP_CLASS_ATTRIBUTES  FlxTypedSignal_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxTypedSignal_Impl__obj OBJ_;
		FlxTypedSignal_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="flixel.util._FlxSignal.FlxTypedSignal_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxTypedSignal_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxTypedSignal_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("FlxTypedSignal_Impl_","\xe0","\x23","\xff","\xca"); }

		static Dynamic _new;
		static Dynamic &_new_dyn() { return _new;}
		static Void add( ::flixel::util::IFlxSignal this1,Dynamic listener);
		static Dynamic add_dyn();

		static Void addOnce( ::flixel::util::IFlxSignal this1,Dynamic listener);
		static Dynamic addOnce_dyn();

		static Void remove( ::flixel::util::IFlxSignal this1,Dynamic listener);
		static Dynamic remove_dyn();

		static bool has( ::flixel::util::IFlxSignal this1,Dynamic listener);
		static Dynamic has_dyn();

		static Void removeAll( ::flixel::util::IFlxSignal this1);
		static Dynamic removeAll_dyn();

		static Dynamic get_dispatch( ::flixel::util::IFlxSignal this1);
		static Dynamic get_dispatch_dyn();

		static ::flixel::util::_FlxSignal::FlxSignal0 toSignal0( ::flixel::util::IFlxSignal signal);
		static Dynamic toSignal0_dyn();

		static ::flixel::util::_FlxSignal::FlxSignal1 toSignal1( ::flixel::util::IFlxSignal signal);
		static Dynamic toSignal1_dyn();

		static ::flixel::util::_FlxSignal::FlxSignal2 toSignal2( ::flixel::util::IFlxSignal signal);
		static Dynamic toSignal2_dyn();

		static ::flixel::util::_FlxSignal::FlxSignal3 toSignal3( ::flixel::util::IFlxSignal signal);
		static Dynamic toSignal3_dyn();

		static ::flixel::util::_FlxSignal::FlxSignal4 toSignal4( ::flixel::util::IFlxSignal signal);
		static Dynamic toSignal4_dyn();

};

} // end namespace flixel
} // end namespace util
} // end namespace _FlxSignal

#endif /* INCLUDED_flixel_util__FlxSignal_FlxTypedSignal_Impl_ */ 
