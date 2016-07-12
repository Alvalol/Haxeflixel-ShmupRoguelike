#ifndef INCLUDED_flixel_system_macros_FlxMacroUtil
#define INCLUDED_flixel_system_macros_FlxMacroUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,_system,macros,FlxMacroUtil)
namespace flixel{
namespace _system{
namespace macros{


class HXCPP_CLASS_ATTRIBUTES  FlxMacroUtil_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxMacroUtil_obj OBJ_;
		FlxMacroUtil_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="flixel.system.macros.FlxMacroUtil")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxMacroUtil_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxMacroUtil_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("FlxMacroUtil","\x7c","\x33","\x4d","\x65"); }

};

} // end namespace flixel
} // end namespace system
} // end namespace macros

#endif /* INCLUDED_flixel_system_macros_FlxMacroUtil */ 
