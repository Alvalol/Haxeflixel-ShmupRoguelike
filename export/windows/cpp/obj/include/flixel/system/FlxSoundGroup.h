#ifndef INCLUDED_flixel_system_FlxSoundGroup
#define INCLUDED_flixel_system_FlxSoundGroup

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS2(flixel,_system,FlxSound)
HX_DECLARE_CLASS2(flixel,_system,FlxSoundGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
namespace flixel{
namespace _system{


class HXCPP_CLASS_ATTRIBUTES  FlxSoundGroup_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxSoundGroup_obj OBJ_;
		FlxSoundGroup_obj();
		Void __construct(hx::Null< Float >  __o_volume);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.system.FlxSoundGroup")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxSoundGroup_obj > __new(hx::Null< Float >  __o_volume);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxSoundGroup_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FlxSoundGroup","\xe2","\xa2","\x91","\x31"); }

		Array< ::Dynamic > sounds;
		Float volume;
		virtual bool add( ::flixel::_system::FlxSound sound);
		Dynamic add_dyn();

		virtual bool remove( ::flixel::_system::FlxSound sound);
		Dynamic remove_dyn();

		virtual Float set_volume( Float volume);
		Dynamic set_volume_dyn();

};

} // end namespace flixel
} // end namespace system

#endif /* INCLUDED_flixel_system_FlxSoundGroup */ 
