#ifndef INCLUDED_flixel_FlxRenderMethod
#define INCLUDED_flixel_FlxRenderMethod

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxRenderMethod)
namespace flixel{


class FlxRenderMethod_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef FlxRenderMethod_obj OBJ_;

	public:
		FlxRenderMethod_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("flixel.FlxRenderMethod","\x37","\x14","\xc6","\xa4"); }
		::String __ToString() const { return HX_HCSTRING("FlxRenderMethod.","\xc5","\x89","\xac","\xfc") + tag; }

		static ::flixel::FlxRenderMethod BLITTING;
		static inline ::flixel::FlxRenderMethod BLITTING_dyn() { return BLITTING; }
		static ::flixel::FlxRenderMethod DRAW_TILES;
		static inline ::flixel::FlxRenderMethod DRAW_TILES_dyn() { return DRAW_TILES; }
};

} // end namespace flixel

#endif /* INCLUDED_flixel_FlxRenderMethod */ 
