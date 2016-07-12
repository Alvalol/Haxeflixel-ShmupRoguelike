#ifndef INCLUDED_openfl__legacy_display_JointStyle
#define INCLUDED_openfl__legacy_display_JointStyle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_legacy,display,JointStyle)
namespace openfl{
namespace _legacy{
namespace display{


class JointStyle_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef JointStyle_obj OBJ_;

	public:
		JointStyle_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("openfl._legacy.display.JointStyle","\x37","\xc3","\xe9","\x45"); }
		::String __ToString() const { return HX_HCSTRING("JointStyle.","\xa7","\x3e","\x67","\xdb") + tag; }

		static ::openfl::_legacy::display::JointStyle BEVEL;
		static inline ::openfl::_legacy::display::JointStyle BEVEL_dyn() { return BEVEL; }
		static ::openfl::_legacy::display::JointStyle MITER;
		static inline ::openfl::_legacy::display::JointStyle MITER_dyn() { return MITER; }
		static ::openfl::_legacy::display::JointStyle ROUND;
		static inline ::openfl::_legacy::display::JointStyle ROUND_dyn() { return ROUND; }
};

} // end namespace openfl
} // end namespace _legacy
} // end namespace display

#endif /* INCLUDED_openfl__legacy_display_JointStyle */ 
