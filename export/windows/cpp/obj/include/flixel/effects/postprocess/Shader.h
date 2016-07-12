#ifndef INCLUDED_flixel_effects_postprocess_Shader
#define INCLUDED_flixel_effects_postprocess_Shader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,effects,postprocess,Shader)
HX_DECLARE_CLASS3(openfl,_legacy,gl,GLObject)
HX_DECLARE_CLASS3(openfl,_legacy,gl,GLProgram)
HX_DECLARE_CLASS3(openfl,_legacy,gl,GLShader)
namespace flixel{
namespace effects{
namespace postprocess{


class HXCPP_CLASS_ATTRIBUTES  Shader_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Shader_obj OBJ_;
		Shader_obj();
		Void __construct(cpp::ArrayBase sources);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.effects.postprocess.Shader")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Shader_obj > __new(cpp::ArrayBase sources);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Shader_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Shader","\x45","\x33","\xb5","\x51"); }

		::openfl::_legacy::gl::GLProgram program;
		virtual ::openfl::_legacy::gl::GLShader compile( ::String source,int type);
		Dynamic compile_dyn();

		virtual int attribute( ::String a);
		Dynamic attribute_dyn();

		virtual int uniform( ::String u);
		Dynamic uniform_dyn();

		virtual Void bind( );
		Dynamic bind_dyn();

};

} // end namespace flixel
} // end namespace effects
} // end namespace postprocess

#endif /* INCLUDED_flixel_effects_postprocess_Shader */ 
