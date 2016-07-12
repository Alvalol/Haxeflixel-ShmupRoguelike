#ifndef INCLUDED_flixel_system_frontEnds_ConsoleFrontEnd
#define INCLUDED_flixel_system_frontEnds_ConsoleFrontEnd

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,_system,frontEnds,ConsoleFrontEnd)
namespace flixel{
namespace _system{
namespace frontEnds{


class HXCPP_CLASS_ATTRIBUTES  ConsoleFrontEnd_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ConsoleFrontEnd_obj OBJ_;
		ConsoleFrontEnd_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="flixel.system.frontEnds.ConsoleFrontEnd")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ConsoleFrontEnd_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ConsoleFrontEnd_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ConsoleFrontEnd","\x09","\x11","\xbc","\x4e"); }

		bool autoPause;
		virtual Void registerFunction( ::String FunctionAlias,Dynamic Function);
		Dynamic registerFunction_dyn();

		virtual Void registerObject( ::String ObjectAlias,Dynamic AnyObject);
		Dynamic registerObject_dyn();

		virtual Void registerClass( ::hx::Class cl);
		Dynamic registerClass_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds

#endif /* INCLUDED_flixel_system_frontEnds_ConsoleFrontEnd */ 
