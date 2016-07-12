#ifndef INCLUDED_openfl__legacy_text_FontType
#define INCLUDED_openfl__legacy_text_FontType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_legacy,text,FontType)
namespace openfl{
namespace _legacy{
namespace text{


class FontType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef FontType_obj OBJ_;

	public:
		FontType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("openfl._legacy.text.FontType","\xc6","\xd9","\xb6","\xae"); }
		::String __ToString() const { return HX_HCSTRING("FontType.","\xc5","\xf3","\x79","\x68") + tag; }

		static ::openfl::_legacy::text::FontType DEVICE;
		static inline ::openfl::_legacy::text::FontType DEVICE_dyn() { return DEVICE; }
		static ::openfl::_legacy::text::FontType EMBEDDED;
		static inline ::openfl::_legacy::text::FontType EMBEDDED_dyn() { return EMBEDDED; }
		static ::openfl::_legacy::text::FontType EMBEDDED_CFF;
		static inline ::openfl::_legacy::text::FontType EMBEDDED_CFF_dyn() { return EMBEDDED_CFF; }
};

} // end namespace openfl
} // end namespace _legacy
} // end namespace text

#endif /* INCLUDED_openfl__legacy_text_FontType */ 
