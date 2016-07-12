#ifndef INCLUDED_objects_enemies_EnemyMover
#define INCLUDED_objects_enemies_EnemyMover

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_objects_enemies_Enemy
#include <objects/enemies/Enemy.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,effects,FlxTrail)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(objects,enemies,Enemy)
HX_DECLARE_CLASS2(objects,enemies,EnemyMover)
namespace objects{
namespace enemies{


class HXCPP_CLASS_ATTRIBUTES  EnemyMover_obj : public ::objects::enemies::Enemy_obj{
	public:
		typedef ::objects::enemies::Enemy_obj super;
		typedef EnemyMover_obj OBJ_;
		EnemyMover_obj();
		Void __construct(Float x,Float y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="objects.enemies.EnemyMover")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< EnemyMover_obj > __new(Float x,Float y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EnemyMover_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("EnemyMover","\xf9","\xe8","\x19","\xbe"); }

		Float sinfact;
		int factor;
		Float MOVE_SPEED;
		::flixel::addons::effects::FlxTrail bTrail;
		virtual Void update( Float elapsed);

		virtual Void createTrail( );
		Dynamic createTrail_dyn();

		virtual Void kill( );

		virtual Void move( );
		Dynamic move_dyn();

};

} // end namespace objects
} // end namespace enemies

#endif /* INCLUDED_objects_enemies_EnemyMover */ 
