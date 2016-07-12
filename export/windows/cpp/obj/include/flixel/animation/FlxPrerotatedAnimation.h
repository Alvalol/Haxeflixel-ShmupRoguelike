#ifndef INCLUDED_flixel_animation_FlxPrerotatedAnimation
#define INCLUDED_flixel_animation_FlxPrerotatedAnimation

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
HX_DECLARE_CLASS2(flixel,animation,FlxAnimationController)
HX_DECLARE_CLASS2(flixel,animation,FlxBaseAnimation)
HX_DECLARE_CLASS2(flixel,animation,FlxPrerotatedAnimation)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
namespace flixel{
namespace animation{


class HXCPP_CLASS_ATTRIBUTES  FlxPrerotatedAnimation_obj : public ::flixel::animation::FlxBaseAnimation_obj{
	public:
		typedef ::flixel::animation::FlxBaseAnimation_obj super;
		typedef FlxPrerotatedAnimation_obj OBJ_;
		FlxPrerotatedAnimation_obj();
		Void __construct(::flixel::animation::FlxAnimationController Parent,Float Baked);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.animation.FlxPrerotatedAnimation")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxPrerotatedAnimation_obj > __new(::flixel::animation::FlxAnimationController Parent,Float Baked);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxPrerotatedAnimation_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("FlxPrerotatedAnimation","\x0c","\xd5","\x4f","\xad"); }

		static void __boot();
		static ::String PREROTATED;
		int rotations;
		Float baked;
		Float angle;
		virtual Float set_angle( Float Value);
		Dynamic set_angle_dyn();

		virtual int set_curIndex( int Value);

		virtual ::flixel::animation::FlxBaseAnimation clone( ::flixel::animation::FlxAnimationController Parent);

};

} // end namespace flixel
} // end namespace animation

#endif /* INCLUDED_flixel_animation_FlxPrerotatedAnimation */ 
