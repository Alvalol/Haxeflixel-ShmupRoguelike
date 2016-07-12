#ifndef INCLUDED_openfl_system_SecurityDomain
#define INCLUDED_openfl_system_SecurityDomain

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,_system,SecurityDomain)
namespace openfl{
namespace _system{


class HXCPP_CLASS_ATTRIBUTES  SecurityDomain_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SecurityDomain_obj OBJ_;
		SecurityDomain_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl.system.SecurityDomain")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< SecurityDomain_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SecurityDomain_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("SecurityDomain","\x44","\x64","\x95","\x10"); }

		static void __boot();
		static ::openfl::_system::SecurityDomain currentDomain;
};

} // end namespace openfl
} // end namespace system

#endif /* INCLUDED_openfl_system_SecurityDomain */ 
