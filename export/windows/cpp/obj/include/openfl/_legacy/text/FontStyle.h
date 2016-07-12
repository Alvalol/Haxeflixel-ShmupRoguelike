#ifndef INCLUDED_openfl__legacy_text_FontStyle
#define INCLUDED_openfl__legacy_text_FontStyle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_legacy,text,FontStyle)
namespace openfl{
namespace _legacy{
namespace text{


class FontStyle_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef FontStyle_obj OBJ_;

	public:
		FontStyle_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("openfl._legacy.text.FontStyle","\xa5","\xe8","\x99","\x9a"); }
		::String __ToString() const { return HX_HCSTRING("FontStyle.","\x2c","\x81","\xd7","\xc0") + tag; }

		static ::openfl::_legacy::text::FontStyle BOLD;
		static inline ::openfl::_legacy::text::FontStyle BOLD_dyn() { return BOLD; }
		static ::openfl::_legacy::text::FontStyle BOLD_ITALIC;
		static inline ::openfl::_legacy::text::FontStyle BOLD_ITALIC_dyn() { return BOLD_ITALIC; }
		static ::openfl::_legacy::text::FontStyle ITALIC;
		static inline ::openfl::_legacy::text::FontStyle ITALIC_dyn() { return ITALIC; }
		static ::openfl::_legacy::text::FontStyle REGULAR;
		static inline ::openfl::_legacy::text::FontStyle REGULAR_dyn() { return REGULAR; }
};

} // end namespace openfl
} // end namespace _legacy
} // end namespace text

#endif /* INCLUDED_openfl__legacy_text_FontStyle */ 
