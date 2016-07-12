#ifndef INCLUDED_openfl__legacy_display_StageScaleMode
#define INCLUDED_openfl__legacy_display_StageScaleMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_legacy,display,StageScaleMode)
namespace openfl{
namespace _legacy{
namespace display{


class StageScaleMode_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef StageScaleMode_obj OBJ_;

	public:
		StageScaleMode_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("openfl._legacy.display.StageScaleMode","\x1f","\x74","\xdb","\x99"); }
		::String __ToString() const { return HX_HCSTRING("StageScaleMode.","\xbf","\x60","\x10","\x62") + tag; }

		static ::openfl::_legacy::display::StageScaleMode EXACT_FIT;
		static inline ::openfl::_legacy::display::StageScaleMode EXACT_FIT_dyn() { return EXACT_FIT; }
		static ::openfl::_legacy::display::StageScaleMode NO_BORDER;
		static inline ::openfl::_legacy::display::StageScaleMode NO_BORDER_dyn() { return NO_BORDER; }
		static ::openfl::_legacy::display::StageScaleMode NO_SCALE;
		static inline ::openfl::_legacy::display::StageScaleMode NO_SCALE_dyn() { return NO_SCALE; }
		static ::openfl::_legacy::display::StageScaleMode SHOW_ALL;
		static inline ::openfl::_legacy::display::StageScaleMode SHOW_ALL_dyn() { return SHOW_ALL; }
};

} // end namespace openfl
} // end namespace _legacy
} // end namespace display

#endif /* INCLUDED_openfl__legacy_display_StageScaleMode */ 
