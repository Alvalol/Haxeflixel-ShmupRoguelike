#ifndef INCLUDED_sys_io_FileOutput
#define INCLUDED_sys_io_FileOutput

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(haxe,io,Output)
HX_DECLARE_CLASS2(sys,io,FileOutput)
namespace sys{
namespace io{


class HXCPP_CLASS_ATTRIBUTES  FileOutput_obj : public ::haxe::io::Output_obj{
	public:
		typedef ::haxe::io::Output_obj super;
		typedef FileOutput_obj OBJ_;
		FileOutput_obj();
		Void __construct(Dynamic f);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="sys.io.FileOutput")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FileOutput_obj > __new(Dynamic f);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FileOutput_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FileOutput","\xbd","\x5a","\xb6","\xe3"); }

		static void __boot();
		static Dynamic file_close;
		static Dynamic &file_close_dyn() { return file_close;}
		static Dynamic file_write;
		static Dynamic &file_write_dyn() { return file_write;}
		static Dynamic file_write_char;
		static Dynamic &file_write_char_dyn() { return file_write_char;}
		Dynamic __f;
		virtual Void writeByte( int c);

		virtual int writeBytes( ::haxe::io::Bytes s,int p,int l);

		virtual Void close( );

};

} // end namespace sys
} // end namespace io

#endif /* INCLUDED_sys_io_FileOutput */ 
