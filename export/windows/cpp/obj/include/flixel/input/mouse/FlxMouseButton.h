#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#define INCLUDED_flixel_input_mouse_FlxMouseButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS2(flixel,input,FlxInput)
HX_DECLARE_CLASS2(flixel,input,IFlxInput)
HX_DECLARE_CLASS3(flixel,input,mouse,FlxMouseButton)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
namespace flixel{
namespace input{
namespace mouse{


class HXCPP_CLASS_ATTRIBUTES  FlxMouseButton_obj : public ::flixel::input::FlxInput_obj{
	public:
		typedef ::flixel::input::FlxInput_obj super;
		typedef FlxMouseButton_obj OBJ_;
		FlxMouseButton_obj();
		Void __construct(int ID);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.input.mouse.FlxMouseButton")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxMouseButton_obj > __new(int ID);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxMouseButton_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::flixel::util::IFlxDestroyable_obj *();
		::String __ToString() const { return HX_HCSTRING("FlxMouseButton","\xc5","\x4e","\xf0","\x2d"); }

		static ::flixel::input::mouse::FlxMouseButton getByID( int id);
		static Dynamic getByID_dyn();

		::flixel::math::FlxPoint justPressedPosition;
		Float justPressedTimeInTicks;
		virtual Void update( );

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void onDown( Dynamic _);
		Dynamic onDown_dyn();

		virtual Void onUp( Dynamic _);
		Dynamic onUp_dyn();

};

} // end namespace flixel
} // end namespace input
} // end namespace mouse

#endif /* INCLUDED_flixel_input_mouse_FlxMouseButton */ 
