#ifndef INCLUDED_openfl_display_JPEGEncoderOptions
#define INCLUDED_openfl_display_JPEGEncoderOptions

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display,JPEGEncoderOptions)
namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  JPEGEncoderOptions_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef JPEGEncoderOptions_obj OBJ_;
		JPEGEncoderOptions_obj();
		Void __construct(hx::Null< int >  __o_quality);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl.display.JPEGEncoderOptions")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< JPEGEncoderOptions_obj > __new(hx::Null< int >  __o_quality);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~JPEGEncoderOptions_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("JPEGEncoderOptions","\xea","\xc9","\xd9","\x79"); }

		int quality;
};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_JPEGEncoderOptions */ 
