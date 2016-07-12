#ifndef INCLUDED_openfl__legacy_display_GradientType
#define INCLUDED_openfl__legacy_display_GradientType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_legacy,display,GradientType)
namespace openfl{
namespace _legacy{
namespace display{


class GradientType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef GradientType_obj OBJ_;

	public:
		GradientType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("openfl._legacy.display.GradientType","\x7a","\x30","\x4a","\x84"); }
		::String __ToString() const { return HX_HCSTRING("GradientType.","\x04","\xf0","\x81","\x94") + tag; }

		static ::openfl::_legacy::display::GradientType LINEAR;
		static inline ::openfl::_legacy::display::GradientType LINEAR_dyn() { return LINEAR; }
		static ::openfl::_legacy::display::GradientType RADIAL;
		static inline ::openfl::_legacy::display::GradientType RADIAL_dyn() { return RADIAL; }
};

} // end namespace openfl
} // end namespace _legacy
} // end namespace display

#endif /* INCLUDED_openfl__legacy_display_GradientType */ 
