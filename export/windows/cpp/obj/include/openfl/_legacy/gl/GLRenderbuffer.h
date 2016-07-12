#ifndef INCLUDED_openfl__legacy_gl_GLRenderbuffer
#define INCLUDED_openfl__legacy_gl_GLRenderbuffer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_gl_GLObject
#include <openfl/_legacy/gl/GLObject.h>
#endif
HX_DECLARE_CLASS3(openfl,_legacy,gl,GLObject)
HX_DECLARE_CLASS3(openfl,_legacy,gl,GLRenderbuffer)
namespace openfl{
namespace _legacy{
namespace gl{


class HXCPP_CLASS_ATTRIBUTES  GLRenderbuffer_obj : public ::openfl::_legacy::gl::GLObject_obj{
	public:
		typedef ::openfl::_legacy::gl::GLObject_obj super;
		typedef GLRenderbuffer_obj OBJ_;
		GLRenderbuffer_obj();
		Void __construct(int version,Dynamic id);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._legacy.gl.GLRenderbuffer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GLRenderbuffer_obj > __new(int version,Dynamic id);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GLRenderbuffer_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("GLRenderbuffer","\x9b","\xfa","\x9f","\x86"); }

		virtual ::String getType( );

};

} // end namespace openfl
} // end namespace _legacy
} // end namespace gl

#endif /* INCLUDED_openfl__legacy_gl_GLRenderbuffer */ 
