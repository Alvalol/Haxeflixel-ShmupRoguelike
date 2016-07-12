#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#define INCLUDED_flixel_graphics_frames_FlxFrame

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS2(flixel,graphics,FlxGraphic)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFrame)
HX_DECLARE_CLASS2(flixel,math,FlxMatrix)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,math,FlxRect)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Matrix)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Point)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Rectangle)
namespace flixel{
namespace graphics{
namespace frames{


class HXCPP_CLASS_ATTRIBUTES  FlxFrame_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxFrame_obj OBJ_;
		FlxFrame_obj();
		Void __construct(::flixel::graphics::FlxGraphic parent,hx::Null< int >  __o_angle,hx::Null< bool >  __o_flipX,hx::Null< bool >  __o_flipY);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.graphics.frames.FlxFrame")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxFrame_obj > __new(::flixel::graphics::FlxGraphic parent,hx::Null< int >  __o_angle,hx::Null< bool >  __o_flipX,hx::Null< bool >  __o_flipY);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxFrame_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::flixel::util::IFlxDestroyable_obj *();
		::String __ToString() const { return HX_HCSTRING("FlxFrame","\x7b","\x82","\x5d","\xc3"); }

		static int sortByName( ::flixel::graphics::frames::FlxFrame frame1,::flixel::graphics::frames::FlxFrame frame2,int prefixLength,int postfixLength);
		static Dynamic sortByName_dyn();

		::openfl::_legacy::geom::Point point1;
		::openfl::_legacy::geom::Point point2;
		::openfl::_legacy::geom::Rectangle rect;
		::flixel::math::FlxMatrix matrix;
		::String name;
		::flixel::math::FlxRect frame;
		::flixel::math::FlxRect uv;
		::flixel::graphics::FlxGraphic parent;
		int angle;
		bool flipX;
		bool flipY;
		::flixel::math::FlxPoint sourceSize;
		::flixel::math::FlxPoint offset;
		int type;
		Array< Float > tileMatrix;
		Array< Float > blitMatrix;
		virtual Void cacheFrameMatrix( );
		Dynamic cacheFrameMatrix_dyn();

		virtual ::flixel::math::FlxMatrix prepareBlitMatrix( ::flixel::math::FlxMatrix mat,hx::Null< bool >  blit);
		Dynamic prepareBlitMatrix_dyn();

		virtual ::flixel::math::FlxMatrix rotateAndFlip( ::flixel::math::FlxMatrix mat,hx::Null< int >  rotation,hx::Null< bool >  flipX,hx::Null< bool >  flipY);
		Dynamic rotateAndFlip_dyn();

		virtual ::flixel::math::FlxMatrix prepareTransformedBlitMatrix( ::flixel::math::FlxMatrix mat,hx::Null< int >  rotation,hx::Null< bool >  flipX,hx::Null< bool >  flipY);
		Dynamic prepareTransformedBlitMatrix_dyn();

		virtual ::flixel::math::FlxMatrix prepareMatrix( ::flixel::math::FlxMatrix mat,hx::Null< int >  rotation,hx::Null< bool >  flipX,hx::Null< bool >  flipY);
		Dynamic prepareMatrix_dyn();

		virtual ::flixel::math::FlxMatrix fillBlitMatrix( ::flixel::math::FlxMatrix mat);
		Dynamic fillBlitMatrix_dyn();

		virtual ::openfl::_legacy::display::BitmapData paint( ::openfl::_legacy::display::BitmapData bmd,::openfl::_legacy::geom::Point point,hx::Null< bool >  mergeAlpha,hx::Null< bool >  disposeIfNotEqual);
		Dynamic paint_dyn();

		virtual ::openfl::_legacy::display::BitmapData paintRotatedAndFlipped( ::openfl::_legacy::display::BitmapData bmd,::openfl::_legacy::geom::Point point,hx::Null< int >  rotation,hx::Null< bool >  flipX,hx::Null< bool >  flipY,hx::Null< bool >  mergeAlpha,hx::Null< bool >  disposeIfNotEqual);
		Dynamic paintRotatedAndFlipped_dyn();

		virtual ::openfl::_legacy::display::BitmapData checkInputBitmap( ::openfl::_legacy::display::BitmapData bmd,::openfl::_legacy::geom::Point point,hx::Null< int >  rotation,hx::Null< bool >  mergeAlpha,hx::Null< bool >  disposeIfNotEqual);
		Dynamic checkInputBitmap_dyn();

		virtual ::openfl::_legacy::geom::Rectangle getDrawFrameRect( ::flixel::math::FlxMatrix mat);
		Dynamic getDrawFrameRect_dyn();

		virtual ::flixel::graphics::frames::FlxFrame subFrameTo( ::flixel::math::FlxRect rect,::flixel::graphics::frames::FlxFrame frameToFill);
		Dynamic subFrameTo_dyn();

		virtual ::flixel::graphics::frames::FlxFrame setBorderTo( ::flixel::math::FlxPoint border,::flixel::graphics::frames::FlxFrame frameToFill);
		Dynamic setBorderTo_dyn();

		virtual ::flixel::graphics::frames::FlxFrame clipTo( ::flixel::math::FlxRect clip,::flixel::graphics::frames::FlxFrame clippedFrame);
		Dynamic clipTo_dyn();

		virtual ::flixel::graphics::frames::FlxFrame copyTo( ::flixel::graphics::frames::FlxFrame clone);
		Dynamic copyTo_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual ::flixel::math::FlxRect set_frame( ::flixel::math::FlxRect value);
		Dynamic set_frame_dyn();

};

} // end namespace flixel
} // end namespace graphics
} // end namespace frames

#endif /* INCLUDED_flixel_graphics_frames_FlxFrame */ 
