#ifndef INCLUDED_flixel_system_debug_console_ConsoleHistory
#define INCLUDED_flixel_system_debug_console_ConsoleHistory

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(flixel,_system,debug,console,ConsoleHistory)
namespace flixel{
namespace _system{
namespace debug{
namespace console{


class HXCPP_CLASS_ATTRIBUTES  ConsoleHistory_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ConsoleHistory_obj OBJ_;
		ConsoleHistory_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.console.ConsoleHistory")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ConsoleHistory_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ConsoleHistory_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ConsoleHistory","\xdd","\x2e","\xa0","\x76"); }

		static void __boot();
		static int MAX_LENGTH;
		Array< ::String > commands;
		int index;
		virtual ::String getPreviousCommand( );
		Dynamic getPreviousCommand_dyn();

		virtual ::String getNextCommand( );
		Dynamic getNextCommand_dyn();

		virtual Void addCommand( ::String command);
		Dynamic addCommand_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual bool get_isEmpty( );
		Dynamic get_isEmpty_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace console

#endif /* INCLUDED_flixel_system_debug_console_ConsoleHistory */ 
