#ifndef INCLUDED_haxe_io_Path
#define INCLUDED_haxe_io_Path

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Path)
namespace haxe{
namespace io{


class HXCPP_CLASS_ATTRIBUTES  Path_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Path_obj OBJ_;
		Path_obj();
		Void __construct(::String path);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.io.Path")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Path_obj > __new(::String path);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Path_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Path","\xc5","\x11","\x2b","\x35"); }

		static ::String directory( ::String path);
		static Dynamic directory_dyn();

		static ::String addTrailingSlash( ::String path);
		static Dynamic addTrailingSlash_dyn();

		static ::String removeTrailingSlashes( ::String path);
		static Dynamic removeTrailingSlashes_dyn();

		::String dir;
		::String file;
		::String ext;
		bool backslash;
};

} // end namespace haxe
} // end namespace io

#endif /* INCLUDED_haxe_io_Path */ 
