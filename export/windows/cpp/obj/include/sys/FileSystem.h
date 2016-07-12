#ifndef INCLUDED_sys_FileSystem
#define INCLUDED_sys_FileSystem

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(sys,FileSystem)
namespace sys{


class HXCPP_CLASS_ATTRIBUTES  FileSystem_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FileSystem_obj OBJ_;
		FileSystem_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="sys.FileSystem")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FileSystem_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FileSystem_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("FileSystem","\xab","\xe2","\x17","\xca"); }

		static void __boot();
		static bool exists( ::String path);
		static Dynamic exists_dyn();

		static Dynamic stat( ::String path);
		static Dynamic stat_dyn();

		static ::String fullPath( ::String relPath);
		static Dynamic fullPath_dyn();

		static Void createDirectory( ::String path);
		static Dynamic createDirectory_dyn();

		static Void deleteFile( ::String path);
		static Dynamic deleteFile_dyn();

		static Dynamic sys_exists;
		static Dynamic &sys_exists_dyn() { return sys_exists;}
		static Dynamic file_delete;
		static Dynamic &file_delete_dyn() { return file_delete;}
		static Dynamic sys_stat;
		static Dynamic &sys_stat_dyn() { return sys_stat;}
		static Dynamic sys_create_dir;
		static Dynamic &sys_create_dir_dyn() { return sys_create_dir;}
		static Dynamic file_full_path;
		static Dynamic &file_full_path_dyn() { return file_full_path;}
};

} // end namespace sys

#endif /* INCLUDED_sys_FileSystem */ 
