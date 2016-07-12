#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadManager
#define INCLUDED_flixel_input_gamepad_FlxGamepadManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
HX_DECLARE_CLASS2(flixel,input,IFlxInputManager)
HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepad)
HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadAnalogStick)
HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadManager)
HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadModel)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,JoystickEvent)
namespace flixel{
namespace input{
namespace gamepad{


class HXCPP_CLASS_ATTRIBUTES  FlxGamepadManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxGamepadManager_obj OBJ_;
		FlxGamepadManager_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.input.gamepad.FlxGamepadManager")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxGamepadManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxGamepadManager_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::flixel::util::IFlxDestroyable_obj *();
		operator ::flixel::input::IFlxInputManager_obj *();
		::String __ToString() const { return HX_HCSTRING("FlxGamepadManager","\xbe","\xdb","\x07","\x36"); }

		::flixel::input::gamepad::FlxGamepad firstActive;
		::flixel::input::gamepad::FlxGamepad lastActive;
		int numActiveGamepads;
		Dynamic globalDeadZone;
		Array< ::Dynamic > _gamepads;
		Array< ::Dynamic > _activeGamepads;
		virtual ::flixel::input::gamepad::FlxGamepad getByID( int GamepadID);
		Dynamic getByID_dyn();

		virtual Void removeByID( int GamepadID);
		Dynamic removeByID_dyn();

		virtual ::flixel::input::gamepad::FlxGamepad createByID( int GamepadID,::flixel::input::gamepad::FlxGamepadModel Model);
		Dynamic createByID_dyn();

		virtual Array< int > getActiveGamepadIDs( Array< int > IDsArray);
		Dynamic getActiveGamepadIDs_dyn();

		virtual Array< ::Dynamic > getActiveGamepads( Array< ::Dynamic > GamepadArray);
		Dynamic getActiveGamepads_dyn();

		virtual int getFirstActiveGamepadID( );
		Dynamic getFirstActiveGamepadID_dyn();

		virtual ::flixel::input::gamepad::FlxGamepad getFirstActiveGamepad( );
		Dynamic getFirstActiveGamepad_dyn();

		virtual bool anyButton( hx::Null< int >  state);
		Dynamic anyButton_dyn();

		virtual bool anyInput( );
		Dynamic anyInput_dyn();

		virtual bool anyPressed( int buttonID);
		Dynamic anyPressed_dyn();

		virtual bool anyJustPressed( int buttonID);
		Dynamic anyJustPressed_dyn();

		virtual bool anyJustReleased( int buttonID);
		Dynamic anyJustReleased_dyn();

		virtual bool anyHasState( int buttonID,int state);
		Dynamic anyHasState_dyn();

		virtual Float anyMovedXAxis( ::flixel::input::gamepad::FlxGamepadAnalogStick RawAxisID);
		Dynamic anyMovedXAxis_dyn();

		virtual Float anyMovedYAxis( ::flixel::input::gamepad::FlxGamepadAnalogStick RawAxisID);
		Dynamic anyMovedYAxis_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

		virtual ::flixel::input::gamepad::FlxGamepadModel getModelFromJoystick( Float id);
		Dynamic getModelFromJoystick_dyn();

		virtual Void handleButtonDownEvent( ::openfl::_legacy::events::JoystickEvent event);
		Dynamic handleButtonDownEvent_dyn();

		virtual Void handleButtonDown( int device,int id);
		Dynamic handleButtonDown_dyn();

		virtual Void handleButtonUpEvent( ::openfl::_legacy::events::JoystickEvent event);
		Dynamic handleButtonUpEvent_dyn();

		virtual Void handleButtonUp( int device,int id);
		Dynamic handleButtonUp_dyn();

		virtual Void handleAxisMove( ::openfl::_legacy::events::JoystickEvent event);
		Dynamic handleAxisMove_dyn();

		virtual Void copyToPointWithDeadzone( ::flixel::input::gamepad::FlxGamepad gamepad,::flixel::math::FlxPoint point,::openfl::_legacy::events::JoystickEvent event);
		Dynamic copyToPointWithDeadzone_dyn();

		virtual Void handleBallMove( ::openfl::_legacy::events::JoystickEvent event);
		Dynamic handleBallMove_dyn();

		virtual Void handleHatMove( ::openfl::_legacy::events::JoystickEvent event);
		Dynamic handleHatMove_dyn();

		virtual Void checkDpadAxisChange( int device,Float oldValue,Float newValue,int negativeID,int positiveID);
		Dynamic checkDpadAxisChange_dyn();

		virtual Void handleDeviceAdded( ::openfl::_legacy::events::JoystickEvent event);
		Dynamic handleDeviceAdded_dyn();

		virtual Void handleDeviceRemoved( ::openfl::_legacy::events::JoystickEvent event);
		Dynamic handleDeviceRemoved_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void onFocus( );
		Dynamic onFocus_dyn();

		virtual Void onFocusLost( );
		Dynamic onFocusLost_dyn();

		virtual int get_numActiveGamepads( );
		Dynamic get_numActiveGamepads_dyn();

};

} // end namespace flixel
} // end namespace input
} // end namespace gamepad

#endif /* INCLUDED_flixel_input_gamepad_FlxGamepadManager */ 
