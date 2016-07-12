#ifndef INCLUDED_DefaultAssetLibrary
#define INCLUDED_DefaultAssetLibrary

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_AssetLibrary
#include <openfl/_legacy/AssetLibrary.h>
#endif
HX_DECLARE_CLASS0(DefaultAssetLibrary)
HX_DECLARE_CLASS2(cpp,vm,Deque)
HX_DECLARE_CLASS2(cpp,vm,Thread)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS1(haxe,Timer)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(openfl,_legacy,AssetLibrary)
HX_DECLARE_CLASS2(openfl,_legacy,AssetType)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,media,Sound)
HX_DECLARE_CLASS3(openfl,_legacy,text,Font)
HX_DECLARE_CLASS3(openfl,_legacy,utils,ByteArray)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IDataInput)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IDataOutput)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IMemoryRange)


class HXCPP_CLASS_ATTRIBUTES  DefaultAssetLibrary_obj : public ::openfl::_legacy::AssetLibrary_obj{
	public:
		typedef ::openfl::_legacy::AssetLibrary_obj super;
		typedef DefaultAssetLibrary_obj OBJ_;
		DefaultAssetLibrary_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="DefaultAssetLibrary")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DefaultAssetLibrary_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DefaultAssetLibrary_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("DefaultAssetLibrary","\x2c","\x3d","\x78","\x3a"); }

		static void __boot();
		static int loaded;
		static int loading;
		static ::cpp::vm::Deque workerIncomingQueue;
		static ::cpp::vm::Deque workerResult;
		static ::cpp::vm::Thread workerThread;
		static Void __doWork( );
		static Dynamic __doWork_dyn();

		static Void __poll( );
		static Dynamic __poll_dyn();

		::haxe::ds::StringMap className;
		::haxe::ds::StringMap path;
		::haxe::ds::StringMap type;
		Float lastModified;
		::haxe::Timer timer;
		virtual bool exists( ::String id,::openfl::_legacy::AssetType type);

		virtual ::openfl::_legacy::display::BitmapData getBitmapData( ::String id);

		virtual ::openfl::_legacy::utils::ByteArray getBytes( ::String id);

		virtual ::openfl::_legacy::text::Font getFont( ::String id);

		virtual ::openfl::_legacy::media::Sound getMusic( ::String id);

		virtual ::String getPath( ::String id);

		virtual ::openfl::_legacy::media::Sound getSound( ::String id);

		virtual ::String getText( ::String id);

		virtual bool isLocal( ::String id,::openfl::_legacy::AssetType type);

		virtual Array< ::String > list( ::openfl::_legacy::AssetType type);

		virtual Void loadBitmapData( ::String id,Dynamic handler);

		virtual Void loadBytes( ::String id,Dynamic handler);

		virtual Void loadFont( ::String id,Dynamic handler);

		virtual Void loadManifest( );
		Dynamic loadManifest_dyn();

		virtual Void loadMusic( ::String id,Dynamic handler);

		virtual Void loadSound( ::String id,Dynamic handler);

		virtual Void loadText( ::String id,Dynamic handler);

		virtual Void __load( Dynamic getMethod,::String id,Dynamic handler);
		Dynamic __load_dyn();

};


#endif /* INCLUDED_DefaultAssetLibrary */ 
