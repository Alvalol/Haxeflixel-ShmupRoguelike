#ifndef INCLUDED_flixel_graphics_atlas_FlxAtlas
#define INCLUDED_flixel_graphics_atlas_FlxAtlas

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS3(flixel,graphics,atlas,FlxAtlas)
HX_DECLARE_CLASS3(flixel,graphics,atlas,FlxNode)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxAtlasFrames)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFramesCollection)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxTileFrames)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,math,FlxRect)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Matrix)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Point)
namespace flixel{
namespace graphics{
namespace atlas{


class HXCPP_CLASS_ATTRIBUTES  FlxAtlas_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxAtlas_obj OBJ_;
		FlxAtlas_obj();
		Void __construct(::String name,hx::Null< bool >  __o_powerOfTwo,hx::Null< int >  __o_border,hx::Null< bool >  __o_rotate,::flixel::math::FlxPoint minSize,::flixel::math::FlxPoint maxSize);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.graphics.atlas.FlxAtlas")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxAtlas_obj > __new(::String name,hx::Null< bool >  __o_powerOfTwo,hx::Null< int >  __o_border,hx::Null< bool >  __o_rotate,::flixel::math::FlxPoint minSize,::flixel::math::FlxPoint maxSize);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxAtlas_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::flixel::util::IFlxDestroyable_obj *();
		::String __ToString() const { return HX_HCSTRING("FlxAtlas","\x99","\x57","\xb7","\xe3"); }

		static void __boot();
		static ::openfl::_legacy::geom::Point point;
		static ::openfl::_legacy::geom::Matrix matrix;
		static ::flixel::math::FlxPoint defaultMinSize;
		static ::flixel::math::FlxPoint defaultMaxSize;
		::flixel::graphics::atlas::FlxNode root;
		::String name;
		::haxe::ds::StringMap nodes;
		int border;
		int width;
		int height;
		int minWidth;
		int minHeight;
		int maxWidth;
		int maxHeight;
		bool allowRotation;
		bool powerOfTwo;
		::openfl::_legacy::display::BitmapData _bitmapData;
		cpp::ArrayBase _tempStorage;
		virtual Void initRoot( );
		Dynamic initRoot_dyn();

		virtual ::flixel::graphics::atlas::FlxNode addNode( Dynamic Graphic,::String Key);
		Dynamic addNode_dyn();

		virtual Void wrapRoot( );
		Dynamic wrapRoot_dyn();

		virtual ::flixel::graphics::atlas::FlxNode tryInsert( ::openfl::_legacy::display::BitmapData data,::String key);
		Dynamic tryInsert_dyn();

		virtual bool needToDivideHorizontally( ::flixel::graphics::atlas::FlxNode nodeToDivide,int insertWidth,int insertHeight);
		Dynamic needToDivideHorizontally_dyn();

		virtual ::flixel::graphics::atlas::FlxNode divideNode( ::flixel::graphics::atlas::FlxNode nodeToDivide,int insertWidth,int insertHeight,bool divideHorizontally,::openfl::_legacy::display::BitmapData firstGrandChildData,::String firstGrandChildKey,hx::Null< bool >  firstGrandChildRotated);
		Dynamic divideNode_dyn();

		virtual ::flixel::graphics::atlas::FlxNode insertFirstNodeInRoot( ::openfl::_legacy::display::BitmapData data,::String key);
		Dynamic insertFirstNodeInRoot_dyn();

		virtual ::flixel::graphics::atlas::FlxNode expand( ::openfl::_legacy::display::BitmapData data,::String key);
		Dynamic expand_dyn();

		virtual Void expandRoot( Float newWidth,Float newHeight,bool divideHorizontally,hx::Null< bool >  decideHowToDivide);
		Dynamic expandRoot_dyn();

		virtual Void expandBitmapData( );
		Dynamic expandBitmapData_dyn();

		virtual int getNextPowerOfTwo( Float number);
		Dynamic getNextPowerOfTwo_dyn();

		virtual ::flixel::graphics::frames::FlxTileFrames addNodeWithSpacesAndBorders( Dynamic Graphic,::String Key,::flixel::math::FlxPoint tileSize,::flixel::math::FlxPoint tileSpacing,::flixel::math::FlxPoint tileBorder,::flixel::math::FlxRect region);
		Dynamic addNodeWithSpacesAndBorders_dyn();

		virtual ::flixel::graphics::frames::FlxAtlasFrames getAtlasFrames( );
		Dynamic getAtlasFrames_dyn();

		virtual Void addNodeToAtlasFrames( ::flixel::graphics::atlas::FlxNode node);
		Dynamic addNodeToAtlasFrames_dyn();

		virtual bool hasNodeWithName( ::String nodeName);
		Dynamic hasNodeWithName_dyn();

		virtual ::flixel::graphics::atlas::FlxNode getNode( ::String key);
		Dynamic getNode_dyn();

		virtual ::flixel::graphics::atlas::FlxAtlas addNodes( Array< ::Dynamic > bitmaps,Array< ::String > keys);
		Dynamic addNodes_dyn();

		virtual Void addFromAtlasObjects( cpp::ArrayBase objects);
		Dynamic addFromAtlasObjects_dyn();

		virtual int bitmapSorter( Dynamic obj1,Dynamic obj2);
		Dynamic bitmapSorter_dyn();

		virtual ::flixel::graphics::atlas::FlxAtlas createQueue( );
		Dynamic createQueue_dyn();

		virtual ::flixel::graphics::atlas::FlxAtlas addToQueue( ::openfl::_legacy::display::BitmapData data,::String key);
		Dynamic addToQueue_dyn();

		virtual ::flixel::graphics::atlas::FlxAtlas generateFromQueue( );
		Dynamic generateFromQueue_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual ::String getLibGdxData( );
		Dynamic getLibGdxData_dyn();

		virtual Void deleteSubtree( ::flixel::graphics::atlas::FlxNode node);
		Dynamic deleteSubtree_dyn();

		virtual ::flixel::graphics::atlas::FlxNode findNodeToInsert( int insertWidth,int insertHeight);
		Dynamic findNodeToInsert_dyn();

		virtual ::openfl::_legacy::display::BitmapData get_bitmapData( );
		Dynamic get_bitmapData_dyn();

		virtual ::openfl::_legacy::display::BitmapData set_bitmapData( ::openfl::_legacy::display::BitmapData value);
		Dynamic set_bitmapData_dyn();

		virtual int set_minWidth( int value);
		Dynamic set_minWidth_dyn();

		virtual int set_minHeight( int value);
		Dynamic set_minHeight_dyn();

		virtual int get_width( );
		Dynamic get_width_dyn();

		virtual int set_width( int value);
		Dynamic set_width_dyn();

		virtual int get_height( );
		Dynamic get_height_dyn();

		virtual int set_height( int value);
		Dynamic set_height_dyn();

		virtual int set_maxWidth( int value);
		Dynamic set_maxWidth_dyn();

		virtual int set_maxHeight( int value);
		Dynamic set_maxHeight_dyn();

		virtual bool set_powerOfTwo( bool value);
		Dynamic set_powerOfTwo_dyn();

};

} // end namespace flixel
} // end namespace graphics
} // end namespace atlas

#endif /* INCLUDED_flixel_graphics_atlas_FlxAtlas */ 
