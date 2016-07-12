#ifndef INCLUDED_flixel_graphics_tile_FlxDrawTilesItem
#define INCLUDED_flixel_graphics_tile_FlxDrawTilesItem

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_graphics_tile_FlxDrawBaseItem
#include <flixel/graphics/tile/FlxDrawBaseItem.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFrame)
HX_DECLARE_CLASS3(flixel,graphics,tile,FlxDrawBaseItem)
HX_DECLARE_CLASS3(flixel,graphics,tile,FlxDrawTilesItem)
HX_DECLARE_CLASS2(flixel,math,FlxMatrix)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS3(openfl,_legacy,geom,ColorTransform)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Matrix)
namespace flixel{
namespace graphics{
namespace tile{


class HXCPP_CLASS_ATTRIBUTES  FlxDrawTilesItem_obj : public ::flixel::graphics::tile::FlxDrawBaseItem_obj{
	public:
		typedef ::flixel::graphics::tile::FlxDrawBaseItem_obj super;
		typedef FlxDrawTilesItem_obj OBJ_;
		FlxDrawTilesItem_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.graphics.tile.FlxDrawTilesItem")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxDrawTilesItem_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxDrawTilesItem_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FlxDrawTilesItem","\xe2","\xb0","\x84","\x99"); }

		Array< Float > drawData;
		int position;
		virtual Void reset( );

		virtual Void dispose( );

		virtual Void addQuad( ::flixel::graphics::frames::FlxFrame frame,::flixel::math::FlxMatrix matrix,::openfl::_legacy::geom::ColorTransform transform);

		virtual Void render( ::flixel::FlxCamera camera);

		virtual int get_numTiles( );
		Dynamic get_numTiles_dyn();

		virtual int get_numVertices( );

		virtual int get_numTriangles( );

};

} // end namespace flixel
} // end namespace graphics
} // end namespace tile

#endif /* INCLUDED_flixel_graphics_tile_FlxDrawTilesItem */ 
