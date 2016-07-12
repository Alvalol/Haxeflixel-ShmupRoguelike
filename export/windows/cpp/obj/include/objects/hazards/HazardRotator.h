#ifndef INCLUDED_objects_hazards_HazardRotator
#define INCLUDED_objects_hazards_HazardRotator

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
HX_DECLARE_CLASS2(objects,hazards,Hazard)
HX_DECLARE_CLASS2(objects,hazards,HazardComponent)
HX_DECLARE_CLASS2(objects,hazards,HazardRotator)
namespace objects{
namespace hazards{


class HXCPP_CLASS_ATTRIBUTES  HazardRotator_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef HazardRotator_obj OBJ_;
		HazardRotator_obj();
		Void __construct(Float x,Float y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="objects.hazards.HazardRotator")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< HazardRotator_obj > __new(Float x,Float y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HazardRotator_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("HazardRotator","\xdb","\x2e","\x86","\xd3"); }

		int rotspeed;
		::objects::hazards::HazardComponent comp1;
		::objects::hazards::HazardComponent comp2;
		::flixel::group::FlxTypedGroup compGroup;
		virtual Void update( Float elapsed);

};

} // end namespace objects
} // end namespace hazards

#endif /* INCLUDED_objects_hazards_HazardRotator */ 
