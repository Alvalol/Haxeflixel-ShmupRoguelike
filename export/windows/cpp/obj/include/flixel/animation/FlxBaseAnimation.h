#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#define INCLUDED_flixel_animation_FlxBaseAnimation

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS2(flixel,animation,FlxAnimationController)
HX_DECLARE_CLASS2(flixel,animation,FlxBaseAnimation)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
namespace flixel{
namespace animation{


class HXCPP_CLASS_ATTRIBUTES  FlxBaseAnimation_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxBaseAnimation_obj OBJ_;
		FlxBaseAnimation_obj();
		Void __construct(::flixel::animation::FlxAnimationController Parent,::String Name);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.animation.FlxBaseAnimation")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxBaseAnimation_obj > __new(::flixel::animation::FlxAnimationController Parent,::String Name);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxBaseAnimation_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::flixel::util::IFlxDestroyable_obj *();
		::String __ToString() const { return HX_HCSTRING("FlxBaseAnimation","\x01","\xe5","\x0d","\x26"); }

		::flixel::animation::FlxAnimationController parent;
		::String name;
		int curIndex;
		virtual int set_curIndex( int Value);
		Dynamic set_curIndex_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void update( Float elapsed);
		Dynamic update_dyn();

		virtual ::flixel::animation::FlxBaseAnimation clone( ::flixel::animation::FlxAnimationController Parent);
		Dynamic clone_dyn();

};

} // end namespace flixel
} // end namespace animation

#endif /* INCLUDED_flixel_animation_FlxBaseAnimation */ 
