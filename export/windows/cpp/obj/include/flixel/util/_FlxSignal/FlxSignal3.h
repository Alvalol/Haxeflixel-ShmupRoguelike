#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal3
#define INCLUDED_flixel_util__FlxSignal_FlxSignal3

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxSignal)
HX_DECLARE_CLASS3(flixel,util,_FlxSignal,FlxBaseSignal)
HX_DECLARE_CLASS3(flixel,util,_FlxSignal,FlxSignal3)
namespace flixel{
namespace util{
namespace _FlxSignal{


class HXCPP_CLASS_ATTRIBUTES  FlxSignal3_obj : public ::flixel::util::_FlxSignal::FlxBaseSignal_obj{
	public:
		typedef ::flixel::util::_FlxSignal::FlxBaseSignal_obj super;
		typedef FlxSignal3_obj OBJ_;
		FlxSignal3_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.util._FlxSignal.FlxSignal3")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxSignal3_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxSignal3_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("FlxSignal3","\x99","\x26","\x0e","\x70"); }

		virtual Void dispatch3( Dynamic value1,Dynamic value2,Dynamic value3);
		Dynamic dispatch3_dyn();

};

} // end namespace flixel
} // end namespace util
} // end namespace _FlxSignal

#endif /* INCLUDED_flixel_util__FlxSignal_FlxSignal3 */ 
