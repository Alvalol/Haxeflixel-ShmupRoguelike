#ifndef INCLUDED_objects_enemies_EnemyExplosive
#define INCLUDED_objects_enemies_EnemyExplosive

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
HX_DECLARE_CLASS2(objects,enemies,EnemyExplosive)
namespace objects{
namespace enemies{


class HXCPP_CLASS_ATTRIBUTES  EnemyExplosive_obj : public ::objects::enemies::Enemy_obj{
	public:
		typedef ::objects::enemies::Enemy_obj super;
		typedef EnemyExplosive_obj OBJ_;
		EnemyExplosive_obj();
		Void __construct(Float x,Float y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="objects.enemies.EnemyExplosive")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< EnemyExplosive_obj > __new(Float x,Float y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EnemyExplosive_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("EnemyExplosive","\x5d","\xb2","\x4d","\x64"); }

		Float MOVE_SPEED;
		virtual Void update( Float elapsed);

		virtual Void kill( );

		virtual Void move( );
		Dynamic move_dyn();

		virtual Void reachedScrollX( );
		Dynamic reachedScrollX_dyn();

};

} // end namespace objects
} // end namespace enemies

#endif /* INCLUDED_objects_enemies_EnemyExplosive */ 
