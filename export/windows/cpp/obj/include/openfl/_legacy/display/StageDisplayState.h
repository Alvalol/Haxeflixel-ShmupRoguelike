#ifndef INCLUDED_openfl__legacy_display_StageDisplayState
#define INCLUDED_openfl__legacy_display_StageDisplayState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_legacy,display,StageDisplayState)
namespace openfl{
namespace _legacy{
namespace display{


class StageDisplayState_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef StageDisplayState_obj OBJ_;

	public:
		StageDisplayState_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("openfl._legacy.display.StageDisplayState","\x9d","\x2a","\x48","\x8e"); }
		::String __ToString() const { return HX_HCSTRING("StageDisplayState.","\x61","\x3f","\x0f","\x95") + tag; }

		static ::openfl::_legacy::display::StageDisplayState FULL_SCREEN;
		static inline ::openfl::_legacy::display::StageDisplayState FULL_SCREEN_dyn() { return FULL_SCREEN; }
		static ::openfl::_legacy::display::StageDisplayState FULL_SCREEN_INTERACTIVE;
		static inline ::openfl::_legacy::display::StageDisplayState FULL_SCREEN_INTERACTIVE_dyn() { return FULL_SCREEN_INTERACTIVE; }
		static ::openfl::_legacy::display::StageDisplayState NORMAL;
		static inline ::openfl::_legacy::display::StageDisplayState NORMAL_dyn() { return NORMAL; }
};

} // end namespace openfl
} // end namespace _legacy
} // end namespace display

#endif /* INCLUDED_openfl__legacy_display_StageDisplayState */ 
