#ifndef INCLUDED_flixel_tweens_misc_ColorTween
#define INCLUDED_flixel_tweens_misc_ColorTween

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS3(flixel,tweens,misc,ColorTween)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
namespace flixel{
namespace tweens{
namespace misc{


class HXCPP_CLASS_ATTRIBUTES  ColorTween_obj : public ::flixel::tweens::FlxTween_obj{
	public:
		typedef ::flixel::tweens::FlxTween_obj super;
		typedef ColorTween_obj OBJ_;
		ColorTween_obj();
		Void __construct(Dynamic Options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.tweens.misc.ColorTween")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ColorTween_obj > __new(Dynamic Options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ColorTween_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ColorTween","\x28","\xc6","\x8d","\x34"); }

		int color;
		int startColor;
		int endColor;
		::flixel::FlxSprite sprite;
		virtual Void destroy( );

		virtual ::flixel::tweens::misc::ColorTween tween( Float Duration,int FromColor,int ToColor,::flixel::FlxSprite Sprite);
		Dynamic tween_dyn();

		virtual Void update( Float elapsed);

};

} // end namespace flixel
} // end namespace tweens
} // end namespace misc

#endif /* INCLUDED_flixel_tweens_misc_ColorTween */ 
