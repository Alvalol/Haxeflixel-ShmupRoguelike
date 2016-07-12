#ifndef INCLUDED_openfl__legacy_gl_GLBuffer
#define INCLUDED_openfl__legacy_gl_GLBuffer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_gl_GLObject
#include <openfl/_legacy/gl/GLObject.h>
#endif
HX_DECLARE_CLASS3(openfl,_legacy,gl,GLBuffer)
HX_DECLARE_CLASS3(openfl,_legacy,gl,GLObject)
namespace openfl{
namespace _legacy{
namespace gl{


class HXCPP_CLASS_ATTRIBUTES  GLBuffer_obj : public ::openfl::_legacy::gl::GLObject_obj{
	public:
		typedef ::openfl::_legacy::gl::GLObject_obj super;
		typedef GLBuffer_obj OBJ_;
		GLBuffer_obj();
		Void __construct(int version,Dynamic id);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._legacy.gl.GLBuffer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GLBuffer_obj > __new(int version,Dynamic id);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GLBuffer_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("GLBuffer","\x05","\x19","\x86","\x3a"); }

		virtual ::String getType( );

};

} // end namespace openfl
} // end namespace _legacy
} // end namespace gl

#endif /* INCLUDED_openfl__legacy_gl_GLBuffer */ 
