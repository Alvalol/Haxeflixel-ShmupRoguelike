#ifndef INCLUDED_flixel_system_debug_console_ConsoleUtil
#define INCLUDED_flixel_system_debug_console_ConsoleUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(flixel,_system,debug,console,ConsoleUtil)
namespace flixel{
namespace _system{
namespace debug{
namespace console{


class HXCPP_CLASS_ATTRIBUTES  ConsoleUtil_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ConsoleUtil_obj OBJ_;
		ConsoleUtil_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="flixel.system.debug.console.ConsoleUtil")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ConsoleUtil_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ConsoleUtil_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ConsoleUtil","\xd9","\xfe","\x3d","\x06"); }

		static Array< ::String > getFields( Dynamic Object);
		static Dynamic getFields_dyn();

		static Array< ::String > sortFields( Array< ::String > fields);
		static Dynamic sortFields_dyn();

		static Void log( Dynamic Text);
		static Dynamic log_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace console

#endif /* INCLUDED_flixel_system_debug_console_ConsoleUtil */ 
