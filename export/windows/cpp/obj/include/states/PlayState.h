#ifndef INCLUDED_states_PlayState
#define INCLUDED_states_PlayState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(objects,Player)
HX_DECLARE_CLASS2(objects,gamesys,Scroller)
HX_DECLARE_CLASS1(states,HUD)
HX_DECLARE_CLASS1(states,PlayState)
HX_DECLARE_CLASS2(utils,pcg,LevelLoaderProc)
namespace states{


class HXCPP_CLASS_ATTRIBUTES  PlayState_obj : public ::flixel::FlxState_obj{
	public:
		typedef ::flixel::FlxState_obj super;
		typedef PlayState_obj OBJ_;
		PlayState_obj();
		Void __construct(Dynamic MaxSize);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="states.PlayState")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< PlayState_obj > __new(Dynamic MaxSize);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PlayState_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("PlayState","\x5d","\x83","\xc2","\x46"); }

		::utils::pcg::LevelLoaderProc map;
		::flixel::group::FlxTypedGroup hazards;
		::objects::Player player;
		::flixel::group::FlxTypedGroup PBullets;
		::flixel::group::FlxTypedGroup EBullets;
		::flixel::group::FlxTypedGroup blocks;
		::flixel::group::FlxTypedSpriteGroup effects;
		::flixel::group::FlxTypedGroup EExplosions;
		::flixel::group::FlxTypedGroup enemies;
		::flixel::group::FlxTypedGroup items;
		::flixel::group::FlxTypedGroup coins;
		::flixel::group::FlxTypedGroup _entities;
		::objects::gamesys::Scroller _scroller;
		::states::HUD _hud;
		::flixel::FlxCamera _gameCamera;
		::flixel::FlxCamera _hudCamera;
		bool tracers;
		virtual Void create( );

		virtual Void update( Float elapsed);

		virtual Void cameraSetup( );
		Dynamic cameraSetup_dyn();

		virtual Void collisions( );
		Dynamic collisions_dyn();

		virtual Void gameControls( );
		Dynamic gameControls_dyn();

		virtual Void cleanItems( );
		Dynamic cleanItems_dyn();

		virtual Void displayTracers( );
		Dynamic displayTracers_dyn();

};

} // end namespace states

#endif /* INCLUDED_states_PlayState */ 
