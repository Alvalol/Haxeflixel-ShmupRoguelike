#ifndef INCLUDED_openfl__legacy_display_CapsStyle
#define INCLUDED_openfl__legacy_display_CapsStyle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_legacy,display,CapsStyle)
namespace openfl{
namespace _legacy{
namespace display{


class CapsStyle_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef CapsStyle_obj OBJ_;

	public:
		CapsStyle_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("openfl._legacy.display.CapsStyle","\xa0","\x93","\xb1","\x2e"); }
		::String __ToString() const { return HX_HCSTRING("CapsStyle.","\xfe","\xc8","\x93","\x3f") + tag; }

		static ::openfl::_legacy::display::CapsStyle NONE;
		static inline ::openfl::_legacy::display::CapsStyle NONE_dyn() { return NONE; }
		static ::openfl::_legacy::display::CapsStyle ROUND;
		static inline ::openfl::_legacy::display::CapsStyle ROUND_dyn() { return ROUND; }
		static ::openfl::_legacy::display::CapsStyle SQUARE;
		static inline ::openfl::_legacy::display::CapsStyle SQUARE_dyn() { return SQUARE; }
};

} // end namespace openfl
} // end namespace _legacy
} // end namespace display

#endif /* INCLUDED_openfl__legacy_display_CapsStyle */ 
