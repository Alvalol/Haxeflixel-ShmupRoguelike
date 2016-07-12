#ifndef INCLUDED_openfl__legacy_display_StageQuality
#define INCLUDED_openfl__legacy_display_StageQuality

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_legacy,display,StageQuality)
namespace openfl{
namespace _legacy{
namespace display{


class StageQuality_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef StageQuality_obj OBJ_;

	public:
		StageQuality_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("openfl._legacy.display.StageQuality","\x51","\xd5","\x10","\xdb"); }
		::String __ToString() const { return HX_HCSTRING("StageQuality.","\x4d","\x87","\x8b","\x2b") + tag; }

		static ::openfl::_legacy::display::StageQuality BEST;
		static inline ::openfl::_legacy::display::StageQuality BEST_dyn() { return BEST; }
		static ::openfl::_legacy::display::StageQuality HIGH;
		static inline ::openfl::_legacy::display::StageQuality HIGH_dyn() { return HIGH; }
		static ::openfl::_legacy::display::StageQuality LOW;
		static inline ::openfl::_legacy::display::StageQuality LOW_dyn() { return LOW; }
		static ::openfl::_legacy::display::StageQuality MEDIUM;
		static inline ::openfl::_legacy::display::StageQuality MEDIUM_dyn() { return MEDIUM; }
};

} // end namespace openfl
} // end namespace _legacy
} // end namespace display

#endif /* INCLUDED_openfl__legacy_display_StageQuality */ 
