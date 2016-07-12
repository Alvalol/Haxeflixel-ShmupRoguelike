#ifndef INCLUDED_objects_enemies_Enemy
#define INCLUDED_objects_enemies_Enemy

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
HX_DECLARE_CLASS2(objects,enemies,Enemy)
HX_DECLARE_CLASS2(objects,items,Item)
namespace objects{
namespace enemies{


class HXCPP_CLASS_ATTRIBUTES  Enemy_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef Enemy_obj OBJ_;
		Enemy_obj();
		Void __construct(Float x,Float y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="objects.enemies.Enemy")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Enemy_obj > __new(Float x,Float y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Enemy_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Enemy","\x28","\x82","\xa8","\x03"); }

		int HP;
		bool _appeared;
		Array< ::Dynamic > drops;
		virtual Void update( Float elapsed);

		virtual Void basicChecks( );
		Dynamic basicChecks_dyn();

		virtual Void collisions( );
		Dynamic collisions_dyn();

		virtual Void interact( ::objects::Player player);
		Dynamic interact_dyn();

		virtual Void damage( );
		Dynamic damage_dyn();

		virtual Void dropItem( Array< ::Dynamic > list);
		Dynamic dropItem_dyn();

		virtual Void kill( );

};

} // end namespace objects
} // end namespace enemies

#endif /* INCLUDED_objects_enemies_Enemy */ 
