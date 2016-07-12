#ifndef INCLUDED_objects_effects_Explosion
#define INCLUDED_objects_effects_Explosion

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
HX_DECLARE_CLASS2(objects,effects,Explosion)
namespace objects{
namespace effects{


class HXCPP_CLASS_ATTRIBUTES  Explosion_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef Explosion_obj OBJ_;
		Explosion_obj();
		Void __construct(Float x,Float y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="objects.effects.Explosion")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Explosion_obj > __new(Float x,Float y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Explosion_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Explosion","\x75","\xb3","\x73","\x40"); }

		Float escale;
		virtual Void update( Float elapsed);

};

} // end namespace objects
} // end namespace effects

#endif /* INCLUDED_objects_effects_Explosion */ 
