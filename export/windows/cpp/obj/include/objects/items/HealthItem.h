#ifndef INCLUDED_objects_items_HealthItem
#define INCLUDED_objects_items_HealthItem

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
HX_DECLARE_CLASS2(objects,items,HealthItem)
HX_DECLARE_CLASS2(objects,items,Item)
namespace objects{
namespace items{


class HXCPP_CLASS_ATTRIBUTES  HealthItem_obj : public ::objects::items::Item_obj{
	public:
		typedef ::objects::items::Item_obj super;
		typedef HealthItem_obj OBJ_;
		HealthItem_obj();
		Void __construct(Float x,Float y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="objects.items.HealthItem")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< HealthItem_obj > __new(Float x,Float y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HealthItem_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("HealthItem","\xef","\x9b","\x06","\xf9"); }

		virtual Void interact( ::objects::Player player);

};

} // end namespace objects
} // end namespace items

#endif /* INCLUDED_objects_items_HealthItem */ 
