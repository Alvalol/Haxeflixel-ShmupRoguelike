#ifndef INCLUDED_openfl__legacy_gl_GLProgram
#define INCLUDED_openfl__legacy_gl_GLProgram

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_gl_GLObject
#include <openfl/_legacy/gl/GLObject.h>
#endif
HX_DECLARE_CLASS3(openfl,_legacy,gl,GLObject)
HX_DECLARE_CLASS3(openfl,_legacy,gl,GLProgram)
HX_DECLARE_CLASS3(openfl,_legacy,gl,GLShader)
namespace openfl{
namespace _legacy{
namespace gl{


class HXCPP_CLASS_ATTRIBUTES  GLProgram_obj : public ::openfl::_legacy::gl::GLObject_obj{
	public:
		typedef ::openfl::_legacy::gl::GLObject_obj super;
		typedef GLProgram_obj OBJ_;
		GLProgram_obj();
		Void __construct(int version,Dynamic id);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._legacy.gl.GLProgram")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GLProgram_obj > __new(int version,Dynamic id);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GLProgram_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("GLProgram","\xdf","\x72","\x38","\x3d"); }

		Array< ::Dynamic > shaders;
		virtual Void attach( ::openfl::_legacy::gl::GLShader shader);
		Dynamic attach_dyn();

		virtual Array< ::Dynamic > getShaders( );
		Dynamic getShaders_dyn();

		virtual ::String getType( );

};

} // end namespace openfl
} // end namespace _legacy
} // end namespace gl

#endif /* INCLUDED_openfl__legacy_gl_GLProgram */ 
