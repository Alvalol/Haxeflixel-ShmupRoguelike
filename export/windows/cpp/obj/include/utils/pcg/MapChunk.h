#ifndef INCLUDED_utils_pcg_MapChunk
#define INCLUDED_utils_pcg_MapChunk

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,math,FlxRandom)
HX_DECLARE_CLASS2(utils,pcg,MapChunk)
namespace utils{
namespace pcg{


class HXCPP_CLASS_ATTRIBUTES  MapChunk_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef MapChunk_obj OBJ_;
		MapChunk_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="utils.pcg.MapChunk")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< MapChunk_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MapChunk_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("MapChunk","\x51","\xf2","\xb6","\x96"); }

		static void __boot();
		static int chunkWidth;
		static int chunkHeight;
		Array< ::Dynamic > accessibleChunk;
		::flixel::math::FlxRandom _randomGen;
		virtual Array< ::Dynamic > populateChunk( );
		Dynamic populateChunk_dyn();

};

} // end namespace utils
} // end namespace pcg

#endif /* INCLUDED_utils_pcg_MapChunk */ 
