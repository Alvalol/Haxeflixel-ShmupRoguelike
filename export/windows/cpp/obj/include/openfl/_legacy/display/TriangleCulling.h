#ifndef INCLUDED_openfl__legacy_display_TriangleCulling
#define INCLUDED_openfl__legacy_display_TriangleCulling

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_legacy,display,TriangleCulling)
namespace openfl{
namespace _legacy{
namespace display{


class TriangleCulling_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef TriangleCulling_obj OBJ_;

	public:
		TriangleCulling_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("openfl._legacy.display.TriangleCulling","\xd8","\x02","\x76","\x2a"); }
		::String __ToString() const { return HX_HCSTRING("TriangleCulling.","\xc6","\x9e","\x58","\x0a") + tag; }

		static ::openfl::_legacy::display::TriangleCulling NEGATIVE;
		static inline ::openfl::_legacy::display::TriangleCulling NEGATIVE_dyn() { return NEGATIVE; }
		static ::openfl::_legacy::display::TriangleCulling NONE;
		static inline ::openfl::_legacy::display::TriangleCulling NONE_dyn() { return NONE; }
		static ::openfl::_legacy::display::TriangleCulling POSITIVE;
		static inline ::openfl::_legacy::display::TriangleCulling POSITIVE_dyn() { return POSITIVE; }
};

} // end namespace openfl
} // end namespace _legacy
} // end namespace display

#endif /* INCLUDED_openfl__legacy_display_TriangleCulling */ 
