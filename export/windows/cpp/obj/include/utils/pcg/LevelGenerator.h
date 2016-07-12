#ifndef INCLUDED_utils_pcg_LevelGenerator
#define INCLUDED_utils_pcg_LevelGenerator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(utils,pcg,LevelGenerator)
namespace utils{
namespace pcg{


class HXCPP_CLASS_ATTRIBUTES  LevelGenerator_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef LevelGenerator_obj OBJ_;
		LevelGenerator_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="utils.pcg.LevelGenerator")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< LevelGenerator_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LevelGenerator_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("LevelGenerator","\x4f","\x86","\x11","\xcc"); }

		static void __boot();
		static int mapWidth;
		static Array< ::Dynamic > concatArray( cpp::ArrayBase Arr);
		static Dynamic concatArray_dyn();

		virtual Array< ::Dynamic > populateCurrentMap( );
		Dynamic populateCurrentMap_dyn();

};

} // end namespace utils
} // end namespace pcg

#endif /* INCLUDED_utils_pcg_LevelGenerator */ 
