#ifndef INCLUDED_flixel_tile_FlxTilemapBuffer
#define INCLUDED_flixel_tile_FlxTilemapBuffer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS2(flixel,tile,FlxTilemapBuffer)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,BlendMode)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,geom,ColorTransform)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Matrix)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Point)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Rectangle)
namespace flixel{
namespace tile{


class HXCPP_CLASS_ATTRIBUTES  FlxTilemapBuffer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxTilemapBuffer_obj OBJ_;
		FlxTilemapBuffer_obj();
		Void __construct(int TileWidth,int TileHeight,int WidthInTiles,int HeightInTiles,::flixel::FlxCamera Camera,hx::Null< Float >  __o_ScaleX,hx::Null< Float >  __o_ScaleY);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.tile.FlxTilemapBuffer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxTilemapBuffer_obj > __new(int TileWidth,int TileHeight,int WidthInTiles,int HeightInTiles,::flixel::FlxCamera Camera,hx::Null< Float >  __o_ScaleX,hx::Null< Float >  __o_ScaleY);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxTilemapBuffer_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::flixel::util::IFlxDestroyable_obj *();
		::String __ToString() const { return HX_HCSTRING("FlxTilemapBuffer","\x1c","\x80","\xe9","\x5b"); }

		Float x;
		Float y;
		Float width;
		Float height;
		bool dirty;
		int rows;
		int columns;
		Dynamic pixelPerfectRender;
		::openfl::_legacy::display::BitmapData pixels;
		::openfl::_legacy::display::BlendMode blend;
		::openfl::_legacy::geom::Rectangle _flashRect;
		::openfl::_legacy::geom::Matrix _matrix;
		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void fill( hx::Null< int >  Color);
		Dynamic fill_dyn();

		virtual Void draw( ::flixel::FlxCamera Camera,::openfl::_legacy::geom::Point FlashPoint,hx::Null< Float >  ScaleX,hx::Null< Float >  ScaleY);
		Dynamic draw_dyn();

		virtual Void colorTransform( ::openfl::_legacy::geom::ColorTransform Transform);
		Dynamic colorTransform_dyn();

		virtual Void updateColumns( int TileWidth,int WidthInTiles,hx::Null< Float >  ScaleX,::flixel::FlxCamera Camera);
		Dynamic updateColumns_dyn();

		virtual Void updateRows( int TileHeight,int HeightInTiles,hx::Null< Float >  ScaleY,::flixel::FlxCamera Camera);
		Dynamic updateRows_dyn();

		virtual bool isPixelPerfectRender( ::flixel::FlxCamera Camera);
		Dynamic isPixelPerfectRender_dyn();

};

} // end namespace flixel
} // end namespace tile

#endif /* INCLUDED_flixel_tile_FlxTilemapBuffer */ 
