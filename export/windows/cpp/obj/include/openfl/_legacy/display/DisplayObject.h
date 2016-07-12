#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#define INCLUDED_openfl__legacy_display_DisplayObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
HX_DECLARE_CLASS3(openfl,_legacy,display,BlendMode)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,Graphics)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,LoaderInfo)
HX_DECLARE_CLASS3(openfl,_legacy,display,Stage)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,filters,BitmapFilter)
HX_DECLARE_CLASS3(openfl,_legacy,geom,ColorTransform)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Matrix)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Point)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Rectangle)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Transform)
HX_DECLARE_CLASS3(openfl,_legacy,net,URLLoader)
namespace openfl{
namespace _legacy{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  DisplayObject_obj : public ::openfl::_legacy::events::EventDispatcher_obj{
	public:
		typedef ::openfl::_legacy::events::EventDispatcher_obj super;
		typedef DisplayObject_obj OBJ_;
		DisplayObject_obj();
		Void __construct(Dynamic handle,::String type);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._legacy.display.DisplayObject")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DisplayObject_obj > __new(Dynamic handle,::String type);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DisplayObject_obj();

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
		operator ::openfl::_legacy::display::IBitmapDrawable_obj *();
		::String __ToString() const { return HX_HCSTRING("DisplayObject","\x81","\x8a","\x92","\x1e"); }

		static void __boot();
		static Dynamic lime_create_display_object;
		static Dynamic &lime_create_display_object_dyn() { return lime_create_display_object;}
		static Dynamic lime_display_object_get_graphics;
		static Dynamic &lime_display_object_get_graphics_dyn() { return lime_display_object_get_graphics;}
		static Dynamic lime_display_object_draw_to_surface;
		static Dynamic &lime_display_object_draw_to_surface_dyn() { return lime_display_object_draw_to_surface;}
		static Dynamic lime_display_object_get_id;
		static Dynamic &lime_display_object_get_id_dyn() { return lime_display_object_get_id;}
		static Dynamic lime_display_object_get_x;
		static Dynamic &lime_display_object_get_x_dyn() { return lime_display_object_get_x;}
		static Dynamic lime_display_object_set_x;
		static Dynamic &lime_display_object_set_x_dyn() { return lime_display_object_set_x;}
		static Dynamic lime_display_object_get_y;
		static Dynamic &lime_display_object_get_y_dyn() { return lime_display_object_get_y;}
		static Dynamic lime_display_object_set_y;
		static Dynamic &lime_display_object_set_y_dyn() { return lime_display_object_set_y;}
		static Dynamic lime_display_object_get_z;
		static Dynamic &lime_display_object_get_z_dyn() { return lime_display_object_get_z;}
		static Dynamic lime_display_object_set_z;
		static Dynamic &lime_display_object_set_z_dyn() { return lime_display_object_set_z;}
		static Dynamic lime_display_object_get_scale_x;
		static Dynamic &lime_display_object_get_scale_x_dyn() { return lime_display_object_get_scale_x;}
		static Dynamic lime_display_object_set_scale_x;
		static Dynamic &lime_display_object_set_scale_x_dyn() { return lime_display_object_set_scale_x;}
		static Dynamic lime_display_object_get_scale_y;
		static Dynamic &lime_display_object_get_scale_y_dyn() { return lime_display_object_get_scale_y;}
		static Dynamic lime_display_object_set_scale_y;
		static Dynamic &lime_display_object_set_scale_y_dyn() { return lime_display_object_set_scale_y;}
		static Dynamic lime_display_object_get_mouse_x;
		static Dynamic &lime_display_object_get_mouse_x_dyn() { return lime_display_object_get_mouse_x;}
		static Dynamic lime_display_object_get_mouse_y;
		static Dynamic &lime_display_object_get_mouse_y_dyn() { return lime_display_object_get_mouse_y;}
		static Dynamic lime_display_object_get_rotation;
		static Dynamic &lime_display_object_get_rotation_dyn() { return lime_display_object_get_rotation;}
		static Dynamic lime_display_object_set_rotation;
		static Dynamic &lime_display_object_set_rotation_dyn() { return lime_display_object_set_rotation;}
		static Dynamic lime_display_object_get_bg;
		static Dynamic &lime_display_object_get_bg_dyn() { return lime_display_object_get_bg;}
		static Dynamic lime_display_object_set_bg;
		static Dynamic &lime_display_object_set_bg_dyn() { return lime_display_object_set_bg;}
		static Dynamic lime_display_object_get_name;
		static Dynamic &lime_display_object_get_name_dyn() { return lime_display_object_get_name;}
		static Dynamic lime_display_object_set_name;
		static Dynamic &lime_display_object_set_name_dyn() { return lime_display_object_set_name;}
		static Dynamic lime_display_object_get_width;
		static Dynamic &lime_display_object_get_width_dyn() { return lime_display_object_get_width;}
		static Dynamic lime_display_object_set_width;
		static Dynamic &lime_display_object_set_width_dyn() { return lime_display_object_set_width;}
		static Dynamic lime_display_object_get_height;
		static Dynamic &lime_display_object_get_height_dyn() { return lime_display_object_get_height;}
		static Dynamic lime_display_object_set_height;
		static Dynamic &lime_display_object_set_height_dyn() { return lime_display_object_set_height;}
		static Dynamic lime_display_object_get_alpha;
		static Dynamic &lime_display_object_get_alpha_dyn() { return lime_display_object_get_alpha;}
		static Dynamic lime_display_object_set_alpha;
		static Dynamic &lime_display_object_set_alpha_dyn() { return lime_display_object_set_alpha;}
		static Dynamic lime_display_object_get_blend_mode;
		static Dynamic &lime_display_object_get_blend_mode_dyn() { return lime_display_object_get_blend_mode;}
		static Dynamic lime_display_object_set_blend_mode;
		static Dynamic &lime_display_object_set_blend_mode_dyn() { return lime_display_object_set_blend_mode;}
		static Dynamic lime_display_object_get_cache_as_bitmap;
		static Dynamic &lime_display_object_get_cache_as_bitmap_dyn() { return lime_display_object_get_cache_as_bitmap;}
		static Dynamic lime_display_object_set_cache_as_bitmap;
		static Dynamic &lime_display_object_set_cache_as_bitmap_dyn() { return lime_display_object_set_cache_as_bitmap;}
		static Dynamic lime_display_object_get_pedantic_bitmap_caching;
		static Dynamic &lime_display_object_get_pedantic_bitmap_caching_dyn() { return lime_display_object_get_pedantic_bitmap_caching;}
		static Dynamic lime_display_object_set_pedantic_bitmap_caching;
		static Dynamic &lime_display_object_set_pedantic_bitmap_caching_dyn() { return lime_display_object_set_pedantic_bitmap_caching;}
		static Dynamic lime_display_object_get_visible;
		static Dynamic &lime_display_object_get_visible_dyn() { return lime_display_object_get_visible;}
		static Dynamic lime_display_object_set_visible;
		static Dynamic &lime_display_object_set_visible_dyn() { return lime_display_object_set_visible;}
		static Dynamic lime_display_object_set_filters;
		static Dynamic &lime_display_object_set_filters_dyn() { return lime_display_object_set_filters;}
		static Dynamic lime_display_object_global_to_local;
		static Dynamic &lime_display_object_global_to_local_dyn() { return lime_display_object_global_to_local;}
		static Dynamic lime_display_object_local_to_global;
		static Dynamic &lime_display_object_local_to_global_dyn() { return lime_display_object_local_to_global;}
		static Dynamic lime_display_object_set_scale9_grid;
		static Dynamic &lime_display_object_set_scale9_grid_dyn() { return lime_display_object_set_scale9_grid;}
		static Dynamic lime_display_object_set_scroll_rect;
		static Dynamic &lime_display_object_set_scroll_rect_dyn() { return lime_display_object_set_scroll_rect;}
		static Dynamic lime_display_object_set_mask;
		static Dynamic &lime_display_object_set_mask_dyn() { return lime_display_object_set_mask;}
		static Dynamic lime_display_object_set_matrix;
		static Dynamic &lime_display_object_set_matrix_dyn() { return lime_display_object_set_matrix;}
		static Dynamic lime_display_object_get_matrix;
		static Dynamic &lime_display_object_get_matrix_dyn() { return lime_display_object_get_matrix;}
		static Dynamic lime_display_object_get_color_transform;
		static Dynamic &lime_display_object_get_color_transform_dyn() { return lime_display_object_get_color_transform;}
		static Dynamic lime_display_object_set_color_transform;
		static Dynamic &lime_display_object_set_color_transform_dyn() { return lime_display_object_set_color_transform;}
		static Dynamic lime_display_object_get_pixel_bounds;
		static Dynamic &lime_display_object_get_pixel_bounds_dyn() { return lime_display_object_get_pixel_bounds;}
		static Dynamic lime_display_object_get_bounds;
		static Dynamic &lime_display_object_get_bounds_dyn() { return lime_display_object_get_bounds;}
		static Dynamic lime_display_object_hit_test_point;
		static Dynamic &lime_display_object_hit_test_point_dyn() { return lime_display_object_hit_test_point;}
		::openfl::_legacy::display::Graphics graphics;
		::openfl::_legacy::display::LoaderInfo loaderInfo;
		::openfl::_legacy::display::DisplayObject mask;
		Float mouseX;
		Float mouseY;
		::openfl::_legacy::display::DisplayObjectContainer parent;
		::openfl::_legacy::display::DisplayObject root;
		::openfl::_legacy::display::Stage stage;
		Dynamic __handle;
		cpp::ArrayBase __filters;
		::openfl::_legacy::display::Graphics __graphicsCache;
		int __id;
		::openfl::_legacy::display::DisplayObjectContainer __parent;
		::openfl::_legacy::geom::Rectangle __scale9Grid;
		::openfl::_legacy::geom::Rectangle __scrollRect;
		virtual bool dispatchEvent( ::openfl::_legacy::events::Event event);

		virtual ::openfl::_legacy::geom::Rectangle getBounds( ::openfl::_legacy::display::DisplayObject targetCoordinateSpace);
		Dynamic getBounds_dyn();

		virtual ::openfl::_legacy::geom::Rectangle getRect( ::openfl::_legacy::display::DisplayObject targetCoordinateSpace);
		Dynamic getRect_dyn();

		virtual ::openfl::_legacy::geom::Point globalToLocal( ::openfl::_legacy::geom::Point point);
		Dynamic globalToLocal_dyn();

		virtual bool hitTestObject( ::openfl::_legacy::display::DisplayObject obj);
		Dynamic hitTestObject_dyn();

		virtual bool hitTestPoint( Float x,Float y,hx::Null< bool >  shapeFlag);
		Dynamic hitTestPoint_dyn();

		virtual ::openfl::_legacy::geom::Point localToGlobal( ::openfl::_legacy::geom::Point point);
		Dynamic localToGlobal_dyn();

		virtual ::String toString( );

		virtual ::openfl::_legacy::display::InteractiveObject __asInteractiveObject( );
		Dynamic __asInteractiveObject_dyn();

		virtual Void __broadcast( ::openfl::_legacy::events::Event event);
		Dynamic __broadcast_dyn();

		virtual bool __contains( ::openfl::_legacy::display::DisplayObject child);
		Dynamic __contains_dyn();

		virtual bool __dispatchEvent( ::openfl::_legacy::events::Event event);
		Dynamic __dispatchEvent_dyn();

		virtual Void __drawToSurface( Dynamic surface,::openfl::_legacy::geom::Matrix matrix,::openfl::_legacy::geom::ColorTransform colorTransform,::String blendMode,::openfl::_legacy::geom::Rectangle clipRect,bool smoothing);
		Dynamic __drawToSurface_dyn();

		virtual ::openfl::_legacy::display::DisplayObject __findByID( int id);
		Dynamic __findByID_dyn();

		virtual Void __fireEvent( ::openfl::_legacy::events::Event event);
		Dynamic __fireEvent_dyn();

		virtual ::openfl::_legacy::geom::ColorTransform __getColorTransform( );
		Dynamic __getColorTransform_dyn();

		virtual ::openfl::_legacy::geom::ColorTransform __getConcatenatedColorTransform( );
		Dynamic __getConcatenatedColorTransform_dyn();

		virtual ::openfl::_legacy::geom::Matrix __getConcatenatedMatrix( );
		Dynamic __getConcatenatedMatrix_dyn();

		virtual Void __getInteractiveObjectStack( Array< ::Dynamic > stack);
		Dynamic __getInteractiveObjectStack_dyn();

		virtual ::openfl::_legacy::geom::Matrix __getMatrix( );
		Dynamic __getMatrix_dyn();

		virtual Void __getObjectsUnderPoint( ::openfl::_legacy::geom::Point point,Array< ::Dynamic > result);
		Dynamic __getObjectsUnderPoint_dyn();

		virtual ::openfl::_legacy::geom::Rectangle __getPixelBounds( );
		Dynamic __getPixelBounds_dyn();

		virtual Void __onAdded( ::openfl::_legacy::display::DisplayObject object,bool isOnStage);
		Dynamic __onAdded_dyn();

		virtual Void __onRemoved( ::openfl::_legacy::display::DisplayObject object,bool wasOnStage);
		Dynamic __onRemoved_dyn();

		virtual Void __setColorTransform( ::openfl::_legacy::geom::ColorTransform colorTransform);
		Dynamic __setColorTransform_dyn();

		virtual Void __setMatrix( ::openfl::_legacy::geom::Matrix matrix);
		Dynamic __setMatrix_dyn();

		virtual ::openfl::_legacy::display::DisplayObjectContainer __setParent( ::openfl::_legacy::display::DisplayObjectContainer parent);
		Dynamic __setParent_dyn();

		virtual Float get_alpha( );
		Dynamic get_alpha_dyn();

		virtual Float set_alpha( Float value);
		Dynamic set_alpha_dyn();

		virtual Dynamic get_opaqueBackground( );
		Dynamic get_opaqueBackground_dyn();

		virtual Dynamic set_opaqueBackground( Dynamic value);
		Dynamic set_opaqueBackground_dyn();

		virtual ::openfl::_legacy::display::BlendMode get_blendMode( );
		Dynamic get_blendMode_dyn();

		virtual ::openfl::_legacy::display::BlendMode set_blendMode( ::openfl::_legacy::display::BlendMode value);
		Dynamic set_blendMode_dyn();

		virtual bool get_cacheAsBitmap( );
		Dynamic get_cacheAsBitmap_dyn();

		virtual bool set_cacheAsBitmap( bool value);
		Dynamic set_cacheAsBitmap_dyn();

		virtual bool get_pedanticBitmapCaching( );
		Dynamic get_pedanticBitmapCaching_dyn();

		virtual bool set_pedanticBitmapCaching( bool value);
		Dynamic set_pedanticBitmapCaching_dyn();

		virtual Array< ::Dynamic > get_filters( );
		Dynamic get_filters_dyn();

		virtual Array< ::Dynamic > set_filters( cpp::ArrayBase value);
		Dynamic set_filters_dyn();

		virtual ::openfl::_legacy::display::Graphics get_graphics( );
		Dynamic get_graphics_dyn();

		virtual Float get_height( );
		Dynamic get_height_dyn();

		virtual Float set_height( Float value);
		Dynamic set_height_dyn();

		virtual ::openfl::_legacy::display::DisplayObject set_mask( ::openfl::_legacy::display::DisplayObject value);
		Dynamic set_mask_dyn();

		virtual Float get_mouseX( );
		Dynamic get_mouseX_dyn();

		virtual Float get_mouseY( );
		Dynamic get_mouseY_dyn();

		virtual ::String get_name( );
		Dynamic get_name_dyn();

		virtual ::String set_name( ::String value);
		Dynamic set_name_dyn();

		virtual ::openfl::_legacy::display::DisplayObjectContainer get_parent( );
		Dynamic get_parent_dyn();

		virtual ::openfl::_legacy::display::DisplayObject get_root( );
		Dynamic get_root_dyn();

		virtual Float get_rotation( );
		Dynamic get_rotation_dyn();

		virtual Float set_rotation( Float value);
		Dynamic set_rotation_dyn();

		virtual ::openfl::_legacy::geom::Rectangle get_scale9Grid( );
		Dynamic get_scale9Grid_dyn();

		virtual ::openfl::_legacy::geom::Rectangle set_scale9Grid( ::openfl::_legacy::geom::Rectangle value);
		Dynamic set_scale9Grid_dyn();

		virtual Float get_scaleX( );
		Dynamic get_scaleX_dyn();

		virtual Float set_scaleX( Float value);
		Dynamic set_scaleX_dyn();

		virtual Float get_scaleY( );
		Dynamic get_scaleY_dyn();

		virtual Float set_scaleY( Float value);
		Dynamic set_scaleY_dyn();

		virtual ::openfl::_legacy::geom::Rectangle get_scrollRect( );
		Dynamic get_scrollRect_dyn();

		virtual ::openfl::_legacy::geom::Rectangle set_scrollRect( ::openfl::_legacy::geom::Rectangle value);
		Dynamic set_scrollRect_dyn();

		virtual ::openfl::_legacy::display::Stage get_stage( );
		Dynamic get_stage_dyn();

		virtual ::openfl::_legacy::geom::Transform get_transform( );
		Dynamic get_transform_dyn();

		virtual ::openfl::_legacy::geom::Transform set_transform( ::openfl::_legacy::geom::Transform value);
		Dynamic set_transform_dyn();

		virtual bool get_visible( );
		Dynamic get_visible_dyn();

		virtual bool set_visible( bool value);
		Dynamic set_visible_dyn();

		virtual Float get_width( );
		Dynamic get_width_dyn();

		virtual Float set_width( Float value);
		Dynamic set_width_dyn();

		virtual Float get_x( );
		Dynamic get_x_dyn();

		virtual Float set_x( Float value);
		Dynamic set_x_dyn();

		virtual Float get_y( );
		Dynamic get_y_dyn();

		virtual Float set_y( Float value);
		Dynamic set_y_dyn();

		virtual Float get_z( );
		Dynamic get_z_dyn();

		virtual Float set_z( Float value);
		Dynamic set_z_dyn();

};

} // end namespace openfl
} // end namespace _legacy
} // end namespace display

#endif /* INCLUDED_openfl__legacy_display_DisplayObject */ 
