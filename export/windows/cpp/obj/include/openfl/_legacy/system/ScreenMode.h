#ifndef INCLUDED_openfl__legacy_system_ScreenMode
#define INCLUDED_openfl__legacy_system_ScreenMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_legacy,_system,PixelFormat)
HX_DECLARE_CLASS3(openfl,_legacy,_system,ScreenMode)
namespace openfl{
namespace _legacy{
namespace _system{


class HXCPP_CLASS_ATTRIBUTES  ScreenMode_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ScreenMode_obj OBJ_;
		ScreenMode_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._legacy.system.ScreenMode")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ScreenMode_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ScreenMode_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ScreenMode","\x0f","\x65","\x48","\xb7"); }

		::openfl::_legacy::_system::PixelFormat format;
		int width;
		int height;
		int refreshRate;
};

} // end namespace openfl
} // end namespace _legacy
} // end namespace system

#endif /* INCLUDED_openfl__legacy_system_ScreenMode */ 
