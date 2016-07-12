#ifndef INCLUDED_openfl_errors_ArgumentError
#define INCLUDED_openfl_errors_ArgumentError

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
HX_DECLARE_CLASS2(openfl,errors,ArgumentError)
HX_DECLARE_CLASS2(openfl,errors,Error)
namespace openfl{
namespace errors{


class HXCPP_CLASS_ATTRIBUTES  ArgumentError_obj : public ::openfl::errors::Error_obj{
	public:
		typedef ::openfl::errors::Error_obj super;
		typedef ArgumentError_obj OBJ_;
		ArgumentError_obj();
		Void __construct(::String __o_message);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.errors.ArgumentError")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ArgumentError_obj > __new(::String __o_message);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ArgumentError_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ArgumentError","\xeb","\x77","\x4b","\x60"); }

};

} // end namespace openfl
} // end namespace errors

#endif /* INCLUDED_openfl_errors_ArgumentError */ 
