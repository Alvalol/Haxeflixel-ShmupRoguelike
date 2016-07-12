#ifndef INCLUDED_flixel_util__FlxSignal_Macro
#define INCLUDED_flixel_util__FlxSignal_Macro

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,util,_FlxSignal,Macro)
namespace flixel{
namespace util{
namespace _FlxSignal{


class HXCPP_CLASS_ATTRIBUTES  Macro_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Macro_obj OBJ_;
		Macro_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="flixel.util._FlxSignal.Macro")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Macro_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Macro_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Macro","\xec","\xdf","\x43","\x96"); }

};

} // end namespace flixel
} // end namespace util
} // end namespace _FlxSignal

#endif /* INCLUDED_flixel_util__FlxSignal_Macro */ 
