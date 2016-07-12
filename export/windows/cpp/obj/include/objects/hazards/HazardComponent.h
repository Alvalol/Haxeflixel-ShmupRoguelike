#ifndef INCLUDED_objects_hazards_HazardComponent
#define INCLUDED_objects_hazards_HazardComponent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_objects_hazards_Hazard
#include <objects/hazards/Hazard.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(objects,hazards,Hazard)
HX_DECLARE_CLASS2(objects,hazards,HazardComponent)
namespace objects{
namespace hazards{


class HXCPP_CLASS_ATTRIBUTES  HazardComponent_obj : public ::objects::hazards::Hazard_obj{
	public:
		typedef ::objects::hazards::Hazard_obj super;
		typedef HazardComponent_obj OBJ_;
		HazardComponent_obj();
		Void __construct(Float x,Float y,int w,int h);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="objects.hazards.HazardComponent")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< HazardComponent_obj > __new(Float x,Float y,int w,int h);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HazardComponent_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("HazardComponent","\xab","\x44","\xff","\x02"); }

		virtual Void update( Float elapsed);

};

} // end namespace objects
} // end namespace hazards

#endif /* INCLUDED_objects_hazards_HazardComponent */ 
