#ifndef INCLUDED_flixel_util_FlxSave
#define INCLUDED_flixel_util_FlxSave

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS2(flixel,util,FlxSave)
HX_DECLARE_CLASS2(flixel,util,FlxSaveStatus)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,net,SharedObject)
namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  FlxSave_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxSave_obj OBJ_;
		FlxSave_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.util.FlxSave")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxSave_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxSave_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::flixel::util::IFlxDestroyable_obj *();
		::String __ToString() const { return HX_HCSTRING("FlxSave","\xaf","\xc4","\xa5","\xdc"); }

		Dynamic data;
		::String name;
		::openfl::_legacy::net::SharedObject _sharedObject;
		Dynamic _onComplete;
		Dynamic &_onComplete_dyn() { return _onComplete;}
		bool _closeRequested;
		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual bool bind( ::String Name);
		Dynamic bind_dyn();

		virtual bool close( hx::Null< int >  MinFileSize,Dynamic OnComplete);
		Dynamic close_dyn();

		virtual bool flush( hx::Null< int >  MinFileSize,Dynamic OnComplete);
		Dynamic flush_dyn();

		virtual bool erase( );
		Dynamic erase_dyn();

		virtual bool onDone( ::flixel::util::FlxSaveStatus Result);
		Dynamic onDone_dyn();

		virtual bool checkBinding( );
		Dynamic checkBinding_dyn();

};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxSave */ 
