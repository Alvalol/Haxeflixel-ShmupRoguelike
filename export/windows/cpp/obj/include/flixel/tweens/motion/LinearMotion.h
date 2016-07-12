#ifndef INCLUDED_flixel_tweens_motion_LinearMotion
#define INCLUDED_flixel_tweens_motion_LinearMotion

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_tweens_motion_Motion
#include <flixel/tweens/motion/Motion.h>
#endif
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS3(flixel,tweens,motion,LinearMotion)
HX_DECLARE_CLASS3(flixel,tweens,motion,Motion)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
namespace flixel{
namespace tweens{
namespace motion{


class HXCPP_CLASS_ATTRIBUTES  LinearMotion_obj : public ::flixel::tweens::motion::Motion_obj{
	public:
		typedef ::flixel::tweens::motion::Motion_obj super;
		typedef LinearMotion_obj OBJ_;
		LinearMotion_obj();
		Void __construct(Dynamic Options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.tweens.motion.LinearMotion")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< LinearMotion_obj > __new(Dynamic Options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LinearMotion_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("LinearMotion","\x1b","\x92","\xea","\x69"); }

		Float _fromX;
		Float _fromY;
		Float _moveX;
		Float _moveY;
		Float _distance;
		virtual ::flixel::tweens::motion::LinearMotion setMotion( Float FromX,Float FromY,Float ToX,Float ToY,Float DurationOrSpeed,hx::Null< bool >  UseDuration);
		Dynamic setMotion_dyn();

		virtual Void update( Float elapsed);

		virtual Float get_distance( );
		Dynamic get_distance_dyn();

};

} // end namespace flixel
} // end namespace tweens
} // end namespace motion

#endif /* INCLUDED_flixel_tweens_motion_LinearMotion */ 
