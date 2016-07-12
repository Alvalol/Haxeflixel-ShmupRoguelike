#ifndef INCLUDED_objects_enemies_EnemyBullet
#define INCLUDED_objects_enemies_EnemyBullet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,effects,FlxTrail)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(objects,Player)
HX_DECLARE_CLASS2(objects,enemies,EnemyBullet)
namespace objects{
namespace enemies{


class HXCPP_CLASS_ATTRIBUTES  EnemyBullet_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef EnemyBullet_obj OBJ_;
		EnemyBullet_obj();
		Void __construct(Float x,Float y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="objects.enemies.EnemyBullet")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< EnemyBullet_obj > __new(Float x,Float y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EnemyBullet_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("EnemyBullet","\x8a","\x96","\x75","\xa0"); }

		::flixel::addons::effects::FlxTrail bTrail;
		virtual Void createTrail( );
		Dynamic createTrail_dyn();

		virtual Void update( Float elapsed);

		virtual Void collisions( );
		Dynamic collisions_dyn();

		virtual Void interact( ::objects::Player player);
		Dynamic interact_dyn();

		virtual Void createNoHit( );
		Dynamic createNoHit_dyn();

		virtual Void kill( );

};

} // end namespace objects
} // end namespace enemies

#endif /* INCLUDED_objects_enemies_EnemyBullet */ 
