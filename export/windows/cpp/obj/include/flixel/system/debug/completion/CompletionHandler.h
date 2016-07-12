#ifndef INCLUDED_flixel_system_debug_completion_CompletionHandler
#define INCLUDED_flixel_system_debug_completion_CompletionHandler

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(flixel,_system,debug,completion,CompletionHandler)
HX_DECLARE_CLASS4(flixel,_system,debug,completion,CompletionList)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,Sprite)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,KeyboardEvent)
HX_DECLARE_CLASS3(openfl,_legacy,text,TextField)
namespace flixel{
namespace _system{
namespace debug{
namespace completion{


class HXCPP_CLASS_ATTRIBUTES  CompletionHandler_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CompletionHandler_obj OBJ_;
		CompletionHandler_obj();
		Void __construct(::flixel::_system::debug::completion::CompletionList completionList,::openfl::_legacy::text::TextField input);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.completion.CompletionHandler")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CompletionHandler_obj > __new(::flixel::_system::debug::completion::CompletionList completionList,::openfl::_legacy::text::TextField input);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CompletionHandler_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("CompletionHandler","\xee","\xa7","\x38","\xfd"); }

		::flixel::_system::debug::completion::CompletionList completionList;
		::openfl::_legacy::text::TextField input;
		bool watchingSelection;
		virtual Void onKeyUp( ::openfl::_legacy::events::KeyboardEvent e);
		Dynamic onKeyUp_dyn();

		virtual Void invokeCompletion( ::String path,bool isPeriod);
		Dynamic invokeCompletion_dyn();

		virtual Array< ::String > getGlobals( );
		Dynamic getGlobals_dyn();

		virtual Float getCharXPosition( );
		Dynamic getCharXPosition_dyn();

		virtual ::String getCompletedText( ::String text,::String selectedItem);
		Dynamic getCompletedText_dyn();

		virtual Void completed( ::String selectedItem);
		Dynamic completed_dyn();

		virtual Void selectionChanged( ::String selectedItem);
		Dynamic selectionChanged_dyn();

		virtual Void completionClosed( );
		Dynamic completionClosed_dyn();

		virtual ::String getPathBeforeDot( ::String text);
		Dynamic getPathBeforeDot_dyn();

		virtual ::String getWordAfterDot( ::String text);
		Dynamic getWordAfterDot_dyn();

		virtual ::String getLastWord( ::String text);
		Dynamic getLastWord_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace completion

#endif /* INCLUDED_flixel_system_debug_completion_CompletionHandler */ 
