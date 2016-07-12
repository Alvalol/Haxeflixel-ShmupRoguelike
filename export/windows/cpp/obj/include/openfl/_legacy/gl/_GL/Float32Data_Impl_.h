#ifndef INCLUDED_openfl__legacy_gl__GL_Float32Data_Impl_
#define INCLUDED_openfl__legacy_gl__GL_Float32Data_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(openfl,_legacy,gl,_GL,Float32Data_Impl_)
HX_DECLARE_CLASS3(openfl,_legacy,utils,ArrayBufferView)
HX_DECLARE_CLASS3(openfl,_legacy,utils,Float32Array)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IMemoryRange)
namespace openfl{
namespace _legacy{
namespace gl{
namespace _GL{


class HXCPP_CLASS_ATTRIBUTES  Float32Data_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Float32Data_Impl__obj OBJ_;
		Float32Data_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl._legacy.gl._GL.Float32Data_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Float32Data_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Float32Data_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Float32Data_Impl_","\x45","\xdb","\xd7","\x0d"); }

		static Dynamic _new( Dynamic data);
		static Dynamic _new_dyn();

		static Dynamic toDynamic( Dynamic this1);
		static Dynamic toDynamic_dyn();

		static Dynamic fromFloat32Array( ::openfl::_legacy::utils::Float32Array f);
		static Dynamic fromFloat32Array_dyn();

		static Dynamic fromArrayFloat( Array< Float > f);
		static Dynamic fromArrayFloat_dyn();

};

} // end namespace openfl
} // end namespace _legacy
} // end namespace gl
} // end namespace _GL

#endif /* INCLUDED_openfl__legacy_gl__GL_Float32Data_Impl_ */ 
