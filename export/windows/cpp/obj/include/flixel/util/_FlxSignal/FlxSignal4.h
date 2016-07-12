#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal4
#define INCLUDED_flixel_util__FlxSignal_FlxSignal4

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxSignal)
HX_DECLARE_CLASS3(flixel,util,_FlxSignal,FlxBaseSignal)
HX_DECLARE_CLASS3(flixel,util,_FlxSignal,FlxSignal4)
namespace flixel{
namespace util{
namespace _FlxSignal{


class HXCPP_CLASS_ATTRIBUTES  FlxSignal4_obj : public ::flixel::util::_FlxSignal::FlxBaseSignal_obj{
	public:
		typedef ::flixel::util::_FlxSignal::FlxBaseSignal_obj super;
		typedef FlxSignal4_obj OBJ_;
		FlxSignal4_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.util._FlxSignal.FlxSignal4")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxSignal4_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxSignal4_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("FlxSignal4","\x9a","\x26","\x0e","\x70"); }

		virtual Void dispatch4( Dynamic value1,Dynamic value2,Dynamic value3,Dynamic value4);
		Dynamic dispatch4_dyn();

};

} // end namespace flixel
} // end namespace util
} // end namespace _FlxSignal

#endif /* INCLUDED_flixel_util__FlxSignal_FlxSignal4 */ 
