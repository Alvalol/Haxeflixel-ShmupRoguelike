#ifndef INCLUDED_flixel_graphics_tile_FlxDrawTrianglesItem
#define INCLUDED_flixel_graphics_tile_FlxDrawTrianglesItem

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
HX_DECLARE_CLASS3(flixel,graphics,tile,FlxDrawTrianglesItem)
HX_DECLARE_CLASS2(flixel,math,FlxMatrix)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,math,FlxRect)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS3(openfl,_legacy,geom,ColorTransform)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Matrix)
namespace flixel{
namespace graphics{
namespace tile{


class HXCPP_CLASS_ATTRIBUTES  FlxDrawTrianglesItem_obj : public ::flixel::graphics::tile::FlxDrawBaseItem_obj{
	public:
		typedef ::flixel::graphics::tile::FlxDrawBaseItem_obj super;
		typedef FlxDrawTrianglesItem_obj OBJ_;
		FlxDrawTrianglesItem_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.graphics.tile.FlxDrawTrianglesItem")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxDrawTrianglesItem_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxDrawTrianglesItem_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FlxDrawTrianglesItem","\x08","\x8c","\xa8","\x0b"); }

		static void __boot();
		static ::flixel::math::FlxPoint point;
		static ::flixel::math::FlxRect rect;
		static ::flixel::math::FlxRect inflateBounds( ::flixel::math::FlxRect bounds,Float x,Float y);
		static Dynamic inflateBounds_dyn();

		Array< Float > vertices;
		Array< int > indices;
		Array< Float > uvtData;
		Array< int > colors;
		int verticesPosition;
		int indicesPosition;
		int colorsPosition;
		::flixel::math::FlxRect bounds;
		virtual Void render( ::flixel::FlxCamera camera);

		virtual Void reset( );

		virtual Void dispose( );

		virtual Void addTriangles( Array< Float > vertices,Array< int > indices,Array< Float > uvtData,Array< int > colors,::flixel::math::FlxPoint position,::flixel::math::FlxRect cameraBounds);
		Dynamic addTriangles_dyn();

		virtual Void addQuad( ::flixel::graphics::frames::FlxFrame frame,::flixel::math::FlxMatrix matrix,::openfl::_legacy::geom::ColorTransform transform);

		virtual int get_numVertices( );

		virtual int get_numTriangles( );

};

} // end namespace flixel
} // end namespace graphics
} // end namespace tile

#endif /* INCLUDED_flixel_graphics_tile_FlxDrawTrianglesItem */ 
