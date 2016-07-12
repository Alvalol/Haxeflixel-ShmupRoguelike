#ifndef INCLUDED_openfl__legacy_display_InterpolationMethod
#define INCLUDED_openfl__legacy_display_InterpolationMethod

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_legacy,display,InterpolationMethod)
namespace openfl{
namespace _legacy{
namespace display{


class InterpolationMethod_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef InterpolationMethod_obj OBJ_;

	public:
		InterpolationMethod_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("openfl._legacy.display.InterpolationMethod","\x75","\xc5","\xa7","\x1f"); }
		::String __ToString() const { return HX_HCSTRING("InterpolationMethod.","\x89","\x1d","\x74","\x40") + tag; }

		static ::openfl::_legacy::display::InterpolationMethod LINEAR_RGB;
		static inline ::openfl::_legacy::display::InterpolationMethod LINEAR_RGB_dyn() { return LINEAR_RGB; }
		static ::openfl::_legacy::display::InterpolationMethod RGB;
		static inline ::openfl::_legacy::display::InterpolationMethod RGB_dyn() { return RGB; }
};

} // end namespace openfl
} // end namespace _legacy
} // end namespace display

#endif /* INCLUDED_openfl__legacy_display_InterpolationMethod */ 
