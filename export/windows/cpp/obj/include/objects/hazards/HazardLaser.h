#ifndef INCLUDED_objects_hazards_HazardLaser
#define INCLUDED_objects_hazards_HazardLaser

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
HX_DECLARE_CLASS2(objects,hazards,HazardLaser)
namespace objects{
namespace hazards{


class HXCPP_CLASS_ATTRIBUTES  HazardLaser_obj : public ::objects::hazards::Hazard_obj{
	public:
		typedef ::objects::hazards::Hazard_obj super;
		typedef HazardLaser_obj OBJ_;
		HazardLaser_obj();
		Void __construct(Float x,Float y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="objects.hazards.HazardLaser")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< HazardLaser_obj > __new(Float x,Float y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HazardLaser_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("HazardLaser","\x39","\x39","\x17","\xd1"); }

		int counter;
		int maxCounter;
		bool tactive;
		virtual Void update( Float elapsed);

		virtual Void switchingStates( );
		Dynamic switchingStates_dyn();

		virtual Void interact( ::objects::Player player);

		virtual Void appear( );
		Dynamic appear_dyn();

};

} // end namespace objects
} // end namespace hazards

#endif /* INCLUDED_objects_hazards_HazardLaser */ 
