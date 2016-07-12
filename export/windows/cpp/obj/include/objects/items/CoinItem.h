#ifndef INCLUDED_objects_items_CoinItem
#define INCLUDED_objects_items_CoinItem

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_objects_items_Item
#include <objects/items/Item.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,effects,FlxTrail)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(objects,Player)
HX_DECLARE_CLASS2(objects,items,CoinItem)
HX_DECLARE_CLASS2(objects,items,Item)
namespace objects{
namespace items{


class HXCPP_CLASS_ATTRIBUTES  CoinItem_obj : public ::objects::items::Item_obj{
	public:
		typedef ::objects::items::Item_obj super;
		typedef CoinItem_obj OBJ_;
		CoinItem_obj();
		Void __construct(Float x,Float y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="objects.items.CoinItem")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CoinItem_obj > __new(Float x,Float y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CoinItem_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("CoinItem","\x64","\xff","\x27","\x82"); }

		bool magnetized;
		::flixel::addons::effects::FlxTrail bTrail;
		int rotspeed;
		virtual Void update( Float elapsed);

		virtual Void magnetize( );
		Dynamic magnetize_dyn();

		virtual Void collisions( );
		Dynamic collisions_dyn();

		virtual Void move( );
		Dynamic move_dyn();

		virtual Void noOverlapping( );
		Dynamic noOverlapping_dyn();

		virtual Void kill( );

		virtual Void interact( ::objects::Player player);

};

} // end namespace objects
} // end namespace items

#endif /* INCLUDED_objects_items_CoinItem */ 
