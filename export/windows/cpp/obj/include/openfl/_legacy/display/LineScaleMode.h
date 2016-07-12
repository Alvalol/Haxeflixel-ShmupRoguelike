#ifndef INCLUDED_openfl__legacy_display_LineScaleMode
#define INCLUDED_openfl__legacy_display_LineScaleMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_legacy,display,LineScaleMode)
namespace openfl{
namespace _legacy{
namespace display{


class LineScaleMode_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef LineScaleMode_obj OBJ_;

	public:
		LineScaleMode_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("openfl._legacy.display.LineScaleMode","\xc9","\x9e","\x61","\x5f"); }
		::String __ToString() const { return HX_HCSTRING("LineScaleMode.","\xb5","\x79","\xa6","\xa3") + tag; }

		static ::openfl::_legacy::display::LineScaleMode HORIZONTAL;
		static inline ::openfl::_legacy::display::LineScaleMode HORIZONTAL_dyn() { return HORIZONTAL; }
		static ::openfl::_legacy::display::LineScaleMode NONE;
		static inline ::openfl::_legacy::display::LineScaleMode NONE_dyn() { return NONE; }
		static ::openfl::_legacy::display::LineScaleMode NORMAL;
		static inline ::openfl::_legacy::display::LineScaleMode NORMAL_dyn() { return NORMAL; }
		static ::openfl::_legacy::display::LineScaleMode OPENGL;
		static inline ::openfl::_legacy::display::LineScaleMode OPENGL_dyn() { return OPENGL; }
		static ::openfl::_legacy::display::LineScaleMode VERTICAL;
		static inline ::openfl::_legacy::display::LineScaleMode VERTICAL_dyn() { return VERTICAL; }
};

} // end namespace openfl
} // end namespace _legacy
} // end namespace display

#endif /* INCLUDED_openfl__legacy_display_LineScaleMode */ 
