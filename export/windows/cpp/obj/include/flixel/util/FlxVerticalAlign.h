#ifndef INCLUDED_flixel_util_FlxVerticalAlign
#define INCLUDED_flixel_util_FlxVerticalAlign

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,util,FlxVerticalAlign)
namespace flixel{
namespace util{


class FlxVerticalAlign_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef FlxVerticalAlign_obj OBJ_;

	public:
		FlxVerticalAlign_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("flixel.util.FlxVerticalAlign","\x17","\xad","\xc7","\x75"); }
		::String __ToString() const { return HX_HCSTRING("FlxVerticalAlign.","\xd1","\xbe","\x63","\x5f") + tag; }

		static ::flixel::util::FlxVerticalAlign BOTTOM;
		static inline ::flixel::util::FlxVerticalAlign BOTTOM_dyn() { return BOTTOM; }
		static ::flixel::util::FlxVerticalAlign CENTER;
		static inline ::flixel::util::FlxVerticalAlign CENTER_dyn() { return CENTER; }
		static ::flixel::util::FlxVerticalAlign TOP;
		static inline ::flixel::util::FlxVerticalAlign TOP_dyn() { return TOP; }
};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxVerticalAlign */ 
