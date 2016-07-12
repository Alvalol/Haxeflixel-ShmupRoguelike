#ifndef INCLUDED_objects_enemies_EnemyLeft
#define INCLUDED_objects_enemies_EnemyLeft

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
HX_DECLARE_CLASS2(objects,enemies,EnemyLeft)
namespace objects{
namespace enemies{


class HXCPP_CLASS_ATTRIBUTES  EnemyLeft_obj : public ::objects::enemies::Enemy_obj{
	public:
		typedef ::objects::enemies::Enemy_obj super;
		typedef EnemyLeft_obj OBJ_;
		EnemyLeft_obj();
		Void __construct(Float x,Float y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="objects.enemies.EnemyLeft")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< EnemyLeft_obj > __new(Float x,Float y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EnemyLeft_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("EnemyLeft","\x4f","\xea","\xa1","\x49"); }

		int MOVE_SPEED;
		Float sinfact;
		int factor;
		bool updatedPosition;
		virtual Void update( Float elapsed);

		virtual Void reposition( );
		Dynamic reposition_dyn();

		virtual Void kill( );

		virtual Void move( );
		Dynamic move_dyn();

};

} // end namespace objects
} // end namespace enemies

#endif /* INCLUDED_objects_enemies_EnemyLeft */ 
