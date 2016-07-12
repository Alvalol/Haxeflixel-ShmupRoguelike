#ifndef INCLUDED_openfl__legacy_utils_CompressionAlgorithm
#define INCLUDED_openfl__legacy_utils_CompressionAlgorithm

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_legacy,utils,CompressionAlgorithm)
namespace openfl{
namespace _legacy{
namespace utils{


class CompressionAlgorithm_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef CompressionAlgorithm_obj OBJ_;

	public:
		CompressionAlgorithm_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("openfl._legacy.utils.CompressionAlgorithm","\x8a","\x96","\x15","\xf0"); }
		::String __ToString() const { return HX_HCSTRING("CompressionAlgorithm.","\xc5","\x9b","\x61","\x8f") + tag; }

		static ::openfl::_legacy::utils::CompressionAlgorithm DEFLATE;
		static inline ::openfl::_legacy::utils::CompressionAlgorithm DEFLATE_dyn() { return DEFLATE; }
		static ::openfl::_legacy::utils::CompressionAlgorithm GZIP;
		static inline ::openfl::_legacy::utils::CompressionAlgorithm GZIP_dyn() { return GZIP; }
		static ::openfl::_legacy::utils::CompressionAlgorithm LZMA;
		static inline ::openfl::_legacy::utils::CompressionAlgorithm LZMA_dyn() { return LZMA; }
		static ::openfl::_legacy::utils::CompressionAlgorithm ZLIB;
		static inline ::openfl::_legacy::utils::CompressionAlgorithm ZLIB_dyn() { return ZLIB; }
};

} // end namespace openfl
} // end namespace _legacy
} // end namespace utils

#endif /* INCLUDED_openfl__legacy_utils_CompressionAlgorithm */ 
