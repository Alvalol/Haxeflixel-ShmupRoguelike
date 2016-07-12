#ifndef INCLUDED_states_GameOverSubState
#define INCLUDED_states_GameOverSubState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,input,IFlxInput)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,ui,FlxButton)
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton_flixel_text_FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(states,GameOverSubState)
namespace states{


class HXCPP_CLASS_ATTRIBUTES  GameOverSubState_obj : public ::flixel::FlxState_obj{
	public:
		typedef ::flixel::FlxState_obj super;
		typedef GameOverSubState_obj OBJ_;
		GameOverSubState_obj();
		Void __construct(Dynamic MaxSize);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="states.GameOverSubState")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GameOverSubState_obj > __new(Dynamic MaxSize);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GameOverSubState_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("GameOverSubState","\x17","\xcd","\xc7","\x6a"); }

		::flixel::text::FlxText _text;
		::flixel::text::FlxText _textScore;
		::flixel::ui::FlxButton _restartButton;
		virtual Void create( );

		virtual Void update( Float elapsed);

		virtual Void onClick( );
		Dynamic onClick_dyn();

};

} // end namespace states

#endif /* INCLUDED_states_GameOverSubState */ 
