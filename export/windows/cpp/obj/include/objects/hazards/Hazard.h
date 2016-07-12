#ifndef INCLUDED_objects_hazards_Hazard
#define INCLUDED_objects_hazards_Hazard

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
HX_DECLARE_CLASS2(objects,hazards,Hazard)
namespace objects{
namespace hazards{


class HXCPP_CLASS_ATTRIBUTES  Hazard_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef Hazard_obj OBJ_;
		Hazard_obj();
		Void __construct(Float x,Float y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="objects.hazards.Hazard")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Hazard_obj > __new(Float x,Float y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Hazard_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Hazard","\xb2","\x45","\x7e","\xf4"); }

		bool _appeared;
		virtual Void update( Float elapsed);

		virtual Void collisions( );
		Dynamic collisions_dyn();

		virtual Void basicChecks( );
		Dynamic basicChecks_dyn();

		virtual Void interact( ::objects::Player player);
		Dynamic interact_dyn();

		virtual Void kill( );

};

} // end namespace objects
} // end namespace hazards

#endif /* INCLUDED_objects_hazards_Hazard */ 
