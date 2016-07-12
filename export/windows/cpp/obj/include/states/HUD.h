#ifndef INCLUDED_states_HUD
#define INCLUDED_states_HUD

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(states,HUD)
namespace states{


class HXCPP_CLASS_ATTRIBUTES  HUD_obj : public ::flixel::group::FlxTypedSpriteGroup_obj{
	public:
		typedef ::flixel::group::FlxTypedSpriteGroup_obj super;
		typedef HUD_obj OBJ_;
		HUD_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="states.HUD")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< HUD_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HUD_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("HUD","\x97","\xec","\x36","\x00"); }

		static void __boot();
		static int OFFSET;
		::flixel::text::FlxText _textScore;
		::flixel::text::FlxText _currentHealth;
		virtual Void update( Float elapsed);

		virtual Void setCamera( ::flixel::FlxCamera cam);
		Dynamic setCamera_dyn();

};

} // end namespace states

#endif /* INCLUDED_states_HUD */ 
