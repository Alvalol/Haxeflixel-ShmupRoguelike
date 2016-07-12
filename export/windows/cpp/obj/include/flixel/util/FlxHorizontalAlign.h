#ifndef INCLUDED_flixel_util_FlxHorizontalAlign
#define INCLUDED_flixel_util_FlxHorizontalAlign

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,util,FlxHorizontalAlign)
namespace flixel{
namespace util{


class FlxHorizontalAlign_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef FlxHorizontalAlign_obj OBJ_;

	public:
		FlxHorizontalAlign_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("flixel.util.FlxHorizontalAlign","\xe9","\x17","\xb2","\x1a"); }
		::String __ToString() const { return HX_HCSTRING("FlxHorizontalAlign.","\x3f","\x66","\x37","\x86") + tag; }

		static ::flixel::util::FlxHorizontalAlign CENTER;
		static inline ::flixel::util::FlxHorizontalAlign CENTER_dyn() { return CENTER; }
		static ::flixel::util::FlxHorizontalAlign LEFT;
		static inline ::flixel::util::FlxHorizontalAlign LEFT_dyn() { return LEFT; }
		static ::flixel::util::FlxHorizontalAlign RIGHT;
		static inline ::flixel::util::FlxHorizontalAlign RIGHT_dyn() { return RIGHT; }
};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxHorizontalAlign */ 
