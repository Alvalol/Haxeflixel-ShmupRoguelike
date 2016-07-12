#ifndef INCLUDED_flixel_input_FlxKeyManager
#define INCLUDED_flixel_input_FlxKeyManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
HX_DECLARE_CLASS2(flixel,input,FlxInput)
HX_DECLARE_CLASS2(flixel,input,FlxKeyManager)
HX_DECLARE_CLASS2(flixel,input,IFlxInput)
HX_DECLARE_CLASS2(flixel,input,IFlxInputManager)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,KeyboardEvent)
namespace flixel{
namespace input{


class HXCPP_CLASS_ATTRIBUTES  FlxKeyManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxKeyManager_obj OBJ_;
		FlxKeyManager_obj();
		Void __construct(::hx::Class keyListClass);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.input.FlxKeyManager")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxKeyManager_obj > __new(::hx::Class keyListClass);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxKeyManager_obj();

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
		::String __ToString() const { return HX_HCSTRING("FlxKeyManager","\x80","\x0d","\xa1","\xb0"); }

		bool enabled;
		cpp::ArrayBase preventDefaultKeys;
		Dynamic pressed;
		Dynamic justPressed;
		Dynamic justReleased;
		Array< ::Dynamic > _keyListArray;
		::haxe::ds::IntMap _keyListMap;
		virtual bool anyPressed( cpp::ArrayBase KeyArray);
		Dynamic anyPressed_dyn();

		virtual bool anyJustPressed( cpp::ArrayBase KeyArray);
		Dynamic anyJustPressed_dyn();

		virtual bool anyJustReleased( cpp::ArrayBase KeyArray);
		Dynamic anyJustReleased_dyn();

		virtual int firstPressed( );
		Dynamic firstPressed_dyn();

		virtual int firstJustPressed( );
		Dynamic firstJustPressed_dyn();

		virtual int firstJustReleased( );
		Dynamic firstJustReleased_dyn();

		virtual bool checkStatus( Dynamic KeyCode,int Status);
		Dynamic checkStatus_dyn();

		virtual Array< ::Dynamic > getIsDown( );
		Dynamic getIsDown_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual bool checkKeyArrayState( cpp::ArrayBase KeyArray,int State);
		Dynamic checkKeyArrayState_dyn();

		virtual Void onKeyUp( ::openfl::_legacy::events::KeyboardEvent event);
		Dynamic onKeyUp_dyn();

		virtual Void onKeyDown( ::openfl::_legacy::events::KeyboardEvent event);
		Dynamic onKeyDown_dyn();

		virtual Void handlePreventDefaultKeys( int keyCode,::openfl::_legacy::events::KeyboardEvent event);
		Dynamic handlePreventDefaultKeys_dyn();

		virtual bool inKeyArray( cpp::ArrayBase KeyArray,Dynamic Key);
		Dynamic inKeyArray_dyn();

		virtual int resolveKeyCode( ::openfl::_legacy::events::KeyboardEvent e);
		Dynamic resolveKeyCode_dyn();

		virtual Void updateKeyStates( int KeyCode,bool Down);
		Dynamic updateKeyStates_dyn();

		virtual Void onFocus( );
		Dynamic onFocus_dyn();

		virtual Void onFocusLost( );
		Dynamic onFocusLost_dyn();

		virtual ::flixel::input::FlxInput getKey( int KeyCode);
		Dynamic getKey_dyn();

};

} // end namespace flixel
} // end namespace input

#endif /* INCLUDED_flixel_input_FlxKeyManager */ 
