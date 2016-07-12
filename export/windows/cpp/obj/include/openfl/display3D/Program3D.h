#ifndef INCLUDED_openfl_display3D_Program3D
#define INCLUDED_openfl_display3D_Program3D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_legacy,gl,GLObject)
HX_DECLARE_CLASS3(openfl,_legacy,gl,GLProgram)
HX_DECLARE_CLASS3(openfl,_legacy,gl,GLShader)
HX_DECLARE_CLASS2(openfl,display3D,Context3D)
HX_DECLARE_CLASS2(openfl,display3D,Program3D)
namespace openfl{
namespace display3D{


class HXCPP_CLASS_ATTRIBUTES  Program3D_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Program3D_obj OBJ_;
		Program3D_obj();
		Void __construct(::openfl::display3D::Context3D context,::openfl::_legacy::gl::GLProgram program);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.display3D.Program3D")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Program3D_obj > __new(::openfl::display3D::Context3D context,::openfl::_legacy::gl::GLProgram program);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Program3D_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Program3D","\x15","\x00","\x97","\x7e"); }

		::openfl::display3D::Context3D context;
		::openfl::_legacy::gl::GLProgram glProgram;
		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual Void upload( ::openfl::_legacy::gl::GLShader vertexShader,::openfl::_legacy::gl::GLShader fragmentShader);
		Dynamic upload_dyn();

};

} // end namespace openfl
} // end namespace display3D

#endif /* INCLUDED_openfl_display3D_Program3D */ 
