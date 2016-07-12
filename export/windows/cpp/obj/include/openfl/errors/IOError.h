#ifndef INCLUDED_openfl_errors_IOError
#define INCLUDED_openfl_errors_IOError

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
HX_DECLARE_CLASS2(openfl,errors,Error)
HX_DECLARE_CLASS2(openfl,errors,IOError)
namespace openfl{
namespace errors{


class HXCPP_CLASS_ATTRIBUTES  IOError_obj : public ::openfl::errors::Error_obj{
	public:
		typedef ::openfl::errors::Error_obj super;
		typedef IOError_obj OBJ_;
		IOError_obj();
		Void __construct(::String __o_message);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.errors.IOError")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< IOError_obj > __new(::String __o_message);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~IOError_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("IOError","\x02","\x9a","\x27","\x78"); }

};

} // end namespace openfl
} // end namespace errors

#endif /* INCLUDED_openfl_errors_IOError */ 
