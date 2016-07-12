#ifndef INCLUDED_openfl__legacy_AssetType
#define INCLUDED_openfl__legacy_AssetType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,_legacy,AssetType)
namespace openfl{
namespace _legacy{


class AssetType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef AssetType_obj OBJ_;

	public:
		AssetType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("openfl._legacy.AssetType","\x46","\x9c","\x83","\xab"); }
		::String __ToString() const { return HX_HCSTRING("AssetType.","\x44","\x74","\x5a","\xbe") + tag; }

		static ::openfl::_legacy::AssetType BINARY;
		static inline ::openfl::_legacy::AssetType BINARY_dyn() { return BINARY; }
		static ::openfl::_legacy::AssetType FONT;
		static inline ::openfl::_legacy::AssetType FONT_dyn() { return FONT; }
		static ::openfl::_legacy::AssetType IMAGE;
		static inline ::openfl::_legacy::AssetType IMAGE_dyn() { return IMAGE; }
		static ::openfl::_legacy::AssetType MOVIE_CLIP;
		static inline ::openfl::_legacy::AssetType MOVIE_CLIP_dyn() { return MOVIE_CLIP; }
		static ::openfl::_legacy::AssetType MUSIC;
		static inline ::openfl::_legacy::AssetType MUSIC_dyn() { return MUSIC; }
		static ::openfl::_legacy::AssetType SOUND;
		static inline ::openfl::_legacy::AssetType SOUND_dyn() { return SOUND; }
		static ::openfl::_legacy::AssetType TEMPLATE;
		static inline ::openfl::_legacy::AssetType TEMPLATE_dyn() { return TEMPLATE; }
		static ::openfl::_legacy::AssetType TEXT;
		static inline ::openfl::_legacy::AssetType TEXT_dyn() { return TEXT; }
};

} // end namespace openfl
} // end namespace _legacy

#endif /* INCLUDED_openfl__legacy_AssetType */ 
