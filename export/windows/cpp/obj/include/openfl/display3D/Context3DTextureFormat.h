#ifndef INCLUDED_openfl_display3D_Context3DTextureFormat
#define INCLUDED_openfl_display3D_Context3DTextureFormat

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display3D,Context3DTextureFormat)
namespace openfl{
namespace display3D{


class Context3DTextureFormat_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Context3DTextureFormat_obj OBJ_;

	public:
		Context3DTextureFormat_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("openfl.display3D.Context3DTextureFormat","\x4b","\xf6","\x3b","\xb5"); }
		::String __ToString() const { return HX_HCSTRING("Context3DTextureFormat.","\xdc","\x81","\xad","\xc8") + tag; }

		static ::openfl::display3D::Context3DTextureFormat BGRA;
		static inline ::openfl::display3D::Context3DTextureFormat BGRA_dyn() { return BGRA; }
		static ::openfl::display3D::Context3DTextureFormat COMPRESSED;
		static inline ::openfl::display3D::Context3DTextureFormat COMPRESSED_dyn() { return COMPRESSED; }
		static ::openfl::display3D::Context3DTextureFormat COMPRESSED_ALPHA;
		static inline ::openfl::display3D::Context3DTextureFormat COMPRESSED_ALPHA_dyn() { return COMPRESSED_ALPHA; }
};

} // end namespace openfl
} // end namespace display3D

#endif /* INCLUDED_openfl_display3D_Context3DTextureFormat */ 
