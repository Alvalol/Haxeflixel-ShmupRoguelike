#ifndef INCLUDED_objects_Player
#define INCLUDED_objects_Player

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
namespace objects{


class HXCPP_CLASS_ATTRIBUTES  Player_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef Player_obj OBJ_;
		Player_obj();
		Void __construct(Float x,Float y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="objects.Player")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Player_obj > __new(Float x,Float y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Player_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Player","\x81","\x5f","\x4d","\x6c"); }

		static void __boot();
		static int ACCELERATION;
		static int DECELERATION;
		static int MAX_BULLETS;
		static int BULLET_OFFSET;
		int HOR_MOVE_SPEED;
		int VERT_MOVE_SPEED;
		int MAX_HOR_MOVE_SPEED;
		int MAX_VERT_MOVE_SPEED;
		int MAGNET;
		int MAX_MAGNET;
		int MAGNET_FORCE;
		int MAX_MAGNET_FORCE;
		Float RANGE;
		Float MAX_RANGE;
		int HP;
		int MAX_HP;
		int MAX_POSSIBLE_HP;
		Float _cooldown;
		int SHOT_MOD;
		int MAX_SHOTMOD;
		virtual Void update( Float elapsed);

		virtual Void basicChecks( Float elapsed);
		Dynamic basicChecks_dyn();

		virtual Void move( );
		Dynamic move_dyn();

		virtual Void shoot( );
		Dynamic shoot_dyn();

		virtual Void damage( );
		Dynamic damage_dyn();

		virtual Void kill( );

};

} // end namespace objects

#endif /* INCLUDED_objects_Player */ 
