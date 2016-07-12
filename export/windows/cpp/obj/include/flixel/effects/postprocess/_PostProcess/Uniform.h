#ifndef INCLUDED_flixel_effects_postprocess__PostProcess_Uniform
#define INCLUDED_flixel_effects_postprocess__PostProcess_Uniform

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(flixel,effects,postprocess,_PostProcess,Uniform)
namespace flixel{
namespace effects{
namespace postprocess{
namespace _PostProcess{


class HXCPP_CLASS_ATTRIBUTES  Uniform_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Uniform_obj OBJ_;
		Uniform_obj();
		Void __construct(int id,Float value);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="flixel.effects.postprocess._PostProcess.Uniform")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Uniform_obj > __new(int id,Float value);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Uniform_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Uniform","\x14","\x69","\xb5","\x82"); }

		int id;
		Float value;
};

} // end namespace flixel
} // end namespace effects
} // end namespace postprocess
} // end namespace _PostProcess

#endif /* INCLUDED_flixel_effects_postprocess__PostProcess_Uniform */ 
