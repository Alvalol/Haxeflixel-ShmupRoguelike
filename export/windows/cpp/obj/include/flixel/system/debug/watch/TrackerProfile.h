#ifndef INCLUDED_flixel_system_debug_watch_TrackerProfile
#define INCLUDED_flixel_system_debug_watch_TrackerProfile

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(flixel,_system,debug,watch,TrackerProfile)
namespace flixel{
namespace _system{
namespace debug{
namespace watch{


class HXCPP_CLASS_ATTRIBUTES  TrackerProfile_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TrackerProfile_obj OBJ_;
		TrackerProfile_obj();
		Void __construct(::hx::Class ObjectClass,Array< ::String > Variables,Array< ::Dynamic > Extensions);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.watch.TrackerProfile")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TrackerProfile_obj > __new(::hx::Class ObjectClass,Array< ::String > Variables,Array< ::Dynamic > Extensions);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TrackerProfile_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TrackerProfile","\x71","\x0c","\x93","\x81"); }

		::hx::Class objectClass;
		Array< ::String > variables;
		Array< ::Dynamic > extensions;
		virtual ::String toString( );
		Dynamic toString_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace watch

#endif /* INCLUDED_flixel_system_debug_watch_TrackerProfile */ 
