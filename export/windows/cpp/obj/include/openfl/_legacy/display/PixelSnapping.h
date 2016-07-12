#ifndef INCLUDED_openfl__legacy_display_PixelSnapping
#define INCLUDED_openfl__legacy_display_PixelSnapping

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_legacy,display,PixelSnapping)
namespace openfl{
namespace _legacy{
namespace display{


class PixelSnapping_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef PixelSnapping_obj OBJ_;

	public:
		PixelSnapping_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("openfl._legacy.display.PixelSnapping","\xb2","\x48","\xb0","\xa8"); }
		::String __ToString() const { return HX_HCSTRING("PixelSnapping.","\xac","\x7b","\x2c","\x7f") + tag; }

		static ::openfl::_legacy::display::PixelSnapping ALWAYS;
		static inline ::openfl::_legacy::display::PixelSnapping ALWAYS_dyn() { return ALWAYS; }
		static ::openfl::_legacy::display::PixelSnapping AUTO;
		static inline ::openfl::_legacy::display::PixelSnapping AUTO_dyn() { return AUTO; }
		static ::openfl::_legacy::display::PixelSnapping NEVER;
		static inline ::openfl::_legacy::display::PixelSnapping NEVER_dyn() { return NEVER; }
};

} // end namespace openfl
} // end namespace _legacy
} // end namespace display

#endif /* INCLUDED_openfl__legacy_display_PixelSnapping */ 
