#ifndef INCLUDED_openfl__legacy_gl_GLFramebuffer
#define INCLUDED_openfl__legacy_gl_GLFramebuffer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_gl_GLObject
#include <openfl/_legacy/gl/GLObject.h>
#endif
HX_DECLARE_CLASS3(openfl,_legacy,gl,GLFramebuffer)
HX_DECLARE_CLASS3(openfl,_legacy,gl,GLObject)
namespace openfl{
namespace _legacy{
namespace gl{


class HXCPP_CLASS_ATTRIBUTES  GLFramebuffer_obj : public ::openfl::_legacy::gl::GLObject_obj{
	public:
		typedef ::openfl::_legacy::gl::GLObject_obj super;
		typedef GLFramebuffer_obj OBJ_;
		GLFramebuffer_obj();
		Void __construct(int version,Dynamic id);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._legacy.gl.GLFramebuffer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GLFramebuffer_obj > __new(int version,Dynamic id);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GLFramebuffer_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("GLFramebuffer","\xc8","\x06","\xb2","\x3b"); }

		virtual ::String getType( );

};

} // end namespace openfl
} // end namespace _legacy
} // end namespace gl

#endif /* INCLUDED_openfl__legacy_gl_GLFramebuffer */ 
