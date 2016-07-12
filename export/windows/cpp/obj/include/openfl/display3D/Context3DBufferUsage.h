#ifndef INCLUDED_openfl_display3D_Context3DBufferUsage
#define INCLUDED_openfl_display3D_Context3DBufferUsage

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display3D,Context3DBufferUsage)
namespace openfl{
namespace display3D{


class Context3DBufferUsage_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Context3DBufferUsage_obj OBJ_;

	public:
		Context3DBufferUsage_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("openfl.display3D.Context3DBufferUsage","\x9a","\xab","\xb7","\x96"); }
		::String __ToString() const { return HX_HCSTRING("Context3DBufferUsage.","\x6d","\xf9","\x01","\xcd") + tag; }

		static ::openfl::display3D::Context3DBufferUsage DYNAMIC_DRAW;
		static inline ::openfl::display3D::Context3DBufferUsage DYNAMIC_DRAW_dyn() { return DYNAMIC_DRAW; }
		static ::openfl::display3D::Context3DBufferUsage STATIC_DRAW;
		static inline ::openfl::display3D::Context3DBufferUsage STATIC_DRAW_dyn() { return STATIC_DRAW; }
};

} // end namespace openfl
} // end namespace display3D

#endif /* INCLUDED_openfl_display3D_Context3DBufferUsage */ 
