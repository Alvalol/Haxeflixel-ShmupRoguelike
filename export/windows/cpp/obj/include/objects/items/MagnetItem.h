#ifndef INCLUDED_objects_items_MagnetItem
#define INCLUDED_objects_items_MagnetItem

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
HX_DECLARE_CLASS2(objects,items,MagnetItem)
namespace objects{
namespace items{


class HXCPP_CLASS_ATTRIBUTES  MagnetItem_obj : public ::objects::items::Item_obj{
	public:
		typedef ::objects::items::Item_obj super;
		typedef MagnetItem_obj OBJ_;
		MagnetItem_obj();
		Void __construct(Float x,Float y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="objects.items.MagnetItem")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< MagnetItem_obj > __new(Float x,Float y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MagnetItem_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("MagnetItem","\xfd","\x75","\x83","\x02"); }

		virtual Void update( Float elapsed);

		virtual Void interact( ::objects::Player player);

};

} // end namespace objects
} // end namespace items

#endif /* INCLUDED_objects_items_MagnetItem */ 
