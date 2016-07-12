#ifndef INCLUDED_sys_io__Process_Stdin
#define INCLUDED_sys_io__Process_Stdin

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(haxe,io,Output)
HX_DECLARE_CLASS3(sys,io,_Process,Stdin)
namespace sys{
namespace io{
namespace _Process{


class HXCPP_CLASS_ATTRIBUTES  Stdin_obj : public ::haxe::io::Output_obj{
	public:
		typedef ::haxe::io::Output_obj super;
		typedef Stdin_obj OBJ_;
		Stdin_obj();
		Void __construct(Dynamic p);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="sys.io._Process.Stdin")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Stdin_obj > __new(Dynamic p);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Stdin_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Stdin","\x28","\x23","\x3b","\x17"); }

		static void __boot();
		static Dynamic _stdin_write;
		static Dynamic &_stdin_write_dyn() { return _stdin_write;}
		static Dynamic _stdin_close;
		static Dynamic &_stdin_close_dyn() { return _stdin_close;}
		Dynamic p;
		::haxe::io::Bytes buf;
		virtual Void close( );

		virtual Void writeByte( int c);

		virtual int writeBytes( ::haxe::io::Bytes buf,int pos,int len);

};

} // end namespace sys
} // end namespace io
} // end namespace _Process

#endif /* INCLUDED_sys_io__Process_Stdin */ 
