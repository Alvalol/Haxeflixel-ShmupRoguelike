#ifndef INCLUDED_flixel_tweens_misc_VarTween
#define INCLUDED_flixel_tweens_misc_VarTween

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS3(flixel,tweens,misc,VarTween)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
namespace flixel{
namespace tweens{
namespace misc{


class HXCPP_CLASS_ATTRIBUTES  VarTween_obj : public ::flixel::tweens::FlxTween_obj{
	public:
		typedef ::flixel::tweens::FlxTween_obj super;
		typedef VarTween_obj OBJ_;
		VarTween_obj();
		Void __construct(Dynamic Options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.tweens.misc.VarTween")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< VarTween_obj > __new(Dynamic Options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~VarTween_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("VarTween","\x24","\x92","\xe1","\x39"); }

		Dynamic _object;
		Dynamic _properties;
		cpp::ArrayBase _propertyInfos;
		virtual Void destroy( );

		virtual ::flixel::tweens::misc::VarTween tween( Dynamic object,Dynamic properties,Float duration);
		Dynamic tween_dyn();

		virtual Void update( Float elapsed);

		virtual Void initializeVars( );
		Dynamic initializeVars_dyn();

};

} // end namespace flixel
} // end namespace tweens
} // end namespace misc

#endif /* INCLUDED_flixel_tweens_misc_VarTween */ 
