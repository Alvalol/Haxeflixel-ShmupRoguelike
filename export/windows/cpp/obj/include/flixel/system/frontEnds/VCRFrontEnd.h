#ifndef INCLUDED_flixel_system_frontEnds_VCRFrontEnd
#define INCLUDED_flixel_system_frontEnds_VCRFrontEnd

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,_system,frontEnds,VCRFrontEnd)
namespace flixel{
namespace _system{
namespace frontEnds{


class HXCPP_CLASS_ATTRIBUTES  VCRFrontEnd_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef VCRFrontEnd_obj OBJ_;
		VCRFrontEnd_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="flixel.system.frontEnds.VCRFrontEnd")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< VCRFrontEnd_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~VCRFrontEnd_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("VCRFrontEnd","\x57","\x78","\x75","\x5c"); }

		bool paused;
		bool stepRequested;
		virtual Void pause( );
		Dynamic pause_dyn();

		virtual Void resume( );
		Dynamic resume_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds

#endif /* INCLUDED_flixel_system_frontEnds_VCRFrontEnd */ 
