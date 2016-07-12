#ifndef INCLUDED_flixel_system_debug_completion_CompletionList
#define INCLUDED_flixel_system_debug_completion_CompletionList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
HX_DECLARE_CLASS4(flixel,_system,debug,completion,CompletionList)
HX_DECLARE_CLASS4(flixel,_system,debug,completion,CompletionListEntry)
HX_DECLARE_CLASS4(flixel,_system,debug,completion,CompletionListScrollBar)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,Sprite)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,KeyboardEvent)
namespace flixel{
namespace _system{
namespace debug{
namespace completion{


class HXCPP_CLASS_ATTRIBUTES  CompletionList_obj : public ::openfl::_legacy::display::Sprite_obj{
	public:
		typedef ::openfl::_legacy::display::Sprite_obj super;
		typedef CompletionList_obj OBJ_;
		CompletionList_obj();
		Void __construct(int capacity);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.completion.CompletionList")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CompletionList_obj > __new(int capacity);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CompletionList_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("CompletionList","\xba","\x65","\xb3","\xcd"); }

		Dynamic completed;
		Dynamic &completed_dyn() { return completed;}
		Dynamic selectionChanged;
		Dynamic &selectionChanged_dyn() { return selectionChanged;}
		Dynamic closed;
		Dynamic &closed_dyn() { return closed;}
		::String filter;
		Array< ::String > items;
		Array< ::Dynamic > entries;
		Array< ::String > originalItems;
		int selectedIndex;
		int lowerVisibleIndex;
		int upperVisibleIndex;
		::flixel::_system::debug::completion::CompletionListScrollBar scrollBar;
		int actualHeight;
		virtual Void show( Float x,Array< ::String > items);
		Dynamic show_dyn();

		virtual Void setY( Float y);
		Dynamic setY_dyn();

		virtual Void close( );
		Dynamic close_dyn();

		virtual Void createPopupEntries( int amount);
		Dynamic createPopupEntries_dyn();

		virtual Void createScrollBar( );
		Dynamic createScrollBar_dyn();

		virtual Void onKeyDown( ::openfl::_legacy::events::KeyboardEvent e);
		Dynamic onKeyDown_dyn();

		virtual Void updateIndices( int modifier);
		Dynamic updateIndices_dyn();

		virtual int bound( int index);
		Dynamic bound_dyn();

		virtual Void updateEntries( );
		Dynamic updateEntries_dyn();

		virtual Void updateLabels( );
		Dynamic updateLabels_dyn();

		virtual Void updateSelectedItem( );
		Dynamic updateSelectedItem_dyn();

		virtual Void setItems( Array< ::String > items);
		Dynamic setItems_dyn();

		virtual Array< ::String > filterItems( ::String filter);
		Dynamic filterItems_dyn();

		virtual Array< ::String > sortItems( ::String filter,Array< ::String > items);
		Dynamic sortItems_dyn();

		virtual int startsWithExt( ::String s,::String start);
		Dynamic startsWithExt_dyn();

		virtual ::String set_filter( ::String filter);
		Dynamic set_filter_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace completion

#endif /* INCLUDED_flixel_system_debug_completion_CompletionList */ 
