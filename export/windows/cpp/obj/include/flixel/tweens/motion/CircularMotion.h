#ifndef INCLUDED_flixel_tweens_motion_CircularMotion
#define INCLUDED_flixel_tweens_motion_CircularMotion

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_tweens_motion_Motion
#include <flixel/tweens/motion/Motion.h>
#endif
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS3(flixel,tweens,motion,CircularMotion)
HX_DECLARE_CLASS3(flixel,tweens,motion,Motion)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
namespace flixel{
namespace tweens{
namespace motion{


class HXCPP_CLASS_ATTRIBUTES  CircularMotion_obj : public ::flixel::tweens::motion::Motion_obj{
	public:
		typedef ::flixel::tweens::motion::Motion_obj super;
		typedef CircularMotion_obj OBJ_;
		CircularMotion_obj();
		Void __construct(Dynamic Options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.tweens.motion.CircularMotion")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CircularMotion_obj > __new(Dynamic Options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CircularMotion_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("CircularMotion","\x15","\xc6","\x11","\xbd"); }

		Float angle;
		Float _centerX;
		Float _centerY;
		Float _radius;
		Float _angleStart;
		Float _angleFinish;
		virtual ::flixel::tweens::motion::CircularMotion setMotion( Float CenterX,Float CenterY,Float Radius,Float Angle,bool Clockwise,Float DurationOrSpeed,hx::Null< bool >  UseDuration);
		Dynamic setMotion_dyn();

		virtual Void update( Float elapsed);

		virtual Float get_circumference( );
		Dynamic get_circumference_dyn();

};

} // end namespace flixel
} // end namespace tweens
} // end namespace motion

#endif /* INCLUDED_flixel_tweens_motion_CircularMotion */ 
