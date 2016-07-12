#ifndef INCLUDED_flixel_ui_FlxTypedButton
#define INCLUDED_flixel_ui_FlxTypedButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,graphics,atlas,FlxAtlas)
HX_DECLARE_CLASS2(flixel,input,FlxInput)
HX_DECLARE_CLASS2(flixel,input,FlxPointer)
HX_DECLARE_CLASS2(flixel,input,IFlxInput)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton)
HX_DECLARE_CLASS3(flixel,ui,_FlxButton,FlxButtonEvent)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
namespace flixel{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  FlxTypedButton_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef FlxTypedButton_obj OBJ_;
		FlxTypedButton_obj();
		Void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic OnClick);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.ui.FlxTypedButton")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxTypedButton_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic OnClick);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxTypedButton_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::flixel::input::IFlxInput_obj *();
		::String __ToString() const { return HX_HCSTRING("FlxTypedButton","\xca","\x2a","\xdf","\xcd"); }

		Dynamic label;
		Array< ::Dynamic > labelOffsets;
		Array< Float > labelAlphas;
		Array< ::String > statusAnimations;
		bool allowSwiping;
		Array< int > mouseButtons;
		Float maxInputMovement;
		int status;
		::flixel::ui::_FlxButton::FlxButtonEvent onUp;
		::flixel::ui::_FlxButton::FlxButtonEvent onDown;
		::flixel::ui::_FlxButton::FlxButtonEvent onOver;
		::flixel::ui::_FlxButton::FlxButtonEvent onOut;
		::flixel::FlxSprite _spriteLabel;
		::flixel::input::FlxInput input;
		::flixel::input::IFlxInput currentInput;
		int lastStatus;
		virtual Void graphicLoaded( );

		virtual Void loadDefaultGraphic( );
		Dynamic loadDefaultGraphic_dyn();

		virtual Void setupAnimation( ::String animationName,int frameIndex);
		Dynamic setupAnimation_dyn();

		virtual Void destroy( );

		virtual Void update( Float elapsed);

		virtual Void updateStatusAnimation( );
		Dynamic updateStatusAnimation_dyn();

		virtual Void draw( );

		virtual bool stampOnAtlas( ::flixel::graphics::atlas::FlxAtlas atlas);
		Dynamic stampOnAtlas_dyn();

		virtual Void updateButton( );
		Dynamic updateButton_dyn();

		virtual bool checkMouseOverlap( );
		Dynamic checkMouseOverlap_dyn();

		virtual bool checkTouchOverlap( );
		Dynamic checkTouchOverlap_dyn();

		virtual bool checkInput( ::flixel::input::FlxPointer pointer,::flixel::input::IFlxInput input,::flixel::math::FlxPoint justPressedPosition,::flixel::FlxCamera camera);
		Dynamic checkInput_dyn();

		virtual Void updateStatus( ::flixel::input::IFlxInput input);
		Dynamic updateStatus_dyn();

		virtual Void updateLabelPosition( );
		Dynamic updateLabelPosition_dyn();

		virtual Void updateLabelAlpha( );
		Dynamic updateLabelAlpha_dyn();

		virtual Void onUpEventListener( Dynamic _);
		Dynamic onUpEventListener_dyn();

		virtual Void onUpHandler( );
		Dynamic onUpHandler_dyn();

		virtual Void onDownHandler( );
		Dynamic onDownHandler_dyn();

		virtual Void onOverHandler( );
		Dynamic onOverHandler_dyn();

		virtual Void onOutHandler( );
		Dynamic onOutHandler_dyn();

		virtual Dynamic set_label( Dynamic Value);
		Dynamic set_label_dyn();

		virtual int set_status( int Value);
		Dynamic set_status_dyn();

		virtual Float set_alpha( Float Value);

		virtual Float set_x( Float Value);

		virtual Float set_y( Float Value);

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
} // end namespace ui

#endif /* INCLUDED_flixel_ui_FlxTypedButton */ 
