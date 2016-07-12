#ifndef INCLUDED_openfl__legacy_text_TextFieldAutoSize
#define INCLUDED_openfl__legacy_text_TextFieldAutoSize

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_legacy,text,TextFieldAutoSize)
namespace openfl{
namespace _legacy{
namespace text{


class TextFieldAutoSize_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef TextFieldAutoSize_obj OBJ_;

	public:
		TextFieldAutoSize_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("openfl._legacy.text.TextFieldAutoSize","\x80","\x20","\x7c","\x12"); }
		::String __ToString() const { return HX_HCSTRING("TextFieldAutoSize.","\xf1","\xa3","\x15","\xd3") + tag; }

		static ::openfl::_legacy::text::TextFieldAutoSize CENTER;
		static inline ::openfl::_legacy::text::TextFieldAutoSize CENTER_dyn() { return CENTER; }
		static ::openfl::_legacy::text::TextFieldAutoSize LEFT;
		static inline ::openfl::_legacy::text::TextFieldAutoSize LEFT_dyn() { return LEFT; }
		static ::openfl::_legacy::text::TextFieldAutoSize NONE;
		static inline ::openfl::_legacy::text::TextFieldAutoSize NONE_dyn() { return NONE; }
		static ::openfl::_legacy::text::TextFieldAutoSize RIGHT;
		static inline ::openfl::_legacy::text::TextFieldAutoSize RIGHT_dyn() { return RIGHT; }
};

} // end namespace openfl
} // end namespace _legacy
} // end namespace text

#endif /* INCLUDED_openfl__legacy_text_TextFieldAutoSize */ 
