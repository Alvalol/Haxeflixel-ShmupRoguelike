#ifndef INCLUDED_objects_hazards_HazardHorizontalBlock
#define INCLUDED_objects_hazards_HazardHorizontalBlock

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
HX_DECLARE_CLASS2(objects,hazards,HazardHorizontalBlock)
namespace objects{
namespace hazards{


class HXCPP_CLASS_ATTRIBUTES  HazardHorizontalBlock_obj : public ::objects::hazards::Hazard_obj{
	public:
		typedef ::objects::hazards::Hazard_obj super;
		typedef HazardHorizontalBlock_obj OBJ_;
		HazardHorizontalBlock_obj();
		Void __construct(Float x,Float y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="objects.hazards.HazardHorizontalBlock")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< HazardHorizontalBlock_obj > __new(Float x,Float y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HazardHorizontalBlock_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("HazardHorizontalBlock","\x37","\xa8","\x32","\x2c"); }

		int direction;
		Float MOVE_SPEED;
		virtual Void update( Float elapsed);

		virtual Void collisions( );

		virtual Void move( );
		Dynamic move_dyn();

};

} // end namespace objects
} // end namespace hazards

#endif /* INCLUDED_objects_hazards_HazardHorizontalBlock */ 
