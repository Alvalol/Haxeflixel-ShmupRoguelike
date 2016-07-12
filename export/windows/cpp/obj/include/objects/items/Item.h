#ifndef INCLUDED_objects_items_Item
#define INCLUDED_objects_items_Item

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,effects,FlxFlicker)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(objects,Player)
HX_DECLARE_CLASS2(objects,items,Item)
namespace objects{
namespace items{


class HXCPP_CLASS_ATTRIBUTES  Item_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef Item_obj OBJ_;
		Item_obj();
		Void __construct(Float x,Float y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="objects.items.Item")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Item_obj > __new(Float x,Float y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Item_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Item","\x33","\xf1","\x98","\x30"); }

		bool _appeared;
		int lifespan;
		virtual Void update( Float elapsed);

		virtual Void basicChecks( );
		Dynamic basicChecks_dyn();

		virtual Void onTimedOut( ::flixel::effects::FlxFlicker t);
		Dynamic onTimedOut_dyn();

		virtual Void kill( );

		virtual Void interact( ::objects::Player player);
		Dynamic interact_dyn();

};

} // end namespace objects
} // end namespace items

#endif /* INCLUDED_objects_items_Item */ 
