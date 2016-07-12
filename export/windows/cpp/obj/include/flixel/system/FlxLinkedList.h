#ifndef INCLUDED_flixel_system_FlxLinkedList
#define INCLUDED_flixel_system_FlxLinkedList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS2(flixel,_system,FlxLinkedList)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
namespace flixel{
namespace _system{


class HXCPP_CLASS_ATTRIBUTES  FlxLinkedList_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxLinkedList_obj OBJ_;
		FlxLinkedList_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.system.FlxLinkedList")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxLinkedList_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxLinkedList_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::flixel::util::IFlxDestroyable_obj *();
		::String __ToString() const { return HX_HCSTRING("FlxLinkedList","\xc9","\xe6","\x95","\xf0"); }

		static void __boot();
		static int _NUM_CACHED_FLX_LIST;
		static ::flixel::_system::FlxLinkedList _cachedListsHead;
		static ::flixel::_system::FlxLinkedList recycle( );
		static Dynamic recycle_dyn();

		static Void clearCache( );
		static Dynamic clearCache_dyn();

		::flixel::FlxObject object;
		::flixel::_system::FlxLinkedList next;
		bool exists;
		virtual Void destroy( );
		Dynamic destroy_dyn();

};

} // end namespace flixel
} // end namespace system

#endif /* INCLUDED_flixel_system_FlxLinkedList */ 
