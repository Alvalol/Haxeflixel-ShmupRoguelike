#ifndef INCLUDED_flixel_system_debug_watch_WatchEntry
#define INCLUDED_flixel_system_debug_watch_WatchEntry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS4(flixel,_system,debug,watch,WatchEntry)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,KeyboardEvent)
HX_DECLARE_CLASS3(openfl,_legacy,text,TextField)
HX_DECLARE_CLASS3(openfl,_legacy,text,TextFormat)
namespace flixel{
namespace _system{
namespace debug{
namespace watch{


class HXCPP_CLASS_ATTRIBUTES  WatchEntry_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef WatchEntry_obj OBJ_;
		WatchEntry_obj();
		Void __construct(Float y,Float nameWidth,Float valueWidth,Dynamic object,::String field,::String custom);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.watch.WatchEntry")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< WatchEntry_obj > __new(Float y,Float nameWidth,Float valueWidth,Dynamic object,::String field,::String custom);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~WatchEntry_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::flixel::util::IFlxDestroyable_obj *();
		::String __ToString() const { return HX_HCSTRING("WatchEntry","\xc3","\x97","\x41","\xdf"); }

		Dynamic object;
		::String field;
		::String custom;
		::openfl::_legacy::text::TextField nameDisplay;
		::openfl::_legacy::text::TextField valueDisplay;
		bool editing;
		Dynamic oldValue;
		::openfl::_legacy::text::TextFormat _whiteText;
		::openfl::_legacy::text::TextFormat _blackText;
		bool _isQuickWatch;
		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void setY( Float y);
		Dynamic setY_dyn();

		virtual Void updateWidth( Float nameWidth,Float valueWidth);
		Dynamic updateWidth_dyn();

		virtual Void updateValue( );
		Dynamic updateValue_dyn();

		virtual Void onMouseUp( Dynamic _);
		Dynamic onMouseUp_dyn();

		virtual Void onKeyUp( ::openfl::_legacy::events::KeyboardEvent e);
		Dynamic onKeyUp_dyn();

		virtual Void onFocusLost( Dynamic _);
		Dynamic onFocusLost_dyn();

		virtual Void cancel( );
		Dynamic cancel_dyn();

		virtual Void submit( );
		Dynamic submit_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual Void doneEditing( );
		Dynamic doneEditing_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace watch

#endif /* INCLUDED_flixel_system_debug_watch_WatchEntry */ 
