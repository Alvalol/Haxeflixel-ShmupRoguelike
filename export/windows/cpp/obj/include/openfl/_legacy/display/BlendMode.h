#ifndef INCLUDED_openfl__legacy_display_BlendMode
#define INCLUDED_openfl__legacy_display_BlendMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_legacy,display,BlendMode)
namespace openfl{
namespace _legacy{
namespace display{


class BlendMode_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef BlendMode_obj OBJ_;

	public:
		BlendMode_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("openfl._legacy.display.BlendMode","\xa4","\x16","\xb7","\xb7"); }
		::String __ToString() const { return HX_HCSTRING("BlendMode.","\x7a","\xe9","\x60","\x9b") + tag; }

		static ::openfl::_legacy::display::BlendMode ADD;
		static inline ::openfl::_legacy::display::BlendMode ADD_dyn() { return ADD; }
		static ::openfl::_legacy::display::BlendMode ALPHA;
		static inline ::openfl::_legacy::display::BlendMode ALPHA_dyn() { return ALPHA; }
		static ::openfl::_legacy::display::BlendMode DARKEN;
		static inline ::openfl::_legacy::display::BlendMode DARKEN_dyn() { return DARKEN; }
		static ::openfl::_legacy::display::BlendMode DIFFERENCE;
		static inline ::openfl::_legacy::display::BlendMode DIFFERENCE_dyn() { return DIFFERENCE; }
		static ::openfl::_legacy::display::BlendMode ERASE;
		static inline ::openfl::_legacy::display::BlendMode ERASE_dyn() { return ERASE; }
		static ::openfl::_legacy::display::BlendMode HARDLIGHT;
		static inline ::openfl::_legacy::display::BlendMode HARDLIGHT_dyn() { return HARDLIGHT; }
		static ::openfl::_legacy::display::BlendMode INVERT;
		static inline ::openfl::_legacy::display::BlendMode INVERT_dyn() { return INVERT; }
		static ::openfl::_legacy::display::BlendMode LAYER;
		static inline ::openfl::_legacy::display::BlendMode LAYER_dyn() { return LAYER; }
		static ::openfl::_legacy::display::BlendMode LIGHTEN;
		static inline ::openfl::_legacy::display::BlendMode LIGHTEN_dyn() { return LIGHTEN; }
		static ::openfl::_legacy::display::BlendMode MULTIPLY;
		static inline ::openfl::_legacy::display::BlendMode MULTIPLY_dyn() { return MULTIPLY; }
		static ::openfl::_legacy::display::BlendMode NORMAL;
		static inline ::openfl::_legacy::display::BlendMode NORMAL_dyn() { return NORMAL; }
		static ::openfl::_legacy::display::BlendMode OVERLAY;
		static inline ::openfl::_legacy::display::BlendMode OVERLAY_dyn() { return OVERLAY; }
		static ::openfl::_legacy::display::BlendMode SCREEN;
		static inline ::openfl::_legacy::display::BlendMode SCREEN_dyn() { return SCREEN; }
		static ::openfl::_legacy::display::BlendMode SUBTRACT;
		static inline ::openfl::_legacy::display::BlendMode SUBTRACT_dyn() { return SUBTRACT; }
};

} // end namespace openfl
} // end namespace _legacy
} // end namespace display

#endif /* INCLUDED_openfl__legacy_display_BlendMode */ 
