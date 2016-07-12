#ifndef INCLUDED_flixel_input_FlxInput
#define INCLUDED_flixel_input_FlxInput

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
HX_DECLARE_CLASS2(flixel,input,FlxInput)
HX_DECLARE_CLASS2(flixel,input,IFlxInput)
namespace flixel{
namespace input{


class HXCPP_CLASS_ATTRIBUTES  FlxInput_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxInput_obj OBJ_;
		FlxInput_obj();
		Void __construct(Dynamic ID);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.input.FlxInput")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxInput_obj > __new(Dynamic ID);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxInput_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::flixel::input::IFlxInput_obj *();
		::String __ToString() const { return HX_HCSTRING("FlxInput","\x58","\xce","\xf7","\x7a"); }

		Dynamic ID;
		int current;
		int last;
		virtual Void press( );
		Dynamic press_dyn();

		virtual Void release( );
		Dynamic release_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

		virtual bool hasState( int state);
		Dynamic hasState_dyn();

		virtual bool get_justReleased( );
		Dynamic get_justReleased_dyn();

		virtual bool get_released( );
		Dynamic get_released_dyn();

		virtual bool get_pressed( );
		Dynamic get_pressed_dyn();

		virtual bool get_justPressed( );
		Dynamic get_justPressed_dyn();

};

} // end namespace flixel
} // end namespace input

#endif /* INCLUDED_flixel_input_FlxInput */ 
