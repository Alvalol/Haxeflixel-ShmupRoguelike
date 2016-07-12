#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#define INCLUDED_flixel_system_frontEnds_CameraFrontEnd

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS3(flixel,_system,frontEnds,CameraFrontEnd)
HX_DECLARE_CLASS2(flixel,util,FlxAxes)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Rectangle)
namespace flixel{
namespace _system{
namespace frontEnds{


class HXCPP_CLASS_ATTRIBUTES  CameraFrontEnd_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CameraFrontEnd_obj OBJ_;
		CameraFrontEnd_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.system.frontEnds.CameraFrontEnd")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CameraFrontEnd_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CameraFrontEnd_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("CameraFrontEnd","\x97","\xf6","\x1c","\xf3"); }

		virtual ::flixel::FlxCamera add_flixel_FlxCamera( ::flixel::FlxCamera NewCamera);
		Dynamic add_flixel_FlxCamera_dyn();

		Array< ::Dynamic > list;
		bool useBufferLocking;
		::openfl::_legacy::geom::Rectangle _cameraRect;
		virtual Void remove( ::flixel::FlxCamera Camera,hx::Null< bool >  Destroy);
		Dynamic remove_dyn();

		virtual Void reset( ::flixel::FlxCamera NewCamera);
		Dynamic reset_dyn();

		virtual Void flash( hx::Null< int >  Color,hx::Null< Float >  Duration,Dynamic OnComplete,hx::Null< bool >  Force);
		Dynamic flash_dyn();

		virtual Void fade( hx::Null< int >  Color,hx::Null< Float >  Duration,hx::Null< bool >  FadeIn,Dynamic OnComplete,hx::Null< bool >  Force);
		Dynamic fade_dyn();

		virtual Void shake( hx::Null< Float >  Intensity,hx::Null< Float >  Duration,Dynamic OnComplete,hx::Null< bool >  Force,::flixel::util::FlxAxes Axes);
		Dynamic shake_dyn();

		virtual Void lock( );
		Dynamic lock_dyn();

		virtual Void render( );
		Dynamic render_dyn();

		virtual Void unlock( );
		Dynamic unlock_dyn();

		virtual Void update( Float elapsed);
		Dynamic update_dyn();

		virtual Void resize( );
		Dynamic resize_dyn();

		virtual int get_bgColor( );
		Dynamic get_bgColor_dyn();

		virtual int set_bgColor( int Color);
		Dynamic set_bgColor_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds

#endif /* INCLUDED_flixel_system_frontEnds_CameraFrontEnd */ 
