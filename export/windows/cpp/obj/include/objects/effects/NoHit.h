#ifndef INCLUDED_objects_effects_NoHit
#define INCLUDED_objects_effects_NoHit

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
HX_DECLARE_CLASS2(objects,effects,NoHit)
namespace objects{
namespace effects{


class HXCPP_CLASS_ATTRIBUTES  NoHit_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef NoHit_obj OBJ_;
		NoHit_obj();
		Void __construct(Float x,Float y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="objects.effects.NoHit")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< NoHit_obj > __new(Float x,Float y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NoHit_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("NoHit","\x72","\xec","\xd6","\x32"); }

		virtual Void update( Float elapsed);

};

} // end namespace objects
} // end namespace effects

#endif /* INCLUDED_objects_effects_NoHit */ 
