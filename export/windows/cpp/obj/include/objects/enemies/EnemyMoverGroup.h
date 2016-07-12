#ifndef INCLUDED_objects_enemies_EnemyMoverGroup
#define INCLUDED_objects_enemies_EnemyMoverGroup

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(objects,enemies,EnemyMoverGroup)
namespace objects{
namespace enemies{


class HXCPP_CLASS_ATTRIBUTES  EnemyMoverGroup_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef EnemyMoverGroup_obj OBJ_;
		EnemyMoverGroup_obj();
		Void __construct(Float x,Float y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="objects.enemies.EnemyMoverGroup")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< EnemyMoverGroup_obj > __new(Float x,Float y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EnemyMoverGroup_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("EnemyMoverGroup","\x86","\x13","\xfc","\x0e"); }

		static void __boot();
		static int sepMod;
		::flixel::group::FlxTypedGroup chainedGroup;
		int chainedGroupSize;
		int sep;
		Array< ::Dynamic > patterns;
		virtual Void makeGroup( Float x,Float y);
		Dynamic makeGroup_dyn();

};

} // end namespace objects
} // end namespace enemies

#endif /* INCLUDED_objects_enemies_EnemyMoverGroup */ 
