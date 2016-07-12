#ifndef INCLUDED_objects_PlayerBullet
#define INCLUDED_objects_PlayerBullet

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
HX_DECLARE_CLASS1(objects,PlayerBullet)
namespace objects{


class HXCPP_CLASS_ATTRIBUTES  PlayerBullet_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef PlayerBullet_obj OBJ_;
		PlayerBullet_obj();
		Void __construct(Float x,Float y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="objects.PlayerBullet")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< PlayerBullet_obj > __new(Float x,Float y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PlayerBullet_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("PlayerBullet","\xa3","\x7c","\x94","\x98"); }

		static void __boot();
		static int MOVE_SPEED;
		virtual Void update( Float elapsed);

		virtual Void collisions( );
		Dynamic collisions_dyn();

		virtual Void move( );
		Dynamic move_dyn();

		virtual Void revive( );

		virtual Void createNoHit( );
		Dynamic createNoHit_dyn();

		virtual Void kill( );

};

} // end namespace objects

#endif /* INCLUDED_objects_PlayerBullet */ 
