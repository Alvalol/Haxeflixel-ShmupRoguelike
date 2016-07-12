#ifndef INCLUDED_objects_enemies_EnemyMultishotDeath
#define INCLUDED_objects_enemies_EnemyMultishotDeath

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_objects_enemies_Enemy
#include <objects/enemies/Enemy.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(objects,enemies,Enemy)
HX_DECLARE_CLASS2(objects,enemies,EnemyMultishotDeath)
namespace objects{
namespace enemies{


class HXCPP_CLASS_ATTRIBUTES  EnemyMultishotDeath_obj : public ::objects::enemies::Enemy_obj{
	public:
		typedef ::objects::enemies::Enemy_obj super;
		typedef EnemyMultishotDeath_obj OBJ_;
		EnemyMultishotDeath_obj();
		Void __construct(Float x,Float y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="objects.enemies.EnemyMultishotDeath")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< EnemyMultishotDeath_obj > __new(Float x,Float y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EnemyMultishotDeath_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("EnemyMultishotDeath","\x89","\x4a","\xbb","\x69"); }

		bool justShot;
		Float shootDelay;
		int ang;
		int bulletSpeed;
		virtual Void update( Float elapsed);

		virtual Void kill( );

		virtual Void shoot( );
		Dynamic shoot_dyn();

		virtual Void deathShot( );
		Dynamic deathShot_dyn();

};

} // end namespace objects
} // end namespace enemies

#endif /* INCLUDED_objects_enemies_EnemyMultishotDeath */ 
