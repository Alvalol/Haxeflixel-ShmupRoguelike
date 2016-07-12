#ifndef INCLUDED_flixel_FlxState
#define INCLUDED_flixel_FlxState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,FlxSubState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
namespace flixel{


class HXCPP_CLASS_ATTRIBUTES  FlxState_obj : public ::flixel::group::FlxTypedGroup_obj{
	public:
		typedef ::flixel::group::FlxTypedGroup_obj super;
		typedef FlxState_obj OBJ_;
		FlxState_obj();
		Void __construct(Dynamic MaxSize);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.FlxState")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxState_obj > __new(Dynamic MaxSize);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxState_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FlxState","\x5f","\x80","\xe5","\x40"); }

		bool persistentUpdate;
		bool persistentDraw;
		bool destroySubStates;
		::flixel::FlxSubState subState;
		::flixel::FlxSubState _requestedSubState;
		bool _requestSubStateReset;
		virtual Void create( );
		Dynamic create_dyn();

		virtual Void draw( );

		virtual Void openSubState( ::flixel::FlxSubState SubState);
		Dynamic openSubState_dyn();

		virtual Void closeSubState( );
		Dynamic closeSubState_dyn();

		virtual Void resetSubState( );
		Dynamic resetSubState_dyn();

		virtual Void destroy( );

		virtual bool switchTo( ::flixel::FlxState nextState);
		Dynamic switchTo_dyn();

		virtual Void onFocusLost( );
		Dynamic onFocusLost_dyn();

		virtual Void onFocus( );
		Dynamic onFocus_dyn();

		virtual Void onResize( int Width,int Height);
		Dynamic onResize_dyn();

		virtual Void tryUpdate( Float elapsed);
		Dynamic tryUpdate_dyn();

		virtual int get_bgColor( );
		Dynamic get_bgColor_dyn();

		virtual int set_bgColor( int Value);
		Dynamic set_bgColor_dyn();

};

} // end namespace flixel

#endif /* INCLUDED_flixel_FlxState */ 
