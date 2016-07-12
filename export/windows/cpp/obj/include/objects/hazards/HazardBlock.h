#ifndef INCLUDED_objects_hazards_HazardBlock
#define INCLUDED_objects_hazards_HazardBlock

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
HX_DECLARE_CLASS1(objects,Player)
HX_DECLARE_CLASS2(objects,hazards,Hazard)
HX_DECLARE_CLASS2(objects,hazards,HazardBlock)
namespace objects{
namespace hazards{


class HXCPP_CLASS_ATTRIBUTES  HazardBlock_obj : public ::objects::hazards::Hazard_obj{
	public:
		typedef ::objects::hazards::Hazard_obj super;
		typedef HazardBlock_obj OBJ_;
		HazardBlock_obj();
		Void __construct(Float x,Float y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="objects.hazards.HazardBlock")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< HazardBlock_obj > __new(Float x,Float y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HazardBlock_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("HazardBlock","\x3b","\xba","\x57","\x16"); }

		virtual Void interact( ::objects::Player player);

		virtual Void kill( );

};

} // end namespace objects
} // end namespace hazards

#endif /* INCLUDED_objects_hazards_HazardBlock */ 
