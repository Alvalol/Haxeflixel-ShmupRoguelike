#ifndef INCLUDED_objects_items_SpeedItem
#define INCLUDED_objects_items_SpeedItem

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_objects_items_Item
#include <objects/items/Item.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(objects,Player)
HX_DECLARE_CLASS2(objects,items,Item)
HX_DECLARE_CLASS2(objects,items,SpeedItem)
namespace objects{
namespace items{


class HXCPP_CLASS_ATTRIBUTES  SpeedItem_obj : public ::objects::items::Item_obj{
	public:
		typedef ::objects::items::Item_obj super;
		typedef SpeedItem_obj OBJ_;
		SpeedItem_obj();
		Void __construct(Float x,Float y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="objects.items.SpeedItem")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< SpeedItem_obj > __new(Float x,Float y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SpeedItem_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("SpeedItem","\x1a","\x38","\x05","\xf9"); }

		virtual Void interact( ::objects::Player player);

};

} // end namespace objects
} // end namespace items

#endif /* INCLUDED_objects_items_SpeedItem */ 
