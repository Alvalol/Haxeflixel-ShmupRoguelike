#ifndef INCLUDED_objects_gamesys_Scroller
#define INCLUDED_objects_gamesys_Scroller

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
HX_DECLARE_CLASS2(objects,gamesys,Scroller)
namespace objects{
namespace gamesys{


class HXCPP_CLASS_ATTRIBUTES  Scroller_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef Scroller_obj OBJ_;
		Scroller_obj();
		Void __construct(Float x,Float y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="objects.gamesys.Scroller")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Scroller_obj > __new(Float x,Float y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Scroller_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Scroller","\xda","\xc9","\x06","\x66"); }

		static void __boot();
		static int ACCELERATION;
		int MOVE_SPEED;
		virtual Void update( Float elapsed);

};

} // end namespace objects
} // end namespace gamesys

#endif /* INCLUDED_objects_gamesys_Scroller */ 
