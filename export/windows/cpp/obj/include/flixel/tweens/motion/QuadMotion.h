#ifndef INCLUDED_flixel_tweens_motion_QuadMotion
#define INCLUDED_flixel_tweens_motion_QuadMotion

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_tweens_motion_Motion
#include <flixel/tweens/motion/Motion.h>
#endif
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS3(flixel,tweens,motion,Motion)
HX_DECLARE_CLASS3(flixel,tweens,motion,QuadMotion)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
namespace flixel{
namespace tweens{
namespace motion{


class HXCPP_CLASS_ATTRIBUTES  QuadMotion_obj : public ::flixel::tweens::motion::Motion_obj{
	public:
		typedef ::flixel::tweens::motion::Motion_obj super;
		typedef QuadMotion_obj OBJ_;
		QuadMotion_obj();
		Void __construct(Dynamic Options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.tweens.motion.QuadMotion")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< QuadMotion_obj > __new(Dynamic Options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~QuadMotion_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("QuadMotion","\x7d","\x86","\x56","\x2a"); }

		Float _distance;
		Float _fromX;
		Float _fromY;
		Float _toX;
		Float _toY;
		Float _controlX;
		Float _controlY;
		virtual ::flixel::tweens::motion::QuadMotion setMotion( Float FromX,Float FromY,Float ControlX,Float ControlY,Float ToX,Float ToY,Float DurationOrSpeed,hx::Null< bool >  UseDuration);
		Dynamic setMotion_dyn();

		virtual Void update( Float elapsed);

		virtual Float get_distance( );
		Dynamic get_distance_dyn();

};

} // end namespace flixel
} // end namespace tweens
} // end namespace motion

#endif /* INCLUDED_flixel_tweens_motion_QuadMotion */ 
