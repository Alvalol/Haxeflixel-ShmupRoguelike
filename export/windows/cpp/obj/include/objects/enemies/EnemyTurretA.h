#ifndef INCLUDED_objects_enemies_EnemyTurretA
#define INCLUDED_objects_enemies_EnemyTurretA

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
HX_DECLARE_CLASS2(objects,enemies,EnemyBullet)
HX_DECLARE_CLASS2(objects,enemies,EnemyTurretA)
namespace objects{
namespace enemies{


class HXCPP_CLASS_ATTRIBUTES  EnemyTurretA_obj : public ::objects::enemies::Enemy_obj{
	public:
		typedef ::objects::enemies::Enemy_obj super;
		typedef EnemyTurretA_obj OBJ_;
		EnemyTurretA_obj();
		Void __construct(Float x,Float y,bool flip);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="objects.enemies.EnemyTurretA")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< EnemyTurretA_obj > __new(Float x,Float y,bool flip);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EnemyTurretA_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("EnemyTurretA","\xc9","\x3e","\x4f","\x2b"); }

		static void __boot();
		static int SCORE_AMOUNT;
		static int SHOOT_SPEED;
		::objects::enemies::EnemyBullet bullet;
		bool justShot;
		Float shootDelay;
		int tx;
		int ty;
		int type;
		virtual Void update( Float elapsed);

		virtual Void animateToShoot( );
		Dynamic animateToShoot_dyn();

		virtual ::objects::enemies::EnemyBullet shoot( );
		Dynamic shoot_dyn();

		virtual Void kill( );

		virtual Void adjustFlip( );
		Dynamic adjustFlip_dyn();

		virtual Void chooseType( );
		Dynamic chooseType_dyn();

};

} // end namespace objects
} // end namespace enemies

#endif /* INCLUDED_objects_enemies_EnemyTurretA */ 
