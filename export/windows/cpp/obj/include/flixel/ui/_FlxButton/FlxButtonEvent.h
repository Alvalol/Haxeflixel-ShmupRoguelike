#ifndef INCLUDED_flixel_ui__FlxButton_FlxButtonEvent
#define INCLUDED_flixel_ui__FlxButton_FlxButtonEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS2(flixel,_system,FlxSound)
HX_DECLARE_CLASS3(flixel,ui,_FlxButton,FlxButtonEvent)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
namespace flixel{
namespace ui{
namespace _FlxButton{


class HXCPP_CLASS_ATTRIBUTES  FlxButtonEvent_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxButtonEvent_obj OBJ_;
		FlxButtonEvent_obj();
		Void __construct(Dynamic Callback,::flixel::_system::FlxSound sound);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.ui._FlxButton.FlxButtonEvent")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxButtonEvent_obj > __new(Dynamic Callback,::flixel::_system::FlxSound sound);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxButtonEvent_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::flixel::util::IFlxDestroyable_obj *();
		::String __ToString() const { return HX_HCSTRING("FlxButtonEvent","\x96","\x41","\xf7","\x21"); }

		Dynamic callback;
		Dynamic &callback_dyn() { return callback;}
		::flixel::_system::FlxSound sound;
		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void fire( );
		Dynamic fire_dyn();

};

} // end namespace flixel
} // end namespace ui
} // end namespace _FlxButton

#endif /* INCLUDED_flixel_ui__FlxButton_FlxButtonEvent */ 
