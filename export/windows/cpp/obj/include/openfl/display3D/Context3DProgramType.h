#ifndef INCLUDED_openfl_display3D_Context3DProgramType
#define INCLUDED_openfl_display3D_Context3DProgramType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display3D,Context3DProgramType)
namespace openfl{
namespace display3D{


class Context3DProgramType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Context3DProgramType_obj OBJ_;

	public:
		Context3DProgramType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("openfl.display3D.Context3DProgramType","\xf7","\xb6","\x69","\x13"); }
		::String __ToString() const { return HX_HCSTRING("Context3DProgramType.","\x70","\xdf","\x19","\x6c") + tag; }

		static ::openfl::display3D::Context3DProgramType FRAGMENT;
		static inline ::openfl::display3D::Context3DProgramType FRAGMENT_dyn() { return FRAGMENT; }
		static ::openfl::display3D::Context3DProgramType VERTEX;
		static inline ::openfl::display3D::Context3DProgramType VERTEX_dyn() { return VERTEX; }
};

} // end namespace openfl
} // end namespace display3D

#endif /* INCLUDED_openfl_display3D_Context3DProgramType */ 
