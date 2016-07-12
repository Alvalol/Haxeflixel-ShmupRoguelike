#ifndef INCLUDED_flixel_tweens_FlxTween
#define INCLUDED_flixel_tweens_FlxTween

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS2(flixel,tweens,FlxTweenManager)
HX_DECLARE_CLASS3(flixel,tweens,misc,AngleTween)
HX_DECLARE_CLASS3(flixel,tweens,misc,ColorTween)
HX_DECLARE_CLASS3(flixel,tweens,misc,NumTween)
HX_DECLARE_CLASS3(flixel,tweens,misc,VarTween)
HX_DECLARE_CLASS3(flixel,tweens,motion,CircularMotion)
HX_DECLARE_CLASS3(flixel,tweens,motion,CubicMotion)
HX_DECLARE_CLASS3(flixel,tweens,motion,LinearMotion)
HX_DECLARE_CLASS3(flixel,tweens,motion,LinearPath)
HX_DECLARE_CLASS3(flixel,tweens,motion,Motion)
HX_DECLARE_CLASS3(flixel,tweens,motion,QuadMotion)
HX_DECLARE_CLASS3(flixel,tweens,motion,QuadPath)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
namespace flixel{
namespace tweens{


class HXCPP_CLASS_ATTRIBUTES  FlxTween_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxTween_obj OBJ_;
		FlxTween_obj();
		Void __construct(Dynamic Options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.tweens.FlxTween")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxTween_obj > __new(Dynamic Options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxTween_obj();

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
		::String __ToString() const { return HX_HCSTRING("FlxTween","\xb9","\xb4","\x4a","\xd6"); }

		static void __boot();
		static int PERSIST;
		static int LOOPING;
		static int PINGPONG;
		static int ONESHOT;
		static int BACKWARD;
		static ::flixel::tweens::FlxTweenManager manager;
		static ::flixel::tweens::misc::VarTween tween( Dynamic Object,Dynamic Values,hx::Null< Float >  Duration,Dynamic Options);
		static Dynamic tween_dyn();

		static ::flixel::tweens::misc::NumTween num( Float FromValue,Float ToValue,hx::Null< Float >  Duration,Dynamic Options,Dynamic TweenFunction);
		static Dynamic num_dyn();

		static ::flixel::tweens::misc::AngleTween angle( ::flixel::FlxSprite Sprite,Float FromAngle,Float ToAngle,hx::Null< Float >  Duration,Dynamic Options);
		static Dynamic angle_dyn();

		static ::flixel::tweens::misc::ColorTween color( ::flixel::FlxSprite Sprite,hx::Null< Float >  Duration,int FromColor,int ToColor,Dynamic Options);
		static Dynamic color_dyn();

		static ::flixel::tweens::motion::LinearMotion linearMotion( ::flixel::FlxObject Object,Float FromX,Float FromY,Float ToX,Float ToY,hx::Null< Float >  DurationOrSpeed,hx::Null< bool >  UseDuration,Dynamic Options);
		static Dynamic linearMotion_dyn();

		static ::flixel::tweens::motion::QuadMotion quadMotion( ::flixel::FlxObject Object,Float FromX,Float FromY,Float ControlX,Float ControlY,Float ToX,Float ToY,hx::Null< Float >  DurationOrSpeed,hx::Null< bool >  UseDuration,Dynamic Options);
		static Dynamic quadMotion_dyn();

		static ::flixel::tweens::motion::CubicMotion cubicMotion( ::flixel::FlxObject Object,Float FromX,Float FromY,Float aX,Float aY,Float bX,Float bY,Float ToX,Float ToY,hx::Null< Float >  Duration,Dynamic Options);
		static Dynamic cubicMotion_dyn();

		static ::flixel::tweens::motion::CircularMotion circularMotion( ::flixel::FlxObject Object,Float CenterX,Float CenterY,Float Radius,Float Angle,bool Clockwise,hx::Null< Float >  DurationOrSpeed,hx::Null< bool >  UseDuration,Dynamic Options);
		static Dynamic circularMotion_dyn();

		static ::flixel::tweens::motion::LinearPath linearPath( ::flixel::FlxObject Object,Array< ::Dynamic > Points,hx::Null< Float >  DurationOrSpeed,hx::Null< bool >  UseDuration,Dynamic Options);
		static Dynamic linearPath_dyn();

		static ::flixel::tweens::motion::QuadPath quadPath( ::flixel::FlxObject Object,Array< ::Dynamic > Points,hx::Null< Float >  DurationOrSpeed,hx::Null< bool >  UseDuration,Dynamic Options);
		static Dynamic quadPath_dyn();

		bool active;
		Float duration;
		Dynamic ease;
		Dynamic &ease_dyn() { return ease;}
		Dynamic onStart;
		Dynamic &onStart_dyn() { return onStart;}
		Dynamic onUpdate;
		Dynamic &onUpdate_dyn() { return onUpdate;}
		Dynamic onComplete;
		Dynamic &onComplete_dyn() { return onComplete;}
		int type;
		bool finished;
		Float scale;
		bool backward;
		int executions;
		Float startDelay;
		Float loopDelay;
		Float _secondsSinceStart;
		Float _delayToUse;
		bool _running;
		bool _waitingForRestart;
		Array< ::Dynamic > _chainedTweens;
		virtual Dynamic resolveTweenOptions( Dynamic Options);
		Dynamic resolveTweenOptions_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual ::flixel::tweens::FlxTween then( ::flixel::tweens::FlxTween tween);
		Dynamic then_dyn();

		virtual ::flixel::tweens::FlxTween wait( Float delay);
		Dynamic wait_dyn();

		virtual ::flixel::tweens::FlxTween addChainedTween( ::flixel::tweens::FlxTween tween);
		Dynamic addChainedTween_dyn();

		virtual Void update( Float elapsed);
		Dynamic update_dyn();

		virtual ::flixel::tweens::FlxTween start( );
		Dynamic start_dyn();

		virtual Void cancel( );
		Dynamic cancel_dyn();

		virtual Void finish( );
		Dynamic finish_dyn();

		virtual Void onEnd( );
		Dynamic onEnd_dyn();

		virtual Void setVarsOnEnd( );
		Dynamic setVarsOnEnd_dyn();

		virtual Void processTweenChain( );
		Dynamic processTweenChain_dyn();

		virtual Void doNextTween( ::flixel::tweens::FlxTween tween);
		Dynamic doNextTween_dyn();

		virtual Void restart( );
		Dynamic restart_dyn();

		virtual ::flixel::tweens::FlxTween setDelays( Dynamic StartDelay,Dynamic LoopDelay);
		Dynamic setDelays_dyn();

		virtual Float set_startDelay( Float value);
		Dynamic set_startDelay_dyn();

		virtual Float set_loopDelay( Dynamic value);
		Dynamic set_loopDelay_dyn();

		virtual Float get_percent( );
		Dynamic get_percent_dyn();

		virtual Float set_percent( Float value);
		Dynamic set_percent_dyn();

		virtual int set_type( int value);
		Dynamic set_type_dyn();

		virtual bool set_active( bool active);
		Dynamic set_active_dyn();

};

} // end namespace flixel
} // end namespace tweens

#endif /* INCLUDED_flixel_tweens_FlxTween */ 
