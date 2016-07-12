#ifndef INCLUDED_openfl_display_PNGEncoderOptions
#define INCLUDED_openfl_display_PNGEncoderOptions

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display,PNGEncoderOptions)
namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  PNGEncoderOptions_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PNGEncoderOptions_obj OBJ_;
		PNGEncoderOptions_obj();
		Void __construct(hx::Null< bool >  __o_fastCompression);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl.display.PNGEncoderOptions")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< PNGEncoderOptions_obj > __new(hx::Null< bool >  __o_fastCompression);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PNGEncoderOptions_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("PNGEncoderOptions","\x8b","\x2f","\xa8","\x29"); }

		bool fastCompression;
};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_PNGEncoderOptions */ 
