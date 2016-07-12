#ifndef INCLUDED_flixel_util_FlxPath
#define INCLUDED_flixel_util_FlxPath

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,FlxPath)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  FlxPath_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxPath_obj OBJ_;
		FlxPath_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.util.FlxPath")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxPath_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxPath_obj();

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
		::String __ToString() const { return HX_HCSTRING("FlxPath","\x17","\x1f","\xaa","\xda"); }

		static void __boot();
		static int FORWARD;
		static int BACKWARD;
		static int LOOP_FORWARD;
		static int LOOP_BACKWARD;
		static int YOYO;
		static int HORIZONTAL_ONLY;
		static int VERTICAL_ONLY;
		static ::flixel::math::FlxPoint _point;
		Array< ::Dynamic > nodes;
		Float speed;
		Float angle;
		bool autoCenter;
		bool active;
		Dynamic onComplete;
		Dynamic &onComplete_dyn() { return onComplete;}
		int nodeIndex;
		bool finished;
		int _mode;
		int _inc;
		bool _autoRotate;
		Dynamic _wasObjectImmovable;
		bool _firstUpdate;
		::flixel::FlxObject object;
		virtual ::flixel::util::FlxPath reset( );
		Dynamic reset_dyn();

		virtual ::flixel::util::FlxPath start( Array< ::Dynamic > Nodes,hx::Null< Float >  Speed,hx::Null< int >  Mode,hx::Null< bool >  AutoRotate);
		Dynamic start_dyn();

		virtual ::flixel::util::FlxPath restart( );
		Dynamic restart_dyn();

		virtual Void setNode( int NodeIndex);
		Dynamic setNode_dyn();

		virtual Void update( Float elapsed);
		Dynamic update_dyn();

		virtual Void calculateVelocity( ::flixel::math::FlxPoint node,bool horizontalOnly,bool verticalOnly);
		Dynamic calculateVelocity_dyn();

		virtual ::flixel::math::FlxPoint advancePath( hx::Null< bool >  Snap);
		Dynamic advancePath_dyn();

		virtual Void cancel( );
		Dynamic cancel_dyn();

		virtual Void onEnd( );
		Dynamic onEnd_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual ::flixel::util::FlxPath add( Float X,Float Y);
		Dynamic add_dyn();

		virtual ::flixel::util::FlxPath addAt( Float X,Float Y,int Index);
		Dynamic addAt_dyn();

		virtual ::flixel::util::FlxPath addPoint( ::flixel::math::FlxPoint Node,hx::Null< bool >  AsReference);
		Dynamic addPoint_dyn();

		virtual ::flixel::util::FlxPath addPointAt( ::flixel::math::FlxPoint Node,int Index,hx::Null< bool >  AsReference);
		Dynamic addPointAt_dyn();

		virtual ::flixel::math::FlxPoint remove( ::flixel::math::FlxPoint Node);
		Dynamic remove_dyn();

		virtual ::flixel::math::FlxPoint removeAt( int Index);
		Dynamic removeAt_dyn();

		virtual ::flixel::math::FlxPoint head( );
		Dynamic head_dyn();

		virtual ::flixel::math::FlxPoint tail( );
		Dynamic tail_dyn();

};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxPath */ 
