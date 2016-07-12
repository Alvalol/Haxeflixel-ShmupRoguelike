#ifndef INCLUDED_flixel_input_gamepad_FlxGamepad
#define INCLUDED_flixel_input_gamepad_FlxGamepad

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS2(flixel,input,FlxInput)
HX_DECLARE_CLASS2(flixel,input,IFlxInput)
HX_DECLARE_CLASS2(flixel,input,IFlxInputManager)
HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepad)
HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadAnalogStick)
HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadAttachment)
HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadButton)
HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadDeadZoneMode)
HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadManager)
HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadModel)
HX_DECLARE_CLASS4(flixel,input,gamepad,lists,FlxBaseGamepadList)
HX_DECLARE_CLASS4(flixel,input,gamepad,lists,FlxGamepadAnalogList)
HX_DECLARE_CLASS4(flixel,input,gamepad,lists,FlxGamepadButtonList)
HX_DECLARE_CLASS4(flixel,input,gamepad,lists,FlxGamepadMotionValueList)
HX_DECLARE_CLASS4(flixel,input,gamepad,lists,FlxGamepadPointerValueList)
HX_DECLARE_CLASS4(flixel,input,gamepad,mappings,FlxGamepadMapping)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
namespace flixel{
namespace input{
namespace gamepad{


class HXCPP_CLASS_ATTRIBUTES  FlxGamepad_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxGamepad_obj OBJ_;
		FlxGamepad_obj();
		Void __construct(int ID,::flixel::input::gamepad::FlxGamepadManager Manager,::flixel::input::gamepad::FlxGamepadModel Model,::flixel::input::gamepad::FlxGamepadAttachment Attachment);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.input.gamepad.FlxGamepad")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxGamepad_obj > __new(int ID,::flixel::input::gamepad::FlxGamepadManager Manager,::flixel::input::gamepad::FlxGamepadModel Model,::flixel::input::gamepad::FlxGamepadAttachment Attachment);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxGamepad_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::flixel::util::IFlxDestroyable_obj *();
		::String __ToString() const { return HX_HCSTRING("FlxGamepad","\x6f","\x9a","\xb1","\xb8"); }

		int id;
		::flixel::input::gamepad::FlxGamepadModel model;
		::flixel::input::gamepad::FlxGamepadModel detectedModel;
		::flixel::input::gamepad::mappings::FlxGamepadMapping mapping;
		bool connected;
		::flixel::input::gamepad::FlxGamepadAttachment attachment;
		::flixel::input::gamepad::FlxGamepadDeadZoneMode deadZoneMode;
		::flixel::input::gamepad::lists::FlxGamepadButtonList pressed;
		::flixel::input::gamepad::lists::FlxGamepadButtonList justPressed;
		::flixel::input::gamepad::lists::FlxGamepadButtonList justReleased;
		::flixel::input::gamepad::lists::FlxGamepadAnalogList analog;
		::flixel::input::gamepad::lists::FlxGamepadMotionValueList motion;
		::flixel::input::gamepad::lists::FlxGamepadPointerValueList pointer;
		::flixel::math::FlxPoint hat;
		::flixel::math::FlxPoint ball;
		Array< Float > axis;
		bool axisActive;
		::flixel::input::gamepad::FlxGamepadManager manager;
		Float _deadZone;
		Array< ::Dynamic > buttons;
		virtual ::flixel::input::gamepad::FlxGamepadButton getButton( int RawID);
		Dynamic getButton_dyn();

		virtual Float applyAxisFlip( Float axisValue,int axisID);
		Dynamic applyAxisFlip_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual bool checkStatus( int ID,int Status);
		Dynamic checkStatus_dyn();

		virtual bool checkStatusRaw( int RawID,int Status);
		Dynamic checkStatusRaw_dyn();

		virtual bool anyPressed( Array< int > IDArray);
		Dynamic anyPressed_dyn();

		virtual bool anyPressedRaw( Array< int > RawIDArray);
		Dynamic anyPressedRaw_dyn();

		virtual bool anyJustPressed( Array< int > IDArray);
		Dynamic anyJustPressed_dyn();

		virtual bool anyJustPressedRaw( Array< int > RawIDArray);
		Dynamic anyJustPressedRaw_dyn();

		virtual bool anyJustReleased( Array< int > IDArray);
		Dynamic anyJustReleased_dyn();

		virtual bool anyJustReleasedRaw( Array< int > RawIDArray);
		Dynamic anyJustReleasedRaw_dyn();

		virtual int firstPressedID( );
		Dynamic firstPressedID_dyn();

		virtual int firstPressedRawID( );
		Dynamic firstPressedRawID_dyn();

		virtual int firstJustPressedID( );
		Dynamic firstJustPressedID_dyn();

		virtual int firstJustPressedRawID( );
		Dynamic firstJustPressedRawID_dyn();

		virtual int firstJustReleasedID( );
		Dynamic firstJustReleasedID_dyn();

		virtual int firstJustReleasedRawID( );
		Dynamic firstJustReleasedRawID_dyn();

		virtual Float getAxis( int AxisButtonID);
		Dynamic getAxis_dyn();

		virtual Float getAxisRaw( int RawAxisID);
		Dynamic getAxisRaw_dyn();

		virtual bool isAxisForAnalogStick( int AxisIndex);
		Dynamic isAxisForAnalogStick_dyn();

		virtual ::flixel::input::gamepad::FlxGamepadAnalogStick getAnalogStickByAxis( int AxisIndex);
		Dynamic getAnalogStickByAxis_dyn();

		virtual Float getXAxis( int AxesButtonID);
		Dynamic getXAxis_dyn();

		virtual Float getXAxisRaw( ::flixel::input::gamepad::FlxGamepadAnalogStick Stick);
		Dynamic getXAxisRaw_dyn();

		virtual Float getYAxis( int AxesButtonID);
		Dynamic getYAxis_dyn();

		virtual Float getYAxisRaw( ::flixel::input::gamepad::FlxGamepadAnalogStick Stick);
		Dynamic getYAxisRaw_dyn();

		virtual bool anyButton( hx::Null< int >  state);
		Dynamic anyButton_dyn();

		virtual bool anyInput( );
		Dynamic anyInput_dyn();

		virtual Float getAxisValue( int AxisID);
		Dynamic getAxisValue_dyn();

		virtual Float getAnalogXAxisValue( ::flixel::input::gamepad::FlxGamepadAnalogStick stick);
		Dynamic getAnalogXAxisValue_dyn();

		virtual Float getAnalogYAxisValue( ::flixel::input::gamepad::FlxGamepadAnalogStick stick);
		Dynamic getAnalogYAxisValue_dyn();

		virtual Float getAnalogAxisValueCircular( ::flixel::input::gamepad::FlxGamepadAnalogStick stick,int axisID);
		Dynamic getAnalogAxisValueCircular_dyn();

		virtual Float getAnalogAxisValueIndependant( int axisID);
		Dynamic getAnalogAxisValueIndependant_dyn();

		virtual ::flixel::input::gamepad::mappings::FlxGamepadMapping createMappingForModel( ::flixel::input::gamepad::FlxGamepadModel model);
		Dynamic createMappingForModel_dyn();

		virtual ::flixel::input::gamepad::FlxGamepadModel set_model( ::flixel::input::gamepad::FlxGamepadModel Model);
		Dynamic set_model_dyn();

		virtual ::flixel::input::gamepad::FlxGamepadAttachment set_attachment( ::flixel::input::gamepad::FlxGamepadAttachment Attachment);
		Dynamic set_attachment_dyn();

		virtual Float get_deadZone( );
		Dynamic get_deadZone_dyn();

		virtual Float set_deadZone( Float deadZone);
		Dynamic set_deadZone_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

};

} // end namespace flixel
} // end namespace input
} // end namespace gamepad

#endif /* INCLUDED_flixel_input_gamepad_FlxGamepad */ 
