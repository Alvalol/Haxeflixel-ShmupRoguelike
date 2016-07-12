#ifndef INCLUDED_openfl__legacy_display_SpreadMethod
#define INCLUDED_openfl__legacy_display_SpreadMethod

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_legacy,display,SpreadMethod)
namespace openfl{
namespace _legacy{
namespace display{


class SpreadMethod_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef SpreadMethod_obj OBJ_;

	public:
		SpreadMethod_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("openfl._legacy.display.SpreadMethod","\x64","\x25","\x91","\x7c"); }
		::String __ToString() const { return HX_HCSTRING("SpreadMethod.","\xda","\x47","\x51","\xda") + tag; }

		static ::openfl::_legacy::display::SpreadMethod PAD;
		static inline ::openfl::_legacy::display::SpreadMethod PAD_dyn() { return PAD; }
		static ::openfl::_legacy::display::SpreadMethod REFLECT;
		static inline ::openfl::_legacy::display::SpreadMethod REFLECT_dyn() { return REFLECT; }
		static ::openfl::_legacy::display::SpreadMethod REPEAT;
		static inline ::openfl::_legacy::display::SpreadMethod REPEAT_dyn() { return REPEAT; }
};

} // end namespace openfl
} // end namespace _legacy
} // end namespace display

#endif /* INCLUDED_openfl__legacy_display_SpreadMethod */ 
