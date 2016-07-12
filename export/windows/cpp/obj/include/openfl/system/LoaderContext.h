#ifndef INCLUDED_openfl_system_LoaderContext
#define INCLUDED_openfl_system_LoaderContext

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,_system,ApplicationDomain)
HX_DECLARE_CLASS2(openfl,_system,LoaderContext)
HX_DECLARE_CLASS2(openfl,_system,SecurityDomain)
namespace openfl{
namespace _system{


class HXCPP_CLASS_ATTRIBUTES  LoaderContext_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef LoaderContext_obj OBJ_;
		LoaderContext_obj();
		Void __construct(hx::Null< bool >  __o_checkPolicyFile,::openfl::_system::ApplicationDomain applicationDomain,::openfl::_system::SecurityDomain securityDomain);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.system.LoaderContext")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< LoaderContext_obj > __new(hx::Null< bool >  __o_checkPolicyFile,::openfl::_system::ApplicationDomain applicationDomain,::openfl::_system::SecurityDomain securityDomain);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LoaderContext_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("LoaderContext","\xfc","\x3d","\x01","\xc1"); }

		bool allowCodeImport;
		bool allowLoadBytesCodeExecution;
		::openfl::_system::ApplicationDomain applicationDomain;
		bool checkPolicyFile;
		::openfl::_system::SecurityDomain securityDomain;
};

} // end namespace openfl
} // end namespace system

#endif /* INCLUDED_openfl_system_LoaderContext */ 
