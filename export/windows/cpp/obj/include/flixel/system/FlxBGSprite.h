#ifndef INCLUDED_flixel_system_FlxBGSprite
#define INCLUDED_flixel_system_FlxBGSprite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,_system,FlxBGSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
namespace flixel{
namespace _system{


class HXCPP_CLASS_ATTRIBUTES  FlxBGSprite_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef FlxBGSprite_obj OBJ_;
		FlxBGSprite_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.system.FlxBGSprite")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxBGSprite_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxBGSprite_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("FlxBGSprite","\xfc","\xc9","\x04","\x7d"); }

		virtual Void draw( );

};

} // end namespace flixel
} // end namespace system

#endif /* INCLUDED_flixel_system_FlxBGSprite */ 
