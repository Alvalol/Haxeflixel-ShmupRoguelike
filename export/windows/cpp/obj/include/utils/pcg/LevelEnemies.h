#ifndef INCLUDED_utils_pcg_LevelEnemies
#define INCLUDED_utils_pcg_LevelEnemies

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS2(flixel,tile,FlxBaseTilemap)
HX_DECLARE_CLASS2(flixel,tile,FlxTilemap)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(utils,pcg,LevelEnemies)
namespace utils{
namespace pcg{


class HXCPP_CLASS_ATTRIBUTES  LevelEnemies_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef LevelEnemies_obj OBJ_;
		LevelEnemies_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="utils.pcg.LevelEnemies")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< LevelEnemies_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LevelEnemies_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("LevelEnemies","\xa2","\x3f","\xce","\xf9"); }

		static Void populateEnemies( ::flixel::tile::FlxTilemap currentLevel);
		static Dynamic populateEnemies_dyn();

};

} // end namespace utils
} // end namespace pcg

#endif /* INCLUDED_utils_pcg_LevelEnemies */ 
