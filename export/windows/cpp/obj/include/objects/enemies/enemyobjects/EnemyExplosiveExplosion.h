#ifndef INCLUDED_objects_enemies_enemyobjects_EnemyExplosiveExplosion
#define INCLUDED_objects_enemies_enemyobjects_EnemyExplosiveExplosion

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(objects,Player)
HX_DECLARE_CLASS3(objects,enemies,enemyobjects,EnemyExplosiveExplosion)
namespace objects{
namespace enemies{
namespace enemyobjects{


class HXCPP_CLASS_ATTRIBUTES  EnemyExplosiveExplosion_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef EnemyExplosiveExplosion_obj OBJ_;
		EnemyExplosiveExplosion_obj();
		Void __construct(Float x,Float y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="objects.enemies.enemyobjects.EnemyExplosiveExplosion")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< EnemyExplosiveExplosion_obj > __new(Float x,Float y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EnemyExplosiveExplosion_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("EnemyExplosiveExplosion","\x78","\x4d","\xed","\x0c"); }

		virtual Void update( Float elapsed);

		virtual Void interact( ::objects::Player player);
		Dynamic interact_dyn();

};

} // end namespace objects
} // end namespace enemies
} // end namespace enemyobjects

#endif /* INCLUDED_objects_enemies_enemyobjects_EnemyExplosiveExplosion */ 
