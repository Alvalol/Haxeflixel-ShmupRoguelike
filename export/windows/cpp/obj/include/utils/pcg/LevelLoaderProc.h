#ifndef INCLUDED_utils_pcg_LevelLoaderProc
#define INCLUDED_utils_pcg_LevelLoaderProc

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS2(flixel,tile,FlxBaseTilemap)
HX_DECLARE_CLASS2(flixel,tile,FlxTilemap)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(utils,pcg,LevelLoaderProc)
namespace utils{
namespace pcg{


class HXCPP_CLASS_ATTRIBUTES  LevelLoaderProc_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef LevelLoaderProc_obj OBJ_;
		LevelLoaderProc_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="utils.pcg.LevelLoaderProc")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< LevelLoaderProc_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LevelLoaderProc_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("LevelLoaderProc","\xcd","\xef","\x63","\x30"); }

		::flixel::tile::FlxTilemap loadedMap;
		virtual ::flixel::tile::FlxTilemap loadGeneratedLevel( );
		Dynamic loadGeneratedLevel_dyn();

};

} // end namespace utils
} // end namespace pcg

#endif /* INCLUDED_utils_pcg_LevelLoaderProc */ 
