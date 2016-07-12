#ifndef INCLUDED_openfl_errors_RangeError
#define INCLUDED_openfl_errors_RangeError

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
HX_DECLARE_CLASS2(openfl,errors,Error)
HX_DECLARE_CLASS2(openfl,errors,RangeError)
namespace openfl{
namespace errors{


class HXCPP_CLASS_ATTRIBUTES  RangeError_obj : public ::openfl::errors::Error_obj{
	public:
		typedef ::openfl::errors::Error_obj super;
		typedef RangeError_obj OBJ_;
		RangeError_obj();
		Void __construct(::String __o_message);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.errors.RangeError")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< RangeError_obj > __new(::String __o_message);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RangeError_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("RangeError","\xeb","\xac","\x85","\x3c"); }

};

} // end namespace openfl
} // end namespace errors

#endif /* INCLUDED_openfl_errors_RangeError */ 
