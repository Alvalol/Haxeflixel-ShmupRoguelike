#ifndef INCLUDED_openfl__legacy_display_StageAlign
#define INCLUDED_openfl__legacy_display_StageAlign

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_legacy,display,StageAlign)
namespace openfl{
namespace _legacy{
namespace display{


class StageAlign_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef StageAlign_obj OBJ_;

	public:
		StageAlign_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("openfl._legacy.display.StageAlign","\xd7","\x7e","\xae","\xd8"); }
		::String __ToString() const { return HX_HCSTRING("StageAlign.","\x07","\xaf","\xc6","\xb4") + tag; }

		static ::openfl::_legacy::display::StageAlign BOTTOM;
		static inline ::openfl::_legacy::display::StageAlign BOTTOM_dyn() { return BOTTOM; }
		static ::openfl::_legacy::display::StageAlign BOTTOM_LEFT;
		static inline ::openfl::_legacy::display::StageAlign BOTTOM_LEFT_dyn() { return BOTTOM_LEFT; }
		static ::openfl::_legacy::display::StageAlign BOTTOM_RIGHT;
		static inline ::openfl::_legacy::display::StageAlign BOTTOM_RIGHT_dyn() { return BOTTOM_RIGHT; }
		static ::openfl::_legacy::display::StageAlign LEFT;
		static inline ::openfl::_legacy::display::StageAlign LEFT_dyn() { return LEFT; }
		static ::openfl::_legacy::display::StageAlign RIGHT;
		static inline ::openfl::_legacy::display::StageAlign RIGHT_dyn() { return RIGHT; }
		static ::openfl::_legacy::display::StageAlign TOP;
		static inline ::openfl::_legacy::display::StageAlign TOP_dyn() { return TOP; }
		static ::openfl::_legacy::display::StageAlign TOP_LEFT;
		static inline ::openfl::_legacy::display::StageAlign TOP_LEFT_dyn() { return TOP_LEFT; }
		static ::openfl::_legacy::display::StageAlign TOP_RIGHT;
		static inline ::openfl::_legacy::display::StageAlign TOP_RIGHT_dyn() { return TOP_RIGHT; }
};

} // end namespace openfl
} // end namespace _legacy
} // end namespace display

#endif /* INCLUDED_openfl__legacy_display_StageAlign */ 
