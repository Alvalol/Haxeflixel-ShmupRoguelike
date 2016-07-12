#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#define INCLUDED_flixel_input_FlxBaseKeyList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,input,FlxBaseKeyList)
HX_DECLARE_CLASS2(flixel,input,FlxKeyManager)
HX_DECLARE_CLASS2(flixel,input,IFlxInputManager)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
namespace flixel{
namespace input{


class HXCPP_CLASS_ATTRIBUTES  FlxBaseKeyList_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxBaseKeyList_obj OBJ_;
		FlxBaseKeyList_obj();
		Void __construct(int status,::flixel::input::FlxKeyManager keyManager);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.input.FlxBaseKeyList")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxBaseKeyList_obj > __new(int status,::flixel::input::FlxKeyManager keyManager);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxBaseKeyList_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FlxBaseKeyList","\x5a","\x1a","\x1b","\x52"); }

		int status;
		::flixel::input::FlxKeyManager keyManager;
		virtual bool check( int keyCode);
		Dynamic check_dyn();

		virtual bool get_ANY( );
		Dynamic get_ANY_dyn();

};

} // end namespace flixel
} // end namespace input

#endif /* INCLUDED_flixel_input_FlxBaseKeyList */ 
