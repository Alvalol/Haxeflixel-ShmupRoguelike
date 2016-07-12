#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#define INCLUDED_flixel_system_debug_log_LogStyle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(flixel,_system,debug,log,LogStyle)
namespace flixel{
namespace _system{
namespace debug{
namespace log{


class HXCPP_CLASS_ATTRIBUTES  LogStyle_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef LogStyle_obj OBJ_;
		LogStyle_obj();
		Void __construct(::String __o_Prefix,::String __o_Color,hx::Null< int >  __o_Size,hx::Null< bool >  __o_Bold,hx::Null< bool >  __o_Italic,hx::Null< bool >  __o_Underlined,::String ErrorSound,hx::Null< bool >  __o_OpenConsole,Dynamic CallbackFunction);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.log.LogStyle")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< LogStyle_obj > __new(::String __o_Prefix,::String __o_Color,hx::Null< int >  __o_Size,hx::Null< bool >  __o_Bold,hx::Null< bool >  __o_Italic,hx::Null< bool >  __o_Underlined,::String ErrorSound,hx::Null< bool >  __o_OpenConsole,Dynamic CallbackFunction);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LogStyle_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("LogStyle","\x2d","\x9e","\xd5","\x48"); }

		static void __boot();
		static ::flixel::_system::debug::log::LogStyle NORMAL;
		static ::flixel::_system::debug::log::LogStyle WARNING;
		static ::flixel::_system::debug::log::LogStyle ERROR;
		static ::flixel::_system::debug::log::LogStyle NOTICE;
		static ::flixel::_system::debug::log::LogStyle CONSOLE;
		::String prefix;
		::String color;
		int size;
		bool bold;
		bool italic;
		bool underlined;
		::String errorSound;
		bool openConsole;
		Dynamic callbackFunction;
		Dynamic &callbackFunction_dyn() { return callbackFunction;}
};

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace log

#endif /* INCLUDED_flixel_system_debug_log_LogStyle */ 
